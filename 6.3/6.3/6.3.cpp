#include <iostream>
#include <Windows.h>

int calculateSum(int arr[], int size) {
    int sum = 0;  

    for (int i = 0; i < size; i++) {
        sum += arr[i];  
    }

    return sum;  
}

template <typename T, size_t N>
T calculateSum(T(&arr)[N]) {
    T sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array[] = { 6, 8, 12, 0, 2 };  

    int size = sizeof(array) / sizeof(array[0]); 

    int sum = calculateSum(array, size);  

    std::cout << "Сума елементів масиву: " << sum << std::endl;

    return 0;
}
