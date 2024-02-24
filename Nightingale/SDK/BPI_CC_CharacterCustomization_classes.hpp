#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CC_CharacterCustomization.BPI_CC_CharacterCustomization_C
class IBPI_CC_CharacterCustomization_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CC_CharacterCustomization_C* GetDefaultObj();

	void Cc_GetMeshReferences(class USkeletalMeshComponent** FP_Fullbody_Clothing_Torso, class USkeletalMeshComponent** FP_Fullbody_Clothing_Legs, class USkeletalMeshComponent** FP_Fullbody_Clothing_Shoes, class USkeletalMeshComponent** FP_Fullbody_Clothing_Gloves, class USkeletalMeshComponent** FP_Fullbody_Clothing_Gear, class USkeletalMeshComponent** FP_Body, class USkeletalMeshComponent** FP_Arms, class USkeletalMeshComponent** FP_Arms_Clothing_Torso, class USkeletalMeshComponent** FP_Arms_Clothing_Gloves, class USkeletalMeshComponent** FP_Arms_Clothing_Gear);
};

}


