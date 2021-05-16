# types
win32 types for any platform without the nonsense, and the bulk of overinclusion. This is compatible with C and C++.

code example:

```c
#include <stdio.h>
#include "types.h"
int main() {
	LPCSTR p = "hi";
	printf("%s", p);
}
```

Compiles without warnings on MSVC C and C++.
