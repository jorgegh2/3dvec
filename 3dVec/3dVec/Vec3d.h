#define __VEC3D_H__

template<class TYPE>
class Vec3d
{
public:
	TYPE x, y, z;

	Vec3d() {}

	Vec3d(const TYPE new_x, const TYPE new_y, const TYPE new_z) : (x:new_x, y:new_y, z:new_z)
	{}

	Vec3d(const Vec3d& new_vec)
	{
		x = new_vec.x;
		y = new_vec.y;
		z = new_vec.z;
	}

	const Vec3d normalize()
	{
		int modul = sqrtf((x * x + y * y + z * z));
		Vec3d ret;
		ret.x = x / modul;
		ret.y = y / modul;
		ret.z = z / modul;

		return ret;
	}

	void zero()
	{
		x = y = z = 0u;	
	}

	bool is_zero() const 
	{
		return (x == 0 && y == 0 && z == 0);
	}

	TYPE distance_to(const Vec3d& target) const 
	{
		TYPE final_x = target.x - x;
		TYPE final_y = target.y - y;
		TYPE final_z = target.z - z;

		return (sqrtf((final_x * final_x + final_y * final_y + final_z * final_z));
	}

	
}
