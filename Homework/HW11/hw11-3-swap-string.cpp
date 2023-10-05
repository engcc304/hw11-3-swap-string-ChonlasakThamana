/*
    ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH

    Test case:
        Hello world
    Output:
        dlrow olleH

    Test case:
        RMUTL
    Output:
        LTUMR

    Test case:
        Orio
    Output:
        oirO

*/#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // สร้างอาร์เรย์เก็บข้อความขนาดไม่เกิน 100 ตัวอักษร
    printf("โปรดป้อนข้อความ: ");
    fgets(input, sizeof(input), stdin); // อ่านข้อความจากผู้ใช้
    
    int length = strlen(input); // หาความยาวของข้อความ
    
    // แสดงตัวอักษรที่ถูกกลับด้านหน้า
    printf("ผลลัพธ์: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    
    return 0;
}


