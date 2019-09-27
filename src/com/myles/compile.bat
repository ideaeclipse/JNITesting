SET PATH=C:\mingw\mingw64\bin
gcc -c -I "C:\Program Files\Java\jdk1.8.0_181\include" -I "C:\Program Files\Java\jdk1.8.0_181\include\win32" com_myles_NativeStudent.c -o test.o
gcc -shared -o native.dll test.o -Wl,--add-stdcall-alias