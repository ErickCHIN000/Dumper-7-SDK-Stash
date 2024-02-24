#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CharacterCustomization.BPI_CharacterCustomization_C
class IBPI_CharacterCustomization_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CharacterCustomization_C* GetDefaultObj();

	void OnMaterialScalarValueChanged(int32 Wetness, class FName Name, float Divisor);
	void OnSkinEffectsChanged(bool Sheen, bool Emissive, bool Edge);
	void OnTrailColorChanged(int32 Index);
	void OnHairColorChanged(int32 Val);
	void OnSkinColorChanged(int32 Val);
	void OnHeadPieceColorChanged(int32 Val);
	void OnGlovesColorChanged(int32 Val);
	void OnClothesColorChanged(int32 Val);
	void OnConfirm();
	void OnCancel();
	void OnSexChanged();
	void GetCustomizationData(struct FCustomizationData* Info);
	void OnHairChanged(int32 Val);
	void OnGlovesChanged(int32 Val);
	void OnHeadPieceChanged(int32 Val);
	void OnClothesChanged(int32 Val);
	void GetCustomizationWidget(class UWBP_CharacterCreation2_C** Return);
	void OnEnterExitWingsMenu(bool Val);
	void OnChangeGlideTrailColor(int32 Val);
	void OnChangedWingsColor(int32 Val);
	void OnChangedWingsMesh(int32 Val);
};

}


