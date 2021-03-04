#include <stdio.h>

int main()
{
    int score[10] = { 55, 20, 33, 85, 13, 22, 45, 98, 67, 77 };
    int max_index = 0;

    printf("10명의 성적입니다:\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d 번: %d 점\n", i,  *(score + i));
        if (*(score + max_index) < *(score + i))
        {
            max_index = i;
        }
    }
    printf("\n1등은 %d 번, 성적은 %d입니다.\n", max_index, score[max_index]);
    return (0);
}