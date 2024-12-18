#include <iostream>
#include <cstring>

// #1
//double heronSqrt(double a) {
//    if (a < 0) {
//        std::cerr << "Ошибка: корень из отрицательного числа!" << std::endl;
//        return -1;
//    }
//    double x = a;
//    double prevX;
//
//    do {
//        prevX = x;
//        x = 0.5 * (prevX + a / prevX);
//    } while (abs(x - prevX) > 1e-10); // Прекращаем, когда разница невелика
//
//    return x;
//}
//
//int main() {
//    double num;
//    std::cout << "Введите число для вычисления квадратного корня: ";
//    std::cin >> num;
//
//    double result = heronSqrt(num);
//    std::cout << "Квадратный корень числа " << num << " равен " << result << std::endl;
//
//    return 0;
//}

// #2
//double power(double base, int exponent) {
//    if (exponent == 0) return 1;
//    double result = 1;
//    for (int i = 0; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//double generalizedRoot(double a, int k) {
//    if (a < 0 && k % 2 == 0) {
//        std::cerr << "Ошибка: корень из отрицательного числа!" << std::endl;
//        return -1;
//    }
//    double x = a;
//    double prevX;
//
//    do {
//        prevX = x;
//        x = 0.5 * (prevX + a / power(prevX, k - 1));
//    } while (abs(x - prevX) > 1e-10); // Прекращаем, когда разница невелика
//
//    return x;
//}
//
//int main() {
//    double num;
//    int k;
//
//    std::cout << "Введите число для вычисления корня: ";
//    std::cin >> num;
//    std::cout << "Введите основание корня (k >= 2): ";
//    std::cin >> k;
//
//    if (k < 2) {
//        std::cerr << "Ошибка: основание корня должно быть >= 2!" << std::endl;
//        return -1;
//    }
//
//    double result = generalizedRoot(num, k);
//    std::cout << k << "-й корень из числа " << num << " равен " << result << std::endl;
//
//    return 0;
//}

// #3
//
//bool compareStrings(const char* str1, const char* str2) {
//    return (std::strcmp(str1, str2) == 0);
//}
//
//int main() {
//    const char* test1 = "123";
//    const char* test2 = "123";
//    const char* test3 = "ahaha";
//    const char* test4 = "ahahah";
//    const char* test5 = "";
//    const char* test6 = "blablabla";
//
//    std::cout << "Сравнение \"" << test1 << "\" и \"" << test2 << "\": " << (compareStrings(test1, test2) ? "true" : "false") << std::endl;
//    std::cout << "Сравнение \"" << test3 << "\" и \"" << test4 << "\": " << (compareStrings(test3, test4) ? "true" : "false") << std::endl;
//    std::cout << "Сравнение \"" << test5 << "\" и \"" << test6 << "\": " << (compareStrings(test5, test6) ? "true" : "false") << std::endl;
//
//    return 0;
//}
