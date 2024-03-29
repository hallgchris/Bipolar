#include "vec2.h"
#include <cmath>
#include <ostream>
#include <sstream>

namespace bplr
{
	namespace math
	{
		vec2::vec2()
			: x(0.0f), y(0.0f)
		{
		}

		vec2::vec2(float scalar)
			: x(scalar), y(scalar)
		{
		}

		vec2::vec2(float x, float y)
			: x(x), y(y)
		{
		}

		vec2& vec2::add(const vec2& other)
		{
			x += other.x;
			y += other.y;
			return *this;
		}

		vec2& vec2::subtract(const vec2& other)
		{
			x -= other.x;
			y -= other.y;
			return *this;
		}

		vec2& vec2::multiply(const vec2& other)
		{
			x *= other.x;
			y *= other.y;
			return *this;
		}

		vec2& vec2::divide(const vec2& other)
		{
			x /= other.x;
			y /= other.y;
			return *this;
		}

		vec2& vec2::add(float value)
		{
			x += value;
			y += value;
			return *this;
		}

		vec2& vec2::subtract(float value)
		{
			x -= value;
			y -= value;
			return *this;
		}

		vec2& vec2::multiply(float value)
		{
			x *= value;
			y *= value;
			return *this;
		}

		vec2& vec2::divide(float value)
		{
			x /= value;
			y /= value;
			return *this;
		}

		vec2 operator+(vec2 left, const vec2& right)
		{
			return left.add(right);
		}

		vec2 operator-(vec2 left, const vec2& right)
		{
			return left.subtract(right);
		}

		vec2 operator*(vec2 left, const vec2& right)
		{
			return left.multiply(right);
		}

		vec2 operator/(vec2 left, const vec2& right)
		{
			return left.divide(right);
		}

		vec2 operator+(vec2 left, float value)
		{
			return vec2(left.x + value, left.y + value);
		}

		vec2 operator-(vec2 left, float value)
		{
			return vec2(left.x - value, left.y - value);
		}

		vec2 operator*(vec2 left, float value)
		{
			return vec2(left.x * value, left.y * value);
		}

		vec2 operator/(vec2 left, float value)
		{
			return vec2(left.x / value, left.y / value);
		}

		vec2 operator-(vec2 right)
		{
			return right * -1;
		}

		vec2& vec2::operator+=(const vec2& other)
		{
			return add(other);
		}

		vec2& vec2::operator-=(const vec2& other)
		{
			return subtract(other);
		}

		vec2& vec2::operator*=(const vec2& other)
		{
			return multiply(other);
		}

		vec2& vec2::operator/=(const vec2& other)
		{
			return divide(other);
		}

		vec2& vec2::operator+=(float value)
		{
			return add(value);
		}

		vec2& vec2::operator-=(float value)
		{
			return subtract(value);
		}

		vec2& vec2::operator*=(float value)
		{
			return multiply(value);
		}

		vec2& vec2::operator/=(float value)
		{
			return divide(value);
		}

		bool vec2::operator==(const vec2& other) const
		{
			return x == other.x && y == other.y;
		}

		bool vec2::operator!=(const vec2& other) const
		{
			return !(*this == other);
		}

		bool vec2::operator<(const vec2& other) const
		{
			return x < other.x && y < other.y;
		}

		bool vec2::operator<=(const vec2& other) const
		{
			return x <= other.x && y <= other.y;
		}

		bool vec2::operator>(const vec2& other) const
		{
			return x > other.x && y > other.y;
		}

		bool vec2::operator>=(const vec2& other) const
		{
			return x >= other.x && y >= other.y;
		}

		vec2 vec2::normalise() const
		{
			float mag = this->magnatude();
			return vec2(x / mag, y / mag);
		}

		float vec2::magnatude() const
		{
			return sqrt(x * x + y * y);
		}

		float vec2::dot(const vec2& other) const
		{
			return this->x * other.x + this->y * other.y;
		}

		std::string vec2::toString() const
		{
			std::stringstream result;
			result << "vec2: (" << x << ", " << y << ")";
			return result.str();
		}

		std::ostream& operator<<(std::ostream& stream, const vec2& vector)
		{
			stream << vector.toString();
			return stream;
		}
	}
}
