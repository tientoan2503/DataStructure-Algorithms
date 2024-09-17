//
//  Thuật toán sinh tổ hợp
//
//  Created by Nguyễn Tiến Toàn  on 17/9/24.
//

#include <iostream>

// with n >= 1 & k <= n
void generation(int n, int k)
{
    int x[k];
    // init first combination
    for (int i = 0; i < k; i++)
    {
        x[i] = i + 1;
    }

    bool isFinalCombination = false;
    do
    {
        for (int i = 0; i < k; i++)
        {
            std::cout << x[i] << ", ";
        }
        std::cout << std::endl;

        // Tìm vị trí có thể tăng giá trị
        int i;
        for (i = k - 1; i >= 0; i--) {
            if (x[i] < n - k + i + 1) {
                break; // Nếu tìm được vị trí để tăng thì thoát vòng lặp
            }
        }

        if (i >= 0) {
            x[i]++; // Tăng giá trị tại vị trí i
            for (int j = i + 1; j < k; j++) {
                x[j] = x[j - 1] + 1; // Cập nhật các giá trị tiếp theo
            }
        } else {
            isFinalCombination = true; // Khi không còn vị trí nào để tăng thì kết thúc
        }

    } while (!isFinalCombination);
}

int main(int argc, const char *argv[])
{
    generation(5, 3);
    return 0;
}
