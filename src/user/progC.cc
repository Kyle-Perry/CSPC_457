#include <iostream>
#include "syscalls.h"

using namespace std;

int main ()
{
  cpu_set_t mask = 0x4;
  int err = sched_setaffinity( 0, sizeof(cpu_set_t), &mask );
  if( err == -1 ){
      cout << "sched_setaffinity unsuccessful" << endl; 
  }
  for (;;) {}
  return 0;
}
