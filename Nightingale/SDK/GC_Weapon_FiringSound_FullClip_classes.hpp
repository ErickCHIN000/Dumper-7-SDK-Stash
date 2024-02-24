#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_Weapon_FiringSound_FullClip.GC_Weapon_FiringSound_FullClip_C
class UGC_Weapon_FiringSound_FullClip_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_Weapon_FiringSound_FullClip_C* GetDefaultObj();

	void GetSoundLocation(class ABP_RangedWeapon_Base_C* Weapon, struct FVector* Location, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const TArray<class UAkSwitchValue*>& AmmoSwitchesRef, class ABP_RangedWeapon_Base_C* Weapon, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, bool CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success, const struct FS_RangedAbilityResponses& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses, const struct FS_MuzzleSwitchNames& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch, const struct FS_BeamTracer& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAkRtpc* K2Node_DynamicCast_AsAk_Rtpc, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_Scan_for_Canyon_CanyonValue, class UAkAudioEvent* CallFunc_GetFiringSound_FireSound, bool CallFunc_OnExecute_ReturnValue);
};

}


