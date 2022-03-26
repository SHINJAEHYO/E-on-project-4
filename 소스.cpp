#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void bubblesort(int ivalue[])
{
    int temp;

    for (int i = 0; i < 5; i++)    // 요소의 개수 - 1만큼 반복
    {
        for (int j = 0; j < 5; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (ivalue[j] > ivalue[j + 1])  //현재 요소와 다음 요소를 비교하여 큰 값을 다음 요소 값으로 받음  
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

    printf("숫자 6개를 입력하세요.\n");
    scanf("%d,%d,%d,%d,%d,%d", &inum[0], &inum[1], &inum[2], &inum[3], &inum[4], &inum[5]);

    bubblesort(inum);    // 거품 정렬 함수 호출

    printf("\n%d,%d,%d,%d,%d,%d", inum[0], inum[1], inum[2], inum[3], inum[4], inum[5]);

    return 0;
}
