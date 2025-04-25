#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char A[15];
	char B[15];
	std::cout <<"Masukkan kata 1 : ";std::cin >> A;
	std::cout <<"Masukkan kata 2 : ";std::cin >> B;
	if (strcmp(A,B) == 0){
		std::cout <<"Kata 1 dan 2 sama"<<std::endl;	 
	}else{
		std::cout <<"Kata 1 dan 2 tidak sama" <<std::endl;
	}
	return 0;
}
