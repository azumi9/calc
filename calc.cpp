#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, op;
    double result;

    cout << "first\n";
    cin >> a;

    cout << "Op\n1\t+\n2\t-\n3\t*\n4\t/\n5\t^\n\n";
    cin >> op;

    cout << "second\n";
    cin >> b;

    switch (op) {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
            result = (double)a / b;
            break;
     
    case 5:
        result = pow(a, b);
        break;
    
    }
    cout << " result = " << result << endl;
return 0;
}