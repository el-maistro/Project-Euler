#include<iostream>

/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

unsigned long ReverseNumber(unsigned long ulNumber){
	unsigned long ulReversed = 0;
	while(ulNumber > 0){
		//Extrae el ultimo digito
		ulReversed = ulReversed * 10 + ulNumber % 10;
		//Divide el valor toal entre 10
		ulNumber /= 10;
	}
	return ulReversed;
}

int main(){
	unsigned int iFinal = 0;
	//Desd 100 hasta 999
	for(int i1=100; i1<1000; i1++){
		//Desde 100 hasta 999
		for(int i2=100; i2<1000; i2++){
			unsigned int nTmp = i1 * i2;
			//Verificar si valor es palindromo
			if(nTmp == ReverseNumber(nTmp)){
				//Si es mayor al palindromo mas grande actual remplazarlo
				if(nTmp > iFinal){
					iFinal = nTmp;
				}
			}
		}
	}
	std::cout<<"Palindromo mas largo de dos numeros de tres digitos: "<<iFinal<<std::endl;
	return 0;
}