#include <stdio.h>

void tower_of_hanoi(int n, char source, char auxiliary, char target) {
    if (n > 0) {
        // ย้าย n-1 จาก source ไปยัง auxiliary โดยใช้ target เป็นปลายทาง
        tower_of_hanoi(n-1, source, target, auxiliary);
        
        // ย้ายดิสก์ที่เหลือจาก source ไปยัง target
        printf("disk %d form %c to %c\n", n, source, target);
        
        // ย้าย n-1 จาก auxiliary ไปยัง target โดยใช้ source เป็นปลายทาง
        tower_of_hanoi(n-1, auxiliary, source, target);
    }
}

int main() {
    int n = 3;
    char source = 'A', auxiliary = 'B', target = 'C';
    
    // เรียกใช้ฟังก์ชัน Tower of Hanoi
    tower_of_hanoi(n, source, auxiliary, target);
    
    return 0;
}
