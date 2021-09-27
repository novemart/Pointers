#include <iostream>

int main(){

  //example from the slide
  int i = 5;
  int *p = &i;
  *p = 10;
  std::cout << *p << " " << i << std ::endl;
  std::cout << p << std ::endl;
  //i = i + 2;
  std::cout << p << std::endl;
  int **j = &p;
  int ***q = &j;
  int ****r = &q;
  std::cout << ****r << " " << i << std::endl;
  std::cout<< "***************************"<< std::endl;

  //pointer to array
  char array[] = "hello";
  char *ptr = array;
  if (&array[2] != (ptr+2))
   std::cout << "weird"<< std::endl;
  else
   std::cout <<"good" << std::endl;
  std::cout<< "***************************"<< std::endl;


  //multidimentional array
  char multi[2][3];
  multi[0][0] = 'a';
  multi[0][1] = 'b';
  multi[0][2] = 'c';

  multi[1][0] = 'd';
  multi[1][1] = 'e';
  multi[1][2] = 'f';

  //c++ extension
  for ( char (&row)[3] : multi){
    for (char cell : row ){
       std::cout << cell << std::endl;
    }

  }


  std::cout<< "***************************"<< std::endl;
  //pointer arithmetic
  int val1  = 2;
  int val2 = 3;
  int *point = &val1;
  std::cout << *(point-1) << std::endl;

}
