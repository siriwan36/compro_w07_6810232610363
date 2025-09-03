#include <stdio.h>

int main() {
    int score;
    float final_score;

    printf("Enter your score:  ");  //เเสดงผลให้ใส่คะเเนน
    scanf("%d", &score);  //รับค่าคะเเนนจากเเป้นพิมพ์

    if (score >= 50) {
        final_score = score*1.05; //คิด 5% ของคะเเนนที่ได้จริง
        printf("%.2f", &final_score);

    } else {
        final_score = score;
    }

    printf("Final score: %.2f\n", final_score);
    printf("End of evaluation\n");

    return 0;
}