#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x520 - 0x4E0)
// BlueprintGeneratedClass RoofSnow.RoofSnow_C
class URoofSnow_C : public UStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MeshXScale;                                        // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeshYScale;                                        // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeshZScaleMultiplier;                              // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Snow_Amount;                                       // 0x4F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        BuildingAngleClampModifier;                        // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxFlatRoofSnowAmount;                             // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Destroying;                                        // 0x500(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5098[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SnowDefrostTimer;                                  // 0x508(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         RecentlyAdded;                                     // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnowClearedDelay;                                  // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            SnowClearSound;                                    // 0x518(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URoofSnow_C* GetDefaultObj();

	void OnRep_Destroying();
	void Update_Snow_Visualizer(int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue, class URoofSnowChild_C* K2Node_DynamicCast_AsRoof_Snow_Child, bool K2Node_DynamicCast_bSuccess, float CallFunc_Log_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Log_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void Server_Modify_Snow_Amount(float SnowDelta, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void OnRep_Snow_Amount();
	void TurnOffSnow(int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item, class URoofSnowChild_C* K2Node_DynamicCast_AsRoof_Snow_Child, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess_1, class URoofSnow_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void Defrost();
	void TriggerDefrostTimer();
	void MultiClearSnowEffects();
	void ServerClearSnow();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoofSnow(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UDestructibleComponent* CallFunc_AddActorComponent_OutComponent, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBuildingOutside_ReturnValue);
};

}


