char dizi[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};    // 7 SEGMENT DISPLAY KODLARI...
char i=0;      // CHAR T�P�NDE � DE���KEN� TANIMLANIYOR...
void main()   // ANA PRO�RAM BA�LANGICI...
{
trisb=0;        // TRISB'NIN B�T�N P�NLER� �IKI� OLARAK AYARLANDI...
trisa.f0=1;     // TRISA'NIN 0. P�N� G�R�� OLARAK AYARLANDI...
portb=dizi[0];  // PORTB'YE D�Z�N�N 0. ELEMANI OLAN SIFIR RAKAMI Y�KLEN�YOR...
CMCON=7;        // KOMPARAT�RLER KAPATILDI...
while(1)        // SONSUZ D�NG� BA�LANGICI...
        {
        if(porta.f0==0)      //PORTA.F0'DAK� PULL-UP D�RENC� 0 MI ( 0V )... ?
                      {
                       i++;        // 1 DE���KEN� 1 ARTTIRILDI...
                       if(i>9)     // � DE���KEN� 9 SAYISINDAN B�Y�K �SE...
                             {
                              i=0;   // � DE���KEN�N� 0 YAP...
                             }
                       portb=dizi[i];  //PORTB'YE D�Z�N�N � DE���KEN� KA�SA O ELAMANINI Y�KLE...
                       delay_ms(500);  //500 M�L�SAN�YE BEKLE...
                      }  //�F KOMUTU SONU...
        } // SONSUZ D�NG� SONU...
}  // ANA PRO�RAM SONU...