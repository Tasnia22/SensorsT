//Common Anode type seven segment display

const int segments[] = {6, 7, 8, 9, 10, 11, 12}; // Pins for each segment (a, b, c, d, e, f, g)

const int numbers[10][7] = {
  {0, 0, 0, 0, 0, 0, 1}, // 0
  {1, 0, 0, 1, 1, 1, 1}, // 1
  {0, 0, 1, 0, 0, 1, 0}, // 2
  {0, 0, 0, 0, 1, 1, 0}, // 3
  {1, 0, 0, 1, 1, 0, 0}, // 4
  {0, 1, 0, 0, 1, 0, 0}, // 5
  {0, 1, 0, 0, 0, 0, 0}, // 6
  {0, 0, 0, 1, 1, 1, 1}, // 7
  {0, 0, 0, 0, 0, 0, 0}, // 8
  {0, 0, 0, 0, 1, 0, 0}  // 9
};

void setup(){
  Serial.begin(9600);
  for(int i = 0; i<7; i++){
    pinMode(segments[i], OUTPUT);
  }
}

void displayNumber(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], numbers[number][i]);
  }
}

//displaying numbers in a loop
void loop(){
  for(int i=0;i<=9;i++){
    displayNumber(i);
    delay(1000);
  }
}