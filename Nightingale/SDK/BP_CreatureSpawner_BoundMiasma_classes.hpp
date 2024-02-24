#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x1668 - 0x1618)
// BlueprintGeneratedClass BP_CreatureSpawner_BoundMiasma.BP_CreatureSpawner_BoundMiasma_C
class ABP_CreatureSpawner_BoundMiasma_C : public ABP_CreatureSpawnerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1618(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEncounterBase*                        Encounter;                                         // 0x1620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MiasmaRadius;                                      // 0x1628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       MiasmaCloudLocations;                              // 0x1630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MaxMiasmaCount;                                    // 0x1640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyWhenAllCreaturesDestroyed_0;                // 0x1644(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             Bound_Miasma_EQS;                                  // 0x1648(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  Run_Mode;                                          // 0x1650(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSkipTwoStepSpawning;                              // 0x1651(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C97[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_Miasma_Count_Copy;                             // 0x1654(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BoundMiasmaCloudFX_C*>      Miasma_Clouds;                                     // 0x1658(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_BoundMiasma_C* GetDefaultObj();

	void SpawnSupportingActors(struct FTransform& Transform, int32 Temp_int_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<struct FVector>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void GetAdditionalSpawnData(TArray<TSoftClassPtr<class ABP_CreatureBase_C>>* Default_Bound, TArray<class UClass*>* Required_Bound, double* Average_Count, double AverageCount, const TArray<class UClass*>& RequiredBound, const TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& DefaultBound, double CallFunc_Conv_IntToDouble_ReturnValue, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, TArray<class UClass*>& CallFunc_Map_Keys_Keys, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetMiasmaEQS(class UEnvQuery** BoundMiasmaEQS);
	void LoadSettingsFromDatatable(class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Max_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void StartMiasma(const TArray<class UClass*>& PotentialSpawns, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& CallFunc_GetAdditionalSpawnData_Default_Bound, TArray<class UClass*>& CallFunc_GetAdditionalSpawnData_Required_Bound, double CallFunc_GetAdditionalSpawnData_Average_Count, const struct FVector& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AoePayload_Dispellable_Miasma_Spawn_Cloud_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_BoundMiasmaCloudFX_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void UserConstructionScript(int32 LCreatureIndex, int32 TotalRequiredCreatures);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void StopMiasma(class ABP_CreatureSpawnerBase_C* Spawner);
	void DestroySelfIfRequired();
	void DenSetupComplete();
	void BoundMiasmaEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void InitializeMiasma();
	void OnEcounterFinish(class AEncounterBase* Encounter, bool bSuccess, bool bResetTriggers);
	void MiasmaReady();
	void ExecuteUbergraph_BP_CreatureSpawner_BoundMiasma(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_CustomEvent_Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<struct FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class AEncounterBase* K2Node_CustomEvent_Encounter, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bResetTriggers, bool CallFunc_IsValid_ReturnValue_2, class UEnvQuery* CallFunc_GetMiasmaEQS_BoundMiasmaEQS, bool CallFunc_IsValid_ReturnValue_3, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_BoundMiasmaCloudFX_C* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


