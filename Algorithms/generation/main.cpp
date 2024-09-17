//
//  Thuật toán xâu sinh nhị phân
//
//  Created by Nguyễn Tiến Toàn  on 17/9/24.
//

#include <iostream>

void generation(int n) {
    int x[100];
    // init beginning value of x: 00...000
    for (int i = 0; i < n; i++) {
        x[i] = 0;
    }
    bool isFinalValue = false;
    // loop until final value generated
    do {
        for (int i = 0; i < n; i++) {
            std::cout << x[i];
        }
        std::cout << std::endl;
        
        // generate the next value of binary
        for (int i = n - 1; i >= 0; i--) {
            if (x[i] == 1) {
                if (i == 0) {
                    isFinalValue = true;
                } else {
                    x[i] = 0;
                }
            } else {
                x[i] = 1;
                break;
            }
        }
    } while (!isFinalValue);
}

int main(int argc, const char * argv[]) {
    generation(3);
    return 0;
}
