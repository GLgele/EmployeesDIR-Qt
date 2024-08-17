if not exist WinReleaseBins mkdir WinReleaseBins
copy /Y EmployeesDIR\build\Desktop_Qt_5_15_2_MinGW_64_bit-Release\EmployeesDIR.exe WinReleaseBins\EmployeesDIR.exe
windeployqt WinReleaseBins/EmployeesDIR.exe
