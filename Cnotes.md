`printf` is a function from the standard input/output library that prints formatted text to the screen.

```c
#include <stdio.h>

int main(void)
{
	printf("To C, or not to C: that is the question.\n");
	return 0;
}
```

## Basic Form

```c
printf(format_string, value1, value2, ...);
```

- The **format_string** contains ordinary characters and conversion specifications.
- A conversion specification begins with `%` and describes how a value should be printed.
- Each conversion specification should have a corresponding argument, in the same order.
- `printf` returns the number of characters printed, or a negative value if an output error occurs.

## printf Placeholders (% codes)
In C, %d is the __format specifier__ for a signed decimal integer it tells printf() and scanf() to interpret the value as a bas 10 integer

The d in %d stands for decimal, not "digit" or "integer" in the abstract sense
```c
e.g. printf("i am %d years old\n", 30);
```
| Specification | Prints | Example |
| --- | --- | --- |
| `%d` | `int` in decimal | `printf("%d", 42);` |
| `%u` | `unsigned int` | `printf("%u", count);` |
| `%o` | `int` in octal | `printf("%o", 10);` |
| `%x` / `%X` | `int` in hexadecimal | `printf("%x", 255);` |
| `%f` | `double` in fixed-point notation | `printf("%f", 3.14);` |
| `%e` / `%E` | `double` in scientific notation | `printf("%e", 3.14);` |
| `%g` / `%G` | Shorter of `%f` and `%e` | `printf("%g", 3.14);` |
| `%c` | A character | `printf("%c", 'A');` |
| `%s` | A string | `printf("%s", "hello");` |
| `%%` | A literal percent sign | `printf("100%%");` |

## Escape Sequences

Escape sequences represent characters that are difficult or impossible to type directly inside a string.

| Sequence | Meaning |
| --- | --- |
| `\n` | Newline |
| `\t` | Horizontal tab |
| `\b` | Backspace |
| `\r` | Carriage return |
| `\\` | Backslash |
| `\"` | Double quote |
| `\'` | Single quote |

Example:

```c
printf("Name:\tAda\nLanguage:\tC\n");
```

## Width and Precision

Numbers can include an optional field width and precision between `%` and the conversion letter.

```c
printf("%6d\n", 42);       // Minimum width of 6 characters
printf("%-6d!\n", 42);     // Left-align within the field
printf("%.2f\n", 3.14159); // Print two digits after the decimal point
printf("%8.2f\n", 3.14159); // Width 8, precision 2
```

The field width is a **minimum**, not a maximum. A value longer than the requested width is still printed in full.

## Important Rules

- Include `<stdio.h>` before using `printf`.
- Match each conversion specification with the correct argument type. For example, use `%d` for an `int` and `%f` for a `double`.
- In a call to `printf`, a `float` argument is automatically converted to `double`.
- Text in double quotes is a string literal; a single character uses single quotes, such as `'A'`.
- `printf` does not automatically add a newline. Add `\n` when the next output should begin on a new line.

## Example with Several Values

```c
#include <stdio.h>

int main(void)
{
	int year = 1978;
	double price = 3.50;

	printf("Year: %d\n", year);
	printf("Price: $%.2f\n", price);
	printf("First letter: %c\n", 'C');
	printf("Message: %s\n", "Hello");

	return 0;
}
```
