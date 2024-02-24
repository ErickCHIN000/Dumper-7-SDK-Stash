#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct SkeletonRetarget.BoneOffset
struct FBoneOffset
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x10)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Offsets;                                           // 0x10(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct SkeletonRetarget.AnimNode_BoneOffset
struct FAnimNode_BoneOffset : public FAnimNode_SkeletalControlBase
{
public:
	class USkeletalMesh*                         SourceMesh;                                        // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneOffset>                   BoneOffsets;                                       // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


