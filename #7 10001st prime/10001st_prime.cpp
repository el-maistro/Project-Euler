#include<iostream>
#include<vector>

typedef unsigned int u_int; 

std::vector<u_int> vPrimes;

bool isPrime(u_int uiNumber){
    //Verificar si el numero es divisible por los numeros primos menor a  uiNumber
    for(auto uiTmpNumber : vPrimes){
        if(uiNumber % uiTmpNumber == 0){
            return false;
        }
    }
    return true;
}

int main(){
    u_int iCounter = 1;
    u_int uiFound = 0;
    while(++iCounter){
        if(isPrime(iCounter)){
            vPrimes.push_back(iCounter);
            //Incrementar la cantidad de primos encontrados 
            uiFound++;
            if(uiFound >= 10001){
                break;
            }
        } 
    }
    //Mostrar elemento 10001/ultimo del vector
    std::cout<<"Result: "<<vPrimes[vPrimes.size()-1]<<std::endl;
    return 0;
}