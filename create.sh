cmake -G "Ninja" -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_CXX_COMPILER=/usr/bin/g++
cmake --build build
