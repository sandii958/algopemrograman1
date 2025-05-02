#include <iostream>
using namespace std;
int main(){
	
	int hari;
	std::cout<< " Masukkan kode hari :";
	std::cin>>hari;
	switch(hari){
		case 1:
			std::cout<< "Senin";
			break;
		
		case 2:
			std::cout<< "Selasa";
			break;
			
		case 3:
			std::cout<< "Rabu";
			break;
			
		case 4:
			std::cout<< "Kamis";
			break;
			
		case 5:
			std::cout<< "Jumat";
			break;
		case 6:
			std::cout<< "Sabtu";
			break;
			
		case 7:
			std::cout<< "Minggu";
			break;
			
		default:
			std::cout<< "Tidak ada hari";			
	}
	return 0;
}
