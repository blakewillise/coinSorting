# 錢幣點算計劃

😆Hey folks😆
I am Blake Willis, this is project coin-sorting. If you have any enquiries, feel free to email me at blakewillise@gmail.com or Whatsapp me directly if you have my 📱



## 引言
本計劃採用以錢幣尺寸分類的設計，並於入銀過程中進行點算。

## 目錄
[TOC]

## 硬件介紹

本計劃採用以下硬件

 - [ ] Arduino
 - [ ] IIC/I2C 1602 LCD模組
 - [ ] 1kΩ 電阻
 - [ ] 杜邦線 `公對母 ＆ 公對公`
 - [ ] 麵包板
 - [ ] 9V電
 - [ ] USB接線
 - [ ] 錢幣

### Arduino
![enter image description here](https://leobot.net/productimages/530.jpg)
[影片介紹](https://www.youtube.com/watch?v=nJhf1VdbPq8)
Arduino是一個開發各類設備，讓你比台式電腦更能充分感知和控制物理世界的生態系統。 Arduino是一個基於一系列單片機電路板的開源物理計算平台，一個編寫用於Arduino和Genuino開發板的軟件開發環境和一個擁有活躍開發者和用戶社區。Arduino可用於開發交互式物體，接受來自各類開關或傳感器的輸入，並能控制各種燈光、馬達和其他物理輸出裝置。 Arduino項目可以單獨運行，也可以與您計算機上運行的軟件（Processing、MaxMSP）配合使用。

### IIC/I2C 1602 LCD模組
適用於Arduino

支援`IIC I2C`協定，免焊接、只需用 Arduino 四個接口

接線說明：

    LCD 1602 LCM I2C → Arduino UNO（Arduino nano）
    
    GND→GND
    
    VCC→VCC(5V)
    
    SDA→SDA(或A4接口)
    
    SCL→SCL(或A5接口)

### 1kΩ 電阻
電阻顧名思義，就是阻礙電流流動的因素。電阻越大，表示阻礙越大，電流越難流動。所以在相同電壓的情況下，電阻越大，電流會越小。歐姆定律為歐姆（Georg Simon Ohm l787～1854德國物理學家）於1826年作的實驗，發現了電流和電壓之間成正比。也就是當電壓變成N倍的時候，電流也會變成N倍。但是不同的電阻會讓這個比例常數有所改變。這個比例常數，就是電阻。此即**歐姆定律**：

$$V=IR$$

從這個式子我們可以看出，電壓和電流成正比的關係。同時電流和電阻成反比。
電阻的單位稱為歐姆(Ohm)通常記為：Ω。由歐姆定律可界定歐姆之定義如下：若在電阻上施予一伏特的電壓，可得到一安培的電流，就稱這個電阻的大小為1Ω。

![enter image description here](https://media.rs-online.com/t_large/F4777928-01.jpg)
1kΩ = 1000Ω

### 杜邦線
![enter image description here](https://www.taiwaniot.com.tw/wp-content/uploads/2015/12/40p_bump-300x300.jpg)

### 麵包板
![enter image description here](https://img.ruten.com.tw/s1/0/55/cd/21813829421517_943.jpg)



## 軟件介紹

### Arduino IDE
集成開發環境 - 由Arduino.cc引入的官方軟件，主要用於在Arduino設備中編寫，編譯和上傳代碼。 幾乎所有Arduino模塊都與這個開源軟件兼容，並且隨時可以安裝和開始編譯代碼。
|網上開發| 單機開發`建議使用` |
|--|--|
| [須以Google帳戶登入](https://create.arduino.cc/editor) | [下載並執行](https://www.arduino.cc/en/Main/Software) |


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4MjEwMzUyMTYsMTM3NzY1ODE0OSwtMT
AzMzU3Nzc4Ml19
-->