# shunting-yard
An implementation of the shunting yard algorithm (aka operator-precedence parser) which is configurable to use user-defined operators and precedence levels.


To build the project, simply generate the build files by running
```
cmake -Bbuild -G[Generator]
```
where `[Generator]` is your build system. Note that `Unix Makefiles` is the default option.

After the build files are generated, simply run
```
cmake --build build
```
Note that on Linux, you can use `cmake --build build -- -j<num>` where `<num>` is the number of cores you wish to use for building.
