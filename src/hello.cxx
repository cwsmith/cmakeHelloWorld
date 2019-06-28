#include "hello.h"
#include "hello_internal.h"
#include <cstdio>
void friendly::hello() {
  printf("%s\n", HELLO_MESSAGE);
}
