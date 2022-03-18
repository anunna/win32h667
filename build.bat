@echo off

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\handmade\win32_handmade.cpp user32.lib Gdi32.lib
popd
