#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bubblesort(int ivalue[])
{
    int temp;

    for (int i = 0; i < 5; i++)    // ����� ���� - 1��ŭ �ݺ�
    {
        for (int j = 0; j < 5; j++)   // ����� ���� - 1��ŭ �ݺ�
        {
            if (ivalue[j] > ivalue[j + 1])  //���� ��ҿ� ���� ��Ҹ� ���Ͽ� ū ���� ���� ��� ������ ����  
            {
                temp = ivalue[j];
                ivalue[j] = ivalue[j + 1];
                ivalue[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int inum[6] = { 0 };

    printf("���� 6���� �Է��ϼ���.\n");
    scanf("%d,%d,%d,%d,%d,%d", &inum[0], &inum[1], &inum[2], &inum[3], &inum[4], &inum[5]);

    bubblesort(inum);    // ��ǰ ���� �Լ� ȣ��

    printf("\n%d,%d,%d,%d,%d,%d", inum[0], inum[1], inum[2], inum[3], inum[4], inum[5]);

    return 0;
}
