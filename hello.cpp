#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    bool Game = true;
    string user;

    srand(time(0));

    cout << "КНБ" << endl;

    while (Game) {
        cout << "Это игра камень, ножницы, бумага. Введите свой выбор (камень, ножницы или бумага), ну или хотите закончить игру то пишите end: ";
        cin >> user;

        vector<string> choices = { "камень", "ножницы", "бумага" };
        int choice = rand() % choices.size();

        if (user == "end") {
            Game = false;
        }
        else if (user == "камень" && choices[choice] == "ножницы") {
            cout << "Ты победил! Камень бьет ножницы." << endl;
        }
        else if (user == "бумага" && choices[choice] == "камень") {
            cout << "Ты победил! Бумага покрывает камень." << endl;
        }
        else if (user == "ножницы" && choices[choice] == "бумага") {
            cout << "Ты победил! Ножницы режут бумагу." << endl;
        }
        else if (user == choices[choice]) {
            cout << "Ничья! Оба выбрали " << choices[choice] << "." << endl;
        }
        else {
            cout << "Вы проиграли, компьютер выбрал: " << choices[choice] << "." << endl;
        }
    }

    return 0;
}
