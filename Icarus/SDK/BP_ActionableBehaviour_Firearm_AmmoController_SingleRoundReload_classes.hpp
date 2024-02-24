#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xEDC - 0xED0)
// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
class UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C : public UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xED0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ReloadCancelBlendOutTime;                          // 0xED8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C* GetDefaultObj();

	int32 GetAmmoCapacity(int32 CallFunc_GetStat_Value);
	void CanAbortReload(bool* CanAbort);
	void ServerFinishReload(int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount);
	void OnAbortReloadRequested(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ReloadSingleRound(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetAmmoCapacity_ReturnValue, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue);
	void SetReloadMontageNextSections(class FName SectionNameToChange, class FName NextSection, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2);
	float GetReloadAnimPlayRate(class UAnimMontage* Montage);
	void CalculateNumberOfRoundsToLoad(int32* NumRounds, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetInventoryAmmoCount_Count, int32 CallFunc_GetAmmoCapacity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue);
	void HandleReloadAnimNotify(const class FString& NotifyName);
	void AbortReloadAnimations();
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload(int32 EntryPoint, bool CallFunc_HasAmmo_HasAmmo, const class FString& K2Node_Event_NotifyName, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_CalculateNumberOfRoundsToLoad_NumRounds, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_CalculateNumberOfRoundsToLoad_NumRounds_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_2, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2);
};

}


