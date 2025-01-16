// Месяцы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum class months { 
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
}month;

int main()
{
    setlocale(LC_ALL, "rus");
    const int exit = 0;
    int choice{};
   
    while (true)
    {
        std::cout << "Введите номер месяца или 0 для выхода: ";
        std::cin >> choice;
        if (choice > static_cast<int>(months::December)) {
            std::cout << "Месяца с таким номером не существует!" << std::endl;
            continue;
        }
        else if (choice == exit)
        {
            std::cout << "До встречи!" << std::endl;
            break;
        }
        months  month = static_cast<months>(choice);

        switch (month)
        {
        case(months::January):
            std::cout << "Январь" << std::endl;
            break;

        case(months::February):
            std::cout << "\aФевраль" << std::endl;

            break;

        case(months::March):
            std::cout << "\aМарт" << std::endl;

            break;

        case(months::April):
            std::cout << "Апрель" << std::endl;

            break;

        case(months::May):
            std::cout << "\aМай" << std::endl;

            break;

        case(months::June):
            std::cout << "\aИюнь" << std::endl;

            break;
        case(months::July):
            std::cout << "\aИюль" << std::endl;
            break;
        case(months::August):
            std::cout << "\aАвгутст" << std::endl;
            break;
        case(months::September):
            std::cout << "\aСентябрь" << std::endl;
            break;
        case(months::October):
            std::cout << "\aОктябь" << std::endl;
            break;
        case(months::November):
            std::cout << "\aНоябь" << std::endl;
            break;
        case(months::December):
            std::cout << "\aДекабрь" << std::endl;
            break;
        }

      
   }
  
    return 0;
}
   

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
