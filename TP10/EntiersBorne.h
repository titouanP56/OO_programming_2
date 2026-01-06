class EntiersBorne {
    private :
        int val;
        int static const val_min = 5;
        int static const val_max = 1000;

    public :

        EntiersBorne(int v);

        int getVal();

        EntiersBorne operator+(const EntiersBorne& autre) const;
        EntiersBorne operator-(const EntiersBorne& autre) const;
        EntiersBorne operator*(const EntiersBorne& autre) const;
        EntiersBorne operator/(const EntiersBorne& autre) const;

};