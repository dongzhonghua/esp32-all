let scene, camera, rendered, cube;

function parentWidth(elem) {
  return elem.parentElement.clientWidth;
}

function parentHeight(elem) {
  return elem.parentElement.clientHeight;
}

function init3D() {

  scene = new THREE.Scene();
  scene.background = new THREE.Color(0xffffff);

  camera = new THREE.PerspectiveCamera(75, parentWidth(document.getElementById("3Dcube")) / parentHeight(document.getElementById("3Dcube")), 0.1, 1000);

  renderer = new THREE.WebGLRenderer({ antialias: true });
  renderer.setSize(parentWidth(document.getElementById("3Dcube")), parentHeight(document.getElementById("3Dcube")));

  document.getElementById('3Dcube').appendChild(renderer.domElement);

  const geometry = new THREE.BoxGeometry(5, 1, 4);

  var cubeMaterials = [
    new THREE.MeshBasicMaterial({ color: 0x03045e }),
    new THREE.MeshBasicMaterial({ color: 0x023e8a }),
    new THREE.MeshBasicMaterial({ color: 0x0077b6 }),
    new THREE.MeshBasicMaterial({ color: 0x03045e }),
    new THREE.MeshBasicMaterial({ color: 0x023e8a }),
    new THREE.MeshBasicMaterial({ color: 0x0077b6 }),
  ];

  const material = new THREE.MeshFaceMaterial(cubeMaterials);

  cube = new THREE.Mesh(geometry, material);
  scene.add(cube);
  camera.position.z = 5;
  renderer.render(scene, camera);
}

function onWindowResize() {
  camera.aspect = parentWidth(document.getElementById("3Dcube")) / parentHeight(document.getElementById("3Dcube"));
  camera.updateProjectionMatrix();
  renderer.setSize(parentWidth(document.getElementById("3Dcube")), parentHeight(document.getElementById("3Dcube")));

}

window.addEventListener('resize', onWindowResize, false);

init3D();
var dataLabels = [0];
var dataPV = [0];
var dataUV = [0];

var config = {
  type: 'line',
  data: {
    labels: dataLabels,
    datasets: [
      {
        label: 'PV',
        data: dataPV,
        backgroundColor: 'rgb(255, 99, 132)',
        borderColor: 'rgb(255, 99, 132)',
        fill: false,
      },
      {
        label: 'UV',
        data: dataUV,
        backgroundColor: 'rgb(75, 192, 192)',
        borderColor: 'rgb(75, 192, 192)',
        fill: false,
      }
    ]
  },
  options: {
    responsive: true,
    title: {
      display: true,
      text: 'PV/UV 实时统计'
    },
  }
};

var ctx = document.getElementById('chart').getContext('2d');
var chart = new Chart(ctx, config);

setInterval(function () {

}, 1000);
if (!!window.EventSource) {
  var source = new EventSource('http://192.168.31.224/events');

  source.addEventListener('open', function (e) {
    console.log("Events Connected");
  }, false);

  source.addEventListener('error', function (e) {
    if (e.target.readyState != EventSource.OPEN) {
      console.log("Events Disconnected");
    }
  }, false);

  source.addEventListener('gyro_readings', function (e) {
    console.log("gyro_readings", e.data);
    var obj = JSON.parse(e.data);
    document.getElementById("gyroX").innerHTML = obj.gyroX;
    document.getElementById("gyroY").innerHTML = obj.gyroY;
    document.getElementById("gyroZ").innerHTML = obj.gyroZ;

    document.getElementById("angleX").innerHTML = obj.angleX;
    document.getElementById("angleY").innerHTML = obj.angleY;
    document.getElementById("angleZ").innerHTML = obj.angleZ;

    cube.rotation.x = obj.gyroY;

    cube.rotation.z = obj.gyroX;
    cube.rotation.y = obj.gyroZ;
    renderer.render(scene, camera);


    if (config.data.datasets.length > 0) {

      var last = parseInt(dataLabels[dataLabels.length - 1]);
      var label = last + 1;

      dataLabels.push(label);
      dataPV.push(obj.angleX);
      dataUV.push(obj.angleY);
      if (config.data.datasets.length > 1000) {
        dataLabels.shift();
        dataPV.shift();
        dataUV.shift();
      }
      chart.update();
    }


  }, false);

  source.addEventListener('temperature_reading', function (e) {
    console.log("temperature_reading", e.data);
    document.getElementById("temp").innerHTML = e.data;
  }, false);

  source.addEventListener('accelerometer_readings', function (e) {
    console.log("accelerometer_readings", e.data);
    var obj = JSON.parse(e.data);
    document.getElementById("accX").innerHTML = obj.accX;
    document.getElementById("accY").innerHTML = obj.accY;
    document.getElementById("accZ").innerHTML = obj.accZ;
  }, false);
}

function resetPosition(element) {
  var xhr = new XMLHttpRequest();
  xhr.open("GET", "192.168.31.224/" + element.id, true);
  console.log(element.id);
  xhr.send();
}