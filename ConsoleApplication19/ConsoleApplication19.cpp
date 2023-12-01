#include <iostream>
#include <string>
#include <locale>
// Л/р 8, Вариант 21
//Даны строки S и S0.Удалить из строки S первую подстроку, 
//совпадающую с S0.Если совпадающих подстрок нет, 
//то вывести строку S без изменений.
// Ввод значений производится с клавиатуры.
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string S, S0;
    cout << "Введите строку S: ";
    getline(cin, S);
    cout << "Введите строку S0: ";
    getline(cin, S0);
    if (S.find(S0) != string::npos) {
        //При нахождении подстроки в строке
        //удаляется колво символов подстроки из строки.Вывод 
        cout << "Вывод строки c изменениями: " << S.erase(S.find(S0), S0.size()) << endl;
    }
    else
        cout << "Вывод строки без изменений: " << S << endl;
}