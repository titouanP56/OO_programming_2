#include "Personnel.h" 

class PersonnelAdmin : public Personnel {
    private:
        int heuresSup;
        float taux; 

    public:
        PersonnelAdmin(string nom, string prenom, float salaire_base, int hs = 0, float taux_hs = 0.0f);

        void setHeuresSup(int hs);
        void setTaux(float t);

        int getHeuresSup() const;
        float getTaux() const;

        float calculSalaire();

        void affiche();
};

