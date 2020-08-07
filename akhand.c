#include <linux/kernel.h>
#include <stdio.h>
#include <sys/sysinfo.h>

int main ()
{

 struct sysinfo si;
 sysinfo (&si);
 printf ("total swap   : %ld\n", si.totalswap/1024);
 printf ("total RAM   : %ld \n", si.totalram/1024 );
 printf ("process count : %d\n", si.procs);
 return 0;
}