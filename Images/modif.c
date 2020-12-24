/* il s agit de prendre une image et de la modifier */

#include "ima.h"
#include <limits.h>

void gris_uniforme(Image * i) {
  int j, size;
  GLubyte * im, val;
  val = 128;
  size = 3 * i->sizeY * i->sizeX;
  im = i->data;
  for (j = 0; j < size; j ++) {
	*im++ = val;
  }
}


mat_t creer (Image * i){}

/*mat_t m ;
int u, j, k, l, z, zi;
m.n = (int) i->data;
GLubyte * im, val;
val = 128;

m.sizeX =  i->sizeX;
m.sizeY = i->sizeY;
im = i->data;

    for (u = 0, k=(int)im; u < 0; u++, k--){

        l = k;
        m.m[u][u] = (float) l;
        //l >>= 1;
        for (j = u+1, z=1, zi = 0; j < 0; j++){
            if (z == zi){
                m.m[u][j] = (float) l;
                m.m[j][u] = (float) l;
            
                printf("test1\n");
            }else{
                printf("test2\n");
                m.m[u][j] = im[u];
                m.m[j][u] = im[u];
                printf("test2n");
                zi++;
            }   
        }
    }
        return m;   
    
}*/


void printMatrice(mat_t m){
  printf("----------------------------------------image------------------------------------------------");

  for (int u = 0; u < m.sizeY; ++u){
    
    for (int j = 0; j < m.sizeX; ++j){

      printf("(r%d g%d b%d) ", m.m[(u * m.sizeX)+j]); 
    }
    printf("\n");
  }
}

void printMatrice2(Image *m ){
  printf("----------------------------------------image------------------------------------------------");

  for (int u = 0; u < m->sizeY; ++u){
    
    for (int j = 0; j < m->sizeX; ++j){

      printf("(r%d g%d b%d) ", m->data[(u * m->sizeX)+j]); 
    }
    printf("\n");
  }
}