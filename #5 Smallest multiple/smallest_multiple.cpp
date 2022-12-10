#include<iostream>

//Optimizar tiempo de ejecucion

int main(){
    int iCounter = 0;
    bool isRunning = true;
    while(isRunning){
        iCounter++;
        for(int iDiv=1; iDiv<=20; iDiv++){
            if(iCounter % iDiv != 0){
                break;
            } else {
                if(iDiv == 20){
                    isRunning = false;
                }
            }
        }
    }
    std::cout<<"Result: "<<iCounter<<std::endl;
    return 0;
}
