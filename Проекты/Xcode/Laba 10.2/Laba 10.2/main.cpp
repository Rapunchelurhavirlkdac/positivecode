#include <iostream>

void celsius_fahrenheit(double c)
{
    std::cout << " F = " << c * 1.8 + 32 << std::endl;
}

void celsius_kelvin(double c)
{
    std::cout << " K = " << c + 273.15 << std::endl;
}

void kelvin_fahrenheit(double k)
{
    std::cout << " F = " << 1.8 * (k - 273) + 32 << std::endl;
}

void kelvin_celsius(double k)
{
    std::cout << " C = " << k - 273.15 << std::endl;
}

void fahrenheit_celsius(double f)
{
    std::cout << " C = " << (f - 32) / 1.8 << std::endl;
}

void fahrenheit_kelvin(double f)
{
    std::cout << " K = " << (f + 459.67) * 0.55555 << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    
    int a1, a2, a3;

    double F, C, K;

    do
    {
        std::cout << "0 - выход" << std::endl;

        std::cout << "1 - Из Цельсиев" << std::endl;
        
        std::cout << "2 - Из Кельвинов" << std::endl;
        
        std::cout << "3 - Из Фаренгейтов" << std::endl;

        std::cout << "введите номер ";
        std::cin >> a;

        std::cout << std::endl;

        switch (a)
        {
        case 1: //ЦЕЛЬСИИ
        {
            std::cout << "11 - в Фаренгейты" << std::endl;

            std::cout << "12 - в Кельвины" << std::endl;

            std::cout << "10 - выход" << std::endl;

            std::cout << "введите номер ";
            std::cin >> a1;

            switch(a1)
            {
                    case 11: //В ФАРЕНГЕЙТЫ
                    {
                        std::cout << "введите ваше значение = ";
                        std::cin >> C;
                        celsius_fahrenheit(C);
                        break;
                    }

                    case 12: //В КЕЛЬВИНЫ
                    {
                        std::cout << "введите ваше значение = ";
                        std::cin >> C;
                        celsius_kelvin(C);
                        break;
                    }

                    case 10: break;

                    
            }while (a1 > 0 && a1 < 3);
            break;
        }

        case 2: //КЕЛЬВИНЫ
        {
            std::cout << "21 - в Цельсии" << std::endl;

            std::cout << "22 - в Фаренгейты" << std::endl;

            std::cout << "20 - выход" << std::endl;

            std::cout << "введите номер ";
            std::cin >> a2;

            switch (a2)
            {
            case 21: //В ЦЕЛЬСИИ
            {
                std::cout << "введите ваше значение = ";
                std::cin >> K;
                kelvin_celsius(K);
                break;
            }

            case 22: //В ФАРЕНГЕЙТЫ
            {
                std::cout << "введите ваше значение = ";
                std::cin >> K;
                kelvin_fahrenheit(K);
                break;
            }

            case 20: break;

                
            }while (a2 > 0 && a2 < 3);
            break;
        }

        case 3: //ФАРЕНГЕЙТЫ
        {
            std::cout << "31 - в Цельсии" << std::endl;

            std::cout << "32 - в Кельвины" << std::endl;

            std::cout << "30 - выход" << std::endl;

            std::cout << "введите номер ";
            std::cin >> a3;

            switch (a3)
            {
            case 31: //В ЦЕЛЬСИИ
            {
                std::cout << "введите ваше значение = ";
                std::cin >> F;
                fahrenheit_celsius(F);
                break;
            }

            case 32: //В КЕЛЬВИНЫ
            {
                std::cout << "введите ваше значение = ";
                std::cin >> F;
                fahrenheit_kelvin(F);
                break;
            }

            case 30: break;

                
            }while (a3 > 0 && a3 < 3);
            break;
        }

        }

    } while (a > 0 && a < 4);
    


    return 0;
}

