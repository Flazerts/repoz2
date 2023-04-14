#include <iostream>

using namespace std;

template<typename T>
T s(T x, T y) { // простая смена
    swap(x,y);
    cout << "y = " << y << endl << "x = ";
    return x;
}

int main()
{ 
    int x;
    int y;
    cout << "enter y: " << endl; 
    cin >> y;
    cout << "enter x: " << endl;
    cin >> x; // даем значения 
    cout << s(x,y) << endl; // смена
}

