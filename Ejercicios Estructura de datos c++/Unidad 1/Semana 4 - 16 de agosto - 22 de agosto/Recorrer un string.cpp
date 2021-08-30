#include <iostream>
using namespace std;
int main() {
	string s = "¡Hola mundo!";
	int i = 0;
	while (i < s.length()) {
	cout << s.at(i) << endl;
	i++;
	}
	return 0;
}
