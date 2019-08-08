---


---

<h1 id="錢幣點算計劃">錢幣點算計劃</h1>
<p>😆Hey folks😆<br>
I am Blake Willis, this is project coin-sorting. If you have any enquiries, feel free to email me at <a href="mailto:blakewillise@gmail.com">blakewillise@gmail.com</a> or Whatsapp me directly if you have my 📱</p>
<h2 id="引言">引言</h2>
<p>本計劃採用以錢幣尺寸分類的設計，並於入銀過程中進行點算。</p>
<h2 id="硬件介紹">硬件介紹</h2>
<p>本計劃採用以下硬件</p>
<ul>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> Arduino</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> IIC/I2C 1602 LCD模組</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> 1kΩ 電阻</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> 杜邦線 <code>公對母 ＆ 公對公</code></li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> 麵包板</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> 9V電</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> USB接線</li>
<li class="task-list-item"><input type="checkbox" class="task-list-item-checkbox" disabled=""> 錢幣</li>
</ul>
<h3 id="arduino">Arduino</h3>
<p><img src="https://leobot.net/productimages/530.jpg" alt="enter image description here"></p>
<p><a href="https://www.youtube.com/watch?v=nJhf1VdbPq8">影片介紹</a></p>
<p>Arduino是一個開發各類設備，讓你比台式電腦更能充分感知和控制物理世界的生態系統。 Arduino是一個基於一系列單片機電路板的開源物理計算平台，一個編寫用於Arduino和Genuino開發板的軟件開發環境和一個擁有活躍開發者和用戶社區。Arduino可用於開發交互式物體，接受來自各類開關或傳感器的輸入，並能控制各種燈光、馬達和其他物理輸出裝置。 Arduino項目可以單獨運行，也可以與您計算機上運行的軟件（Processing、MaxMSP）配合使用。</p>
<h3 id="iici2c-1602-lcd模組">IIC/I2C 1602 LCD模組</h3>
<p>適用於Arduino</p>
<p>支援<code>IIC I2C</code>協定，免焊接、只需用 Arduino 四個接口</p>
<p>接線說明：</p>
<pre><code>LCD 1602 LCM I2C → Arduino UNO（Arduino nano）
GND→GND
VCC→VCC(5V)
SDA→SDA(或A4接口)
SCL→SCL(或A5接口)
</code></pre>
<h3 id="kω-電阻">1kΩ 電阻</h3>
<p>電阻顧名思義，就是阻礙電流流動的因素。電阻越大，表示阻礙越大，電流越難流動。所以在相同電壓的情況下，電阻越大，電流會越小。歐姆定律為歐姆（Georg Simon Ohm l787～1854德國物理學家）於1826年作的實驗，發現了電流和電壓之間成正比。也就是當電壓變成N倍的時候，電流也會變成N倍。但是不同的電阻會讓這個比例常數有所改變。這個比例常數，就是電阻。此即<strong>歐姆定律</strong>：</p>
<blockquote>
<p><em>V=IR</em></p>
</blockquote>
<p>從這個式子我們可以看出，電壓和電流成正比的關係。同時電流和電阻成反比。<br>
電阻的單位稱為歐姆(Ohm)通常記為：Ω。由歐姆定律可界定歐姆之定義如下：若在電阻上施予一伏特的電壓，可得到一安培的電流，就稱這個電阻的大小為1Ω。</p>
<p><img src="https://media.rs-online.com/t_large/F4777928-01.jpg" alt="enter image description here"><br>
1kΩ = 1000Ω</p>
<h3 id="杜邦線">杜邦線</h3>
<p><img src="https://www.taiwaniot.com.tw/wp-content/uploads/2015/12/40p_bump-300x300.jpg" alt="enter image description here"></p>
<h3 id="麵包板">麵包板</h3>
<p><img src="https://img.ruten.com.tw/s1/0/55/cd/21813829421517_943.jpg" alt="enter image description here"></p>
<h2 id="軟件介紹">軟件介紹</h2>
<h3 id="arduino-ide">Arduino IDE</h3>
<p>集成開發環境 - 由Arduino.cc引入的官方軟件，主要用於在Arduino設備中編寫，編譯和上傳代碼。 幾乎所有Arduino模塊都與這個開源軟件兼容，並且隨時可以安裝和開始編譯代碼。</p>

<table>
<thead>
<tr>
<th>網上開發</th>
<th>單機開發<code>💚建議使用💚</code></th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="https://create.arduino.cc/editor">須以Google帳戶登入</a></td>
<td><a href="https://www.arduino.cc/en/Main/Software">下載並執行</a></td>
</tr>
</tbody>
</table><h3 id="newliquidcrystal第三方資料庫">NewliquidCrystal第三方資料庫</h3>
<p><a href="https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/">下載最新檔案<code>😉不需解壓.zip檔😉</code></a></p>
<p>用以準備編寫程式</p>
<h2 id="電路圖">電路圖</h2>
<h2 id="程式碼">程式碼</h2>
<pre><code>#include &lt;Wire.h&gt;
#include &lt;LCD.h&gt;
#include &lt;LiquidCrystal_I2C.h&gt;
#include &lt;EEPROM.h&gt;

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); // 0x27 is the I2C bus address for an unmodified module

const int coin1  = A0;    //input from ir sensor
const int coin2 = A1;
const int coin5  = A2;
const int coin10 = A3;
const int btn = 2;
int spr1, spr2, spr5, spr10, btnState = 0;
int count1, count2, count5, count10, total = 0;


void(* resetFunc) (void) = 0;
void setup() {
  Serial.begin(9600);
  pinMode(coin1 , INPUT);
  pinMode(coin2 , INPUT);
  pinMode(coin5, INPUT);
  pinMode(coin10, INPUT);
  pinMode(btn, INPUT_PULLUP);
  lcd.noBacklight(); // You can turn the backlight off by setting it to LOW instead of HIGH
  lcd.begin(16, 2);
  lcd.write(EEPROM.read(5));
  lcd.setCursor(0, 0);
  lcd.print("Welcome");
  delay(3000);

}

void loop() {
  btnState = digitalRead(btn);

  if (btnState == LOW) {
    lcd.clear();
    delay(1000);
    lcd.setCursor(0, 0);
    lcd.print("THANKS");
    delay(2000);
    resetFunc();
    
  } else {
    spr1 = analogRead(coin1); //read the state of coi100n and store it as ir100
    spr2 = analogRead(coin2); //read the state of coi100n and store it as ir200
    spr5 = analogRead(coin5); //read the state of coi100n and store it as ir500
    spr10 = analogRead(coin10);


    if (spr1 &lt;= 10) {
      count1 += 1;
      delay(100);
    }
    if (spr2 &lt;= 10) {
      count2 += 2;
      delay(100);
    }
    if (spr5 &lt;= 10) {
      count5 += 5;
      delay(100);
    }

    if (spr10 &lt;= 10) {
      count10 += 10;
      delay(100);
    }

    total = count1 + count2 + count5 + count10;
    EEPROM.write(5, total);
    lcd.setCursor(0, 1);
    lcd.print("TOTAL:");
    lcd.setCursor(7, 1);
    lcd.print(total);
  }

}
</code></pre>

