# Quick Code Review: Cpp

#### Features:

- CMake + Google Test integrated

- My Cpp's code quick review 

- Test only on Debian 9

# Project Build & run

```Cpp
mkdir build && cd build
cmake ..
make -j$(nproc)
```

From the code above the `$CMAKE_BUILD` references the `./build` folder inside your project.

To run samples `$CMAKE_BUILD/src/app/codewars/myCodeWars.app`

To run the tests `$CMAKE_BUILD/test/myapp_test`
