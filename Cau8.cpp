8#include <stdio.h>
#define MAX_SIZE 100 // Định nghĩa kích thước tối đa của stack

int stack[MAX_SIZE]; // Mảng lưu trữ stack
int top = -1; // Khởi tạo giá trị top ban đầu

void push(int x) { // Hàm thêm phần tử vào stack
    if (top == MAX_SIZE - 1) { // Kiểm tra stack đã đầy chưa
        printf("Error: Stack is full!\n");
        return;
    }
    stack[++top] = x; // Thêm phần tử vào đỉnh stack và tăng giá trị top lên 1
}

void pop() { // Hàm lấy phần tử khỏi stack
    if (top == -1) { // Kiểm tra stack đã rỗng chưa
        printf("Error: Stack is empty!\n");
        return;
    }
    top--; // Giảm giá trị top đi 1 để lấy phần tử ở đỉnh stack
}

void printStack() { // Hàm in các phần tử trong stack
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(41); // Thêm các phần tử vào stack
    push(23);
    push(4);
    push(14);
    push(56);
    push(1);
    printStack(); // In ra stack ban đầu
    pop(); // Xóa phần tử ở đỉnh stack
    printStack(); // In ra stack sau khi xóa phần tử
    return 0;
}
