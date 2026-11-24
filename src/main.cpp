#include <Arduino.h>   

  

void setup(){  

DDRD &= 0xF0;  
PORTD |= 0xF0;  
DDRB |= 0x0F;  
PORTB &= ~0x0F;  

}  

void loop(){  

  uint8_t value = PIND;  
  value = value & 0xF0;  
  value = value >> 4;  
  value = ~value; 
  value = value & 0x0F; 
  value = ~value + 1;  
  value = value & 0x0f; 
  PORTB = (PORTB & ~0x0F) | value;  

}