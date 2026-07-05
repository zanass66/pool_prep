#include <stdio.h>
int     ft_atoi(char *str)
{
        int     i;
        int     sign;// 1 for positive , -1 for negative
        int     result;
        int     digit_value; // for converting char to int (str[i] - '0')
        i = 0;
        while(str[i] >= 9 && str[i] <= 13)
                i++;
        sign = 1;
        while(str[i] == '+' || str[i] == '-')
        {
                if(str[i] == '-' )
                        sign *= -1;
                i++;
        }
        result = 0;
        while(str[i] >= '0' && str[i] <= '9')
        {
                digit_value = str[i] - '0';
                result = (result * 10) + digit_value;
                i++;
        }
        return (result * sign);
}
int main()
{
        printf("%d",ft_atoi( "---+--+1234ab567"));
        return 0;
}