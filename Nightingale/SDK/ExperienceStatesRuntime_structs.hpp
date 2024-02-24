#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDerivedStates : uint8
{
	Completed                      = 0,
	Created                        = 1,
	Observed                       = 2,
	EDerivedStates_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct ExperienceStatesRuntime.ExperienceStateID
struct FExperienceStateID
{
public:
	int32                                        Raw;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ExperienceStatesRuntime.CompressedExperienceStates
struct FCompressedExperienceStates
{
public:
	TArray<uint8>                                Bytes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


