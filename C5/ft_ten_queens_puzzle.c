#include <unistd.h>
int check(int row[], int n)
{
    int i;
    i = 0;
    while(i < n)
    {
        if (row[i] == row[n] || row[n] - row[i] == n-i || row[n] - row[i] == i -n)
            return (0);
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
    }
    write(1,"¥n",1);
}
int back_tracking(int row[], int n, int NQ)
{
    int count;

    count = 0;
    row[n] = 0;
    while (row[n] < NQ)
    {
        if(check(row,n))
        {
            if(n == NQ - 1)
            {
                print_result(row,NQ);
                count += 1;
            }
            else
                back_tracking(row, n+1, NQ);
        }
        row[n] += 1;
    }
    return (count);
}
#include <stdio.h>
int ft_ten_queens_puzzle(void)
{
    int row[10];
    int count;
    count = back_tracking(row, 0, 10);
    return (count);
}
int main(){
    printf("%d", ft_ten_queens_puzzle());
}