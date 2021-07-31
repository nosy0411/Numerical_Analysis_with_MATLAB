@echo off

set MATLAB=D:\Matlab

cd .

if "%1"=="" (D:\Matlab\bin\win64\gmake -f bisect_rtw.mk all) else (D:\Matlab\bin\win64\gmake -f bisect_rtw.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
