# Data Types in Programming

## Categories of Data Types

Data types define the kind of values a variable can hold. They are generally categorized into three groups:

1. **Primitive Data Types**
2. **Derived Data Types**
3. **User-Defined Data Types**

### 1. Primitive Data Types

Primitive data types are the fundamental building blocks for data representation and are directly stored in memory.

**Examples:**
- `int`: Stores integers (whole numbers).
- `float`: Stores floating-point numbers (single precision, accurate up to 4 bytes).
- `double`: Stores double-precision floating-point numbers (accurate up to 15 decimal points).
- `char`: Stores a single character.
- `bool`: Stores boolean values (`true`/`false`).
- `void`: Represents the absence of any data (often used in functions that don't return a value).

### 2. Derived Data Types

Derived data types are formed by combining primitive types to create more complex structures.

**Examples:**
- **Array:** A collection of elements of the same type, indexed for access.
- **Function:** A block of code that performs a specific task, with optional return values.
- **Pointer:** A variable that holds the memory address of another variable.
- **Reference:** An alias for an existing variable, allowing manipulation of the original data.

### 3. User-Defined Data Types

User-defined data types allow programmers to create complex data models based on primitive and derived types.

**Examples:**
- **Structure (`struct`):** Groups variables of different data types under a single name.
- **Union:** Similar to `struct`, but all members share the same memory space, storing only one value at a time.
- **Enumeration (`enum`):** Defines a type with a set of named values.
- **Class:** A blueprint for objects, encapsulating both data (attributes) and methods (functions).
- **Type Definition (`typedef`):** Allows you to create an alias for an existing data type.

---

## Integer Types

| **Type**            | **Bytes** | **Range**                                            |
|---------------------|-----------|------------------------------------------------------|
| `int`               | 4         | -2,147,483,648 to 2,147,483,647                      |
| `unsigned int`      | 4         | 0 to 4,294,967,295                                   |
| `short`             | 2         | -32,768 to 32,767                                    |
| `unsigned short`    | 2         | 0 to 65,535                                          |
| `long`              | 4         | -2,147,483,648 to 2,147,483,647                      |
| `unsigned long`     | 4         | 0 to 4,294,967,295                                   |
| `long long`         | 8         | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `unsigned long long`| 8         | 0 to 18,446,744,073,709,551,615                      |

---

## Character Types

| **Type**            | **Bytes** | **Range**                |
|---------------------|-----------|--------------------------|
| `char`              | 1         | -128 to 127              |
| `signed char`       | 1         | -128 to 127              |
| `unsigned char`     | 1         | 0 to 255                 |
| `wchar_t`           | 2         | 0 to 65,535              |

---

## Boolean Type

| **Type**            | **Bytes** | **Values**               |
|---------------------|-----------|--------------------------|
| `bool`              | 1         | `false` or `true`        |

---

## Floating-Point Types

| **Type**            | **Bytes** | **Precision & Range**                            |
|---------------------|-----------|--------------------------------------------------|
| `float`             | 4         | 7 decimal digits, ±3.4E38                        |
| `double`            | 8         | 15 decimal digits, ±1.7E308                      |
| `long double`       | 8         | Same precision as `double`, depending on system   |

---

## Data Type Modifiers

Data type modifiers adjust the range or storage size of basic data types.

**Common Modifiers:**
- **Signed**: Includes both positive and negative values (default for `int` and `char`).
- **Unsigned**: Only stores non-negative values (e.g., `unsigned int`).
- **Short**: Uses less memory than standard `int`.
- **Long**: Increases the size or range of `int` or `double`.

**Examples:**
```cpp
unsigned int a;    // Non-negative integers
signed short b;    // Integers with negative and positive values
long double c;     // Higher precision floating-point number
```

---

## Type Casting

Type casting is used to convert a variable from one data type to another, often to perform operations between incompatible types.

**Example:**
```cpp
int amount = 100;
float interest = 0.1;
float totalAmount = (float)amount * interest;
```
In this example, the `amount` (an integer) is cast to `float` before performing the multiplication with `interest`.

---

## User Input

There are two primary ways to take user input in C++:

1. **Using `cin`:** For simple inputs like integers and floating-point numbers.
2. **Using `getline`:** For taking full lines of text, such as strings.

**Example:**
```cpp
int amount;
string name;

cin >> amount;         // Takes an integer input
getline(cin, name);    // Takes a string input (full line)
```

Note that when using both `cin` and `getline` together, you may need to handle the newline character left by `cin` before calling `getline`.

---
