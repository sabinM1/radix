Program pentru a demonstra radix sort-ul.

Poti sa rulezi START.cpp (-recomandat) sau, pe rand, auxxx.cpp, shuffle.cpp si radix.cpp. 

START.cpp este fisierul C++ care "include" cele trei fisiere de mai sus, obtinand acelasi rezultat ca si cum ai rula cele trei pe rand.


auxxx.cpp:
 genereaza NR_ELEM numere (int, dar se poate schimba usor, posibil sa strice alte lucruri) in ordine crescatoare (nu prea conteaza ca e crescator dar mna).


shuffle.cpp:
 amesteca numerele pe care le creaza auxxx.cpp folosind un algoritm de amestecare bazat pe timp.


radix.cpp:
 sorteaza numerele pe care le-a amesteca shuffle.cpp cu metoda radix (default este lsd, Least significant digit, dar se poate schimba usor).


INPUT: Fara modificari nimic, dar se poate anula (/comenta in START.cpp) auxxx.cpp sau auxxx.cpp si shuffle.cpp, pentru a pune un sir de numere dorit de user.


OUTPUT: radix.out este cel final, ar trebui fie exact la fel cu shuffle.in daca sortarea/generarea a fost facuta corecta.


In concluzie, auxxx.cpp, shuffle.cpp si radix.cpp sunt optionale pentru a rula corect, cele necesare sunt toate fisierele in/out (in afara de lucrul spus la sectiunea INPUT, dar nu recomand) si START.cpp
