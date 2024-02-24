#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0xA10 - 0x8C8)
// BlueprintGeneratedClass BP_CreatureManager_Realm.BP_CreatureManager_Realm_C
class ABP_CreatureManager_Realm_C : public ABP_CreatureManager_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Critter_Spawn_Interval;                            // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class APlayerState*, double>            PlayersWithCritters;                               // 0x8D8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       CritterSpawnDistance;                              // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CritterSpawnRadius;                                // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CritterCooldown;                                   // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_CreatureSpawner_Wildlife_Critter_C*> CritterSpawners;                                   // 0x940(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        MaxCritterSpawners;                                // 0x990(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6855[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAgentProperties                   CritterNavProperties;                              // 0x998(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UDataTable*                            LSTCritterSpawners;                                // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           CritterSpawnerData;                                // 0x9D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          BoundSpawnTimer;                                   // 0x9E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BoundClusterRadius;                                // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           NightBoundSpawners;                                // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       BoundPortalSafetyRadius;                           // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureManager_Realm_C* GetDefaultObj();

	void InitializeCritterSpawns(bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void SpawnCritters(const TArray<class APlayerState*>& UnusedPlayerStates, class APlayerState* PlayerState, class APawn* PlayerPawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double Temp_real_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FWildlifeSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FVector& CallFunc_FindBestPolyInRangeAtLocation_PolyLocation, bool CallFunc_FindBestPolyInRangeAtLocation_ReturnValue, bool CallFunc_IsNaturalSpawnerValidForRealm_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class ABP_CreatureSpawner_Wildlife_Critter_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_1, TArray<class APlayerState*>& CallFunc_Map_Keys_Keys, class APlayerState* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerState* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3);
	void ReceiveBeginPlay();
	void CritterSpawnerDestroyed(class AActor* CritterSpawner);
	void ExecuteUbergraph_BP_CreatureManager_Realm(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_CustomEvent_CritterSpawner, class ABP_CreatureSpawner_Wildlife_Critter_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Wildlife_Critter, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


