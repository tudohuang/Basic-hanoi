#include <iostream>
using namespace std;

void hanoi(char start, char mid, char end, int n) {
    if (n == 1) {
        cout << "從 " << start << " 到 " << end << endl;
    } else {
        hanoi(start, end, mid, n - 1); 
        cout << "從 " << start << " 到 " << end << endl; 
        hanoi(mid, start, end, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    hanoi('a', 'b', 'c', n);
    return 0;
}
