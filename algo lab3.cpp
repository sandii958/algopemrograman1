#include <iostream>
using namespace std;

int main(){
	string kata;
	std::cout <<"Masukkan kata = HALO" <<std::endl;
	std::cin >> kata;
	
	if (kata=="HALO"){
		std::cout <<"Kata yang dimasukkan sesuai" <<std::endl;
	}else{
		std::cout <<"Kata yang dimasukkan tidak sesuai" <<std::endl;
	}
	return 0;
}
