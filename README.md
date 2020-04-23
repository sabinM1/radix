Program pentru a demonstra radix sort-ul.

Poti sa rulezi START.cpp (-recomandat) sau, pe rand, auxxx.cpp, shuffle.cpp si radix.cpp.

START.cpp este fisierul C++ care "include" cele trei fisiere de mai sus, obtinand acelasi rezultat ca si cum ai rula cele trei pe rand.


auxxx.cpp:
 -genereaza NR_ELEM numere (maxim 517944 elemente testate - DOAR IN START.cpp, nu si in celelalte trei, vezi primul UPDATE de jos) in ordine crescatoare (nu prea conteaza daca ca e crescator deoarece shuffle le amesteca).
 -citeste din -----
 -scrie in shuffle.in


shuffle.cpp:
 -amesteca numerele pe care le creaza auxxx.cpp folosind un algoritm de amestecare bazat pe timp.
 -citeste din shuffle.in
 -scrie in radix.in

radix.cpp:
 -sorteaza numerele pe care le-a amesteca shuffle.cpp cu metoda radix (default este lsd, Least significant digit, dar se poate schimba usor).
 -citeste din radix.in
 -scrie in radix.out

INPUT: Fara modificari nimic, dar se poate anula (/comenta in START.cpp) auxxx.cpp sau auxxx.cpp si shuffle.cpp, pentru a pune un sir de numere dorit de user.


OUTPUT: radix.out este cel final, ar trebui fie exact la fel cu shuffle.in daca sortarea/generarea a fost facuta corecta.


In concluzie, auxxx.cpp, shuffle.cpp si radix.cpp sunt optionale pentru a rula corect, cele necesare sunt toate fisierele in/out (in afara de lucrul spus la sectiunea INPUT, dar nu recomand) si START.cpp


UPDATE 23/04/2020: Am schimbat mai toate declararile intenger in long. Se pare ca acest program suporta maxim 517944 elemente (cel putin testat pe masina mea).
