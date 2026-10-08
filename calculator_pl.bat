@echo off
title Kalkulator
cls

:start
set /p licz1=Podaj 1 liczbe: 
echo.

:: Sprawdzenie 1 liczby
set /a test=licz1+0 2>nul
if not "%licz1%"=="" (
    for /f "delims=0123456789" %%A in ("%licz1%") do (
        echo Blad: podaj liczbe!
        goto start
    )
) else (
    echo Blad: podaj liczbe!
    goto start
)

:l2
set /p licz2=Podaj 2 liczbe: 
echo.

:: Sprawdzenie 2 liczby
if not "%licz2%"=="" (
    for /f "delims=0123456789" %%A in ("%licz2%") do (
        echo Blad: podaj liczbe!
        goto l2
    )
) else (
    echo Blad: podaj liczbe!
    goto l2
)

:znak
set /p znak=Podaj znak (+, -, *, /): 
echo.

if "%znak%"=="+" (
    set /a wynik=licz1+licz2

) else if "%znak%"=="-" (
    set /a wynik=licz1-licz2

) else if "%znak%"=="*" (
    set /a wynik=licz1*licz2

) else if "%znak%"=="/" (
    if "%licz2%"=="0" (
        echo Blad: dzielenie przez zero!
        goto l2
    )
    set /a wynik=licz1/licz2

) else (
    echo Nieznany znak!
    goto znak
)

echo Wynik: %wynik%
echo.

:pyt
echo Czy chcesz policzyc cos jeszcze raz?
echo Tak lub Nie
set /p pytanie=Wybor:

if /i "%pytanie:~0,1%"=="t" (
    cls
    goto start
) else if /i "%pytanie:~0,1%"=="n" (
    exit
) else (
    goto pyt
)