#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x588 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Crossbow_Titanium.BP_SkeletalItem_Crossbow_Titanium_C
class ABP_SkeletalItem_Crossbow_Titanium_C : public ASkeletalItem
{
public:
	uint8                                        Pad_60A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionableBehaviour_Firearm_C*     FirearmBehaviour;                                  // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Crossbow_Titanium_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


