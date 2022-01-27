#include "SpreadSheetCell.h"
using namespace std;

// 스코프지정 연산자
void SpreadSheetCell::setValue(double inValue)
{
    this->value = inValue;
}

double SpreadSheetCell::getValue() const
{
    return mValue;
}

std::string SpreadSheetCell::getString() const
{
    return doubleToString(mValue);
}

void SpreadSheetCell::setString(std::string_view inString) {
    mValue = stringToDouble(inString);
}

std::string SpreadSheetCell::doubleToString(double inValue) const {
    return to_string(inValue);
}

double SpreadSheetCell::stringToDouble(std::string_view inString) const {
    return strtod(inString.data(), nullptr);
}