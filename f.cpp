#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
int read(char* filename);
int main()
{
std::string stringfilename;
std::cout « "Input your path: ";
std::cin » stringfilename;
char* filename = (char*)stringfilename.c_str();
read(filename);
return 0;

}

int read(char* filename)
{
FILE* hh;
char h;
if ((hh = fopen(filename, "r")) == NULL)
{
perror("Error");
return 1;
}
while ((h = fgetc(hh)) != EOF)
{
printf("%h ", h);
}

fclose(hh);
}
