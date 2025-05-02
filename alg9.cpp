#include <iostream>
using namespace std;

int main(){
	
	int umur;
	std::cout<< "Masukkan umur : ";
	std::cin>> umur;
	
	if(umur<=18){
		if(umur<=10){
			std::cout<< "Anak-anak" <<std::endl;
		}else{
			
			std::cout<< "Remaja" <<std::endl;
		}
	}else{
		std::cout<< "Bukan usia anak maupun remaja" <<std::endl;
	}
	return 0;
}
