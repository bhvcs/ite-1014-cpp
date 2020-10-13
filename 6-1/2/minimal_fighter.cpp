#include "minimal_fighter.h"
#include <iostream>

MinimalFighter::MinimalFighter(){
    int mHp;
    int mPower;
    FighterStatus mStatus; //defined by enum
}
MinimalFighter::MinimalFighter(int _hp, int _power){
        mHp = _hp;
        mPower = _power;
        mStatus = (_hp > 0) ? Alive : Dead;
}
int MinimalFighter::hp(){
    return this->mHp;
}
int MinimalFighter::power(){
    return this->mPower;
}
FighterStatus MinimalFighter::status(){
    return mStatus;
}
void MinimalFighter::setHp(int _hp){
    this->mHp = _hp;
}
void MinimalFighter::hit(MinimalFighter* _enemy){
    int aHp = this->mHp - _enemy->mPower;
    this->setHp(aHp);
    int bHp = _enemy->mHp - this->mPower;
    _enemy->setHp(bHp);
    this->mStatus = (this->mHp > 0) ? Alive : Dead;
    _enemy->mStatus = (_enemy->mHp > 0) ? Alive : Dead;
}

    //Mini:: is it contiually using?

void MinimalFighter::attack(MinimalFighter* _enemy){
    int cHp = _enemy->mHp - this->mPower;
    _enemy->setHp(cHp);
    this->mPower = 0;
    _enemy->mStatus = (_enemy->mHp > 0) ? Alive : Dead;

}
void MinimalFighter::fight(MinimalFighter* _enemy){
    while(this->mHp != 0 && _enemy->mHp != 0){
        int dHp = this->mHp - _enemy->mPower;
        this->setHp(dHp);
        int eHp = _enemy->mHp - this->mPower;
        _enemy->setHp(eHp);
    }
    this->mStatus = (this->mHp > 0) ? Alive : Dead;
    _enemy->mStatus = (_enemy->mHp > 0) ? Alive : Dead;

}

