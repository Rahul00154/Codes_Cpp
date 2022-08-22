#include<stdio.h>

int main()

{

int disk, temp[100] = {0};

printf("Give number of disk::");

scanf("%d", &disk);

int min = disk, size = disk;

int q;

for (int i = 1; i<= disk; i++)

{

printf("%d day Disk Size ::",i);

scanf("%d", &q);

temp[q] = q;

if(q == min)

{

while(temp[size])

{

printf("%d Disk ", size);

size--;

}

min = size;

printf("\n");

}

}

}