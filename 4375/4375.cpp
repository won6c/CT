#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {  
        int remainder = 1;
        int count = 1;

        while (remainder % n != 0) {
            remainder = (remainder * 10 + 1) % n;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}