#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.1415

int main(){

//Vector Addition
    int vectorU[] = {1, -3};
    int vectorW[] = {-4, 7};
    int additionVector[1]; 

    printf("Practice #1: Addition of vectors\n");
    printf("<");
    //add vectors component-wise
    for(int i = 0; i < 2; ++i){
        additionVector[i] = vectorU[i] + vectorW[i]; 
        printf(" %d ", additionVector[i]);
    }
    printf(">\n");

    printf("\n");
    
//Scalar Product
    double vectorA[] = {1.0, -3.0, 0.0};
    double vectorB[] = {-4.0, 7.0, 5.0};
    double resultantVector[2];
    double scalarMultipleA = 5.0;
    double scalarMultipleB = 0.5;

    printf("Practice #3: Scalar multiple\n");
    printf("<");
    //Multiply scalar with each component of respective scalar and print 
    for(int i = 0; i < 3; ++i){
        vectorA[i] = scalarMultipleA * vectorA[i];
        vectorB[i] = scalarMultipleB * vectorB[i];
        resultantVector[i] = vectorA[i] + vectorB[i];
        printf(" %.3lf ", resultantVector[i]);
    }
    printf(">\n");

    printf("\n");

//Dot Product
    //dot product and vector magnitude  
    int vectorC[] = {10, -4, 7};
    int vectorD[] = {-2, 1, 6};
    int dotProduct = 0;
    double magC = 0.0;
    double magD = 0.0;

    printf("Practice #4: Dot product\n");
    //multiply vectors component wise and compute magnitude before square root
    for(int i = 0; i < 3; ++i){
        dotProduct += vectorC[i] * vectorD[i];
        magC += vectorC[i] * vectorC[i];  
        magD += vectorD[i] * vectorD[i]; 
    }
    //sqaure magnitudes and output dot product and magnitudes 
    magC = sqrt(magC);
    magD = sqrt(magD);
    printf("Dot Product: %d\n", dotProduct);
    printf("%lf\n", magC);
    printf("%lf\n", magD);

    //calculating the angle between the two vectors 
    double cosAngle;
    double angleBetween;

    cosAngle = dotProduct / (magC * magD);
    angleBetween = acos(cosAngle);
    angleBetween = angleBetween * 360 / 2 / PI;
    printf("Angle: %.3lf degrees\n", angleBetween);

    printf("\n");

//Vector Projection
    int vecV[] = {1,5};
    int projOntoU[] = {7,9};
    int dotUV = 0.0;
    double magU = 0.0;
    double vectorMultiplier;
    double projectionVector[2];
    double projMag = 0;
    printf("Practice #5: Vector projection\n");
    printf("< ");
    //calculate dot product of U and V and U^2
    for(int i = 0; i < 2; ++i){
        dotUV += vecV[i] * projOntoU[i];
        magU += projOntoU[i] * projOntoU[i];
    }
    vectorMultiplier = (double)dotUV / magU;
    //calculate projection vector
    for(int i = 0; i < 2; ++i){
        projectionVector[i] = vectorMultiplier * projOntoU[i];
        printf("%.3lf ", projectionVector[i]);
        projMag += projectionVector[i] * projectionVector[i];
    }
    projMag = sqrt(projMag);
    printf(">\n");
    printf("Magnitude of projeciton vector: %.3lf\n", projMag);

    printf("\n");

//Cross product
    int vectorOne[] = {-1, 2, 5};
    int vectorTwo[] = {4, 0, -3};
    int oneCrossTwo[3];
    double magOne = 0.0;
    double magTwo = 0.0;
    double magCross = 0.0;

    oneCrossTwo[0] = (vectorOne[1] * vectorTwo[2]) - (vectorOne[2] * vectorTwo[1]);
    oneCrossTwo[1] = -1 * ((vectorOne[0] * vectorTwo[2]) - (vectorOne[2] * vectorTwo[0]));
    oneCrossTwo[2] = (vectorOne[0] * vectorTwo[1]) - (vectorOne[1] * vectorTwo[0]);
    printf("Practice #6: Cross product\n");
    printf("< ");
    //determine 1 x 2
    for(int i = 0; i < 3; ++i){
        printf("%d ", oneCrossTwo[i]);
    }
    printf(">\n");
//determine magnitude of each vector
    for(int j = 0; j < 3; ++j){
        magOne += vectorOne[j] * vectorOne[j];
        magTwo += vectorTwo[j] * vectorTwo[j];
        magCross += oneCrossTwo[j] * oneCrossTwo[j];
    }
    
    magOne = sqrt(magOne);
    magTwo = sqrt(magTwo);
    magCross = sqrt(magCross);
    printf("%.3lf\n", magOne);
    printf("%.3lf\n", magTwo);
    printf("%.3lf\n", magCross);

    //calcualte and display angle 
    double sinAngleRad;
    double practiceSixAngle;
    sinAngleRad = magCross / (magOne * magTwo);
    practiceSixAngle = asin(sinAngleRad);
    practiceSixAngle = practiceSixAngle * 360 / 2 / PI;
    printf("Angle: %.2lf degrees\n", practiceSixAngle);
    printf("\n");
    return 0;

}