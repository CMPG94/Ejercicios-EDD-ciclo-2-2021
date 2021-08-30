#include <iostream>
#include <bitset>
using namespace std; 

int main() { 
int x = 5; 

cout << x <<":" << "\t" << bitset<8>(x) << endl;
cout << "3:" << "\t" << bitset<8>(3) << endl;
cout << x << " AND 3 ( & ) = \n"; 

x &= 3; // x = x & 3 & : AND binario si iguaLes, true(1) si diferentes, faLse(0)
cout << x << "\t" << bitset<8>(x) << endl; 

x = 5; 
cout << x << " OR 3 ( | ) = \n"; 

x |= 3; // x = x 3 I : OR binario si aLquno es 1, true(1) si ambos 0, faLse(1) 
cout << x << "\t" << bitset<8>(x) << endl; 

x = 5; 
cout << x << " XOR 3 ( A ) = \n"; 
x ^= 3; // x = x A 3 ; XOR si iguaLes, faLse(0) si diferentes, true(1) 
cout << x << "\t" << bitset<8>(x) << endl; 

cout << ".....................................\n"; 

x = 13;
cout << x << ":"<< "\t" << bitset<8>(x) << endl; 
cout << x << " » 3 = \n"; 
x >>= 3; // x = x >> 3 : Desplazar n bits a la derecha
cout << x << "\t" << bitset<8>(x) << endl; 

x = 13; 
cout << x << " << 3 = \n";
x <<= 3; // x = x << 3 << : Desplazar n bits a La izquierda
cout << x << "\t" << bitset<8>(x) << endl; 

return 0; 
} 
