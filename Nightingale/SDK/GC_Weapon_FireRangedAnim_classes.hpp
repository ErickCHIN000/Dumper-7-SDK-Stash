#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass GC_Weapon_FireRangedAnim.GC_Weapon_FireRangedAnim_C
class UGC_Weapon_FireRangedAnim_C : public UGameplayCueNotify_Static
{
public:
	struct FGameplayTag                          MontageActionOverride;                             // 0x40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Weapon_FireRangedAnim_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const struct FGameplayTag& MontageAction, bool Aiming, bool LastShot, class ABP_RangedWeapon_Base_C* Weapon, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FGameplayTag& K2Node_Select_Default_1, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, const struct FGameplayTag& K2Node_Select_Default_2, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_GetIsAiming_ReturnValue, bool CallFunc_OnExecute_ReturnValue);
};

}


