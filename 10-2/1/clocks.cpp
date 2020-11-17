#include <iostream>
#include "clock_time.h"
#include "clocks.h"

using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond):_clockTime(hour, minute, second, 1){
    _driftPerSecond = driftPerSecond;
}
void Clock::reset(){
    _clockTime.ClockTime::reset();
}
void Clock::tick(){
    _clockTime.increment();
    _totalDrift += _driftPerSecond; 
}
NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond){}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond){}

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond){}

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond){}

SundialClock::SundialClock(int hour, int minute, int second): NaturalClock(hour, minute, second, 0.0){}

CuckooClock::CuckooClock(int hour, int minute, int second): MechanicalClock(hour, minute, second, 0.0){}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second): MechanicalClock(hour, minute, second, 0.000694444){}

WristClock::WristClock(int hour, int minute, int second): DigitalClock(hour, minute, second, 0.000347222){}

AtomicClock::AtomicClock(int hour, int minute, int second): QuantumClock(hour, minute, second, 0.000034722){}

void SundialClock::displayTime(){
    cout << "SundialClock " << "";
    _clockTime.display();
    cout <<  ", total drift: " << _totalDrift << endl;
}
void CuckooClock::displayTime(){
    cout << "CuckooClock " << "";
    _clockTime.display();
    cout <<  ", total drift: " << _totalDrift << endl;
}
void GrandFatherClock::displayTime(){
    cout << "GrandFatherClock " << "";
    _clockTime.display();
    cout <<  ", total drift: " << _totalDrift << endl;
}
void WristClock::displayTime(){
    cout << "WristClock " << "";
    _clockTime.display();
    cout <<  ", total drift: " << _totalDrift << endl;
}
void AtomicClock::displayTime(){
    cout << "AtomicClock " << "";
    _clockTime.display();
    cout <<  ", total drift: " << _totalDrift << endl;
}


