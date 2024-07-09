@echo off
for %%f in (*.ui) do (
    REM echo Processing file: %%f
    lupdate.exe %%f -ts EmployeesDIR_en_001.ts
    REM 在这里添加你想要对每个文件执行的命令
)
echo Done.
pause