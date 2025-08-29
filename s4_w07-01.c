#include <stdio.h>

int main() {
    float score, total_score; // เก็บคะแนนเดิมและคะแนนรวม

    // Input: รับค่าคะแนนจากผู้ใช้
    printf("Enter midterm score: ");
    scanf("%f", &score);

    // Decision: ตรวจสอบว่าคะแนน >= 50 หรือไม่
    if (score >= 50) {
    // Process: เพิ่มคะแนนพิเศษ 5%
        total_score = score + (score * 0.05);
    } else {
        // Process: ไม่เพิ่มคะแนน
       total_score = score;
    }

    // Output: แสดงคะแนนรวมหลังจากเพิ่ม (ถ้ามี)
    printf("Final score: %.2f\n", total_score);

    // Output: แสดงข้อความจบการประเมิน
    printf("End of evaluation\n");

    return 0;
}