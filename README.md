# Device Tree for cmcc M836 (wt89536)
使用预编译内核，从markw的device移植而来

***
### 测试版非日用
***
### sim相关
* 移动卡测试：左上角显示CMCC，重启后无网络连接，要到移动网络里面开关一次才行
* 电信卡测试：会有个东西fc，重启不能打开数据需要更改一下首选网络类型
* 电信+移动：电信没信号？用电信卡上网就都有信号，用移动上网就没电信信号
* 添加volte开关
***
### 拍照 录像
* 拍照正常
* 1080p及以下录像正常，4k闪退
***
### WIFI 蓝牙 热点 NFC
* 目前WiFi 蓝牙 热点正常
* NFC可用，但是触碰付款中没有NFC-SIM
***
### 声音 显示 指纹 按键 等
* 声音正常
* 显示 指纹正常
* 双击亮屏无效
* 按键灯不亮
* 指纹手势 虚拟HOME键无效
* 设置,按钮中长按有个选项，语音助手。然而并没有这个功能
* 不显示快速充电
***


| Feature                 | Specification                     |
| :---------------------- | :-------------------------------- |
| CPU                     | Octa-core 2.0 GHz Cortex-A53      |
| Chipset                 | Qualcomm MSM8953 Snapdragon 625   |
| GPU                     | Adreno 506                        |
| Memory                  | 3 GB                              |
| Shipped Android Version | 6.0.1                             |
| Storage                 | 32 GB                             |
| MicroSD                 | Up to 256 GB                      |
| Battery                 | 4100 mAh (non-removable)          |
| Dimensions              | 151 x 76 x 8.5 mm                 |
| Display                 | 1920x1080 pixels, 5.5 (~401 PPI)  |
| Rear Camera             | 13 MP, LED flash                  |
| Front Camera            | 5 MP                              |
| Release Date            | January 2017                      |

