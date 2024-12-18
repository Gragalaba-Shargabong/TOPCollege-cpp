#include <iostream>
#include <cstring>
#include <vector>

// #1
//
//char* left(const char* str, int N) {
//    char* result = new char[N + 1]; // +1 для нуль-терминатора
//    strncpy(result, str, N);
//    result[N] = '\0'; // добавляем нуль-терминатор
//    return result;
//}
//
//char* right(const char* str, int N) {
//    int length = strlen(str);
//    char* result = new char[N + 1]; // +1 для нуль-терминатора
//    strncpy(result, str + length - N, N);
//    result[N] = '\0'; // добавляем нуль-терминатор
//    return result;
//}
//
//int main() {
//    char str[] = "nitroglycerin";
//
//    char* str2 = left(str, 5); // строка “nitro”
//    char* str3 = right(str, 8); // строка “glycerin”
//
//    std::cout << "Left: " << str2 << std::endl;
//    std::cout << "Right: " << str3 << std::endl;
//
//    delete[] str2;
//    delete[] str3;
//
//    return 0;
//}

// #2
//
//int main() {
//    short int number = 65280;
//    char* byte_ptr = reinterpret_cast<char*>(&number);
//
//    if (byte_ptr[0] == 0 && byte_ptr[1] == -1) {
//        std::cout << "Порядок следования байт: Big-endian" << std::endl;
//    }
//    else if (byte_ptr[0] == -1 && byte_ptr[1] == 0) {
//        std::cout << "Порядок следования байт: Little-endian" << std::endl;
//    }
//    else {
//        std::cout << "Неизвестный порядок следования байт" << std::endl;
//    }
//
//    return 0;
//}

// #3
//
//bool not_equal(int a, int b) {
//    return a != b;
//}
//
//bool greater(int a, int b) {
//    return a > b;
//}
//
//bool divides(int a, int b) {
//    return a % b == 0;
//}
//
//std::vector<int> filter(int* arr, int size, int param, bool (*func)(int, int)) {
//    std::vector<int> result;
//    for (int i = 0; i < size; ++i) {
//        if (func(arr[i], param)) {
//            result.push_back(arr[i]);
//        }
//    }
//    return result;
//}
//
//int main() {
//    int arr[] = { 1, 2, 5, 6, 7, 8, 0, -3 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    auto arr2 = filter(arr, size, 5, not_equal);
//    auto arr3 = filter(arr, size, 0, greater);
//    auto arr4 = filter(arr, size, 2, divides);
//
//    std::cout << "Массив без чисел 5: ";
//    for (int num : arr2) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Массив из положительных чисел: ";
//    for (int num : arr3) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Массив из четных чисел: ";
//    for (int num : arr4) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
