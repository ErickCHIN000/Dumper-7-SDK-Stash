#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x588 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Shengong_Bow.BP_SkeletalItem_Shengong_Bow_C
class ABP_SkeletalItem_Shengong_Bow_C : public ASkeletalItem
{
public:
	uint8                                        Pad_1C4F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChildActorComponent*                  Arrow;                                             // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Shengong_Bow_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


