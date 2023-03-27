@echo off

mkdir build
pushd build
cl -FC -Zi w32hh.cpp user32.lib gdi32.lib
popd
