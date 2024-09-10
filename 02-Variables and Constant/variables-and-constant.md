
# <center> Variables and Constants </center>

## Variables

A variable is a name given to a memory location that stores data. It allows us to access and manipulate that stored value.

**Example:**
```cpp
int score = 50;
```

### Variable Declaration
```cpp
int score;
```
In variable declaration, we specify the type of data the variable will hold and give it a name. This tells the operating system to create a block of memory associated with the name `score`.

### Variable Initialization
```cpp
score = 50;
```
In variable initialization, we assign a value to the variable. Here, `50` is stored in the memory location referenced by `score`.

### Variable Declaration and Initialization in a Single Line
```cpp
int score = 50;
```
This combines declaration and initialization. A memory block is created for `score`, and it is immediately initialized with the value `50`.

### Declaring and Initializing Multiple Variables in the Same Line
```cpp
int balance, life;
int score = 50, amount = 58;
```
- In the first statement, two variables `balance` and `life` are declared, each reserving separate memory blocks.
- In the second statement, two variables `score` and `amount` are declared and initialized at the same time.

### Rules for Variable Declaration
1. A variable name can start with either a capital or lowercase letter.
   ```cpp
   int amount, Balance;
   ```

2. A variable name can start with an underscore (`_`).
   ```cpp
   int _score;
   ```

3. A variable name **cannot** start with a number.
   ```cpp
   int 1score; // Error
   ```

4. A variable name **cannot** contain any special characters other than an underscore (`_`).
   ```cpp
   int score@13; // Error
   ```

5. A variable name **cannot** contain spaces.
   ```cpp
   int score 13; // Error
   ```

<br>
<br>
<hr>
<br>

## Identifiers

Identifiers are the names used to identify variables, functions, classes, etc. in a program. They must follow the rules of variable naming. In C++, certain words are reserved as **keywords** or **reserved words** that cannot be used as identifiers.

**Examples of keywords:**
`int`, `char`, `auto`, `string`, etc.

**Note:** We cannot use keywords as variable names, as they have special meanings in the programming language and will result in a syntax error.

<br>
<br>
<hr>
<br>

## Constants

Constants are variables whose values cannot be changed once assigned. Use the `const` keyword to declare constants. Constants are used when you want to ensure that a variable's value remains the same throughout the program.

**Example:**
```cpp
const int uid = 353643;
```

