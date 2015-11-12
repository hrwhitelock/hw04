+#include <stdio.h> 
+#include <math.h>
+struct point{
+    double x;
+    double y;
+};
+struct triangle{
+    struct point a;  
+    struct point b; 
+    struct point c; 
+};
+
+double  triangleArea(struct triangle t){
+    double area; 
+    area =  0.5*fabs((t.b.x-t.a.x)*(t.c.y-t.a.y)-(t.c.x - t.a.x)*(t.b.y-t.a.y)); 
+    return area; 
+
+}
+
+double  distance(struct point d, struct point e){
+    double dist2 = (d.x - e.x)*(d.x - e.x) +(d.y-e.y)*(d.y - e.y);
+    double dist = sqrt(dist2); 
+    return dist;
+}
+
+double radius(struct triangle t){
+    double r, A, p; 
+    A = triangleArea(t); 
+    p = distance(t.a, t.b)+distance(t.b, t.c)+distance(t.a, t.c); 
+    r = 2*A/p; 
+    return r; 
+}
+
+int main(void){
+    struct triangle triangle = (struct triangle) {{0.,0.},{0.,4.},{3.,0.}};
+    double a = triangleArea(triangle); 
+    printf("area = %f\n", a);  
+    double rad = radius(triangle); 
+    printf("radius = %f\n", rad);        
+    return 0; 
+}
