@echo off
echo ===================
echo 上一次tag
powershell Write-Host "本仓库不支持" -ForegroundColor Red
echo ===================
set /p commit="commit:"
git add . -v
git commit -v -m "%commit%"
git push -v
