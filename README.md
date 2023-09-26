# ft_printf_42

Do you hate using write as the only allowed method of writing to the terminal or files? Well, ft_printf to the rescue!

## Description

With this project we extended our standard library clone by writing our own (simplified) printf with the flags `%c`, `%s`, `%d`, `%p`, `%u`, `%x` and `%%`.

## Table of Contents

- [Libft](#project-title)
- [Description](#description)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)

## Getting Started

### Prerequisites

You will need `GNU Make version 3.81` or higher ( https://www.gnu.org/software/make/ ).
To compile you will also need a gcc compiler. At school we use `clang version 11.0.0`
( https://gcc.gnu.org/install/download.html )

### Installation

Open a terminal window and `cd` into a directory of your choice. Clone the repo via `git clone <link to remote repo>` 
to your machine and execute `cd ft_printf && make`.
  
## Usage
  
The library is compiled into libftprintf.a and can be included in your projects by including the path to the 'ft_printf.h' and `libft.h`
files and linking the library to your project during compilation with -L[path to ft_printf directory] and -lftprintf (eg. using a Makefile):

```
{
### GNU MAKEFILE ###

NAME = your_project
SRC = [your source files]
INC = [your header files]

$(NAME): $(SRC) $(INC)
    gcc -I$(INC) $< -o $@ -Lft_printf -lftprintf
}
```

## Sidenote 
Over the course of the curriculum, the library has expanded significantly. 
The most current version can be found in the miniRT project.
I will update thhis version once my other early school projects work with the most current version.
