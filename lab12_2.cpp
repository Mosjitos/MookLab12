#include<iostream>
using namespace std;

//Function Prototype
int gcd(int, int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

//Function Definition
int gcd(int x, int y){
    if(x%y == 0){ return y;}
    else return gcd(y, x%y);
}
