#include <unistd.h>
int total_solution;
void print_board(int queen[10])
{
   int i=0;
   char c;

   while(i<10)
   {
     c = queen[i] + '0';
     write(1,&c,1);
     i++;
   }
  write(1,"\n",1);
}
int position_safe(int queen[10], int row, int col)
{
  int i=0;

  while(i<row)
  {
    if(queen[i]==col)
	 return 0;

     
       if(queen[i] -i == col-row || queen[i] +i == col+row)
       return 0;
       i++;

   }
   return 1;
}

void place_queen(int queen[10], int row)
{
   int col;

   if(row == 10)
   {
     print_board(queen);
     total_solution++;
     return;
   }

 col=0;
 while(col<10)
  { 
    if(position_safe(queen,row,col))
     { 
       queen[row] = col;
       place_queen(queen, row+1);

     }
    col++;
  }
}
int ft_ten_queen_puzzel(void)
{
   int queen[10];
   
   total_solution =0;
   place_queen(queen,0);
   return total_solution;

}


     
