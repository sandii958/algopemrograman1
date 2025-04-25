#include <iostream>
#include<string.h>
using namespace std;

int main(){
	
	int n;
	std::cout <<" Masukkan bilangan : ";std::cin>>n;
	if(n % 2 == 0){
		std::cout <<"Adalah bilangan genap" <<std::endl;
	}else{
		std::cout <<"Adalah bilangan ganjil" <<std::endl;
	}
	return 0;
}
