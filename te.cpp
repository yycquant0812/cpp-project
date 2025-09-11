// main.cpp  —  全部註解版（逐行解鎖示範用）
// ------------------------------------------------------------
// 編譯：g++ -std=c++17 -Wall -Wextra main.cpp -o main
// 執行：./main
// 使用方式：一次只解鎖（移除 //）一個 main() 區塊，其餘保持註解。

// ============================================================
// [0] Hello, World：C++ 程式骨架（先驗一下編譯環境 OK）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   std::cout << "Hello, World!\n"; // 螢幕印出字串，\n 是換行
//   return 0;                        // 回傳 0 代表「程式順利結束」
// }
#include <iostream>
int main() {
    std::cout << "Hello world";
    return 0;
}


// ============================================================
// [1] 宣告 vs 指派（對應你的截圖：int x; x = 5;）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   int x;            // 宣告（declaration）：跟編譯器說「我需要一個 int 變數叫 x」
//   x = 5;            // 指派（assignment）：把數值 5 放到 x 裡
//   std::cout << x;   // 這時輸出會是 5
//   return 0;
// }

// 小挑戰：把上面改成「同時宣告＋初始化」：int x = 5;
// 想觀察差異可用兩行版（宣告＋指派）和一行版（初始化）交替示範。

// ============================================================
// [2] 整數 / 浮點數：number types（安全帶先繫好）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   int year = 2025;                 // 整數（沒有小數點）
//   double price = 10.99;            // 浮點數（有小數點）
//   double gpa = 2.5, temperature = 25.1; // 同行可宣告多個
//   std::cout << "year=" << year << "\n";
//   std::cout << "price=" << price << "\n";
//   std::cout << "gpa=" << gpa << ", temp=" << temperature << "\n";
//   return 0;
// }

// 補充：還有 long long（更大的整數）、float（精度較低的浮點數）
// 先用 int / double 就很夠。

// ============================================================
// [3] char vs string（對應你的截圖：'A' vs "BC"）
// ------------------------------------------------------------
// #include <iostream>
// #include <string> // 使用 std::string 需要這個
// int main() {
//   char grade = 'A';            // char：單一字元，用「單引號」
// //   char initial = 'BC';      // ⚠️ 這是多字元常值：要嘛編譯錯、要嘛實作定義（不推薦）

//   std::string initials = "BC"; // 多個字元請用 string，且用「雙引號」
//   std::cout << "grade=" << grade << ", initials=" << initials << "\n";
//   return 0;
// }

// 教學梗點：請學生預測把 'BC' 解鎖會發生什麼，再解鎖看編譯器怎麼抱怨。

// ============================================================
// [4] 布林值與格式（true/false 輸出設定）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   bool pass = true;                      // bool 只有 true/false
//   std::cout << pass << "\n";             // 預設輸出 1（true）或 0（false）
//   std::cout << std::boolalpha << pass;   // boolalpha：把 1/0 變成 true/false 文字
//   return 0;
// }

// ============================================================
// [5] 輸入輸出：cin / cout（互動一下）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   int a = 0, b = 0;                    // 先給初值，習慣好一點
//   std::cout << "Enter two integers: "; // 提示使用者
//   std::cin >> a >> b;                  // 從鍵盤依序讀兩個整數
//   std::cout << "a+b=" << (a + b) << "\n";
//   return 0;
// }

// 小提醒：cin 讀不到正確型態（例如輸入非數字）就會進入錯誤狀態，之後讀取都失敗。
// 初學先相信輸入；進階再教輸入驗證與錯誤清除（cin.clear()/ignore）。

// ============================================================
// [6] 常數 const、運算與型別轉換（安全又穩定）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   const double PI = 3.141592653589793; // const：不可被修改的常數
//   int r = 3;                           // 半徑
//   double area = PI * r * r;            // 自動提升型別：int r 會提升為 double 再運算
//   std::cout << "circle area=" << area << "\n";
//   // PI = 3.14; // ⚠️ 解鎖這行會編譯錯：const 不能被重新指派
//   return 0;
// }

// ============================================================
// [7] 迷你練習：成績字母轉描述（if/else）
// ------------------------------------------------------------
// #include <iostream>
// int main() {
//   char grade = 'B';                  // 試著改成 A/C/D/F 看輸出
//   if (grade == 'A') {
//     std::cout << "Excellent\n";
//   } else if (grade == 'B') {
//     std::cout << "Good\n";
//   } else if (grade == 'C') {
//     std::cout << "Fair\n";
//   } else {
//     std::cout << "Keep going!\n";
//   }
//   return 0;
// }

// ============================================================
// [8] 綜合小作業：學生姓名＋分數（string + int + 格式化）
// ------------------------------------------------------------
// #include <iostream>
// #include <string>
// int main() {
//   std::string name;    // 姓名
//   int score = 0;       // 分數
//   std::cout << "Name and score: ";
//   std::cin >> name >> score; // demo 簡單起見用空白分隔（進階可改 getline）
//   std::cout << name << " got " << score << " points.\n";
//   // 小延伸：if (score >= 60) 印 "Pass" 否則 "Fail"
//   return 0;
// }

// ============================================================
// [9] 算術運算子 + - * / % 以及型別注意事項
// ------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main() {
//   int a = 13, b = 5;                 // 兩個整數
//   cout << "a=" << a << ", b=" << b << "\n";
//
//   // 基本四則
//   cout << "a + b = " << (a + b) << "\n"; // 13 + 5 = 18
//   cout << "a - b = " << (a - b) << "\n"; // 13 - 5 = 8
//   cout << "a * b = " << (a * b) << "\n"; // 13 * 5 = 65
//
//   // 整數除法：小數會被捨去！(trunc toward 0)
//   cout << "a / b (int) = " << (a / b) << "   // 13/5 -> 2\n";
//
//   // 取餘數（mod / remainder）
//   cout << "a % b = " << (a % b) << "         // 13%5 -> 3\n";
//
//   // 想要「有小數的除法」→ 轉成 double 再除
//   cout << "a / b (double) = " << (static_cast<double>(a) / b) << "\n";
//
//   // 複合指定運算子（+=、-=、*=、/=、%=）
//   int x = 10;
//   x += 3;   // x = x + 3  -> 13
//   x *= 2;   // x = x * 2  -> 26
//   x -= 1;   // x = x - 1  -> 25
//   cout << "x 經過 +=, *=, -= 後 = " << x << "\n";
//
//   // ++ 與 --（前置／後置）
//   int y = 7;
//   cout << "y++ 回傳 " << y++ << ", 之後 y=" << y << "\n"; // 先回傳7，再變8
//   cout << "++y 回傳 " << ++y << ", 之後 y=" << y << "\n"; // 先變9，再回傳9
//
//   return 0;
// }
//
// // 小提醒：不同編譯器/標準對「負數 %」的定義可能不同，先避免在負數上玩 %。
// // 需要精準小數計算（例如金額），建議用整數表示最小單位（例如「分」）再轉換。

// ============================================================
// [10] 布林與邏輯運算子：!（非）、&&（且）、||（或）、比較運算子
// ------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main() {
//   // 比較運算子會回傳 bool（true/false）
//   int a = 8, b = 12;
//   bool p = (a < b);    // 8 < 12 -> true
//   bool q = (a == 10);  // 8 == 10 -> false
//
//   cout << boolalpha;   // 之後 bool 都輸出 true/false（不是 1/0）
//   cout << "p=" << p << ", q=" << q << "\n";
//
//   // 邏輯非（NOT）
//   cout << "!p = " << (!p) << "\n";        // p 是 true -> !p 是 false
//
//   // 邏輯且（AND）：兩邊都為 true 才是 true
//   cout << "p && q = " << (p && q) << "\n"; // true && false -> false
//
//   // 邏輯或（OR）：只要有一邊為 true 就是 true
//   cout << "p || q = " << (p || q) << "\n"; // true || false -> true
//
//   // 綜合練習：成績與出席率判斷
//   int score = 75;
//   double attendance = 0.86; // 出席率 86%
//
//   bool pass_score = (score >= 60);
//   bool pass_att   = (attendance >= 0.8);
//   bool pass_all   = pass_score && pass_att; // 及格且出席達標
//
//   cout << "\n成績達標? " << pass_score
//        << "，出席達標? " << pass_att
//        << "，最終通過? " << pass_all << "\n";
//
//   // 另一個例子：申請補考（成績不及格，但出席>=90% 或 作業>=80 分）
//   int hw = 85;
//   bool makeup = (!pass_score) && (attendance >= 0.9 || hw >= 80);
//   cout << "是否符合補考資格? " << makeup << "\n";
//
//   return 0;
// }
//
// // 補充：邏輯運算子有「短路（short-circuit）」特性：
// //  - (condA && condB) 中若 condA 為 false，就不會評估 condB。
// //  - (condA || condB) 中若 condA 為 true，就不會評估 condB。
// // 這能避免不必要的運算（甚至避免潛在錯誤，例如除以 0）。

// ============================================================
// Tips for Teachers（小抄）
// 1) 每段都能獨立上台示範：只保留一個 main() 解鎖，其它段落維持註解。
// 2) 有效互動：先請學生預測輸出，再解鎖跑結果；建立「先猜再驗證」的科學肌肉。
// 3) 想更刺激：在 [3] 解鎖 `char initial = 'BC';` 看編譯器怎麼碎念，順便講型別嚴謹。
// 4) 接力：把 [5][6][7][8] 串起來做「小型成績系統」任務。