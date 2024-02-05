cmake_minimum_required(VERSION 3.23)
project(UTAD_PA_BattleRoyale2)

set(CMAKE_CXX_STANDARD 14)

add_executable(UTAD_PA_BattleRoyale2 main.cpp Ui.cpp Ui.h Jugador.cpp Jugador.h GeneradorTorneos.cpp GeneradorTorneos.h RepositorioDeNombres.cpp RepositorioDeNombres.h Enemigo.cpp Enemigo.h Armas.cpp Armas.h "utilidades.h" "utilidades.cpp")
