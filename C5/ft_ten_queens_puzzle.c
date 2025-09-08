#include <unistd.h>

int check(int row[], int n)
{
    int i;
    i = 0;
    while(i < n)
    {
        if (row[i] == row[n] || row[n] - row[i] == n-i || row[n] - row[i] == i -n)
            return (0);
        ++i;
    }
    return (1);
}
void print_result(int row[], int NQ)
{
    int i;
    char c;

    i = 0;
    c = '0';
    while (i < NQ)
    {
        c += row[i];
        write(1,&c,1);
        c = '0';
        ++i;
    }
    write(1,"\n",1);
}
void back_tracking(int row[], int n, int NQ, int *count)
{
    row[n] = 0;
    while (row[n] < NQ)
    {
        if(check(row,n))
        {
            if(n == NQ - 1)
            {
                print_result(row,NQ);
                *count += 1;
            }
            else
                back_tracking(row, n+1, NQ, count);
        }
        row[n] += 1;
    }
}
int ft_ten_queens_puzzle(void)
{
    int row[10];
    int count;

    count = 0;
    back_tracking(row, 0, 10, &count);
    return (count);
}
// int main(){
//     printf("%d",ft_ten_queens_puzzle());
// }