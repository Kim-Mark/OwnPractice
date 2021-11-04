#include <stdio.h>
#include <stdlib.h>

int main()
{
  int row, col;
  int sum = 0;
  int i;
  int A[3][4];
  int B[4][3];
  int C[3][3]; // Store the result

// Make A
  for(row = 0; row < 3; row++){
	for(col = 0; col < 4; col++){
	A[row][col] = rand()%20 + 1;
    }
  }

// Print A
  for(row = 0; row < 3; row++){
	for(col = 0; col < 4; col++){
	printf("%3d", A[row][col]);
    }
printf("\n");
  }

// Make B
  for(row = 0; row < 4; row++){
        for(col = 0; col < 3; col++){
        B[row][col] = rand()%20 + 1;
    }
  }

// Print B
  for(row = 0; row < 4; row++){
        for(col = 0; col < 3; col++){
        printf("%3d", B[row][col]);
    }
    printf("\n");
  }

// AXB
  for(row = 0; row<3; row++){
	for(col = 0; col <3; col++){
	  for(i = 0; i < 4; i++){
		sum += A[row][i] * B[i][col];
      }
      C[row][col] = sum;	
    }
  }

// Print AXB
  for(row = 0; row < 3; row++){
	for(col = 0; col < 3; col++){
	printf("%4d", C[row][col]);
    }
  printf("\n");
  }
return 0;
}
