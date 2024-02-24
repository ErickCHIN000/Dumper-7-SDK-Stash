#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4D8 - 0x470)
// BlueprintGeneratedClass ba_aa_Gasmask_00.ba_aa_Gasmask_00_C
class Aba_aa_Gasmask_00_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsWearingMask;                                     // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FilterUsageSpeedPerSecond;                         // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasActiveFilter;                                   // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasRenderTarget2D*                 CurrentRT;                                         // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasRenderTarget2D*                 PreviousRT;                                        // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SimulationMaterial;                                // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             WaterDropSize;                                     // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBrokenGasMask;                                   // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2544[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              DamageMask;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              DamageNormal;                                      // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              DistorionTex;                                      // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_Gasmask_00_C* GetDefaultObj();

	void DrawWaterDrop();
	void UseUpFilter(float DeltaTime, bool HadActiveFilterLastFrame, float BeforeDecrementationValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1, int32 CallFunc_FTrunc_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_2, float CallFunc_Remove_ReturnValue, float CallFunc_Count_ReturnValue_1);
	void OnNotifyEnd_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName);
	void OnNotifyBegin_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName);
	void OnInterrupted_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName);
	void OnBlendOut_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName);
	void OnCompleted_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName);
	void OnNotifyEnd_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName);
	void OnNotifyBegin_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName);
	void OnInterrupted_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName);
	void OnBlendOut_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName);
	void OnCompleted_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName);
	void ReceiveTick(float DeltaSeconds);
	void ActivateItem();
	void MakeWaterDrop();
	void ForceUnequipGasMaskNoAnim();
	void InvalidateTimer();
	void EquipFromSave();
	void PrepeareWaterDroplets();
	void UpdateGasMaskPostProcessReference();
	void ExecuteUbergraph_ba_aa_Gasmask_00(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetIsWearingGasMask_WearingGasMask, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, bool K2Node_SwitchName_CmpSuccess_1, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float K2Node_Event_DeltaSeconds, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FName K2Node_CustomEvent_NotifyName_9, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, int32 CallFunc_PostEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, bool CallFunc_GetIsWearingGasMask_WearingGasMask_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, int32 CallFunc_PostEvent_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, bool CallFunc_GetIsWearingGasMask_WearingGasMask_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15);
};

}


