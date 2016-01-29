/*
  Encoder.cpp - A small motor encoder library for the Arduino
  prototyping platform. This library provides a way to evaluate
  the A and B signal of a DC motor encoder. Created by Tobias Kuhn, 
  Sapporo, February 29, 2016.Å@Released into the public domain.
  */

#ifndef Encoder_h
#define Encoder_h
#include "Arduino.h"

// - - - - - - - - - - - - - - - - - - -
// - - - - - Encoder CLASS - - - - - - -
// - - - - - - - - - - - - - - - - - - -
class Encoder
{
    public:
        Encoder(int pinSignalA, int pinSignalB);
    private:
        int _pinSignalA;
        int _pinSignalB;
};

#endif














