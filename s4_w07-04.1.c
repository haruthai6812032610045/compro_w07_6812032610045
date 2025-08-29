#include <stdio.h>

int main() {
    int x, y; // ตัวแปรสำหรับบันทึกตัวเลขสองค่าที่ผู้ใช้ป้อน

    // ขอให้ผู้ใช้กรอกค่าตัวเลข
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    // ตรวจสอบความแตกต่างระหว่าง x และ y
    if (x > y) {
        printf("x is greater than y\n"); // แสดงข้อความเมื่อ x มีค่ามากกว่า y
    } else if (x < y) {
        printf("x is less than y\n"); // แสดงข้อความเมื่อ x มีค่าน้อยกว่า y
    } else {
        printf("x is equal to y\n"); // แสดงข้อความเมื่อ x มีค่าเท่ากับ y
    }

    return 0;
}