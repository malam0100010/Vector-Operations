# Vector-Operations
This code can do numerous vector operations including: vector addtion, scalar multiplication, finding the dot product, finding the projection vector, and finding a vector cross product

A new version of this project has been created such that numbers are no longer hard coded but instead read values from user input. 

Output: 

#Vectors can be added component wise to find the addition of two vectors

Vectors used: 

Vector 1: <1, 3>

Vector 2: <-4, 7>

Practice #1: Addition of vectors: 


< -3  4 >

#A scalar multiple can be multiplied to each component of the vector. This portion of the program multiplies each vector by a choosen scalar and then adds them
components wise.

Vectors used: 

Vector A: <1.0, -3.0, 0.0> 

Scalar multiplier for vector A: 5.0

Vector B: <-4.0, 7.0, 5.0>

Scalar multiplier for vector B: 0.5

Practice #3: Scalar multiple

< 3.000  -11.500  2.500 >

#The dot product of two vectors multiplies and adds each vector component-wise. 
The magnitude of each vector is also found by taking the sqrt of the addition of the sqaure of the vector components. 
Finally, the angle between the two vectors is found with the acos() function whose input is the dot product divided by the magnitude of vector one times vector two

Vectors used: 

Vector 1: <10, -4, 7>

Vector 2: <-2, 1, 6>

Practice #4: Dot product

Dot Product: 18

12.845233

6.403124

Angle: 77.361 degrees

#The projection of vector V onto vector U results in a vector with the magnitude of V in the direction of vector U.
The projection is calculated by taking the dot product of U and V, dividing it by the addition of the components of vector U squared, and multiplying the result by the original vector U components. The magnitude of the projuV is also found.

Vectors used: 

Vector V: 

<1,5>

Vector U:

<7,9>

Practice #5: Vector projection

< 2.800 3.600 >

Magnitude of projeciton vector: 4.561

#The cross product of two vectors results in a vector that is normal to both vectors used. The angle between the two vectors used is also determined using a the same method mentioned in practice #4 (dot product)

Vector 1: 

<-1, 2, 5>

Vector 2:

<4, 0, -3>

Practice #6: Cross product

< -6 17 -8 >

5.477

5.000

19.723

Angle: 46.07 degrees
