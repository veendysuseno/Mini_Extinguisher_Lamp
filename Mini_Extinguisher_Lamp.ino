// Lampu Pemadam Mini
int ledPin1 = 9;    // inisialisasai pin 9
int ledPin2 = 10;   // inisialisasai pin 10
int ledPin3 = 11;   // inisialisasai pin 11

void setup(){
	pinMode(ledPin1, OUTPUT); // set pin 9 sebagai output
	pinMode(ledPin2, OUTPUT); // set pin 10 sebagai output
	pinMode(ledPin3, OUTPUT); // set pin 11 sebagai output
}

void loop(){
	analogWrite(ledPin1, random(120) + 135);
	analogWrite(ledPin2, random(120) + 135);
	analogWrite(ledPin3, random(120) + 135);
	delay(random(100));
}
