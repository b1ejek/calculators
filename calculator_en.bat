@echo off
title Calculator
cls

:start
set /p licz1=Enter the first number: 
echo.

:: Check the first number
set /a test=licz1+0 2>nul
if not "%licz1%"=="" (
    for /f "delims=0123456789" %%A in ("%licz1%") do (
        echo Error: Please enter a number!
        goto start
    )
) else (
    echo Error: Please enter a number!
    goto start
)

:l2
set /p licz2=Enter the second number: 
echo.

:: Check the second number
if not "%licz2%"=="" (
    for /f "delims=0123456789" %%A in ("%licz2%") do (
        echo Error: Please enter a number!
        goto l2
    )
) else (
    echo Error: Please enter a number!
    goto l2
)

:znak
set /p znak=Enter an operator (+, -, *, /): 
echo.

if "%znak%"=="+" (
    set /a wynik=licz1+licz2

) else if "%znak%"=="-" (
    set /a wynik=licz1-licz2

) else if "%znak%"=="*" (
    set /a wynik=licz1*licz2

) else if "%znak%"=="/" (
    if "%licz2%"=="0" (
        echo Error: Division by zero!
        goto l2
    )
    set /a wynik=licz1/licz2

) else (
    echo Unknown operator!
    goto znak
)

echo Result: %wynik%
echo.

:pyt
echo Do you want to calculate something again?
echo Yes or No
set /p pytanie=Choice:

if /i "%pytanie:~0,1%"=="y" (
    cls
    goto start
) else if /i "%pytanie:~0,1%"=="n" (
    exit
) else (
    goto pyt
)