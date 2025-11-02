#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    //以 while loop 改寫

    int i = 1;                // 初始化（原本在 for 迴圈的第一段）
    while (i <= 5) {          // 條件判斷（原本在 for 第二段）
        cout << i << " ";
        i++;                  // 增加變數（原本在 for 第三段）
    }
    cout << endl;


    for (int i = 1; i <= 9; i++) {         // 外圈：控制「第幾個數」
        for (int j = 1; j <= 9; j++) {     // 內圈：控制「乘上誰」
            cout << i << "×" << j << "=" << i * j << "\t";
        }
        cout << endl; // 換行，完成一列
    }
    return 0;
  
}


