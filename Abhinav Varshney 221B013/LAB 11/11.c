#include <stdio.h>
const int MAX = 100;
void transpose(int mat[][MAX], int tr[][MAX], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			tr[i][j] = mat[j][i];
}
int isSymmetric(int mat[][MAX], int N)
{
	int tr[N][MAX];
	transpose(mat, tr, N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (mat[i][j] != tr[i][j])
				return 0;
	return 1;
}
int main()
{
    int n,m;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&m);
    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter %d %d th element: " , i, j);
            scanf("%d",&array[i][j]); 
        }
    }
	if (isSymmetric(array, m))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}