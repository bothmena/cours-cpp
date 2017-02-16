//
// Created by bothmena on 09/02/17.
//

#include <iostream>
#include "Date.hpp"

using namespace std;

void Date::afficher() {


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

    //return this->day + "/" + this->month + "/" + this->year;
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
