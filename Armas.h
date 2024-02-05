#pragma once
#include <string>

class Armas {
private:
    std::string nombreArma;
    float danioGenerado;
    float porcentageDefensivo;

public:
    // Constructores
    Armas(const std::string& nombreArma, float danioGenerado, float porcentageDefensivo);
    Armas(float danioGenerado, float porcentageDefensivo);
    Armas();

    // Getters
    std::string getNameArma() const;
    float getDanioGenerado() const;
    float getDanioPorcentageDefensivo() const;

    // Setters
    void setDanioGenerado(float newDanioGenerado);
    void setPorcentageDefensivo(float newPorcentageDefensivo);
    void setNameArma(const std::string& newNameArma);
};
