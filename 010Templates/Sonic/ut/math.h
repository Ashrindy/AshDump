typedef struct {float x,y;} Vector2<read=Str("%.3f, %.3f", x, y)>;
typedef struct {float x,y,z;} Vector3<read=Str("%.3f, %.3f, %.3f", x, y, z)>;
typedef struct {float x,y,z,w;} Vector4<read=Str("%.3f, %.3f, %.3f, %.3f", x,y,z,w)>;
typedef struct {float x,y,z,w;} Quaternion<read=Str("%.3f, %.3f, %.3f, %.3f", x,y,z,w)>;
typedef struct {Vector4 mtx1,mtx2,mtx3,mtx4;} Matrix44;
typedef struct {Vector4 mtx1,mtx2,mtx3;} Matrix34;