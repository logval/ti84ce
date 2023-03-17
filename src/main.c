# include <sys/util.h>

int main(void) {
  int x = randInt(0, 10);
  sprintf("%d", x);
  return 0;
}