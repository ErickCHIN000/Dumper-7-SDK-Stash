#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Wood_Bow.BP_SkeletalItem_Wood_Bow_C
class ABP_SkeletalItem_Wood_Bow_C : public ASkeletalItem
{
public:
	uint8                                        Pad_60DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  Arrow;                                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Wood_Bow_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Bow(int32 EntryPoint);
};

}


