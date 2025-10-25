#include<iostream>
using u_t=unsigned;

bool pyth(u_t a, u_t b, u_t c);

bool max(u_t x, u_t y) {
const u_t MAX = 999999;
if (y != 0 && x > MAX / y){
std::cerr << "Crossing the border";
return false;
} 
return true;
}

bool pyth(u_t a, u_t b, u_t c){
bool p = a*a == (b*b + c*c);
p = p || (b*b == (a*a + c*c));p = p || (c*c == (a*a + b*b));
return p;
}
int main(){
u_t a = 0, b = 0, c = 0;
size_t count = 0;

while(std::cin >> a){
	count = count + pyth(a,b,c)?1:0;
	c = b;
	b = a;
}

if (std::cin.eof()){
	if (max(a,b)|| max(a,c) || max(b,c)){
	return 2;
	}
	std::cout << count << "\n";
} else if (std::cin.fail()){
	std::cerr << "Input error \n";
	return 1;
	}
}
