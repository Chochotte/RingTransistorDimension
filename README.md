# RingTransistorDimension
Gives equivalent CMOS transistors dimensions from a ring transistor.

The given dimensions of the ring transistor are defined at the beginnig of the .c file under the names L and W.

The cutting algorithm of the transistor has been discuss during my PhD, it could be a wrong method (but it seems to work quite well) :
  - We create four (big) classic transistor with the minimum width of the gate - they have the same length gate so we can "factorized" it into a sigle fat one. (like Cadence does in exctraction mode)
  - We add the contribution of the four corners (unlike Cadence) : 
    each corner are divied into N little transistors with different length gates.
    N needs to be the greattest than possible to approch the real behaviour, here we use five : it's accurate and can easily be implement in a Cadence like sofware.


