# 锐动录像 SDK Window 版 ( v1.1 ) 

- 　　本SDK 是锐动录像SDK的PC版本，支持从 Windows XP 开始的各个 Windows 系统（不支持 CE 、Mobile 和 RT）。
- 　　SDK 的基本功能：把屏幕画面、摄像头、视频、游戏画面、音乐、文字等各种资源整合在一起，实时编码为视频文件，也支持上传到视频服务器进行直播。 
- 　　适合的应用场景：教学视频录制、在线教学、游戏录制/直播、美女直播、会议直播等各种需要高质量低码率音视频录制和直播的场合。
- 　　技术特点：使用 OpenGL 进行多个画面的整合，使用 x264 或 NVENC 进行视频编码，可以在低码率下得到高质量的视频。


**录像和直播的基本流程框图：**
![Image text](https://raw.githubusercontent.com/rdsdk/rdScreenRecordSDK-for-Windows/master/website/SdkFrame.png)

- **画面编辑：**

1. 每一个画面来源在本SDK中被称为元件（Chip），类似于 PhotoShop 中的图层。
2. 内置了完整的预览界面，并且支持使用鼠标进行选中、拖动、改变大小等各种基本操作。
3. 提供了功能完整的 DEMO 程序，用户可以直接使用 DEMO 程序进行简单修改完成自己的软件。
![Image text](https://raw.githubusercontent.com/rdsdk/rdScreenRecordSDK-for-Windows/master/website/DemoUI.png)

- **画面来源：**

1. 桌面画面捕获 
使用 GDI 方式截取桌面窗口画面，支持多显示器，支持各种屏幕分辨率和色深(2bit至32bit)。 
支持在桌面画面捕获时，暂时禁用 Win7 Aero，以提高性能。

2. 摄像头画面捕获
支持各种USB摄像头、和WDM标准的视频采集卡。

3. Android 模拟器和 AirPlay 的画面捕获
在 Demo 程序中，对各主流的 Android 模拟器，和 AirPlay 提供了支持。

4. 游戏画面捕获
直接从游戏进程中获取 DirectX 以及OpenGL 的渲染结果画面，不使用 GDI 截图的方式，能支持绝大多数游戏，包括常规的 GDI  截图无法截取到的画面。 
对游戏性能影响较低，比 GDI 截图消耗更小。 
兼容 DirectX 7/8/9/10/11 及 OpenGL 各个版本，各种游戏分辨率和画面颜色格式。 
支持以各种帧率捕获游戏画面。 

5. 视频和图片文件
支持 FLV、MP4等使用 H.264 编码的视频文件。
支持 PNG、JPG、BMP 等常见格式的音频文件。
支持 Flash、GIF 动画文件。

6. 文字
自定义文本内容、字体、大小、显示位置。

- **音频捕获：** 

1. 支持 WinXP/Win7/8/10 下的声音捕获，且把录音设备抽象为“输出的声音（电脑播放的声音）”和“输入的声音（麦克风等）”这两类，方便二次开发。 
2. 支持软件混音和重采样，自定义录制声音的的声道数和采样格式。 
3. 可保证长时间录音时，录音数据的时长与实际时长基本无偏差。 
4. 直播过程中，可以随时切换音频捕获设备、静音、设置音量。

- **音视频编码：**

1. x264 视频编码（视频画面质量高，码率控制好，但会消耗大量 CPU 和内存资源，根据编码质量的设置不同，消耗不同。）
2. NVENC 硬件视频编码（视频画面质量高，码率控制较好，几乎不消耗 CPU 和内存资源，但需要 Nvidia 显卡的支持）
3. AAC 音频编码（码率低，音质损失小）

- **文件保存和直播：**

1. 保存视频为 FLV、MP4、AVI 格式文件。
2. 指定 RTMP 地址直播。
3. 使用锐动云服务器直播。锐动云服务器可以自动地把直播的视频分发到全国各地的服务器，在国内任何地域，都没有访问速度的困绕。

## 最新SDK下载(以下链接是最新的，github代码会稍有延迟)：
[SDK下载请单击](http://d.56show.com/rdsdk/private/pack/rd_live_pc_20170512.zip)

## 功能试用：
下载以下demo应用，可以进行功能试用。
[点击下载](http://d.56show.com/rdsdk/private/pack/rd_screen_windows_20170526.zip)

## 关于授权：
www.rdsdk.com 致力于专业的人做专业的事，降低客户的开发时间和开发成本，你只需要支付很少的费用，花上几个小时就能增加直播及回放功能。
[单击申请试用](http://www.rdsdk.com/home/business/registers)

## 开发文档:
[点击查看](https://github.com/rdsdk/rdLiveSDK-for-Windows/blob/master/help.pdf)

## 洽谈咨询：
**SDK交流群：[305128688](http://shang.qq.com/wpa/qunwpa?idkey=bb9ac035ffa2d930719535a3b5d4542a780bb0f94613385fd93c996ee816ef05)** 
**咨询电话：4008989105** 
**客服电话：15313066905 (周一至周五 9:00-18:00)** 
**客服邮箱：<2637433751@qq.com>** 
