#include <string>
#include <string_view>

class SpreadSheetCell
{
public:
    SpreadSheetCell(double initialValue);
    SpreadSheetCell(std::string_view initialValue);

    void setValue(double inValue);
    double getValue() const;

    void setString(std::string_view inString);
    std::string getString() const;

private:
    std::string doubleToString(double inValue) const;
    double stringToDouble(std::string_view inString) const;
    double mValue = 0;
};