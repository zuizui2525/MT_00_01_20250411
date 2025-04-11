#include <math.h>
#include <Novice.h>
#include "Function.h"

// ベクトルの加算を計算する関数
Vector3 Add(const Vector3& v1, const Vector3& v2) {
	return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

// ベクトルの引き算を計算する関数
Vector3 Subtract(const Vector3& v1, const Vector3& v2) {
	return { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
}

// スカラー倍を計算する関数
Vector3 Multiply(float scalar, const Vector3& v) {
	return { scalar * v.x, scalar * v.y, scalar * v.z };
}

// 内積を計算する関数
float Dot(const Vector3& v1, const Vector3& v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

// ベクトルの長さを計算する関数
float Length(const Vector3& v) {
	return sqrtf(Dot(v, v));
}

// ベクトルを正規化する関数
Vector3 Normalize(const Vector3& v) {
	float length = Length(v);
	if (length == 0) {
		return { 0, 0, 0 };
	}
	return Multiply(1.0f / length, v);
}

// Vector3を画面に表示する関数
const int kColorWidth = 80;
void VectorScreenPrintf(int x, int y, const Vector3& v, const char* label) {
	Novice::ScreenPrintf(x, y, "X: %.2f", v.x);
	Novice::ScreenPrintf(x + kColorWidth, y, "Y: %.2f", v.y);
	Novice::ScreenPrintf(x + kColorWidth * 2, y, "Z: %.2f", v.z);
	Novice::ScreenPrintf(x + kColorWidth * 3, y, "%s", label);
}