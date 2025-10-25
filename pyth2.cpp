#include<iostream>
bool pyth(unsigned a, unsigned b, unsigned c);
bool pyth(unsigned a, unsigned b, unsigned c){
bool p = a*a == (b*b + c*c);
p = p || (b*b == (a*a + c*c));
p = p || (c*c == (a*a + b*b));
return p;
}
int main(){
using u_t=unsigned;
const u_t max = 999999;
u_t a = 0, b = 0, c = 0;
size_t count = 0;
while(std::cin >> a){
	count = count + pyth(a,b,c)?1:0;
	c = b;
	b = a;
}
if (std::cin.eof()){
	if ( a > (max/a)){
	return 2;
	}
	std::cout << count << "\n";
} else if (std::cin.fail()){
	std::cerr << "Input error \n";
	return 1;
}
}
