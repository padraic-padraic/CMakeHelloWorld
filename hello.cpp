#include <iostream>
int main(int argc, char** argv)
{
  //Making some dumb changes
  // std::cout << "Hello World!" << std::endl;
  if (argc==1){
    puts("Hello, World!");
  }
  else {
    printf("Hello, %s\n", argv[1]);
  }
  return 0;
}
