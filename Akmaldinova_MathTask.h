#ifndef _AKMALDINOVA_MATHTASK_H_
#define _AKMALDINOVA_MATHTASK_H_

#include <string>
using namespace std;

// Функция контроля вводимых данных
bool UserInput(string input) {
    //если строка пустая - ввод некорректен
    if (input.empty()) return false;
    //попытаться
    try {
        //преобразование введенного значения в тип int
        int number = stoi(input);
    }
    catch (...) { //если возникла ошибка в блоке try
        return false;
    }
    return true;
}

// Метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

// Вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif