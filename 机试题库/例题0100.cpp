#define _CRT_SECURE_NO_WARNINGS
//abc （清华大学复试上机题）
# include<iostream>

int main() {
    int a = 0, b = 0, c = 0;
    for (a = 0; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            for (c = 0; c < 10; c++) {
                if ((a + b) * 100 + (b + c) * 10 + c * 2 == 532) {
                    std::cout << a << " " << b << " " << c << std::endl;
                }
            }
        }
    }
    std::cin.get();
}