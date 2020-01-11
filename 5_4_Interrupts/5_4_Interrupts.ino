// Interrupts stop the processor and forces it to enter a different code block when a signal is asserted
// to the interrupt pin

// modify the code so that it turns off the IR LED when the counter reaches 10
// you will also need to slightly modify the circuit

#define LEDPIN 13
#define INTPIN 2
unsigned int counter = 0;

void setup() {
  
    Serial.begin(115200);
    pinMode(LEDPIN, OUTPUT);
    digitalWrite(LEDPIN, LOW);
    
    // attach an interrupt to INTPIN, make it call the count function, make it trigger on the rising edge of a signal
}

void loop() {
    if (counter > 9){
        digitalWrite(ledPin, HIGH);
      }
}

void count(){
  counter = counter + 1;
  Serial.print("Counter: ");
  Serial.println(counter);
  }
