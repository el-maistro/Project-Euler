#include<iostream>

int main(){
    long lCount = 1;
    long lCurrent = 1;
    long lPrev = 0;
    long lFinalValue = 0;
    while(1){
        lCount = lCurrent + lPrev;
        lPrev = lCurrent;
        lCurrent = lCount;
        if(lCount >= 4000000){
            break;
        }
        if(lCurrent % 2 == 0){
            lFinalValue += lCurrent;
        }
    }
    std::cout<<"Result: "<<lFinalValue;
    return 0;
}

