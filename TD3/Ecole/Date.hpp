//
// Created by bothmena on 09/02/17.
//

#ifndef CPLUSPLUS_DATE_HPP
#define CPLUSPLUS_DATE_HPP

using namespace std;

class Date {

    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(int, int, int);
        void afficher();
        void saisir();
        string toString();

        int getDay() const;
        void setDay(int day);
        int getMonth() const;
        void setMonth(int month);
        int getYear() const;
        void setYear(int year);
};


#endif //CPLUSPLUS_DATE_HPP
