#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x100 - 0x78)
// BlueprintGeneratedClass GC_Impact_Shared_Ranged_Buckshot.GC_Impact_Shared_Ranged_Buckshot_C
class UGC_Impact_Shared_Ranged_Buckshot_C : public UGC_Impact_Shared_Ranged_C
{
public:
	uint8                                        Pad_77FE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    AmmoRef;                                           // 0x80(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Impact_Shared_Ranged_Buckshot_C* GetDefaultObj();

	void SpawnImpactVFX(struct FS_NiagaraImpactResponse& NiagaraResponse, TArray<struct FHitResult>& HitResults, struct FGameplayTag& ImpactTag, struct FGameplayTag& ElementalTag, class AActor*& StrikingActor, const TArray<struct FHitResult>& BuckshotHitResults, const TArray<class AActor*>& ActorsToIgnore, class ABP_RangedWeapon_Base_C* EquippedRangedWeapon, class AActor* EquippedItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AEquippableItem* Temp_object_Variable, bool CallFunc_CheckForValidItem_ItemValid, TArray<class AActor*>& K2Node_MakeArray_Array, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1);
};

}


