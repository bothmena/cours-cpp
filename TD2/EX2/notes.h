//
// Created by bothmena on 27/01/17.
//

#ifndef TD2_NOTES_H
#define TD2_NOTES_H

class Notes {

private:
    float testUn;
    float testDeux;
    float DS;
    float examen;
    float oral;
    float tp;
    bool avecTP;

    float calculNCC();
    void init(float testUn, float testDeux, float DS, float examen, float oral, float tp);
public:

    Notes();
    Notes( float testUn, float testDeux, float DS, float examen, float oral );
    Notes( float testUn, float testDeux, float DS, float examen, float oral, float tp );

    float calculMoyenne();

};

#endif //TD2_NOTES_H
