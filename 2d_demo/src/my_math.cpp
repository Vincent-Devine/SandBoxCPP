#include "my_math.h"
#include "my_type.h"

//------------------------------------------------------------------------------------------------
//----------------------------------------- Vector struct ----------------------------------------
//------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------
//----------------------------------- CartesianLine2D struct -------------------------------------
//------------------------------------------------------------------------------------------------
CartesianLine2D slopeInterceptToCartesianLine2D(SlopeInterceptLine2D slopeIntercept)
{
    return {slopeIntercept.a, 1.f, slopeIntercept.b};
}

//------------------------------------------------------------------------------------------------
//-------------------------------- SlopeInterceptLine2D struct -----------------------------------
//------------------------------------------------------------------------------------------------
SlopeInterceptLine2D cartesianLineToSlopeInterceptLine2D(CartesianLine2D cartesianLine)
{
    return {cartesianLine.a / cartesianLine.b, cartesianLine.c / cartesianLine.b};
}

//------------------------------------------------------------------------------------------------
//------------------------------------ VectorLine2D struct ---------------------------------------
//------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------
//-------------------------------------- Circle2D struct -----------------------------------------
//------------------------------------------------------------------------------------------------
float calculateAreaCircle2D(Circle2D circle)
{
    return (circle.radius * circle.radius * MY_PI);
}

//------------------------------------------------------------------------------------------------
//------------------------------------- Triangle2D struct ----------------------------------------
//------------------------------------------------------------------------------------------------
float calculateAreaTriangle2D(Triangle2D triangle)
{
    return 0.f; // TODO
}

//------------------------------------------------------------------------------------------------
//------------------------------------- Rectangle2D struct ---------------------------------------
//------------------------------------------------------------------------------------------------ 
float calculateAreaRectangle2D(Rectangle2D rectangle)
{
    return 0.f; // TODO
}

//------------------------------------------------------------------------------------------------
//-------------------------------------- Segment2D struct ----------------------------------------
//------------------------------------------------------------------------------------------------



Vector2D Math::calculatePointDependentTime(Vector2D orginePoint, Vector2D directionVector, float time)
{
    Vector2D newPoint;
    newPoint.x = orginePoint.x + time * directionVector.x;
    newPoint.y = orginePoint.y + time * directionVector.y;
    return newPoint;
}

float vectorMagnitude(Vector2D A, Vector2D B)
{
    return sqrtf( powf(A.x - B.x, 2) + powf(A.y - B.y, 2));
}

// Colliding
bool Math::CollisionPointCercle(Circle2D circle, Vector2D A)
{
    float distX = A.x - circle.centre.x;
    float distY = A.y - circle.centre.y;

    float distance = sqrtf((distX * distX) + (distY * distY));

    if(distance <= circle.radius)
        return true;
    return false;
}

bool collisionLineCircle(Circle2D circle, Vector2D A, Vector2D B)
{
    Vector2D u;
    u.x = B.x - A.x;
    u.y = B.y - A.y;
    Vector2D AC;
    AC.x = circle.centre.x - A.x;
    AC.y = circle.centre.y - A.y;
    
    float numerateur = u.x*AC.y - u.y*AC.x;
    numerateur = fabs(numerateur);

    float denominateur = sqrtf(u.x * u.x + u.y * u.y);
    float CI = numerateur / denominateur;
    if (CI < circle.radius)
        return true;
    else
        return false;
}

// bool collisionSegmentCircle(Circle2D circle, Vector2D A, Vector2D B)
// {
//     if (collisionLineCircle(circle, A, B) == false)
//         return false;
    
//     Vector2D AB,AC,BC;
//     AB.x = B.x - A.x;
//     AB.y = B.y - A.y;
//     AC.x = circle.centre.x - A.x;
//     AC.y = circle.centre.y - A.y;
//     BC.x = circle.centre.x - B.x;
//     BC.y = circle.centre.y - B.y;

//     float pscal1 = AB.x*AC.x + AB.y*AC.y;
//     float pscal2 = (-AB.x)*BC.x + (-AB.y)*BC.y;

//     if (pscal1>=0 && pscal2>=0)
//         return true;
        
//     if (CollisionPointCercle(circle, A))
//         return true;
//     if (CollisionPointCercle(circle, B))
//         return true;
//     return false;
// }

CartesianLine2D getLineFromPoints(Vector2D a, Vector2D b)
{
	return (CartesianLine2D){a.y - b.y, b.x - a.x, (a.x - b.x) * a.y + (b.y - a.y) * a.x};
}

bool collisionLinePoint(Vector2D point, CartesianLine2D line)
{
    float res = ( line.a * point.x + line.c ) / line.b * -1.f;
    return (res + 10 > point.y) && (res - 10 < point.y);
}

// bool collisionPointSegment(Vector2D pointToCheck, Vector2D segmentPointA, Vector2D segmentPointB)
// {
//     if (pointToCheck.x < fminf(segmentPointA.x, segmentPointB.x) || pointToCheck.x > fmaxf(segmentPointA.x, segmentPointB.x) ||
//         pointToCheck.y < fminf(segmentPointA.y, segmentPointB.y) || pointToCheck.y > fmaxf(segmentPointA.y, segmentPointB.y))
//         return false;
//     return collisionLinePoint(pointToCheck, getLineFromPoints(segmentPointA, segmentPointB));
// }

bool Math::collisionCircleCircle(Circle2D circle1, Circle2D circle2)
{
    return (sqrtf(powf(circle1.centre.x - circle2.centre.x, 2.f) + powf(circle1.centre.y - circle2.centre.y, 2.f))) < circle1.radius + circle2.radius;
}