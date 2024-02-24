#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CharacterUtilInterface.CharacterUtilInterface_C
class ICharacterUtilInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICharacterUtilInterface_C* GetDefaultObj();

	void Zero_Base_ResetSuperStoneForm();
	void Zero_Base_ResetAllRiposteStack();
	void Zero_Base_DeflectStackTarBonus(int32* TarBonus);
	void Zero_Base_ResetAllDeflectStack();
	bool Character_Super2CostOneResolve_();
	bool Character_Super1CostOneResolve_();
	void CharacterUtils_AddRemove_Tar(int32 TarAmount, bool bStormSpent);
	void Zero_Base_GetCurrentWeapon(enum class EComboTypes* CurrentWeapon);
	void ZeroBase_HideSacredGlands(bool Hidden_);
	void ZeroBase_HideTarnishedSeal(bool Hidden_);
	bool CharacterIsFrozen_();
	void Barbarous_GetFireGland(class UStaticMeshComponent** Mesh);
	void Barbarous_GetCathedralGland(class UStaticMeshComponent** Mesh);
	void Barbarous_GetCryptGland(class UStaticMeshComponent** Mesh);
	void Zero_Base_SetTarnishedSealVisibility(float Amount);
	void Zero_Base_GetMesh(class USkeletalMeshComponent** Mesh);
	void Zero_Base_WeaponVisibility(bool Visibility);
	void Zero_Base_SetDisabled(bool Disabled);
	void Zero_Base_GetCurrentArmor(enum class EArmorTypes* CurrentArmorType);
	void Barbarous_SetInvulnerable(bool Invulnerable);
	void Barbarous_ChangeShells(bool Fast_Change, bool Reinit_Pose, bool* DidChange);
	void CharacterUtils_WeaponSwitched();
	void CharacterUtils_StartOpeningCredits(class FText DisplayText);
	void CharacterUtils_StartRagdoll();
};

}


