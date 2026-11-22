#include <iostream>
#include <string>
#include <vector>

using namespace std;

void push(vector<int>& stack, int value) {
    stack.push_back(value);
}

int pop(vector<int>& stack) {
    int value = stack.back();
    stack.pop_back();
    return value;
}

int peek(const vector<int>& stack) {
    return stack.back();
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
    cout << "pop(): " << pop(stack) << ", стек: " << fmt(stack) << endl;
}

void show_peek(const vector<int>& stack) {
    cout << "peek(): " << peek(stack) << endl;
}

int main() {
    cout << "== Стек на C++ ==" << endl;
    vector<int> stack;
    cout << "Стек пуст: " << fmt(stack) << endl;
    show_push(stack, 10);
    show_push(stack, 20);
    show_push(stack, 30);
    show_peek(stack);
    show_pop(stack);
    show_pop(stack);
    cout << "size(): " << stack.size() << endl;
    return 0;
}
