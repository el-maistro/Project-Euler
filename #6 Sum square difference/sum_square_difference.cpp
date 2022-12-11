#include<iostream>
#include<cmath>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main(){
    unsigned int uiRegularSum = 0; // 1 + 2 + 3 + 4 + 5 + 6...
    unsigned int uiSquaresSum = 0; // 1^2 + 2^2 + 3^2 + 4^2... 
    unsigned int uiSquareOfSum = 0; // (1 + 2 + 3 + 4...+100)^2
    // Result = uiSquareofSum - uiSquaresSum
    for(int iCount=1; iCount<=100; iCount++){
        // 1 + 2 + 3 + 4 + 5 + 6...
        uiRegularSum += iCount;
        // 1^2 + 2^2 + 3^2 + 4^2... 
        uiSquaresSum += pow(iCount, 2);
    }
    // (1 + 2 + 3 + 4...+100)^2
    uiSquareOfSum = pow(uiRegularSum, 2);
    std::cout<<"Result: "<<(uiSquareOfSum - uiSquaresSum)<<std::endl;
    return 0;
}