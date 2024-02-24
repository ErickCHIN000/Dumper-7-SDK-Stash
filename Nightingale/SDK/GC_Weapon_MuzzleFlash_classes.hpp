#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C
class UGC_Weapon_MuzzleFlash_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_Weapon_MuzzleFlash_C* GetDefaultObj();

	void SpawnMuzzleFlash(class UObject* MyTarget, class USceneComponent* AttachToComponent, struct FS_RangedAbilityResponses& RangedAbilityResponse, bool FirstPerson);
	void IsFirstPerson(class AActor* MyTarget, bool* IsFirstPerson, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsFirstPersonCharacter_ReturnValue);
	void GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_RangedWeapon_Base_C* Weapon, bool CallFunc_IsFirstPerson_IsFirstPerson, bool CallFunc_GetMuzzleFlashParameters_ShouldExecute, class USceneComponent* CallFunc_GetMuzzleFlashParameters_AttachToComponent, const struct FS_RangedAbilityResponses& CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse, bool CallFunc_OnExecute_ReturnValue);
};

}


