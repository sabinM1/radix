# Program pentru a demonstra radix sort-ul. #
[![License: WTFPL](https://img.shields.io/badge/License-WTFPL-brightgreen.svg)](http://www.wtfpl.net/about/)
[![Open Source Love svg1](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)](https://github.com/ellerbrock/open-source-badges/)
[![C++](https://img.shields.io/badge/C%2B%2B-g%2B%2B-blue)](http://cplusplus.com/) <br> <br>

## Cum poti rula programul?
Poti sa rulezi START.cpp (-recomandat) sau, pe rand, auxxx.cpp, shuffle.cpp si radix.cpp.

START.cpp este fisierul C++ care "include" cele trei fisiere de mai sus, obtinand acelasi rezultat ca si cum ai rula cele trei pe rand.

## Informatii despre fisiere:
### auxxx.cpp:
 -genereaza NR_ELEM numere (maxim 517944 elemente testate - DOAR IN START.cpp, nu si in celelalte trei, vezi primul UPDATE de jos) in ordine crescatoare (nu prea conteaza daca ca e crescator deoarece shuffle le amesteca). <br>
 -citeste din ----- <br>
 -scrie in shuffle.in <br>


### shuffle.cpp:
 -amesteca numerele pe care le creaza auxxx.cpp folosind un algoritm de amestecare bazat pe timp. <br>
 -citeste din shuffle.in <br>
 -scrie in radix.in <br>

### radix.cpp:
 -sorteaza numerele pe care le-a amesteca shuffle.cpp cu metoda radix (default este lsd, Least significant digit, dar se poate schimba usor). <br>
 -citeste din radix.in <br>
 -scrie in radix.out <br>

## I/O:
**INPUT**: Fara modificari nimic, dar se poate anula (/comenta in START.cpp) auxxx.cpp sau auxxx.cpp si shuffle.cpp, pentru a pune un sir de numere dorit de user. <br> <br>
**OUTPUT**: radix.out este cel final, ar trebui fie exact la fel cu shuffle.in daca sortarea/generarea a fost facuta corecta.

## Concluzie:
In concluzie, auxxx.cpp, shuffle.cpp si radix.cpp sunt optionale pentru a rula corect, cele necesare sunt toate fisierele in/out (in afara de lucrul spus la sectiunea INPUT, dar nu recomand) si START.cpp.

## Update-uri repo:
UPDATE 23/04/2020: Am schimbat mai toate declararile intenger in long. Se pare ca acest program suporta maxim 517944 elemente (cel putin testat pe masina mea).
UPDATE 26/04/2020: Am formatat mai bine readme-ul, urmez sa pun si pe engleza.
