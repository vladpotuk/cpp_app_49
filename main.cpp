

#include "Func.h"
void drawRectangle(int N, int K, char symbol) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int height, width;
    char symbol;

    std::cout << "������ ������ ������������ (N): ";
    std::cin >> height;

    std::cout << "������ ������ ������������ (K): ";
    std::cin >> width;

    std::cout << "������ ������ ��� ��������� ������������: ";
    std::cin >> symbol;

    drawRectangle(height, width, symbol);

    return 0;
}
