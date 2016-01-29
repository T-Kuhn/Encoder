/*
  Encoder.cpp - A small motor encoder library for the Arduino
  prototyping platform. This library provides a way to evaluate
  the A and B signal of a DC motor encoder. Created by Tobias Kuhn, 
  Sapporo, February 29, 2016.Å@Released into the public domain.
  */

#include "Arduino.h"
#include "Encoder.h"

// - - - - - - - - - - - - - - - - - - -
// - - - - Encoder CONSTRUCTOR - - - - -
// - - - - - - - - - - - - - - - - - - -
EncMotControl::EncMotControl(int pinSingalA, int pin pinSignalB)
{
    _pinSignalA = pinSignalA;
    _pinSignalB = pinSignalB;
}

// - - - - - - - - - - - - - - - - - - -
// - - - - - Encoder UPDATE  - - - - - -
// - - - - - - - - - - - - - - - - - - -
void EncMotControl::update()
{
    //CODE
}

