#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0xB10 - 0xA00)
// BlueprintGeneratedClass BPWeap_AR_COV_RogueImp.BPWeap_AR_COV_RogueImp_C
class ABPWeap_AR_COV_RogueImp_C : public ABPWeap_AR_COV_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA00(0x8)(Transient, DuplicateTransient)
	int32                                        ProjectileCount;                                   // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_117B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 AdditionalHawkCount;                               // 0xA10(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         FoundTargets;                                      // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1186[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       FindHawkTargets;                                   // 0xA30(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        TargetList;                                        // 0xAE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                       TargetLocations;                                   // 0xAF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                TempTargetActor;                                   // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_AR_COV_RogueImp_C* GetDefaultObj();

	void GetWaitTime(float* Res, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RogueImp_OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void RogueImp_OnReloadEnded(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void OpenProjGate();
	void CloseProjGate();
	void LoopThroughTargets();
	void ExecuteUbergraph_BPWeap_AR_COV_RogueImp(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class AWeapon* K2Node_CustomEvent_EventWeapon1, bool K2Node_CustomEvent_bAutoReload, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetWaitTime_Res, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetWaitTime_Res1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, int32 Temp_int_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UMeshComponent* CallFunc_GetAttachmentMesh_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


