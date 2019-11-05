---
extensions:
  preset: commonmark

---

<h1 id="錢幣點算計劃">錢幣點算計劃</h1>
<p>😆Hey folks😆
I am Blake Willis, this is project coin-sorting. If you have any enquiries, feel free to 💬PM💬 me.</p>
<h2 id="引言">引言</h2>
<p>本計劃採用以錢幣尺寸分類的設計，並於入銀過程中進行點算。</p>
<h2 id="硬件介紹">硬件介紹</h2>
<p>本計劃採用以下硬件</p>
<ul>
<li>Arduino</li>
<li>IIC/I2C 1602 LCD模組</li>
<li>1kΩ 電阻</li>
<li>杜邦線 <code>公對母 ＆ 公對公</code></li>
<li>麵包板</li>
<li>2腳掣 <code>push button</code></li>
<li>9V電</li>
<li>USB接線</li>
<li>錢幣</li>
</ul>
<h3 id="arduino">Arduino</h3>
<p><img src="https://store-cdn.arduino.cc/usa/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000066_featured_4.jpg" alt="Arduino Uno Rev3"></p>
<p><a href="https://www.youtube.com/watch?v=nJhf1VdbPq8">影片介紹</a></p>
<p>Arduino是一個開發各類設備，讓你比台式電腦更能充分感知和控制物理世界的生態系統。 Arduino是一個基於一系列單片機電路板的開源物理計算平台，一個編寫用於Arduino和Genuino開發板的軟件開發環境和一個擁有活躍開發者和用戶社區。Arduino可用於開發交互式物體，接受來自各類開關或傳感器的輸入，並能控制各種燈光、馬達和其他物理輸出裝置。 Arduino項目可以單獨運行，也可以與您計算機上運行的軟件（Processing、MaxMSP）配合使用。</p>
<h3 id="iici2c-1602-lcd模組">IIC/I2C 1602 LCD模組</h3>
<p><img src="https://alexnld.com/wp-content/uploads/2017/12/DIY4006.jpg" alt="IIC/I2C 1602 LCD的圖片搜尋結果">
適用於Arduino，支援<code>IIC I2C</code>協定，免焊接、只需用 Arduino 四個接口</p>
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
<p>從這個式子我們可以看出，電壓和電流成正比的關係。同時電流和電阻成反比。
電阻的單位稱為歐姆(Ohm)通常記為：Ω。由歐姆定律可界定歐姆之定義如下：若在電阻上施予一伏特的電壓，可得到一安培的電流，就稱這個電阻的大小為1Ω。</p>
<p><img src="https://media.rs-online.com/t_large/F4777928-01.jpg" alt="enter image description here">
<strong><code>1kΩ = 1000Ω</code></strong></p>
<h3 id="杜邦線">杜邦線</h3>
<p><img src="https://www.taiwaniot.com.tw/wp-content/uploads/2015/12/40p_bump-300x300.jpg" alt="enter image description here"></p>
<h3 id="麵包板">麵包板</h3>
<p><img src="https://ct.yimg.com/xd/api/res/1.2/w3Wu9voMSi9yWVONaR3URg--/YXBwaWQ9eXR3YXVjdGlvbnNlcnZpY2U7aD0zODY7cT04NTtyb3RhdGU9YXV0bzt3PTQxMA--/https://s.yimg.com/ob/image/e5b1f049-1469-43d6-99db-6f7771557d6a.jpg" alt="enter image description here"></p>
<h2 id="軟件介紹-software-introduction">軟件介紹 Software Introduction</h2>
<h3 id="arduino-ide">Arduino IDE</h3>
<p>集成開發環境 - 由Arduino.cc引入的官方軟件，主要用於在Arduino設備中編寫，編譯和上傳代碼。 幾乎所有Arduino模塊都與這個開源軟件兼容，並且隨時可以安裝和開始編譯代碼。
|網上開發| 單機開發<code>💚建議使用💚</code> |
|--|--|
| <a href="https://create.arduino.cc/editor">須以Google帳戶登入</a> | <a href="https://www.arduino.cc/en/Main/Software">下載並執行</a> |</p>
<h3 id="newliquidcrystal第三方資料庫">NewliquidCrystal第三方資料庫</h3>
<p><a href="https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/">下載最新檔案<code>😉不需解壓.zip檔😉</code></a></p>
<p>用以準備編寫程式</p>
<h2 id="電路圖schematic-diagram">電路圖Schematic Diagram</h2>
<p><a href="https://drive.google.com/file/d/1_ZwQbjmX443f8FF7ktb-FBn5fWRZcUtL/view?usp=sharing">按此查閱</a></p>
<h2 id="程式碼code">程式碼Code</h2>
<p><a href="https://github.com/blakewillise/coinSorting/blob/master/coinsorting.ino">按此查閱</a></p>
<h3 id="基本認知">基本認知</h3>
<pre><code>#include &lt;???&gt; 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void ???(){

}
</code></pre>
<p>Arduino 基本格式</p>
<pre><code>#include &lt;???&gt; 
</code></pre>
<p>標頭檔：用以準備編譯接著的程式碼</p>
<pre><code>void setup() {
      // put your setup code here, to run once:
    
    }
</code></pre>
<p>初始化程式設定，此範圍只執行一次</p>
<pre><code> void loop() {
      // put your main code here, to run repeatedly:
    
    }
</code></pre>
<p>放置主要程式的地方，此範圍重覆執行</p>
<pre><code> void ???(){
	
	}
</code></pre>
<p>自訂函數，此範圍必須在<code>setup()</code> 或 <code>loop()</code> 中提及才可以運作</p>
<h3 id="程式碼介紹">程式碼介紹</h3>
<pre><code>#include &lt;Wire.h&gt;
#include &lt;LCD.h&gt;
#include &lt;LiquidCrystal_I2C.h&gt;
#include &lt;EEPROM.h&gt;
</code></pre>
<p>☝️ 標頭檔：用以準備編譯以下程式碼</p>
<h1 id="section"></h1>
<pre><code>LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 
</code></pre>
<p>☝️ 初始化顯示屏設置</p>
<h1 id="section-1"></h1>
<pre><code>const int coin1 = A0;    
const int coin2 = A1;
const int coin5 = A2;
const int coin10 = A3;
const int btn = 2;
int spr1, spr2, spr5, spr10, btnState = 0;
int count1, count2, count5, count10, total, totalcurr = 0;
</code></pre>
<p>☝️ 定義插槽及其對應變數為以下設定</p>
<p>| 變數 |對應變數|意義| 插槽 | 初始數值 |   	
|--|--|--|--|--|
| coin1 |spr1|1元 | A0 <code>Analog</code>|0|
| coin2 |spr2| 2元| A1 <code>Analog</code>|0|
| coin5 |spr5| 5元| A2 <code>Analog</code>|0|
| coin10 |spr10| 10元| A3 <code>Analog</code>|0|
| btn|btnState | 確認掣| 2 <code>Digital</code> |0|</p>
<h1 id="section-2"></h1>
<p>👇 定義以下變數作加總用途
| 變數 |意義| 初始數值 |   	
|--|--|--|
|count1|1元|0
|count2|2元|0
|count5|5元|0
|count10|10元|0
|total|累計總金額|0
|totalcurr|此次捐款的總金額|0|</p>
<hr>
<h4 id="void-setup...">void setup(){...}</h4>
<pre><code>void setup() {
  pinMode(coin1 , INPUT);
  pinMode(coin2 , INPUT);
  pinMode(coin5, INPUT);
  pinMode(coin10, INPUT);
  pinMode(btn, INPUT_PULLUP);
  lcd.noBacklight(); // You can turn the backlight off by setting it to LOW instead of HIGH
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Welcome");
  delay(3000);
}
</code></pre>
<ul>
<li>
<p><code>pinMode</code>定義各插槽變數為輸入<code>INPUT</code></p>
<p><code>pinMode(coin1 , INPUT);</code>
<code>pinMode(coin2 , INPUT);</code>
<code>pinMode(coin5, INPUT);</code>
<code>pinMode(coin10, INPUT);</code>
<code>pinMode(btn, INPUT_PULLUP);</code></p>
</li>
<li>
<p>定義顯示屏</p>
<p><code>lcd.noBacklight();</code>  沒有背光
<code>lcd.begin(16, 2);</code>  初始化LCD
<code>lcd.setCursor(0, 0);</code>  定位字句
<code>lcd.print("Welcome");</code>  顯示"Welcome"
<code>delay(3000);</code>  停頓3秒</p>
</li>
</ul>
<hr>
<h4 id="void-loop..">void loop(){..}</h4>
<pre><code>void loop() {
  btnState = digitalRead(btn);

	if (btnState == LOW) {
    
        lcd.clear();
        delay(1000);
        lcd.setCursor(0, 0);
        lcd.print("THANKS");
        delay(1500);
        
	    lcd.clear(); //NEXT PAGE
	    delay(500);
	    
	    displayCoinAmount();
	    
	    lcd.clear();  //NEXT PAGE
	    delay(500);
	    
	    total += totalcurr;
	    EEPROM.write(5, total);
	    lcd.setCursor(0,0);
	    lcd.print("Now we have");
	    lcd.setCursor(0,1);
	    lcd.print("HKD:");
	    lcd.setCursor(4,1);
	    lcd.print(EEPROM.read(5));
	    delay(1500);
	    
	    count1 = 0;
	    count2 = 0;
	    count5 = 0;
	    count10 = 0;
	    totalcurr = 0;
	    btnState = HIGH;
	    
	    lcd.clear();
	    delay(1000);
	    lcd.setCursor(0, 0);
	    lcd.print("Welcome");
	    delay(3000);
    
	} else {
    
       spr1 = analogRead(coin1); 
       spr2 = analogRead(coin2); 
       spr5 = analogRead(coin5); 
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
   
	   totalcurr = count1 + 2 * count2 + 5 * count5 + 10 * count10;
       
       lcd.setCursor(0, 1);
       lcd.print("TOTAL:");
       lcd.setCursor(7, 1);
       lcd.print(total);
	}
}
</code></pre>
<ul>
<li>用<code>btnState</code>設計流程控制</li>
</ul>
<p><code>btnState = digitalRead(btn);</code>以數碼方式讀取<code>btn</code>並寫入<code>btnState</code></p>
<h5 id="流程控制">流程控制</h5>
<ol>
<li><strong>如果</strong>
<code>btnState</code>為低電壓，表示捐獻者已按確認掣，觸發以下程式</li>
</ol>
<p>|程式|意思|
|--|--|
|<code>lcd.clear();</code> | 清空顯示屏 |
|<code>delay(1000);</code>|停頓1秒|
|<code>lcd.setCursor(0, 0);</code>|定位字句|
|<code>lcd.print("THANKS");</code>|顯示"THANKS"|
|<code>delay(1500);</code>|停頓1.5秒|
|    <code>lcd.clear();</code>    		    <code>delay(500);</code>|下頁|
|<code>displayCoinAmount();</code>|跳到自訂函數：<em>displayCoinAmount</em>|
|    <code>lcd.clear();</code>    		    <code>delay(500);</code>|下頁|
|<code>total += totalcurr;</code>|將此次捐款加到善款總金額|
|<code>EEPROM.write(5, total);</code>|更新後的善款總金額寫入<code>EEPROM</code>記憶體|
|<code>lcd.setCursor(0,0);</code>|定位字句|
|<code>lcd.print("Now we have");</code>|顯示"Now we have"|
|<code>lcd.setCursor(0,1);</code>|定位字句|
|<code>lcd.print("HKD:");</code>|顯示"HKD:"|
|<code>lcd.setCursor(4,1);</code>|定位字句|
|<code>lcd.print(EEPROM.read(5));</code>|顯示<code>EEPROM</code>記憶體中儲存的金額|
|<code>delay(1500);</code>|停頓1.5秒|</p>
<ol start="2">
<li><strong>否則</strong>，觸發以下程式</li>
</ol>
<hr>
<pre><code>    spr1 = analogRead(coin1);   
    spr2 = analogRead(coin2);  
    spr5 = analogRead(coin5);  
    spr10 = analogRead(coin10)  
</code></pre>
<h2 id="以類比方式讀取-並寫入------coin1-spr1---coin2-spr2---coin5spr5---coin10-spr10--">|以類比方式讀取| 並寫入 |
|--|--|
| coin1 |spr1  |
| coin2 |spr2  |
| coin5|spr5  |
| coin10 |spr10  |</h2>
<p>點算1元</p>
<pre><code>if (spr1 &lt;= 10) {
    count1 += 1;
    delay(100);
    }
</code></pre>
<h1 id="section-3"></h1>
<p>點算2元</p>
<pre><code>if (spr2 &lt;= 10) {
    count2 += 2;
    delay(100);
    }
</code></pre>
<h1 id="section-4"></h1>
<p>點算5元</p>
<pre><code>if (spr5 &lt;= 10) {
    count5 += 5;
    delay(100);
    }
</code></pre>
<h1 id="section-5"></h1>
<p>點算10元</p>
<pre><code>if (spr10 &lt;= 10) {
    count10 += 10;
    delay(100);
    }
</code></pre>
<hr>
<p><code>totalcurr = count1 + count2 + count5 + count10;</code>  計算此次捐款的金額</p>
<hr>
<p><code>lcd.setCursor(0, 1);</code>  定位字句
<code>lcd.print("TOTAL:");</code>  顯示"TOTAL:"
<code>lcd.setCursor(7, 1);</code>  定位字句
<code>lcd.print(totalcurr);</code>  顯示計算後此次捐款的金額</p>
<hr>
<h4 id="自訂函數：displaycoinamount">自訂函數：<em>displayCoinAmount</em></h4>
<h1 id="section-6"></h1>
<pre><code>    lcd.setCursor(0, 0);
    lcd.print("$1 x ");
    lcd.setCursor(5, 0);
    lcd.print(count1);
</code></pre>
<p>☝️ 顯示1元的數量</p>
<pre><code>    lcd.setCursor(0, 1);
    lcd.print("$2 x ");
    lcd.setCursor(5, 1);
    lcd.print(count2);
</code></pre>
<p>☝️ 顯示2元的數量</p>
<pre><code>    lcd.setCursor(0, 0);
    lcd.print("$5 x ");
    lcd.setCursor(5, 0);
    lcd.print(count5);
</code></pre>
<p>☝️ 顯示5元的數量</p>
<pre><code>    lcd.setCursor(0, 1);
    lcd.print("$10x ");
    lcd.setCursor(5, 1);
    lcd.print(count10);
</code></pre>
<p>☝️ 顯示10元的數量</p>

