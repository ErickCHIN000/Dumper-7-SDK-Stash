#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x580 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_HuntingRifle.BP_SkeletalItem_HuntingRifle_C
class ABP_SkeletalItem_HuntingRifle_C : public ASkeletalItem
{
public:
	uint8                                        Pad_1A42[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_HuntingRifle_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


