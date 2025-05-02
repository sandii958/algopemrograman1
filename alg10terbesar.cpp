#include <iostream>
using namespace std;
int main(){
	
	int a,b,c,d;
	
	std::cout<< "Masukkan bilangan bilangan bulat:" <<std::endl;
	std::cin>> a >> b >> c >> d;
	
	int terbesar= a;
	
	if (b > terbesar){
			terbesar=b;
	}
	if (c > terbesar){
			terbesar=c;
	}
	if (d > terbesar){
			terbesar=d;
	}
	std::cout<< "Bilangan terbesar adalah: "<< terbesar <<std::endl;
	
	return 0;
	
}
