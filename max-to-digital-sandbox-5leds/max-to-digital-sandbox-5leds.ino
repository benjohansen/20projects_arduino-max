// this is to control the 5 LEDs in a row on the Sparkfun Digital Sandbox

int d04Val = 0;
int d05Val = 0;
int d06Val = 0;
int d07Val = 0;
int d08Val = 0;

const int d04Pin = 4;
const int d05Pin = 5;
const int d06Pin = 6;
const int d07Pin = 7;
const int d08Pin = 8;

void setup() {

Serial.begin(9600);

pinMode(d04Pin, OUTPUT);
pinMode(d05Pin, OUTPUT);
pinMode(d06Pin, OUTPUT);
pinMode(d07Pin, OUTPUT);
pinMode(d08Pin, OUTPUT);

}

void loop() {
  
  while (Serial.available() > 0) {

  d04Val = Serial.parseInt();
  d05Val = Serial.parseInt();
  d06Val = Serial.parseInt();
  d07Val = Serial.parseInt();
  d08Val = Serial.parseInt();

  if (Serial.read() == '\n') { //dec value 10 in Max

  digitalWrite(d04Pin, d04Val);
  digitalWrite(d05Pin, d05Val);
  digitalWrite(d06Pin, d06Val);
  digitalWrite(d07Pin, d07Val);
  digitalWrite(d08Pin, d08Val);
  
      
      }
  }
}



/* Max code:

<pre><code>
----------begin_max5_patcher----------
661.3ocwWFsaaBCEF9Z3ovxWmUANPIoWNs2fpc0zTkC4LhaAajwoKUU8ce1G
CsYsjTRHIUQxDNX32e9X98gmCCnKTafFJ4FxuHAAOGFDfgbABZOOfVw2jWxa
vtQyUUUfzPm3ulA1Xv3U7G.RyZMPdRsljuhKKv+pI0JsgTBFCnIFEYAPLq.h
VTrxP94se2e8+nz9d+CQgvvKI2xkKcijVcJERHWsVhhkzFTrDkVs39uwXc8T
ttRHsxgC232BpVa5hF0FslaxWIjE2ogbieRHNI8pnID1Tl6PbZj6v01Vxuc2
yKggtlICbxRB+0N39vbkgrfTR6AhnC.B1tgHYNN3ivCr4WkZaYNDZuE+Sw7T
M36OcgMaQmPnzSIk75ZPtzNL5gzj3Cfz3OkzrLLM4Sc6kziiPipnnD5gi3T5
qCNMuBrqwuCj7Ekv1qyFGiwy74wXrMoqc2LJbukbZwjcAvL4qGynK.lwS8FL
ecXN67SY1ruZHmd9gL4U+lyLj6vfsl+.Ip6WOSAY85wldbdrYHrs40yfE6t1
DwnD8fVZunM8H29HA8bRh9b1JEMGYNrBZZ3EvGShZwaUSs8Nj8RH6vcUS2ZG
ReUMWvzWCnE1h4.x7qi5aIJ6DUvi+MwLLC5Qc+Phy4umUr6XkluqhXTQW7+e
BnwVuZd2Sr0Xk7lnKgFiPxMBkbq9XeojDuio3gpS1.zwUKIIZjBkN.gbkxMZ
g5dH6GoSgPWHclNvkBiUmtz7dEJ8TIT7.DhMRghSG3TWxXEhMPglNVghFnPr
drireE0iftosynFVm26UZ2oylfmJj9SQeSpFdTz0+4XDt1ZXZrtk1OOGsd2b
se6EZkZInkqE3cG5nyJI5pKsEM0Ty8ffl+guD9O.KPZvLC
-----------end_max5_patcher-----------
</code></pre>


*/
