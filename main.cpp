#include <iostream>

int main() {
    int snake[5][5];
    int direction = 1, temp = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            snake[i][j] = temp;
            temp += direction;
        }
        temp = snake[i][4] + 5;
        direction *= -1;
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << snake[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
