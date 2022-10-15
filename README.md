## WIFI

## OTA

## SSE

严格地说，[HTTP 协议](https://www.ruanyifeng.com/blog/2016/08/http.html)无法做到服务器主动推送信息。但是，有一种变通方法，就是服务器向客户端声明，接下来要发送的是流信息（streaming）。

也就是说，发送的不是一次性的数据包，而是一个数据流，会连续不断地发送过来。这时，客户端不会关闭连接，会一直等着服务器发过来的新的数据流，视频播放就是这样的例子。本质上，这种通信就是以流信息的方式，完成一次用时很长的下载。

SSE 就是利用这种机制，使用流信息向浏览器推送信息。它基于 HTTP 协议，目前除了 IE/Edge，其他浏览器都支持。

SSE 与 WebSocket 作用相似，都是建立浏览器与服务器之间的通信渠道，然后服务器向浏览器推送信息。

总体来说，WebSocket 更强大和灵活。因为它是全双工通道，可以双向通信；SSE 是单向通道，只能服务器向浏览器发送，因为流信息本质上就是下载。如果浏览器向服务器发送信息，就变成了另一次 HTTP 请求。

> https://www.ruanyifeng.com/blog/2017/05/server-sent_events.html

## MPU6050

pitch是俯仰角，是“点头“，（在固定翼飞机中则由升降舵[舵机](https://so.csdn.net/so/search?q=%E8%88%B5%E6%9C%BA&spm=1001.2101.3001.7020)控制）

yaw是偏航角，是‘摇头’，（在固定翼飞机中则由方向舵舵机控制）

roll是旋转角，是“翻滚”，（在固定翼飞机中则由副翼舵机控制）

https://blog.csdn.net/sinat_27456831/article/details/50042915

https://blog.csdn.net/m0_48012049/article/details/113183900

## SSD1306

图片转成bitmap，原理就是每一个十六进制数代表八位二进制数，每一位代表像素。
http://javl.github.io/image2cpp/
drawBitmap(0, 0, bitmap, 64, 64, WHITE);

文字：https://www.zhetao.com/fontarray.html
https://www.eecso.com/test/zimo/?word=%D6%D9

https://gitee.com/kq666/Peak

## TFT_eSPI

### 1. 下载

  GitHub下载对应的工程就可以，直接搜名字。

https://github.com/Bodmer/TFT_eSPI

git clone https://github.com/Bodmer/TFT_eSPI.git

  需要下载TFT_eSPI、TFT_Touch

  a. TFT_eSPI改的地方也不多。主要改User_Setup_Select.h和对应的驱动的头文件。io口的定义都在相应的驱动头文件里修改。

### 2. 配置


### 3. 接线

  a. 按照对应的驱动里配置的接线即可。比如ST7735

```c
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)

#define TFT_CS    21 // Not defined here, chip select is managed by sketch
#define TFT_BLK   5  // 背光
```

## lvgl

### 1. 下载

  GitHub下载对应的工程就可以，直接搜名字。
  需要下载lvgl

### 2. 配置

  a. lvgl，把lv_conf_template.h复制一份到lib根目录下，把enable打开。
  b. lvgl/demos放到lib目录下。对应的include需要改一下，根据编译报错改一下就可以。
  c. lvgl总之就是改一下名字，移动目录并且改一下配置。不需要改哪里的代码就可以直接用。
  d. 修改完上述地方，就可以跑demo了，把examples/arduino/LVGL_Arduino.ino复制到main文件里。然后改一下报错或者宽高等地方，之后上传应该就可以正常显示了。

lvgl的配置应该只需要改conf里面的就可以。没什么复杂的东西。

照着LVGL_Arduino写就可以。这个项目是采用编码器的方式指定输入设备，代码也比较清晰。

### 3. 输入设备

要设置输入设备，必须初始化 `lv_indev_drv_t` 变量：

**类型** (indev_drv.type)可以是：

* **LV_INDEV_TYPE_POINTER** 触摸板或鼠标
* **LV_INDEV_TYPE_KEYPAD** 键盘或小键盘
* **LV_INDEV_TYPE_ENCODER** 带有左，右，推动选项的编码器
* **LV_INDEV_TYPE_BUTTON** 外部按钮按下屏幕

**read_cb** (indev_drv.read_cb)是一个函数指针，将定期调用该函数指针以报告输入设备的当前状态。它还可以缓冲数据并在没有更多数据要读取时返回 `false` ，或者在缓冲区不为空时返回 `true` 。

https://www.bilibili.com/read/cv15906117

## lvgl显示图片

以下网址图片转换成c格式的map：https://lvgl.io/tools/imageconverter

如下代码显示一张图片：

```cpp
  // 加载图片
  lv_obj_t *img_test = lv_img_create(lv_scr_act());
  LV_IMG_DECLARE(yx1_160x128);
  lv_img_set_src(img_test, &yx1_160x128);
```

## lvgl使用gui-guider生成代码

这里说的比较详细

https://www.bilibili.com/read/cv15949056

https://www.bilibili.com/read/cv15906117

主要就是把custom和generated复制过来，然后改一下include。

现在已经可以运行计数的小项目了，但是目前存在的一个问题就是lvgl的焦点如果一直按up或者down，他不会在当前页面循环，而是就没了。这个需要解决一下。
