class Vecteur {
    int nombreElements ;
    int * elements ;
    
    public :
        Vecteur (int);
        ~Vecteur ();
        int & operator [] (int);
};