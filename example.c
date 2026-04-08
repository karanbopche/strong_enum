/**
 * This code demonstrates the usage of strong enums in C. 
 * Strong enums are a way to create type-safe enumerations that prevent implicit conversions to integers.
 * Enhancing code safety and readability.
 */
#include "strong_enum.h"

STRONG_ENUM_DECLARE(MyEnum1, int)
#define MyEnum1_Value1   STRONG_ENUM_DECLARE_VALUE(MyEnum1, 1);
#define MyEnum1_Value2   STRONG_ENUM_DECLARE_VALUE(MyEnum1, 2);


STRONG_ENUM_DECLARE(MyEnum2, int)
#define MyEnum2_Value1   STRONG_ENUM_DECLARE_VALUE(MyEnum2, 10);
#define MyEnum2_Value2   STRONG_ENUM_DECLARE_VALUE(MyEnum2, 20);

// defining strong enums variables
MyEnum1 enumVar1 = MyEnum1_Value1;
MyEnum2 enumVar2 = MyEnum2_Value1;


// example functions accepting strong enums as parameters
void function1(MyEnum1 e) {}
void function2(MyEnum2 e) {}

int main() {
    function1(MyEnum1_Value1); // OK
    function2(MyEnum2_Value2); // OK
    function1(MyEnum2_Value2); // Compilation error: incompatible types
    return 0;
}
