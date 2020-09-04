#include <stdio.h>
int main(){

printf("hello world\n");
 
fd = open("testfile", O_RDWR | O_CREAT);
for (i=0; i< CONTENT_SIZE; i++)
{
    testBufOut[i] = i;
}

num_bytes_written = write(fd, testBufOut, CONTENT_SIZE);
close (fd);
return 0;
}
