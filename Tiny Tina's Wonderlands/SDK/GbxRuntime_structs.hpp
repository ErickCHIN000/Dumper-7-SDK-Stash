#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConditionRefreshRate : uint8
{
	OncePerThreeSeconds            = 0,
	OncePerSecond                  = 1,
	TwicePerSecond                 = 2,
	FourTimesPerSecond             = 3,
	Immediately                    = 4,
	EConditionRefreshRate_MAX      = 5,
};

enum class ENumericRangeEditMode : uint8
{
	MinMax                         = 0,
	ValueVariance                  = 1,
	Variance                       = 2,
	Value                          = 3,
	ENumericRangeEditMode_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxRuntime.NumericRange
struct FNumericRange
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Variance;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxRuntime.GbxStructPtrParam
struct FGbxStructPtrParam
{
public:
	uint8                                        Pad_1FF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GbxRuntime.GbxTriggerProperty
struct FGbxTriggerProperty
{
public:
	uint8                                        Pad_203[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxRuntime.SceneBasedPosition
struct FSceneBasedPosition
{
public:
	class USceneComponent*                       Base;                                              // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedBaseLocation;                                // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CachedBaseRotation;                                // 0x20(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CachedTransPosition;                               // 0x2C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


