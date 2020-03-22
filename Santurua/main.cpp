//Итак гора сантура или как ее там...
//кол-во строк = i + 2
//кол-во звезд = (i + 2 + 1) * 2 и каждая вторая итерация + (2 + q) * 2 (q добавка за каждую итерацию)
// есть дверь, полноформатная появляется при 5 итерации
//с богом

#include<unistd.h>
#include<stdio.h>

int sar = 1;

void ft_putchar(char c)
{
    write(1, &c, 1);
}
// счет кол-во строк
int Stroki(int i)
{
    int s = 0;
    
    while (i > 0)
    {
        s += i + 2;
        i--;
    }
    return s;
}
void door(int i,int t, int z, bool like = 0)
{
    if (like == 1 && i == 1 && z == t)
            ft_putchar('|');
    else if (like == 1 && i == 2 && (z >= t - 1 && z <= t + 1))
            ft_putchar('|');
    else if (like == 1 && i == 3 && (z >= t - 1 && z <= t + 1))
            ft_putchar('|');
    else if (like == 1 && i >= 4 && (z >= t - 2 && z <= t + 2))
    {
        if (sar == 14)
            ft_putchar('$');
        else
            ft_putchar('|');
        sar++;
    }
    else
        ft_putchar('*');
}
//Функция печати
void print(int s, int i, bool like = false)
{
    int a =  s - Stroki(i) * 2, t = s / 2;
    
    for (int z = 0; z < Stroki(i) - a; z++)
    {
        ft_putchar(' ');
        a++;
    }
    ft_putchar('/');
    for (int z = 0; z < s; z++)
        door(i, t, z, like);
    ft_putchar('\\');
    ft_putchar('\n');
}
int Vibor(int a, int i)
{
    if (a >= Stroki(i) - i && i < 5)
        return 1;
    if (i > 5 && a >= Stroki(i) - 5)
        return 1;
    else
        return 0;
}
// счет кол-ва звезд
 void zvezda(int i)
{
    int s = 1, q = 0, u = 2, t = 0;
    for (int a = 0; a < Stroki(i); a++)
    {
        for (int c = 1; c <= i; c++)
        {
            if (a == Stroki(c))
            {
                if (c % 2 == 0)
                    u++;
                q += u;
            }
        }
         s = 1 + (a + q) * 2;
        t = Vibor(a, i);
        print(s, i, t);
    }
}

int main()
{
    int a;
    
    printf("Введите кол-во этажей ");
    do
        scanf ("%d", &a);
    while (a < 0);
    zvezda(a);
    return (0);
}
