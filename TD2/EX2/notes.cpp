// Created by bothmena on 27/01/17.

# include "notes.h"

Notes::Notes() {
    this->init( 0, 0, 0, 0, 0, 0);
}

Notes::Notes( float testUn, float testDeux, float DS, float examen, float oral ) {

    this->init( testUn, testDeux, DS, examen, oral, 0);
}

Notes::Notes( float testUn, float testDeux, float DS, float examen, float oral, float tp ) {

    this->init( testUn, testDeux, DS, examen, oral, tp);
}

float Notes::calculMoyenne() {

    //30% NCC + 20% TP + 50 % Examen
    //40% NCC + 60% Examen
    return this->avecTP ?
                    0.3 * this->calculNCC() + 0.2 * this->tp + 0.5 * this->examen :
                    0.4 * this->calculNCC() + 0.6 * this->examen;
}

float Notes::calculNCC() {

    //NCC= (teste1 + teste2+orale+ 2 *DS)/5
    return ( this->testUn + this->testDeux + this->oral + 2 * this->DS ) / 5;
}

void Notes::init( float testUn, float testDeux, float DS, float examen, float oral, float tp ) {

    this->testUn = testUn;
    this->testDeux = testDeux;
    this->DS = DS;
    this->examen = examen;
    this->oral = oral;
    this->tp = tp;
    this->avecTP = tp != 0;
}


