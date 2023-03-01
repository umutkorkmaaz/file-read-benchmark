@echo off
rem PHP Test
where php >nul 2>&1
if %errorlevel%==0 (
    php read.php
) else (
    echo PHP does not exist
)

rem Ruby Test
where ruby >nul 2>&1
if %errorlevel%==0 (
    ruby read.rb
) else (
    echo Ruby does not exist
)

rem Go Test
where go >nul 2>&1
if %errorlevel%==0 (
    go run read.go
) else (
    echo Go does not exist
)

rem Python Test
where python3 >nul 2>&1 && (
    python3 read.py
) || where python >nul 2>&1 && (
    python --version 2>&1 | findstr /C:"Python 3." >nul && (
        python read.py
    ) || (
        echo This script works with Python 3
  )
) || (
    echo Python does not exist
) 
rem Node Test
where node >nul 2>&1
if %errorlevel%==0 (
    node read.js
) else (
    echo Node does not exist
)

rem C Test
where gcc >nul 2>&1
if %errorlevel%==0 (
    gcc read.c -o cread
    cread.exe
) else (
    echo GCC compiler does not exist
)

rem C++ Test
where g++ >nul 2>&1
if %errorlevel%==0 (
    g++ read.cpp -o cppread
    cppread.exe
) else (
    echo G++ compiler does not exist
)
