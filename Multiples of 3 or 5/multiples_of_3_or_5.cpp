#include<iostream>

int main(){
    int iCount = 0, iFinalCount = 0;
    for(; iCount<1000; iCount++){
        if(iCount % 3 == 0 || iCount % 5 == 0){
            iFinalCount += iCount;
        }
    }
    std::cout<<"Result: "<<iFinalCount<<std::endl;
    return 0;
}
