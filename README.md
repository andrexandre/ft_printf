# ft_printf

This project is part of the 42 School curriculum and aims to recreate the printf function in the standard C library. The ft_printf function handles various format specifiers from the original printf

## Usage

1. Clone the repository
```sh
git clone https://github.com/andrexandre/ft_printf.git ; cd ft_printf
```

2. Compile the library
```sh
make
```
> This will generate the `libftprintf.a` static library file.

3. Create a file `main.c`
```c
#include "ft_printf.h"

int main() {
	ft_printf("number: %i\n", 123);	
}
```

4. Compile your program with the library
```sh
cc -o main main.c -L. -lftprintf
```

5. And finally, run your program
```sh
./main
```
