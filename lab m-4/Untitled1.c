#include<stdio.h>

int main (){

 {
     printf("Menu\n-----uugyugyt tdtftf ftyfytf----\n");
     printf("M for Mango\nA for Apple\nB for banana\nC for Cherry");
 }
 char key;
 printf("Enter key:");
 scanf("%c",&key);

 switch (key){
  case 'M':
      printf("Mango ---- Tk.500/kg");
      break;
      case 'A':
      printf("Apple   ---- Tk.250/kg");
      break;
      case 'B':
      printf("Banana ----Tk. 130/kg");
      break;
      case 'C':
      printf("Cherry -----Tk. 270/kg");
      break;
      default:
        printf("Not a correct key");
 }








return 0;
}
