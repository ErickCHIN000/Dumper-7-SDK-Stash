#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x580 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_SGL_Pistol.BP_SkeletalItem_SGL_Pistol_C
class ABP_SkeletalItem_SGL_Pistol_C : public ASkeletalItem
{
public:
	uint8                                        Pad_27AE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_SGL_Pistol_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
};

}


