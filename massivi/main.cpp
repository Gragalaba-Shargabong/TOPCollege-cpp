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
//    // ���������� ���������
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
//    std::cout << "������� ��������������: " << mean << std::endl;
//    std::cout << "�������: " << average << std::endl;
//    std::cout << "�������: " << median << std::endl;
//    std::cout << "����: " << mode << std::endl;
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
//    std::cout << "������� ���������� ���������: ";
//    std::cin >> N;
//
//    std::vector<double> numbers(N);
//    std::cout << "������� �������� �������: ";
//    for (int i = 0; i < N; ++i) {
//        std::cin >> numbers[i];
//    }
//
//    char order;
//    std::cout << "����������� �� ����������� (������� '<') ��� �� �������� (������� '>'): ";
//    std::cin >> order;
//
//    bool ascending = (order == '<');
//    bubbleSort(numbers, ascending);
//
//    std::cout << "��������������� ������: ";
//    for (double num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    if (ascending) {
//        std::cout << "����������� �������: " << numbers[0] << std::endl;
//    }
//    else {
//        std::cout << "������������ �������: " << numbers[0] << std::endl;
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
//    std::string text = "The other three old people nodded their heads slowly up and down, and said �Absolutely true, Just as true as can be�. And Grandpa Joe said- You mean to say I�ve never told you about Mr Willy Wonka and his factory?- Never � answered little Charlie.- Good heavens above! I don�t know what�s the matter with me!";
//
//    int sentenceCount = countSentences(text);
//    std::cout << "���������� �����������: " << sentenceCount << std::endl;
//
//    return 0;
//}