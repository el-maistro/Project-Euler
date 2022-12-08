#include<iostream>
#include<cmath>

int main(){
    unsigned long long uNumber = 600851475143;
    unsigned long lBiggest = 0;
    
    //Encontrar todas las veces que es divisible por dos
    while (uNumber % 2 == 0){
        std::cout<<"2 ";
        uNumber /= 2;
    }

    for(unsigned long iCount = 3; iCount <= sqrt(uNumber); iCount += 2){
        while(uNumber % iCount == 0){
            //Si el valor actual de uNumber es divisible por iCount mostrarlo en pantalla
            std::cout<<iCount<<" ";
            //Dividir el valor actual por el numero primo
            uNumber /= iCount; 
            lBiggest = iCount;
        }
    }

    if(uNumber > 2){
        std::cout<<uNumber<<std::endl;
        if(uNumber > lBiggest){
            lBiggest = uNumber;
        }
    }
    std::cout<<"Biggest: "<<lBiggest<<std::endl;
    return 0;
}