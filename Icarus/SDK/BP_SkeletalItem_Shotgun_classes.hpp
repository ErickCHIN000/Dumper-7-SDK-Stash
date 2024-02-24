#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x580 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Shotgun.BP_SkeletalItem_Shotgun_C
class ABP_SkeletalItem_Shotgun_C : public ASkeletalItem
{
public:
	uint8                                        Pad_5CD2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Shotgun_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


