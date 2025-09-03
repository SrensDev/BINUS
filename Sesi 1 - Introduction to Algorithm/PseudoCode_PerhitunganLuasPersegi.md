# PseudoCode Perhitungan 5 x 3

```
Start
    length = 5
    width = 3
    area = length x width
    Print "Area = ", area
End
```

### Contoh Code:
```c++
#include <stdio.h>

int main() {
    int length = 5, width = 3;

    int area = length * width;

    printf("Area = %d", area);
}
```

# PseudoCode Perhitungan Menggunakan Input

```
Start
    Input length
    Input width
    area = length x width
    Print "Area = ", area
End
```

### Contoh Code:
```c++
#include <stdio.h>

int main() {
    int length, width;

    printf("Insert Length: ");
    scanf("%d", &length);
    printf("Insert Width: ");
    scanf("%d", &width);

    int area = length * width;

    printf("Area = %d", area);
}
```