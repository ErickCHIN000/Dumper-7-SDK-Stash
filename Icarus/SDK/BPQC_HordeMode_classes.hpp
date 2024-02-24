#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x18C - 0xB0)
// BlueprintGeneratedClass BPQC_HordeMode.BPQC_HordeMode_C
class UBPQC_HordeMode_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_IcarusNPCGOAPCharacter_C*>  NPCs;                                              // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                Target;                                            // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHordeRowHandle                       Horde_Setup;                                       // 0xD0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Multiplier;                                        // 0xE8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHordeWaveRowHandle                   Current_Wave;                                      // 0xEC(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Next_Spawn;                                        // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                Number_Spawned;                                    // 0x118(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 Spawn_Complete;                                    // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Current_Wave_Index;                                // 0x138(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            HordeComplete;                                     // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Killed;                                            // 0x150(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total;                                             // 0x154(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SpawnLocations;                                    // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        TotalNumberSpawned;                                // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaximumQuestMarkerSpawnDistance;                   // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Current;                                           // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PerCreatureTotalSpawnCount;                        // 0x178(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DelayBetweenSimultaneousSpawns;                    // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPQC_HordeMode_C* GetDefaultObj();

	void GetTotalNumberToSpawn(const struct FHordeCreatureSetup& HordeCreature, int32* TotalSpawnNum, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetNearbyPlayersAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetTimeBetweenSpawns(const struct FHordeCreatureSetup& HordeCreature, float* TimeBetween, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue);
	void GetSimultaneousNumberOfAIToSpawn(const struct FHordeCreatureSetup& HordeCreature, int32* ToSpawn, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void GetOriginForSpawnEQS(struct FVector* Origin, bool* IsQuestMarker, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void GetProgress(float* Progress, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
	void On_Creature_End_Play(class AActor* Actor, enum class EEndPlayReason EndPlayReason, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void On_Creature_Death(class UActorState* ActorState, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue);
	void On_Creature_Spawned(class ABP_IcarusNPCGOAPCharacter_C* NPC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue);
	void AngerNPC(class AIcarusNPCGOAPCharacter* NPC, bool CallFunc_UpdateMovementState_ReturnValue);
	void Check_Spawn(float Delta, float TimeBetweenSpawns, int32 SimultaneousSpawnCount, const struct FHordeCreatureSetup& ToSpawn, int32 Index, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float CallFunc_GetTimeBetweenSpawns_TimeBetween, int32 CallFunc_GetSimultaneousNumberOfAIToSpawn_ToSpawn, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetOriginForSpawnEQS_Origin, bool CallFunc_GetOriginForSpawnEQS_IsQuestMarker, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_HordeSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FHordeWave& CallFunc_GetHordeWaveStruct_HordeWave, enum class EValid CallFunc_GetHordeWaveStruct_Paths, float CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FHordeCreatureSetup& CallFunc_Array_Get_Item_5, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void TriggerNextWave(bool* Complete, const struct FHordeWave& CallFunc_GetHordeWaveStruct_HordeWave, enum class EValid CallFunc_GetHordeWaveStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, const struct FHordeCreatureSetup& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetTotalNumberToSpawn_TotalSpawnNum, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FHorde& CallFunc_GetHordeStruct_Horde, enum class EValid CallFunc_GetHordeStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FHordeWaveRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Check_Complete(bool* Complete, bool Incomplete, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_TriggerNextWave_Complete, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Stop_Horde();
	void Trigger_Horde(const struct FHordeRowHandle& HordeSetup, float Multiplier, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 Temp_int_Array_Index_Variable, const struct FHorde& CallFunc_GetHordeStruct_Horde, enum class EValid CallFunc_GetHordeStruct_Paths, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const struct FQuestQueriesRowHandle& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AQuestMarker*>& CallFunc_GetQuestMarkers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 Temp_int_Loop_Counter_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, bool CallFunc_TriggerNextWave_Complete, class AActor* CallFunc_GetOwner_ReturnValue_1);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPQC_HordeMode(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, bool CallFunc_IsActive_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Check_Complete_Complete, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HordeComplete__DelegateSignature();
};

}


