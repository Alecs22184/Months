// Месяцы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
enum months { January=1, February, March,April, May,June,July, August,September,October, November,December
};

int main()
{
    setlocale(LC_ALL, "rus");
    bool exit = true;
    int choice{};
    while (exit)//пока exit равен true
    {
        std::cout << "\nВведите номер месяца: ";
        std::cin >> choice;

        switch (choice)
        {
        case(months::January):
            std::cout << "\aЯнварь" << std::endl;
            break;

        case(months::February):
            std::cout << "\aФевраль";

            break;

        case(months::March):
            std::cout << "\aМарт";

            break;

        case(months::April):
            std::cout << "Апрель";

            break;

        case(months::May):
            std::cout << "\aМай";

            break;

        case(months::June):
            std::cout << "\aИюнь";

            break;
        case(months::July):
            std::cout << "\aИюль";
            break;
        case(months::August):
            std::cout << "\aАвгутст";
            break;
        case(months::September):
            std::cout << "\aСентябрь";
            break;
        case(months::October):
            std::cout << "\aОктябь";
            break;
        case(months::November):
            std::cout << "\aНоябь";
            break;
        case(months::December):
            std::cout << "\aДекабрь";
            break;
           

        default:std::cout << "\a\a\aНеправильный номер!\n\n";
            if (choice == 0) {
             
                exit = 0;
            }

           
            
        }
         
    }
    std::cout << "До свидания ";
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
