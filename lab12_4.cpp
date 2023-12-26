#include<iostream>

using namespace std;

//Function Prototype
template <typename T>
T mySwap(T &, T &);

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

//Function Definition with Template form อะเช้ยโครตเท่ โครตอันตราย
template <typename currentType>
currentType mySwap(currentType &x,currentType &y){
	currentType i;
	i = x;
	x = y;
	y = i;
	return x;
	return y;
}