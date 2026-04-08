#ifndef STRONG_ENUM_H
#define STRONG_ENUM_H

#define STRONG_ENUM_DECLARE(enum_type_name, int_type) typedef struct {int_type val;} enum_type_name;
#define STRONG_ENUM_DECLARE_VALUE(enum_value_name, value)  (enum_value_name){value}
#define STRONG_ENUM_IS_EQUAL(a, b) ((a).val == (b).val)
#define STRONG_ENUM_COMPARE(a, b) ((a).val - (b).val)

#endif // STRONG_ENUM_H
