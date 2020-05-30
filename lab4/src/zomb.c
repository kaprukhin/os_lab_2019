#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main ()
{
  pid_t child;

  child = fork ();
  if (child > 0) {
    sleep (25);
  }
  else {
    exit (0);
  }
  return 0;
}