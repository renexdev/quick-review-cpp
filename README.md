# Quick Code Review: Cpp

#### Features:

- CMake + Google Test integrated

- [Codewars cpp's code review](www.codewars.com)

- Tested only on Debian GNU/Linux 11 (bullseye)

# Project Build & run

```Cpp
mkdir build && cd build
cmake ..
make -j$(nproc)
```

From the code above the `$CMAKE_BUILD` references the `./build` folder inside your project.

To run the samples typing `$CMAKE_BUILD/src/app/codewars/myCodeWars.app`

To run the tests typing  `$CMAKE_BUILD/test/myapp_test`
