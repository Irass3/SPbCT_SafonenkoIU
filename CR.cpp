#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include <iostream>
int read(char* filename);
int main()
{
setlocale(LC_ALL, "ru");
std::string stringfilename;
std::cout « "Введите название файла: ";
std::cin » stringfilename;
char* filename = (char*)stringfilename.c_str();
read(filename);
return 0;

}

int read(char* filename)
{
FILE* fp;
char c;
if ((fp = fopen(filename, "r")) == NULL)
{
perror("Error");
return 1;
}
while ((c = fgetc(fp)) != EOF)
{
printf("%c ", c);
}

fclose(fp);
}
