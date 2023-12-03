#include <LedControl.h>

int DIN = 16; // D0
int CS =  5;  // D1
int CLK = 4;  // D2
LedControl lc=LedControl(DIN,CLK,CS,0);


// { 0x7F, 0x88, 0x88, 0x88, 0x7F, 0x00}, // A
// { 0xFF, 0x91, 0x91, 0x91, 0x6E, 0x00}, // B
// { 0x7E, 0x81, 0x81, 0x81, 0x42, 0x00}, // C
// { 0xFF, 0x81, 0x81, 0x42, 0x3C, 0x00}, // D
// { 0xFF, 0x91, 0x91, 0x91, 0x81, 0x00}, // E
// { 0xFF, 0x90, 0x90, 0x90, 0x80, 0x00}, // F
// { 0x7E, 0x81, 0x89, 0x89, 0x4E, 0x00}, // G
// { 0xFF, 0x10, 0x10, 0x10, 0xFF, 0x00}, // H
// { 0x81, 0x81, 0xFF, 0x81, 0x81, 0x00}, // I
// { 0x06, 0x01, 0x01, 0x01, 0xFE, 0x00}, // J
// { 0xFF, 0x18, 0x24, 0x42, 0x81, 0x00}, // K
// { 0xFF, 0x01, 0x01, 0x01, 0x01, 0x00}, // L
// { 0xFF, 0x40, 0x30, 0x40, 0xFF, 0x00}, // M
// { 0xFF, 0x40, 0x30, 0x08, 0xFF, 0x00}, // N
// { 0x7E, 0x81, 0x81, 0x81, 0x7E, 0x00}, // O
// { 0xFF, 0x88, 0x88, 0x88, 0x70, 0x00}, // P
// { 0x7E, 0x81, 0x85, 0x82, 0x7D, 0x00}, // Q
// { 0xFF, 0x88, 0x8C, 0x8A, 0x71, 0x00}, // R
// { 0x61, 0x91, 0x91, 0x91, 0x8E, 0x00}, // S
// { 0x80, 0x80, 0xFF, 0x80, 0x80, 0x00}, // T
// { 0xFE, 0x01, 0x01, 0x01, 0xFE, 0x00}, // U
// { 0xF0, 0x0C, 0x03, 0x0C, 0xF0, 0x00}, // V
// { 0xFF, 0x02, 0x0C, 0x02, 0xFF, 0x00}, // W
// { 0xC3, 0x24, 0x18, 0x24, 0xC3, 0x00}, // X
// { 0xE0, 0x10, 0x0F, 0x10, 0xE0, 0x00}, // Y
// { 0x83, 0x85, 0x99, 0xA1, 0xC1, 0x00}, // Z
// { 0x06, 0x29, 0x29, 0x29, 0x1F, 0x00}, // a
// { 0xFF, 0x09, 0x11, 0x11, 0x0E, 0x00}, // b
// { 0x1E, 0x21, 0x21, 0x21, 0x12, 0x00}, // c
// { 0x0E, 0x11, 0x11, 0x09, 0xFF, 0x00}, // d
// { 0x0E, 0x15, 0x15, 0x15, 0x0C, 0x00}, // e
// { 0x08, 0x7F, 0x88, 0x80, 0x40, 0x00}, // f
// { 0x30, 0x49, 0x49, 0x49, 0x7E, 0x00}, // g
// { 0xFF, 0x08, 0x10, 0x10, 0x0F, 0x00}, // h
// { 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00}, // i
// { 0x02, 0x01, 0x21, 0xBE, 0x00, 0x00}, // j
// { 0xFF, 0x04, 0x0A, 0x11, 0x00, 0x00}, // k
// { 0x00, 0x81, 0xFF, 0x01, 0x00, 0x00}, // l
// { 0x3F, 0x20, 0x18, 0x20, 0x1F, 0x00}, // m
// { 0x3F, 0x10, 0x20, 0x20, 0x1F, 0x00}, // n
// { 0x0E, 0x11, 0x11, 0x11, 0x0E, 0x00}, // o
// { 0x3F, 0x24, 0x24, 0x24, 0x18, 0x00}, // p
// { 0x10, 0x28, 0x28, 0x18, 0x3F, 0x00}, // q
// { 0x1F, 0x08, 0x10, 0x10, 0x08, 0x00}, // r
// { 0x09, 0x15, 0x15, 0x15, 0x02, 0x00}, // s
// { 0x20, 0xFE, 0x21, 0x01, 0x02, 0x00}, // t
// { 0x1E, 0x01, 0x01, 0x02, 0x1F, 0x00}, // u
// { 0x1C, 0x02, 0x01, 0x02, 0x1C, 0x00}, // v
// { 0x1E, 0x01, 0x0E, 0x01, 0x1E, 0x00}, // w
// { 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x00}, // x
// { 0x00, 0x39, 0x05, 0x05, 0x3E, 0x00}, // y
// { 0x11, 0x13, 0x15, 0x19, 0x11, 0x00}, // z
// { 0x00, 0x41, 0xFF, 0x01, 0x00, 0x00}, // 1
// { 0x43, 0x85, 0x89, 0x91, 0x61, 0x00}, // 2
// { 0x42, 0x81, 0x91, 0x91, 0x6E, 0x00}, // 3
// { 0x18, 0x28, 0x48, 0xFF, 0x08, 0x00}, // 4
// { 0xF2, 0x91, 0x91, 0x91, 0x8E, 0x00}, // 5
// { 0x1E, 0x29, 0x49, 0x89, 0x86, 0x00}, // 6
// { 0x80, 0x8F, 0x90, 0xA0, 0xC0, 0x00}, // 7
// { 0x6E, 0x91, 0x91, 0x91, 0x6E, 0x00}, // 8
// { 0x70, 0x89, 0x89, 0x8A, 0x7C, 0x00}, // 9
// { 0x7E, 0x89, 0x91, 0xA1, 0x7E, 0x00}, // 0
// { 0x60, 0x80, 0x8D, 0x90, 0x60, 0x00}, // ?
// { 0x00, 0x00, 0xFD, 0x00, 0x00, 0x00}, // !
// { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // SPACE

void setup(){

	lc.shutdown(0,false);     //The MAX72XX is in power-saving mode on startup
	lc.setIntensity(0,15);     // Set the brightness to maximum value
	lc.clearDisplay(0);        // and clear the display

}

void printByte(byte character []){
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}

void loop() {

    byte a[8] = { 0x81, 0x81, 0xFF, 0x81, 0x81, 0x00};     // I

    byte b[8] = { 0xFF, 0x01, 0x01, 0x01, 0x01, 0x00};     // L
    byte c[8] = { 0x7E, 0x81, 0x81, 0x81, 0x7E, 0x00}; // O
    byte d[8] = { 0xF0, 0x0C, 0x03, 0x0C, 0xF0, 0x00}; // V
    byte e[8] = { 0xFF, 0x91, 0x91, 0x91, 0x81, 0x00};     // E
    
    byte f[8] = { 0xFE, 0x01, 0x01, 0x01, 0xFE, 0x00};  // U

    byte k[8] = {0x3c,0x42,0x95,0xa1,0xa1,0x95,0x42,0x3c}; // :) 

    printByte(a);
    delay(2000);
    printByte(b);
    delay(1000);
    printByte(c);
    delay(1000);
    printByte(d);
    delay(1000);
    printByte(e);
    delay(2000);
    printByte(f);
    delay(1000);
    printByte(j);
    delay(2000);
    printByte(k);
    delay(1000);
  
}
