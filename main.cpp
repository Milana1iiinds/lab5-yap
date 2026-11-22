#include <iostream>
#include <string>
#include <vector>

using namespace std;

void push(vector<int>& stack, int value) {
    stack.push_back(value);
}

bool pop(vector<int>& stack, int& value) {
    if (stack.empty()) {
        return false;
    }
    value = stack.back();
    stack.pop_back();
    return true;
}

bool peek(const vector<int>& stack, int& value) {
    if (stack.empty()) {
        return false;
    }
    value = stack.back();
    return true;
}

string fmt(const vector<int>& stack) {
    string result = "[";
    for (size_t i = 0; i < stack.size(); i++) {
        if (i > 0) {
            result += ", ";
        }
        result += to_string(stack[i]);
    }
    result += "]";
    return result;
}

void show_push(vector<int>& stack, int value) {
    push(stack, value);
    cout << "push(" << value << "): " << fmt(stack) << endl;
}

void show_pop(vector<int>& stack) {
    int value;
    if (pop(stack, value)) {
        cout << "pop(): " << value << ", стек: " << fmt(stack) << endl;
    } else {
        cout << "pop(): ошибка, стек пуст" << endl;
    }
}

void show_peek(const vector<int>& stack) {
    int value;
    if (peek(stack, value)) {
        cout << "peek(): " << value << endl;
    } else {
        cout << "peek(): ошибка, стек пуст" << endl;
    }
}

void demo() {
    cout << "== Стек на C++ ==" << endl;
    vector<int> stack;
    cout << "Стек пуст: " << fmt(stack) << endl;
    show_push(stack, 10);
    show_push(stack, 20);
    show_push(stack, 30);
    show_peek(stack);
    show_pop(stack);
    show_pop(stack);
    show_peek(stack);
    show_pop(stack);
    show_pop(stack);
    show_pop(stack);
    show_peek(stack);
    cout << "size(): " << stack.size() << endl;
    show_push(stack, 7);
    cout << "size(): " << stack.size() << endl;
}

int main() {
    demo();
    return 0;
}
