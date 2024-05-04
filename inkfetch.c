#include <stdio.h>
#include <sys/utsname.h>

const char version[] = "Inkfetch v0.02 by Splatink";

void getKernelVersion() {
  struct utsname buffer;
  uname(&buffer);

  printf("Host: %s\n", buffer.nodename);
  printf("OS: %s\n", buffer.sysname);
  printf("Kernel: %s\n", buffer.release);
}

int main () {
  printf("%s\n", version);
  puts(" ");
  getKernelVersion();
  puts(" ");
  puts("'Fine, I'll do it myself'");
  return 0;
}
