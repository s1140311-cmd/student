#include <iostream>
using namespace std;

int main() {
    // 外層迴圈控制行數，從 1 到 9
    for (int i = 1; i <= 9; i++) {
        // 內層迴圈控制列數，從 1 到 9
        for (int j = 1; j <= 9; j++) {
            // 打印每個乘積，並排版整齊
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        // 換行
        cout << endl;
    }
    return 0;
}
