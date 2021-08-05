// assuming this content is in the file repro.c:
//
//   gcc repro.c -ldl
//
// then:
//
//   ./a.out put-the-full-path-to-the-so-file-here

#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char *argv[])
{
  if (argc > 1) {
    void* lib = dlopen(argv[1], RTLD_NOW);
    if (!lib) {
      printf("oops: %s\n", dlerror());
      return -1;
    }
  }
  return 0;
}
