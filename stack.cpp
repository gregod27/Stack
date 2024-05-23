#include "stack.h"

Stack::Stack() : arr(nullptr), capacity(0), top(-1) {}

Stack::Stack(const Stack& other) : capacity(other.capacity), top(other.top) {
    arr = new int[capacity];
    for (int i = 0; i <= top; i++) {
        arr[i] = other.arr[i];
    }
}

Stack::~Stack() {
    delete[] arr;
}

Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        delete[] arr;
        capacity = other.capacity;
        top = other.top;
        arr = new int[capacity];
        for (int i = 0; i <= top; i++) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

void Stack::push(int elem) {
    if (top + 1 == capacity) { // Need more space
        capacity = capacity == 0 ? 1 : capacity * 2;
        int* new_arr = new int[capacity];
        for (int i = 0; i <= top; i++) {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
    }
    arr[++top] = elem;
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return arr[top--];
}

bool Stack::isEmpty() const {
    return top == -1;
}

void Stack::multiPop(int N) {
    while (N-- > 0 && !isEmpty()) {
        pop();
    }
}

void Stack::show() const {
    if (top == -1) {
        std::cout << std::endl; // Print newline if stack is empty
        return;
    }
    for (int i = 0; i < top; i++) { // Iterate until the second-to-last element
        std::cout << arr[i] << " ";
    }
    std::cout << arr[top] << std::endl; // Print the last element without a trailing space
}
