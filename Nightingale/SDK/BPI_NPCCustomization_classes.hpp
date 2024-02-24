#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCCustomization.BPI_NPCCustomization_C
class IBPI_NPCCustomization_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCCustomization_C* GetDefaultObj();

	void GetClothes_Back(class USkeletalMeshComponent** BackComponent);
	void GetClothes_Jewelry(class USkeletalMeshComponent** JewelryComponent);
	void GetClothes_Glasses(class USkeletalMeshComponent** GlassesComponent);
	void GetBodyPart_Teeth(class USkeletalMeshComponent** TeethComponent);
	void GetBodyPart_Eyebrows(class USkeletalMeshComponent** EyebrowsComponent);
	void GetBodyPart_FacialHair(class USkeletalMeshComponent** FacialHairComponent);
	void GetCLothes_Gear(class USkeletalMeshComponent** Gear);
	void GetBody(class USkeletalMeshComponent** BodyComponent);
	void GetBodyPart_Eyes(class USkeletalMeshComponent** EyeComponent);
	void GetClothes_Gloves(class USkeletalMeshComponent** GlovesComponent);
	void GetClothes_Head(class USkeletalMeshComponent** HatComponent);
	void GetBodyPart_Hair(class USkeletalMeshComponent** HairComponent);
	void GetClothes_Boots(class USkeletalMeshComponent** ShoesComponent);
	void GetClothes_Bottom(class USkeletalMeshComponent** PantsComponent);
	void GetClothes_Torso(class USkeletalMeshComponent** TorsoComponent);
};

}


