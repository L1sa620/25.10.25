#include<iostream>
int main(){
using u_t=unsigned;
u_t a = 0;
std::cin >> a;
if (std::cin.eof()){
	std::cout << a << "\n";
} else if (std::cin.fail()){
	std::cerr << "Input error \n";
	return 1;
}
}
