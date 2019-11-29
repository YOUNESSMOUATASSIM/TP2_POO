#ifndef COMPLEXE_H
#define COMPLEXE_H


class Complexe
{
    public:
        Complexe(float x=0,float y=0);
        //~Complexe();
        void lis();
        Complexe add(Complexe);
        void afficher(Complexe);



    private:
        float re;
        float im;

};

#endif // COMPLEXE_H
