#include <stdio.h> 
#include <stdlib.h>
#include <assert.h>
#include <GL/glut.h>
#define __OSX__
#ifndef __OSX__
/* pour Bocal */
//#include <GL/glut.h>      
#else
/* pour mac */
//#include <GLUT/glut.h>
#endif
#define MAXMAT 100
typedef float matrice [MAXMAT] [MAXMAT];
struct matrfloat{
    int n;
    int size;
    unsigned long sizeX;
    unsigned long sizeY;
    matrice m;
};
typedef struct matrfloat mat_t; 
struct Image {
    unsigned long sizeX;
    unsigned long sizeY;
    GLubyte *data;
};
typedef struct Image Image;
typedef unsigned short utab [3][3][3];

int ImageLoad_PPM(char *filename, Image *image);
void imagesave_PPM(char *filename, Image *image);
void upsidedown(Image *);
void gris_uniforme (Image *);
mat_t creer (Image *);
void printMatrice(mat_t);
void printMatrice2(Image *);
