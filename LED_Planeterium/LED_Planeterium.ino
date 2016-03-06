
  int SpectrumStrobe = 2;

  int SpectrumReset = 3;

  int SpectrumOut[7];

  int SpectrumBand;

  void setup ()

  {

    pinMode(SpectrumReset, OUTPUT);

    pinMode(SpectrumStrobe, OUTPUT);

    digitalWrite(SpectrumReset, HIGH);

    digitalWrite(SpectrumReset, LOW);

    delayMicroseconds(75);

    digitalWrite(SpectrumStrobe, HIGH);

    delayMicroseconds(75);

  }

    void loop ()

  {

      digitalWrite(SpectrumReset, HIGH);

    digitalWrite(SpectrumReset, LOW);

    delayMicroseconds(75);

    for(SpectrumBand = 0; SpectrumBand < 7; SpectrumBand++)

    {

    digitalWrite(SpectrumStrobe, LOW);

    delayMicroseconds(80);

    SpectrumOut[SpectrumBand] = analogRead(0);

    digitalWrite(SpectrumStrobe, HIGH);

    delayMicroseconds(80);

    }
