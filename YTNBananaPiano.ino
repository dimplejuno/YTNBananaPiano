/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

 This example code is in the public domain.
 */

char piano[] = { 't', 'y', 'i', 'o', 'p', 's' };

char drum[] = { 'B', 'D', 'F', 'G', 'M', 'E' };

int values[6] = {0};


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forevetyuiopar:
void loop() {
  // read the input on analog pin 0:
  //int a0 = analogRead(A0);
  
  int a0 = analogRead(A0);
  int b0 = analogRead(A1);
  int c0 = analogRead(A2);
  int d0 = analogRead(A3);
  int e0 = analogRead(A4);
  int f0 = analogRead(A5);
  
  
  if(a0 < 700) {
    Keyboard.write('t');
    //Keyboard.write('b');
  } else 
  
   if(b0 < 700) {
    Keyboard.write('y');
    //Keyboard.write('m');
  }
  else 
  if(c0 < 700) {
    Keyboard.write('i');
    //Keyboard.write('f');
  }
  else
  if(d0 < 700) {
    Keyboard.write('o');
    //Keyboard.write('d');
  }
  else
  if(e0 < 700) {
    Keyboard.write('p');
    //Keyboard.write('l');
  }
  else
  if(f0 < 700) {
    Keyboard.write('s');
    //Keyboard.write('a');
  }
  
  
  /*
  for(int i=0; i< 6; i++){
    
   values[i] = analogRead(i);
   delay(10);
    if(values[i] < 700) {
       Keyboard.write(drum[i]);
       Keyboard.write(piano[i]);
    } 
  }
  */
  
  /*
  if(a0 < 700) {
     //Keyboard.write(piano[index++]);
     Keyboard.write('B');
     Serial.println(a0);
  }
  */

  delay(50);        // delay in between reads for stability
}
