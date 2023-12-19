#!/bin/bash
nasm -f win64 decoder.asm -o decoder.obj
x86_64-w64-mingw32-gcc decoder.obj -o decoder.exe
