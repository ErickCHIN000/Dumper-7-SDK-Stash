#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x560 - 0x4E0)
// BlueprintGeneratedClass AIC_SpawnerBase.AIC_SpawnerBase_C
class AAIC_SpawnerBase_C : public ANWXAISpawnerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          FocusTargetTimeoutHandle;                          // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SquadDispersionRadius;                             // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientWanderRadiusMin;                            // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientWanderCooldown;                             // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DenTetherRange;                                    // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SimulationStateManager_C*          SimStateManager;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SquadRunDistance;                                  // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SeekWaterDelay;                                    // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnHomeDelay;                                   // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RecentlyFedDuration;                               // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FleeCooldown;                                      // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTimeAtWater;                                    // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTimeHydrated;                                   // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTimeAtCuriosity;                                // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientWanderRadiusMax;                            // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_SpawnerBase_C* GetDefaultObj();

	void Initialize_Variables(const struct FDataTableRowHandle& Spawner_Data, bool CallFunc_IsValid_ReturnValue, const struct FS_AICSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_VariableSet_DenTetherRange_ImplicitCast, double K2Node_VariableSet_SquadDispersionRadius_ImplicitCast, double K2Node_VariableSet_SquadRunDistance_ImplicitCast, double K2Node_VariableSet_AmbientWanderRadiusMin_ImplicitCast, double K2Node_VariableSet_AmbientWanderRadiusMax_ImplicitCast, double K2Node_VariableSet_AmbientWanderCooldown_ImplicitCast, double K2Node_VariableSet_SeekWaterDelay_ImplicitCast, double K2Node_VariableSet_ReturnHomeDelay_ImplicitCast, double K2Node_VariableSet_RecentlyFedDuration_ImplicitCast, double K2Node_VariableSet_FleeCooldown_ImplicitCast, double K2Node_VariableSet_MaxTimeAtWater_ImplicitCast, double K2Node_VariableSet_MaxTimeHydrated_ImplicitCast, double K2Node_VariableSet_MaxTimeAtCuriosity_ImplicitCast);
	void SetSquadFocusTarget(class UObject* FocusTarget, class AActor* LTarget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess_2, class ABP_CreatureBase_C* CallFunc_GetSquadCreatureLeader_Creature_Leader, bool CallFunc_IsActorPrey_IsPrey);
	void PreyDeath(class ANWXAICharacter* PreyCreature, const struct FGameplayTag& Temp_struct_Variable, double CallFunc_FMax_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_AddTimedState_TimePeriod_ImplicitCast);
	void GetTimeSinceNightStarted(double* TimeSinceDayStarted, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void GetTimeSinceDayStarted(double* TimeSinceDayStarted, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void SpawnerPrint(enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, const class FString& LogMessage);
	void InitializeBlackBoardVariables(bool* Success, class APawn* LPawn, class UBlackboardComponent* LBlackboard, class UBlackboardComponent* CallFunc_GetSquadBlackboard_ReturnValue, class FName CallFunc_GetSquadBBVar_ReturnValue, class FName CallFunc_GetSquadBBVar_ReturnValue_1, class FName CallFunc_GetSquadBBVar_ReturnValue_2, class FName CallFunc_GetSquadBBVar_ReturnValue_3, class FName CallFunc_GetSquadBBVar_ReturnValue_4, class FName CallFunc_GetSquadBBVar_ReturnValue_5, class FName CallFunc_GetSquadBBVar_ReturnValue_6, class FName CallFunc_GetSquadBBVar_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_3, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_4, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_5);
	void ReceivePossess(class APawn* PossessedPawn);
	void OnSpawnerDataSet_1(struct FDataTableRowHandle& InSpawnerData);
	void ExecuteUbergraph_AIC_SpawnerBase(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_Event_InSpawnerData, int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& K2Node_MakeArray_Array, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_InitializeBlackBoardVariables_Success, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_AddActionClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* K2Node_Event_PossessedPawn);
};

}


