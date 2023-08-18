#include "calc.h"
#include <iostream>
#include <cmath>

static int digit_vec_to_int(const std::vector<int>& digits)
{
    int result = 0;

    for (size_t i = 0; i < digits.size(); i++) {
        result += digits[i] * pow(10, digits.size() - i - 1);
    }

    return result;
}

Calc::Calc(QObject *parent)
    : QObject{parent}
{

}

int Calc::buffer()
{
    return digit_vec_to_int(digits);
}

void Calc::onePushed()
{
    digits.emplace_back(1);
    emit display(buffer());
}

void Calc::twoPushed()
{
    digits.emplace_back(2);
    emit display(buffer());
}

void Calc::threePushed()
{
    digits.emplace_back(3);
    emit display(buffer());
}

void Calc::fourPushed()
{
    digits.emplace_back(4);
    emit display(buffer());
}

void Calc::fivePushed()
{
    digits.emplace_back(5);
    emit display(buffer());
}

void Calc::sixPushed()
{
    digits.emplace_back(6);
    emit display(buffer());
}

void Calc::sevenPushed()
{
    digits.emplace_back(7);
    emit display(buffer());
}

void Calc::eightPushed()
{
    digits.emplace_back(8);
    emit display(buffer());
}

void Calc::ninePushed()
{
    digits.emplace_back(9);
    emit display(buffer());
}

void Calc::zeroPushed()
{
    digits.emplace_back(0);
    emit display(buffer());
}

void Calc::plusPushed()
{
    addends.emplace_back(digit_vec_to_int(digits));
    digits.clear();
}

void Calc::equalsPushed()
{
    addends.emplace_back(digit_vec_to_int(digits));
    digits.clear();

    int sum = 0;

    for (const auto addend: addends) {
        sum += addend;
    }

    addends.clear();
    emit display(sum);
}
