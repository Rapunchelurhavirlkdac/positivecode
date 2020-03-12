
#include <iostream>
#include <fstream>
using namespace std;
int rows, columns;

template <typename T>
void delRow(T**& array, int n, int m, int row)
{
    int i, j;

    for (i = row; i < n - 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            array[i][j] = array[i + 1][j];
        }
    }
}

template <typename T>
void delColumn(T**& array, int n, int m, int column)
{
    int i, j;

    for (j = column; j < m - 1; j++)
    {
        for (i = 0; i < n; i++)
        {
            array[i][j] = array[i][j + 1];
        }
    }
}



int main()
{

    int n, m, i, j;

    std::ifstream in("myf4.txt");

    std::ifstream file("myf4.txt");

    if (file.is_open())
            std::cout << "Все ОК! Файл открыт!\n\n" << std::endl;
        else
        {
            std::cout << "Файл не открыт!\n\n" << std::endl;
            return -1;
        }
    
        in >> n;
        in >> m;
        int** array;
        array = new int* [n];
        for (i = 0; i < n; i++)
        {
            array[i] = new int[m];
        }
    
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                in >> array[i][j];
            }
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }
    std::cout << std::endl;

    bool isNull;

    bool find = false;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (array[i][j] > 0)
            {
                find = true;
                std::cout << i + 1 << " - номер первой строки с положительным элементом\n" << std::endl;
                break;
            }
        }
        if (find)
        {
            break;
        }
    }

    for (i = 0; i < n; i++) //удаление строк
    {
        isNull = true;
        for (j = 0; j < m; j++)
        {
            if (array[i][j] != 0)
            {
                isNull = false;
                break;
            }
        }
        if (isNull)
        {
            delRow(array, n, m, i);
            n--;
            i--;
        }
    }

    for (j = 0; j < m; j++) //удаление столбцов
    {
        isNull = true;
        for (i = 0; i < n; i++)
        {
            if (array[i][j] != 0)
            {
                isNull = false;
                break;
            }
        }
        if (isNull)
        {
            delColumn(array, n, m, j);
            m--;
            j--;
        }
    }

    std::cout << "Уплотненная матрица:\n" << std::endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }

}
