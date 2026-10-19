# Изрази и логически операции (продължение)

### Теоретичен обзор

При работа с реални числа (тип `float` или `double`) директното сравнение с `==` може да е **ненадеждно** заради закръгляния и ограничения при представянето на числа в двоичен формат. За да се провери дали две стойности са **"приблизително равни"**, се използва малка стойност, наречена **епсилон**. Ако разликата между числата е по-малка от епсилона, те се считат за равни в рамките на допустимата **околност**.

```c
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
    const double EPS = 1e-9;
    double a = 0.1 + 0.2;
    double b = 0.3;

    // Evaluates to 1 (true) if numbers are approximately equal, 0 (false) otherwise
    int isEqual = fabs(a - b) < EPS;

    printf("Comparison result: %d\n", isEqual);

    return 0;
}
```

---

### Полезни съвети

- Използвайте **константа** за епсилон, вместо твърди числа на няколко места, за да улесните поддръжката
- **Документирайте** избора на епсилон и неговото предназначение, за да е ясно при бъдещи модификации

---

### Допълнителни ресурси

- [Binary Fractions and Floating Point](https://ryanstutorials.net/binary-tutorial/binary-floating-point.php)
- [Demystifying Floating-Point Arithmetic](https://medium.com/@olivier.s/demystifying-floating-point-arithmetic-why-0-1-0-2-0-3-673b9c4bcf9a)
- [Floating Point Numbers](https://www.learncpp.com/cpp-tutorial/floating-point-numbers/)
- [Why Can't Decimal Numbers Be Represented Exactly in Binary?](https://stackoverflow.com/questions/1089018/why-cant-decimal-numbers-be-represented-exactly-in-binary)
