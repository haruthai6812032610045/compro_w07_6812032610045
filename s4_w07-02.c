#include <stdio.h>

int main() {
    int x, y; // ตัวแปรสำหรับเก็บตัวเลขสองตัวจากผู้ใช้

    // รับค่าจากผู้ใช้
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y
    if (x > y) {
    printf("x is greater than y\n"); // แสดงผลเมื่อ x มีค่ามากกว่า y
    } else if (x < y) {
        printf("x is less than y\n"); // แสดงผลเมื่อ x มีค่าน้อยกว่า y
    } else {
        printf("x is equal to y\n"); // แสดงผลเมื่อ x เท่ากับ y
    }

    return 0;
}