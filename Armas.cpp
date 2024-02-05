#include "Armas.h"

// Constructor con todos los parámetros
Armas::Armas(const std::string& n, float v, float a)
    : nombreArma(n), danioGenerado(v), porcentageDefensivo(a) {}

// Constructor con danioGenerado y porcentageDefensivo, nombreArma se inicializa vacío
Armas::Armas(float v, float a)
    : nombreArma(""), danioGenerado(v), porcentageDefensivo(a) {}

// Constructor por defecto
Armas::Armas() : nombreArma(""), danioGenerado(0), porcentageDefensivo(0) {}

// Getters
std::string Armas::getNameArma() const {
    return nombreArma;
}

float Armas::getDanioGenerado() const {
    return danioGenerado;
}

float Armas::getDanioPorcentageDefensivo() const {
    return porcentageDefensivo;
}

// Setters
void Armas::setDanioGenerado(float newDanioGenerado) {
    danioGenerado = newDanioGenerado;
}

void Armas::setPorcentageDefensivo(float newPorcentageDefensivo) {
    porcentageDefensivo = newPorcentageDefensivo;
}

void Armas::setNameArma(const std::string& newNameArma) {
    nombreArma = newNameArma;
}

