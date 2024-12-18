#include <iostream>
#include <vector>

// #1
//
//double calculateMean(const std::vector<int>& numbers) {
//    double sum = 0;
//    for (int num : numbers) {
//        sum += num;
//    }
//    return sum / numbers.size();
//}
//
//double calculateAverage(const std::vector<int>& numbers) {
//    int minVal = numbers[0];
//    int maxVal = numbers[0];
//    for (int num : numbers) {
//        if (num < minVal) {
//            minVal = num;
//        }
//        if (num > maxVal) {
//            maxVal = num;
//        }
//    }
//    return (minVal + maxVal) / 2.0;
//}
//
//double calculateMedian(std::vector<int>& numbers) {
//    size_t size = numbers.size();
//
//    // —ортировка пузырьком
//    for (size_t i = 0; i < size - 1; ++i) {
//        for (size_t j = 0; j < size - i - 1; ++j) {
//            if (numbers[j] > numbers[j + 1]) {
//                int temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
//
//    if (size % 2 == 0) {
//        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
//    }
//    else {
//        return numbers[size / 2];
//    }
//}
//
//int calculateMode(const std::vector<int>& numbers) {
//    int mode = numbers[0];
//    int maxCount = 0;
//
//    for (int i = 0; i < numbers.size(); ++i) {
//        int count = 1;
//        for (int j = i + 1; j < numbers.size(); ++j) {
//            if (numbers[i] == numbers[j]) {
//                count++;
//            }
//        }
//        if (count > maxCount) {
//            maxCount = count;
//            mode = numbers[i];
//        }
//    }
//    return mode;
//}
//
//int main() {
//    std::vector<int> numbers = { 1, -1, 5, 2, 4, 2, 1, 3, 2, 7, -6, 9 };
//
//    double mean = calculateMean(numbers);
//    double average = calculateAverage(numbers);
//    double median = calculateMedian(numbers);
//    int mode = calculateMode(numbers);
//
//    std::cout << "—реднее арифметическое: " << mean << std::endl;
//    std::cout << "—реднее: " << average << std::endl;
//    std::cout << "ћедиана: " << median << std::endl;
//    std::cout << "ћода: " << mode << std::endl;
//
//    return 0;
//}

// #2
//
//void bubbleSort(std::vector<double>& numbers, bool ascending) {
//    size_t n = numbers.size();
//    for (size_t i = 0; i < n - 1; ++i) {
//        for (size_t j = 0; j < n - i - 1; ++j) {
//            bool condition = ascending ? (numbers[j] > numbers[j + 1]) : (numbers[j] < numbers[j + 1]);
//            if (condition) {
//                double temp = numbers[j];
//                numbers[j] = numbers[j + 1];
//                numbers[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int N;
//    std::cout << "¬ведите количество элементов: ";
//    std::cin >> N;
//
//    std::vector<double> numbers(N);
//    std::cout << "¬ведите элементы массива: ";
//    for (int i = 0; i < N; ++i) {
//        std::cin >> numbers[i];
//    }
//
//    char order;
//    std::cout << "—ортировать по возрастанию (¬ведите '<') или по убыванию (¬ведите '>'): ";
//    std::cin >> order;
//
//    bool ascending = (order == '<');
//    bubbleSort(numbers, ascending);
//
//    std::cout << "ќтсортированный массив: ";
//    for (double num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    if (ascending) {
//        std::cout << "ћинимальный элемент: " << numbers[0] << std::endl;
//    }
//    else {
//        std::cout << "ћаксимальный элемент: " << numbers[0] << std::endl;
//    }
//
//    return 0;
//}

// #3
//
//int countSentences(const std::string& text) {
//    int count = 0;
//    for (char ch : text) {
//        if (ch == '.' || ch == '!' || ch == '?') {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    std::string text = "The other three old people nodded their heads slowly up and down, and said СAbsolutely true, Just as true as can beТ. And Grandpa Joe said- You mean to say IТve never told you about Mr Willy Wonka and his factory?- Never Ч answered little Charlie.- Good heavens above! I donТt know whatТs the matter with me!";
//
//    int sentenceCount = countSentences(text);
//    std::cout << " оличество предложений: " << sentenceCount << std::endl;
//
//    return 0;
//}