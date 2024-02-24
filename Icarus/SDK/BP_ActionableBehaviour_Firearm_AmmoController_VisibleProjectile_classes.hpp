#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xED0 - 0xEC0)
// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C : public UBP_ActionableBehaviour_Firearm_AmmoController_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusItem*                           PreviewItem;                                       // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C* GetDefaultObj();

	void RefundAmmo(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue);
	void SetupPlayer(bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ConsumeAmmo(int32 Amount, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void AttachPreviewItem(class FName ParentSocket, class USceneComponent* ParentComponent, bool IsThirdPerson, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* Temp_wildcard_Variable, enum class EFirearmAttachType Temp_byte_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* K2Node_Select_Default_1);
	void SetPreviewItem(class AIcarusItem* NewPreviewItem, bool CallFunc_IsValid_ReturnValue);
	void UpdatePreviewItem(bool Show, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue);
	void CleanupPreviewItem(bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	int32 GetAmmoCapacity();
	void SetPreviewItemVisible(bool Visible, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnReloadStart();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnAmmoTypeChanged();
	void OnWeaponFired();
	void OnAmmoUnloaded();
	void OnWeaponInventoryUpdated();
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_HasAmmo_HasAmmo_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef);
};

}


