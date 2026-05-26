#ifndef _PERFILES
#define _PERFILES

// alina
class Perfil { //emplantillado?
    private:
        char nombre;
        int preguntas[30]; //recibe valores del 1 al 4
        void _init();

    public:
        Perfil(); //necesario?
        ~Perfil();
        Perfil(char, int[]);

};

#endif


//pregunta0 -1
//pregunta29 -30

//centro fulano
//centro luz


// este for va guardando las preguntas
//for(i; i<30){
// perfil1.preguntas[i] == perfil2.preguntas[i]}