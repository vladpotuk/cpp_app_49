

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

    std::cout << "¬вед≥ть висоту пр€мокутника (N): ";
    std::cin >> height;

    std::cout << "¬вед≥ть ширину пр€мокутника (K): ";
    std::cin >> width;

    std::cout << "¬вед≥ть символ дл€ виведенн€ пр€мокутника: ";
    std::cin >> symbol;

    drawRectangle(height, width, symbol);

    return 0;
}
