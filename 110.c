#include <stdio.h>

// �¾����� GB 2312 ���룬�� utf-8 �����ύ�ᱨ��
int main() {
    int a;
    scanf("%d", &a);
    printf(a % 2 ? "����" : "ż��"); 
}