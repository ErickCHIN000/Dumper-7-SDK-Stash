#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CSN_FootIK.CSNAnimationLibrary
class UCSNAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCSNAnimationLibrary* GetDefaultObj();

};

// 0x2A8 (0x560 - 0x2B8)
// Class CSN_FootIK.CSNSubAnimInstanceFootIK
class UCSNSubAnimInstanceFootIK : public UAnimInstance
{
public:
	float                                        RagdollBlendTime;                                  // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKBlendTime;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRagdoll;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FloorLocationOverride;                             // 0x2C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                CalfIKBones;                                       // 0x2D8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBoneReference                        PelvisBone;                                        // 0x2E8(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBoneReference>                FootBones;                                         // 0x2F8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBoneReference>                FootIKBones;                                       // 0x308(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBoneReference>                FootLockingBones;                                  // 0x318(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LODThreshold;                                      // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       CalfIKBoneOffsets;                                 // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  CurveDisableFootIK;                                // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseOffsetCompensation;                            // 0x348(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableFootIKWhenNotOnGround;                     // 0x34C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETraceMode                        TraceModeForFootTraces;                            // 0x34D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereTraceRadius;                                 // 0x350(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 CollisionChannelFootLineTrace;                     // 0x354(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceLengthAboveFoot;                              // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TraceLengthBelowFoot;                              // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFootBonesForTracing;                           // 0x360(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                TraceBones;                                        // 0x368(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              MinFootRotation;                                   // 0x378(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              MaxFootRotation;                                   // 0x384(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        FootOffsetLimit;                                   // 0x390(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             PelvisOffsetLimits;                                // 0x394(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FootOffsetInterpSpeed;                             // 0x39C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PelvisOffsetInterpSpeed;                           // 0x3A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PelvisResetInterpSpeed;                            // 0x3A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FootLockingCurveNames;                             // 0x3B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               VisibleDebugTextOffset;                            // 0x3C0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                VisibleDebugTextColor;                             // 0x3CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCSNFootIKData                        IKData;                                            // 0x3D0(0x68)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D9[0xE8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualAlpha;                                       // 0x520(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DB[0x3C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSNSubAnimInstanceFootIK* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CSN_FootIK.CSNVisualDebuggingLibrary
class UCSNVisualDebuggingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCSNVisualDebuggingLibrary* GetDefaultObj();

	void SetHUD(class AHUD* TheHUD);
	bool RemoveDebugInfo(int32 Key);
	int32 GetNewVisualDebugStringKey();
	void AddOrReplaceDebugInfo(int32 Key, struct FCSNVisualDebugInfo& DebugInfo, bool bAppendToText);
};

}


