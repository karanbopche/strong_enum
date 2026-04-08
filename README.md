# Strong Enums in C
This code demonstrates the implementation of strong enums in C, which are a way to create type-safe enumerations that prevent implicit conversions to integers. 
This enhances code safety and readability by ensuring that only valid enum values can be used in functions that expect specific enum types.
## Usage
1. Include the `strong_enum.h` header file in your C code.
2. Use the `STRONG_ENUM_DECLARE` macro to declare a strong enum type, specifying the enum name and the underlying integer type.
3. Use the `STRONG_ENUM_DECLARE_VALUE` macro to define specific enum values for the declared strong enum type.
4. Use the `STRONG_ENUM_IS_EQUAL` and `STRONG_ENUM_COMPARE` macros to compare strong enum values safely.
## Example
```c
#include "strong_enum.h"
STRONG_ENUM_DECLARE(MyEnum1, int)
#define MyEnum1_Value1   STRONG_ENUM_DECLARE_VALUE(MyEnum1, 1);
#define MyEnum1_Value2   STRONG_ENUM_DECLARE_VALUE(MyEnum1, 2);
STRONG_ENUM_DECLARE(MyEnum2, int)
#define MyEnum2_Value1   STRONG_ENUM_DECLARE_VALUE(MyEnum2, 10);
#define MyEnum2_Value2   STRONG_ENUM_DECLARE_VALUE(MyEnum2, 20);
MyEnum1 enumVar1 = MyEnum1_Value1;
MyEnum2 enumVar2 = MyEnum2_Value1;
void function1(MyEnum1 e) {}
void function2(MyEnum2 e) {}
int main() {
    function1(MyEnum1_Value1); // OK
    function2(MyEnum2_Value2); // OK
    function1(MyEnum2_Value2); // Compilation error: incompatible types
    return 0;
}
```
## Benefits
- Type safety: Strong enums prevent implicit conversions to integers, reducing the risk of using invalid values.
- Improved readability: Strong enums make it clear that a variable is an enumeration type, enhancing code readability.
- Better maintainability: Strong enums can help catch errors at compile time, making code easier to maintain and debug.

## Conclusion
Strong enums in C provide a way to create type-safe enumerations, improving code safety and readability by preventing implicit conversions to integers.
By using the provided macros, developers can define and use strong enums effectively in their C code.
