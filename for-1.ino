  //(***Example***)
//for (int i=0; 1<10 ; i++ ){
//  digitalWrite(LED1, HIGH);
//  delay(100);
//  digitalWrite(LED, LOW);
//  delay(100);
//}
//-----------------------------------------------------------------
//ให้เขียนโปรแกรมไฟกระพริบ LED iot จำนวน 20 ครั้งด้วยคำสั่ง for
int iot=12;
void setup(){
  Serial.begin(9600);
  pinMode(iot,OUTPUT);
}

void loop(){
  for(int i=1 ; i<20 ; i++ ){
    digitalWrite(iot, LOW);  //ให้ LED ติด
    delay(1000); //หน่วงเวลา 1 วินาที
    digitalWrite(iot, HIGH); //ให้ LED ดับ
    delay(1000); //หน่วงเวลา 1 วินาที
  }
}
