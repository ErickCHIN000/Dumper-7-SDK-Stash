#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x138 - 0xA0)
// BlueprintGeneratedClass BP_FishingComponent.BP_FishingComponent_C
class UBP_FishingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UAccumulationDataAsset> ADA_Tension;                                       // 0xA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAccumulationHandle                   TensionAccumulation;                               // 0xD0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ReelingDurabilityTimer;                            // 0xD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTechniqueDataAsset>    FishingCastTechnique;                              // 0xE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       TensionCost;                                       // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       As_BP_Character;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwningClient;                                    // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     NSSplash;                                          // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Fishing_FishHealth_C*             Fish_Widget;                                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialComponent_C*               Tutorial_Component;                                // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FishingComponent_C* GetDefaultObj();

	void SetFish_Widget(class UWBP_Fishing_FishHealth_C* NewValue);
	void TEMPCaughtVFX(const struct FVector& Location, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned);
	void GetActorFishingStats(double* Fishing, double* Strength, double* Magic_Power, float L_MagicPower, float L_Strength, float L_Fishing, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double K2Node_FunctionResult_Fishing_ImplicitCast, double K2Node_FunctionResult_Strength_ImplicitCast, double K2Node_FunctionResult_Magic_Power_ImplicitCast);
	void GetTensionCost(double* Tension);
	void Setup_Fishing_Accumulation(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FAccumulationHandle& CallFunc_TryAddAccumulationInstance_OutHandle, bool CallFunc_TryAddAccumulationInstance_ReturnValue);
	void OnNotifyEnd_9A7FAC4042D81D614D9FFABE1BE0F838(class FName NotifyName);
	void OnNotifyBegin_9A7FAC4042D81D614D9FFABE1BE0F838(class FName NotifyName);
	void OnInterrupted_9A7FAC4042D81D614D9FFABE1BE0F838(class FName NotifyName);
	void OnBlendOut_9A7FAC4042D81D614D9FFABE1BE0F838(class FName NotifyName);
	void OnCompleted_9A7FAC4042D81D614D9FFABE1BE0F838(class FName NotifyName);
	void Play_Montage_TP_Item(class UAnimMontage* Anim_Montage, class FName Section, class ABP_FishingRod_C* Fishing_Rod);
	void Montage_Item(class UAnimMontage* Anim_Montage, class FName Section, class ABP_FishingRod_C* Fishing_Rod);
	void Play_Montage_TP_Char(class UAnimMontage* Anim_Montage, class FName Section);
	void Stop_Montage_TP_Char(class UAnimMontage* Anim_Montage, double In_Blend_Out_Time);
	void Stop_Montage_TP_Item(class UAnimMontage* Anim_Montage, double In_Blend_Out_Time, class ABP_FishingRod_C* Fishing_Rod);
	void Montage_Item_Stop(class UAnimMontage* Anim_Montage, double In_Blend_Out_Time, class ABP_FishingRod_C* Fishing_Rod);
	void Jump_to_Montage_TP_Section_Char(class UAnimMontage* Anim_Montage, class FName Section);
	void Jump_to_Montage_TP_Section_Item(class UAnimMontage* Anim_Montage, class FName Section, class ABP_FishingRod_C* Fishing_Rod);
	void Montage_TP_Section_Char(class UAnimMontage* Anim_Montage, class FName Section);
	void Montage_TP_Section_Item(class UAnimMontage* Anim_Montage, class FName Section, class ABP_FishingRod_C* Fishing_Rod);
	void BeginReeling();
	void EndReeling();
	void ReelingLoop();
	void UpdateAccumulation(enum class E_FishingAccumulationList Accumulation_Bar, double Update_Value);
	void ClearAccumulation();
	void UpdateTensionCost(double New_Value);
	void ReceiveBeginPlay();
	void Server_Play_Temp_Caught_VFX(const struct FVector& Location);
	void Multicast_TEMP_CaughtVFX(const struct FVector& Location);
	void Play_Tutorial(class UTutorialDataAsset* Tutorial);
	void GetTutorialComponent();
	void ExecuteUbergraph_BP_FishingComponent(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_9, class FName K2Node_CustomEvent_Section_6, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod_5, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_8, class FName K2Node_CustomEvent_Section_5, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod_4, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_7, class FName K2Node_CustomEvent_Section_4, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_6, double K2Node_CustomEvent_In_Blend_Out_Time_2, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_5, double K2Node_CustomEvent_In_Blend_Out_Time_1, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod_3, bool CallFunc_IsValid_ReturnValue_3, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_4, double K2Node_CustomEvent_In_Blend_Out_Time, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod_2, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_3, class FName K2Node_CustomEvent_Section_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_2, class FName K2Node_CustomEvent_Section_2, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_Anim_Montage_1, class FName K2Node_CustomEvent_Section_1, class UAnimMontage* K2Node_CustomEvent_Anim_Montage, class FName K2Node_CustomEvent_Section, class ABP_FishingRod_C* K2Node_CustomEvent_Fishing_Rod, bool CallFunc_IsValid_ReturnValue_5, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, class AEquippableItem* Temp_object_Variable, class FName Temp_name_Variable, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, enum class E_FishingAccumulationList K2Node_CustomEvent_Accumulation_Bar, double K2Node_CustomEvent_Update_Value, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_TryUpdateAccumulationInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AActor* CallFunc_GetOwner_ReturnValue_4, TArray<struct FAccumulationHandle>& K2Node_MakeArray_Array, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_3, const struct FAccumulationHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TryUpdateAccumulationInstance_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_CustomEvent_New_Value, class AActor* CallFunc_GetOwner_ReturnValue_5, const struct FVector& K2Node_CustomEvent_Location_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& K2Node_CustomEvent_Location, class UTutorialDataAsset* K2Node_CustomEvent_Tutorial, class UBP_TutorialComponent_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast, float CallFunc_TryUpdateAccumulationInstance_NewValue_ImplicitCast);
};

}


