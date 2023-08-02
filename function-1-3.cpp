#include <iostream>

void count_digits(int array[4][4]) {
  int zero = 0;
  int one = 0;
  int two = 0;
  int three = 0;
  int four = 0;
  int five = 0;
  int six = 0;
  int sev = 0;
  int eight = 0;
  int nine = 0;
  

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          zero++;
          break;
        case 1:
          one++;
          break;
        case 2:
          two++;
          break;
        case 3:
          three++;
          break;
        case 4:
          four++;
          break;
        case 5:
          five++;
          break;
        case 6:
          six++;
          break;
        case 7:
          sev++;
          break;
        case 8:
          eight++;
          break;
        case 9:
          nine++;
          break;
      }
    }
  }

  std::cout << "0:" << zero << ";1:" << one << ";2:" << two
            << ";3:" << three << ";4:" << four << ";5:" << five
            << ";6:" << six << ";7:" << sev << ";8:" << eight
            << ";9:" << nine << ";" << std::endl;
return; 
}