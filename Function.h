#pragma once
#include "struct.h"

// ベクトルの加算を計算する関数
Vector3 Add(const Vector3& v1, const Vector3& v2);

// ベクトルの引き算を計算する関数
Vector3 Subtract(const Vector3& v1, const Vector3& v2);

// スカラー倍を計算する関数
Vector3 Multiply(float scalar, const Vector3& v);

// 内積を計算する関数
float Dot(const Vector3& v1, const Vector3& v2);

// ベクトルの長さを計算する関数
float Length(const Vector3& v);

// ベクトルを正規化する関数
Vector3 Normalize(const Vector3& v);

// Vector3を画面に表示する関数
void VectorScreenPrintf(int x, int y, const Vector3& v, const char* label);