
#include <iostream>
#include <string>
#include <fstream>
#include <locale.h>


int const days = 5;

struct journal          //исходная структура журнала
{
    float number;    //номеры бригады
    float price;     //цена за тонну
    float amount[days]; //количество добытого угля в день
};

struct new_journal      //новая структура журнала
{
    float number;     //номеры бригады
    float price;      //цена за тонну
    float amount[days];  //количество добытого угля в день
    float total;      //итого
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string q;
    int reccount, i, j;


    std::ifstream fin;
    fin.open("myf.txt");

    if (!fin.is_open())
    {
        std::cout << "ошибка открытия файла!" << std::endl;
        exit(1);
    }
    std::cout << std::endl;

    fin >> reccount;
    std::cout << reccount;

    std::cout << std::endl;
    char* str = new char[1024];
    int k = 0;
    std::ifstream basek("myf.txt");
    while (!basek.eof())
    {
        basek.getline(str, 1024, '\n');
        k++;
    }
    basek.close();
    //delete str;
    std::cout << k << std::endl;

    int num;
    num = (k - 1) / 3;
    std::cout << num << std::endl; //количество пунктов журнала

    float arr[5], sum;

    journal* base = new journal[reccount + 1];

    std::fstream fout;

    float number, price;

    for (i = 0; i < num; i++)
    {
        fin >> number;
        base[i].number = number;
        std::cout << number << std::endl;

        fin >> price;
        base[i].price = price;
        std::cout << price << std::endl;


        for (j = 0; j < days; j++)
        {
            fin >> arr[j];
            base[i].amount[j] = arr[j];
            std::cout << arr[j] << "\t";
        }
        std::cout << std::endl;
    }
    fin.close();


    /*
    std::cout << std::endl;

    fin.open(binary_coal);
    if (!fin.is_open())
    {
        std::cout << "ошибка открытия файла!" << std::endl;
    }
    else
    {

        std::cout << "файл открыт!" << std::endl;

        char ch;
        while (fin.get(ch))
        {
            std::cout << ch;



        }

    }
    */ //проверка записи в двоичный файл

    fout.open("binary_coal.bin", std::ios::out | std::ios::binary);
    fout.write(reinterpret_cast<char*> (&base), sizeof(journal)* reccount);
    fout.close();


    std::fstream fin2;
    new_journal* base1 = new new_journal[reccount + 1];

    fin2.open("binary_coal.bin", std::ios::in | std::ios::binary);
    fin2.read(reinterpret_cast<char*> (&base), sizeof(journal)* reccount);
    fin2.close();

    std::cout << std::endl;

    for (i = 0; i < num; i++)
    {
        base1[i].number = base[i].number;
        std::cout << base1[i].number << "\t";

        base1[i].price = base[i].price;
        std::cout << base1[i].price << "\t";
        sum = 0;

        for (j = 0; j < days; j++)
        {
            base1[i].amount[j] = base[i].amount[j];
            sum += base[i].amount[j];
            std::cout << base[i].amount[j] << "\t";
        }
        base1[i].total = sum;
        std::cout << "\t" << base1[i].total << std::endl;
    }

    float array[3];
    float max = 0;
    int count = 3;

    std::ofstream fout2;
    fout2.open("rezult.txt");
    while (count > 0)
    {
        for (j = 0; j < num; j++)
        {

            if (base1[j].total > max) max = base1[j].total;
        }

        for (i = 0; i < num; i++)
        {
            if (base1[i].total == max)
            {
                fout2 << base1[i].number << "\t";
                fout2 << base1[i].price << "\t";
                for (j = 0; j < days; j++)
                {
                    fout2 << base1[i].amount[j] << "\t";
                }
                fout2 << base1[i].total << std::endl;

                base1[i].total = 0;
            }
        }
        max = 0;
        count--;
    }
    std::cout << std::endl;
    std::ifstream fout3;
    fout3.open("rezult.txt");
    getline(fout3, q);
    std::cout << q << std::endl;
    fout3.close();
}
