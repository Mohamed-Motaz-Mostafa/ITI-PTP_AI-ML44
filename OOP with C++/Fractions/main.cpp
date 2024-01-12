#include <iostream>
using namespace std;
class Fraction {
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int _numerator = 0, int _denominator = 1) {
        numerator = _numerator;
        denominator = _denominator;
        if (_denominator == 0) {
            cout << "Error: Denominator cannot be zero. Setting denominator to 1" << endl;
            denominator = 1;
        }
    }

    // Getter functions
    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    // Setter functions
    void setNumerator(int _numerator) {
        numerator = _numerator;
    }

    void setDenominator(int _denominator) {
        if (_denominator != 0) {
            denominator = _denominator;
        } else {
            cout << "Error: Denominator cannot be zero. Setting denominator to 1" << endl;
            denominator = 1;
        }
    }

    // Function to simplify the fraction
    void simplify() {
        int gcd = calculateGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Function to calculate the greatest common divisor (GCD)
    int calculateGCD(int a, int b) const {
        if (b == 0) {
            return a;
        }
        return calculateGCD(b, a % b);
    }

    // Function to add another fraction to this fraction
    Fraction add( Fraction& other) {
        int resultNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Function to subtract another fraction from this fraction
    Fraction subtract(const Fraction& other) const {
        int resultNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Function to multiply this fraction by another fraction
    Fraction multiply(const Fraction& other) const {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Function to divide this fraction by another fraction
    Fraction divide(const Fraction& other) const {
        if (other.numerator != 0) {
            int resultNumerator = numerator * other.denominator;
            int resultDenominator = denominator * other.numerator;
            Fraction result(resultNumerator, resultDenominator);
            result.simplify();
            return result;
        } else {
            cout << "Error: Cannot divide by zero. Returning the original fraction." << endl;
            return *this;
        }
    }

    // Function to display the fraction
    void display() const {
        cout << numerator << "/" << denominator;
    }


    float fractionToFloat(Fraction F)
    {
        return numerator/denominator;
    }



    Fraction operator + (Fraction other)
    {
        return this->add(other);
    }

    Fraction operator * (Fraction other)
    {
        return this->multiply(other);
    }

    Fraction operator - (Fraction other)
    {
        return this->subtract(other);
    }

    Fraction operator / (Fraction other)
    {
        return this->divide( other);
    }
};

int main() {
    Fraction fraction1(18, 8);
    Fraction fraction2(2, 3);
    //fraction1.simplify();

    cout<<"******************** ";
    cout << endl;

    //fraction1.display();

    cout << "div: ";
    (fraction1/fraction2).display();
    cout << endl;

    cout << "add: ";
    (fraction1+fraction2).display();
    cout << endl;


    cout<<"******************** ";
    cout << endl;
    fraction1.display();
    cout << endl;
    fraction2.display();



    return 0;
}
