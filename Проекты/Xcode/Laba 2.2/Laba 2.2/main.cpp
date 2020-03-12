#include <iostream.h> //Для работы с клавиатурой
#include <fstream.h> //Для работы с файлами
#include <stdlib.h> //Для очистки экрана

//Наша структура
struct MyStruct
{
    char *Name;
    int size;
};

void main()
{
  system(“CLS”); //Очистка экрана
  MyStruct X,Y; //Создали два объекта соответствующие нашей структуре
//Например объект X имеет такие параметры
  X.Name=“МЕДВЕД”; //
  X.size=100; //

//Открываем файл для записи в бинарном режиме
  ofstream out(“C:2.txt”,ios::binary|ios::out);
     out.write((char*)&X,sizeof X); //Записываем объект X в открытый нами файл
  out.close(); //Закрываем открытый файл

//Открываем файл только для чтения, открываем в бинарном режиме
  fstream in(“C://2.txt”,ios::binary|ios::in);
     in.read((char*)&Y,sizeof Y); //Считываем информацию в объект Y
  in.close(); //Закрываем открытый файл

//Показываем объект Y по его составным частям
  cout<<Y.Name<<“\n”;
  cout<<Y.size<<“\n”;

  cin.get();

}
