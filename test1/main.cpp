#include <iostream>
using namespace std;

int main() {
    // 星號金字塔
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; // 分隔用

    // 九九乘法表
    int i = 1, j;
    while (i <= 9) {
        j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
