//
// Created by bothmena on 09/02/17.
//

#include <iostream>
#include <sstream>
#include "Date.hpp"

using namespace std;

Date::Date() {

    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int day, int month, int year) {

    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::afficher() {

    cout << "Date: " << this->toString() << endl;
}

void Date::saisir() {

    std::cout << "Day : ";
    std::cin >> this->day;
    std::cout << "Month : ";
    std::cin >> this->month;
    std::cout << "Year : ";
    std::cin >> this->year;
}

string Date::toString() {

    std::ostringstream stringStream;
    stringStream << this->day << "/" << this->month << "/" << this->year;
    return stringStream.str();
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}
