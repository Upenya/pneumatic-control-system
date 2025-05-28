#define cnv1 4
#define cnv2 6
#define cnv3 10
#define r 26
#define g 28
#define o 30
#define rod 5
#define tn1 7
#define suc 8
#define cyl1 9
#define cyl2 46
#define grip 22
#define tn2 24

#define S1 2
#define S2 3
#define S3 18
#define S4 19
#define S5 16
#define S6 17
#define S7 20
#define c1s1 21
#define c1s2 23
#define c2s1 25
#define c2s2 27

int b;



void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(S4, INPUT_PULLUP);
  pinMode(S5, INPUT_PULLUP);
  pinMode(S6, INPUT_PULLUP);
  pinMode(S7, INPUT_PULLUP);
  pinMode(c1s1, INPUT_PULLUP);
  pinMode(c1s2, INPUT_PULLUP);
  pinMode(c2s1, INPUT_PULLUP);
  pinMode(c2s2, INPUT_PULLUP);

  pinMode(cnv1, OUTPUT);
  pinMode(cnv2, OUTPUT);
  pinMode(cnv3, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(o, OUTPUT);
  pinMode(rod, OUTPUT);
  pinMode(tn1, OUTPUT);
  pinMode(suc, OUTPUT);
  pinMode(cyl1, OUTPUT);
  pinMode(cyl2, OUTPUT);
  pinMode(grip, OUTPUT);
  pinMode(tn2, OUTPUT);
  b = 1;
  // put your setup code here, to run once:
}

void loop() {
  if (b == 1) {
    digitalWrite(cnv1, LOW);
    digitalWrite(cnv2, LOW);
    digitalWrite(cnv3, LOW);
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(o, HIGH);
    digitalWrite(rod, HIGH);
    digitalWrite(tn1, HIGH);
    digitalWrite(suc, HIGH);
    digitalWrite(cyl1, HIGH);
    digitalWrite(cyl2, HIGH);
    digitalWrite(grip, HIGH);
    digitalWrite(tn2, HIGH);
    b = 2;
  }

  if (b == 2) {
    if (digitalRead(S1) == 0) {
      b = 3;
    }
  }

  if (b == 3) {
    delay(2000);
    digitalWrite(cnv1, HIGH);
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
    b = 4;
  }

  if (b == 4) {
    if (digitalRead(S2) == 1) {
      b = 5;
    }
  }

  if (b == 5) {
    digitalWrite(cnv1, LOW);
    digitalWrite(o, LOW);
    delay(5000);
    digitalWrite(o, HIGH);
    digitalWrite(cnv1, HIGH);
    b = 6;
  }
  if (b == 6) {
    if (digitalRead(S3) == 0) {
      b = 7;
    }
  }

  if (b == 7) {
    delay(200);
    digitalWrite(cnv1, LOW);
    delay(2000);
    digitalWrite(rod, LOW);
    delay(2000);
    digitalWrite(tn1, LOW);
    delay(2000);
    digitalWrite(suc, LOW);
    delay(2000);
    digitalWrite(tn1, HIGH);
    delay(2000);
    digitalWrite(rod, HIGH);
    delay(2000);
    digitalWrite(tn1, LOW);
    delay(2000);
    digitalWrite(suc, HIGH);
    delay(2000);
    digitalWrite(tn1, HIGH);
    delay(2000);
    b = 8;
  }
  if (b == 8) {
    if (digitalRead(S4) == 0) {
      b = 9;
    }
  }

  if (b == 9) {
    digitalWrite(cnv2, HIGH);
    b = 10;
  }

  if (b == 10) {
    if (digitalRead(S5) == 0)
      b = 11;
  }

  if (b == 11) {
    delay(300);
    digitalWrite(cnv2, LOW);
    delay(2000);
    b = 12;
  }
  if (b == 12) {
    if ((digitalRead(c1s1) == 0) && (digitalRead(c2s1) == 0)) {
      b = 13;
    }
  }

  if (b == 13) {
    digitalWrite(cyl2, LOW);
    delay(2000);
    b = 14;
  }

  if (b == 14) {
    if (digitalRead(c2s2) == 0) {
      b = 15;
    }
  }
  if (b == 15) {
    digitalWrite(grip, LOW);
    delay(2000);
    digitalWrite(cyl2, HIGH);
    delay(2000);
    b = 16;
  }
  if (b == 16) {
    if (digitalRead(c2s1) == 0) {
      b = 17;
    }
  }

  if (b == 17) {
    digitalWrite(cyl1, LOW);
    delay(2000);
    b = 18;
  }

  if (b == 18) {
    if (digitalRead(c1s2) == 0) {
      b = 19;
    }
  }

  if (b == 19) {
    digitalWrite(cyl2, LOW);
    delay(2000);
    b = 20;
  }
  if (b == 20) {
    if (digitalRead(c2s2) == 0) {
      b = 21;
    }
  }
  if (b == 21) {
    digitalWrite(grip, HIGH);
    delay(2000);
    digitalWrite(cyl2, HIGH);
    delay(2000);
    b = 22;
  }

  if (b == 22) {
    if (digitalRead(c2s1) == 0) {
      b = 23;
    }
  }
  if (b == 23) {
    digitalWrite(o, LOW);

    delay(5000);
    digitalWrite(o, HIGH);

    digitalWrite(cyl2, LOW);

    b = 24;
  }
  if (b == 24) {
    if (digitalRead(c2s2) == 0)
      b = 25;
  }


  if (b == 25) {
    digitalWrite(grip, LOW);
    delay(2000);
    digitalWrite(cyl2, HIGH);
    delay(2000);
    b = 26;
  }

  if (b == 26) {
    if (digitalRead(c2s1) == 0) {
      b = 27;
    }
  }
  if (b == 27) {
    digitalWrite(cyl1, HIGH);
    delay(2000);
    b = 28;
  }
  if (b == 28) {
    if (digitalRead(c1s1) == 0) {
      b = 29;
    }
  }
  if (b == 29) {
    digitalWrite(cyl2, LOW);
    delay(2000);
    b = 30;
  }
  if (b == 30) {
    if (digitalRead(c2s2) == 0) {
      b = 31;
    }
  }

  if (b == 31) {
    digitalWrite(grip, HIGH);
    delay(2000);
    digitalWrite(cyl2, HIGH);
    delay(2000);
    b = 32;
  }
  if (b == 32) {
    if (digitalRead(c2s1) == 0) {
      b = 33;
    }
  }
  if (b == 33) {
    digitalWrite(cnv2, HIGH);
    b = 34;
  }
  if (b == 34) {
    if (digitalRead(S6) == 0) {
      b = 35;
    }
  }

  if (b == 35) {
    delay(200);
    digitalWrite(cnv2, LOW);
    delay(2000);
    digitalWrite(cnv3, HIGH);
    delay(2000);
    digitalWrite(tn2, LOW);
    b = 36;
  }
  if (b == 36) {
    if (digitalRead(S7) == 1) {
      b = 1;
    }
  }

  // put your main code here, to run repeatedly:
}
