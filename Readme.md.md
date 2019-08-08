<!DOCTYPE html>
<html>

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Readme.md</title>
  <link rel="stylesheet" href="https://stackedit.io/style.css" />
</head>

<body class="stackedit">
  <div class="stackedit__left">
    <div class="stackedit__toc">
      
<ul>
<li><a href="#錢幣點算計劃">錢幣點算計劃</a>
<ul>
<li><a href="#引言">引言</a></li>
<li><a href="#硬件介紹">硬件介紹</a></li>
<li><a href="#軟件介紹">軟件介紹</a></li>
</ul>
</li>
</ul>

    </div>
  </div>
  <div class="stackedit__right">
    <div class="stackedit__html">
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
<th>單機開發<code>建議使用</code></th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="https://create.arduino.cc/editor">須以Google帳戶登入</a></td>
<td><a href="https://www.arduino.cc/en/Main/Software">下載並執行</a></td>
</tr>
</tbody>
</table>
    </div>
  </div>
</body>

</html>
