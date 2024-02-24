#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETechTreeOrientation : uint8
{
	Vertical                       = 0,
	Horizontal                     = 1,
	Custom                         = 2,
	ETechTreeOrientation_MAX       = 3,
};

enum class ETechNodePinType : uint8
{
	Input                          = 0,
	Output                         = 1,
	ETechNodePinType_MAX           = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct TechTree.TechNodeLink
struct FTechNodeLink
{
public:
	class UTechnologyAsset*                      ParentTechnology;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                      ChildTechnology;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LinkFromPostion;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LinkToPostion;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TechTree.UnlockedTechnologiesData
struct FUnlockedTechnologiesData
{
public:
	TArray<class UTechnologyAsset*>              UnlockedTechnologies;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


