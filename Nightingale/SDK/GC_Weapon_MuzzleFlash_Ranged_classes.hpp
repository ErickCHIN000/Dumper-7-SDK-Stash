#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_Weapon_MuzzleFlash_Ranged.GC_Weapon_MuzzleFlash_Ranged_C
class UGC_Weapon_MuzzleFlash_Ranged_C : public UGC_Weapon_MuzzleFlash_C
{
public:

	static class UClass* StaticClass();
	static class UGC_Weapon_MuzzleFlash_Ranged_C* GetDefaultObj();

	void GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse, bool CachedIsFirstPerson, class ABP_EquippableItemBase_C* Weapon, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success, const struct FS_RangedAbilityResponses& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses, const struct FS_MuzzleSwitchNames& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch, const struct FS_BeamTracer& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer, bool CallFunc_IsValid_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


