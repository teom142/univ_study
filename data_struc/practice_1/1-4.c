#include <stdio.h>

int find_max(int* score, int size);

int main()
{
	int score[10] = { 55, 20, 33, 85, 13, 22, 45, 98, 67, 77 };
	int max_index;

	printf("10명의 성적입니다: \n");
	max_index = find_max(score, 10);
	printf("\n1등은 %d 번, 성적은 %d입니다.\n", max_index, *(score + max_index));
	return (0);
}

int find_max(int* score, int size)
{
	int max_idx = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d 번: %d 점\n", i, *(score + i));
		if (*(score + max_idx) < *(score + i))
			max_idx = i;
	}
	return (max_idx);
}