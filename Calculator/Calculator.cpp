#include <iostream>
#include <Windows.h>

void add();
void sub();
void mul();
void div();
int pow(int a, int n);

int main()
{
    system("title Basic Calculator");
    char choice;
    using namespace std;
    cout << "===========>Calculator<===========\n";
    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Raise to power\n6.Exit\n\n";
    cout << "Choice: ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        system("cls");
        add();
        break;


    case '2':
        system("cls");
        sub();
        break;


    case '3':
        system("cls");
        mul();
        break;


    case '4':
        system("cls");
        div();
        break;


    case '5':
        system("cls");
        int a;
        int n;

        std::cout << "Number: ";
        std::cin >> a;
        std::cout << "Raise to power: ";
        std::cin >> n;
        std::cout << "Score: " << pow(a, n) << std::endl;
        system("pause");
        break;


    case '6':
        exit(0);
        break;


    default:
        cout << "Nope.";
        exit(0);
    }
    return 0;
}
void add()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a + b;

    std::cout << "Score: " << score << std::endl;
    system("pause");
}
void sub()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a - b;

    std::cout << "Score: " << score << std::endl;
    system("pause");
}
void mul()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    score = a * b;

    std::cout << "Score: " << score << std::endl;
    system("pause");
}
void div()
{
    double a;
    double b;
    double score;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Secound number: ";
    std::cin >> b;

    if (b != 0)
    {
        score = a / b;

        std::cout << "Score: " << score << std::endl;
        system("pause");
    }
    else
    {
        system("cls");
        Sleep(1000);
        for (short i = 5; i > 0; i--)
        {
            system("cls");
            std::cout << "The universe will be destroyed in : ";
            std::cout << i << std::endl;
            Sleep(1000);
        }
        system("cls");
        std::cout << "Game over!\n";
        system("pause");
    }
}
int pow(int a, int n)
{
    if (n == 0) return 1;
    else return a * pow(a, n - 1);
}