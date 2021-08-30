#include <iostream>
using namespace std;
int main(){
	int x;
	int y;
	cin >> x;
	cin >> y;
	x += y; // equivaLe a x = x 4- 3
	cout << x << endl;
	x -= y; // equivaLe a x = x - 3
	cout << x << endl;
	x *= y; // equivaLe a x = x * 3 
	cout << x << endl; 
	x /= y; // equivale a x = x / 3 
	cout << x << endl;
	x %= y; // equivaLe a x = x % 3
	cout << x << endl;
	return 0;
}
