#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_SpawnerBase.AIC_SpawnerBase_C
// (Actor)

class UClass* AAIC_SpawnerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_SpawnerBase_C");

	return Clss;
}


// AIC_SpawnerBase_C AIC_SpawnerBase.Default__AIC_SpawnerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_SpawnerBase_C* AAIC_SpawnerBase_C::GetDefaultObj()
{
	static class AAIC_SpawnerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_SpawnerBase_C*>(AAIC_SpawnerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.Initialize Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Spawner_Data                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AICSpawnerData           CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DenTetherRange_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SquadDispersionRadius_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SquadRunDistance_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AmbientWanderRadiusMin_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AmbientWanderRadiusMax_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AmbientWanderCooldown_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SeekWaterDelay_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ReturnHomeDelay_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RecentlyFedDuration_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FleeCooldown_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxTimeAtWater_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxTimeHydrated_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxTimeAtCuriosity_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::Initialize_Variables(const struct FDataTableRowHandle& Spawner_Data, bool CallFunc_IsValid_ReturnValue, const struct FS_AICSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_VariableSet_DenTetherRange_ImplicitCast, double K2Node_VariableSet_SquadDispersionRadius_ImplicitCast, double K2Node_VariableSet_SquadRunDistance_ImplicitCast, double K2Node_VariableSet_AmbientWanderRadiusMin_ImplicitCast, double K2Node_VariableSet_AmbientWanderRadiusMax_ImplicitCast, double K2Node_VariableSet_AmbientWanderCooldown_ImplicitCast, double K2Node_VariableSet_SeekWaterDelay_ImplicitCast, double K2Node_VariableSet_ReturnHomeDelay_ImplicitCast, double K2Node_VariableSet_RecentlyFedDuration_ImplicitCast, double K2Node_VariableSet_FleeCooldown_ImplicitCast, double K2Node_VariableSet_MaxTimeAtWater_ImplicitCast, double K2Node_VariableSet_MaxTimeHydrated_ImplicitCast, double K2Node_VariableSet_MaxTimeAtCuriosity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "Initialize Variables");

	Params::AAIC_SpawnerBase_C_Initialize_Variables_Params Parms{};

	Parms.Spawner_Data = Spawner_Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_VariableSet_DenTetherRange_ImplicitCast = K2Node_VariableSet_DenTetherRange_ImplicitCast;
	Parms.K2Node_VariableSet_SquadDispersionRadius_ImplicitCast = K2Node_VariableSet_SquadDispersionRadius_ImplicitCast;
	Parms.K2Node_VariableSet_SquadRunDistance_ImplicitCast = K2Node_VariableSet_SquadRunDistance_ImplicitCast;
	Parms.K2Node_VariableSet_AmbientWanderRadiusMin_ImplicitCast = K2Node_VariableSet_AmbientWanderRadiusMin_ImplicitCast;
	Parms.K2Node_VariableSet_AmbientWanderRadiusMax_ImplicitCast = K2Node_VariableSet_AmbientWanderRadiusMax_ImplicitCast;
	Parms.K2Node_VariableSet_AmbientWanderCooldown_ImplicitCast = K2Node_VariableSet_AmbientWanderCooldown_ImplicitCast;
	Parms.K2Node_VariableSet_SeekWaterDelay_ImplicitCast = K2Node_VariableSet_SeekWaterDelay_ImplicitCast;
	Parms.K2Node_VariableSet_ReturnHomeDelay_ImplicitCast = K2Node_VariableSet_ReturnHomeDelay_ImplicitCast;
	Parms.K2Node_VariableSet_RecentlyFedDuration_ImplicitCast = K2Node_VariableSet_RecentlyFedDuration_ImplicitCast;
	Parms.K2Node_VariableSet_FleeCooldown_ImplicitCast = K2Node_VariableSet_FleeCooldown_ImplicitCast;
	Parms.K2Node_VariableSet_MaxTimeAtWater_ImplicitCast = K2Node_VariableSet_MaxTimeAtWater_ImplicitCast;
	Parms.K2Node_VariableSet_MaxTimeHydrated_ImplicitCast = K2Node_VariableSet_MaxTimeHydrated_ImplicitCast;
	Parms.K2Node_VariableSet_MaxTimeAtCuriosity_ImplicitCast = K2Node_VariableSet_MaxTimeAtCuriosity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.SetSquadFocusTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     FocusTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LTarget                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_GetSquadCreatureLeader_Creature_Leader                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorPrey_IsPrey                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::SetSquadFocusTarget(class UObject* FocusTarget, class AActor* LTarget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess_2, class ABP_CreatureBase_C* CallFunc_GetSquadCreatureLeader_Creature_Leader, bool CallFunc_IsActorPrey_IsPrey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "SetSquadFocusTarget");

	Params::AAIC_SpawnerBase_C_SetSquadFocusTarget_Params Parms{};

	Parms.FocusTarget = FocusTarget;
	Parms.LTarget = LTarget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSquadCreatureLeader_Creature_Leader = CallFunc_GetSquadCreatureLeader_Creature_Leader;
	Parms.CallFunc_IsActorPrey_IsPrey = CallFunc_IsActorPrey_IsPrey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.PreyDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             PreyCreature                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTimedState_TimePeriod_ImplicitCast                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::PreyDeath(class ANWXAICharacter* PreyCreature, const struct FGameplayTag& Temp_struct_Variable, double CallFunc_FMax_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_AddTimedState_TimePeriod_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "PreyDeath");

	Params::AAIC_SpawnerBase_C_PreyDeath_Params Parms{};

	Parms.PreyCreature = PreyCreature;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_AddTimedState_TimePeriod_ImplicitCast = CallFunc_AddTimedState_TimePeriod_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.GetTimeSinceNightStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             TimeSinceDayStarted                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::GetTimeSinceNightStarted(double* TimeSinceDayStarted, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "GetTimeSinceNightStarted");

	Params::AAIC_SpawnerBase_C_GetTimeSinceNightStarted_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeSinceDayStarted != nullptr)
		*TimeSinceDayStarted = Parms.TimeSinceDayStarted;

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.GetTimeSinceDayStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             TimeSinceDayStarted                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::GetTimeSinceDayStarted(double* TimeSinceDayStarted, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "GetTimeSinceDayStarted");

	Params::AAIC_SpawnerBase_C_GetTimeSinceDayStarted_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeSinceDayStarted != nullptr)
		*TimeSinceDayStarted = Parms.TimeSinceDayStarted;

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.SpawnerPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            LogCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LogMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::SpawnerPrint(enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, const class FString& LogMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "SpawnerPrint");

	Params::AAIC_SpawnerBase_C_SpawnerPrint_Params Parms{};

	Parms.NWXLogLevel = NWXLogLevel;
	Parms.LogCategory = LogCategory;
	Parms.LogMessage = LogMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.InitializeBlackBoardVariables
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        LBlackboard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetSquadBlackboard_ReturnValue                          (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSquadBBVar_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNavAgentLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::InitializeBlackBoardVariables(bool* Success, class APawn* LPawn, class UBlackboardComponent* LBlackboard, class UBlackboardComponent* CallFunc_GetSquadBlackboard_ReturnValue, class FName CallFunc_GetSquadBBVar_ReturnValue, class FName CallFunc_GetSquadBBVar_ReturnValue_1, class FName CallFunc_GetSquadBBVar_ReturnValue_2, class FName CallFunc_GetSquadBBVar_ReturnValue_3, class FName CallFunc_GetSquadBBVar_ReturnValue_4, class FName CallFunc_GetSquadBBVar_ReturnValue_5, class FName CallFunc_GetSquadBBVar_ReturnValue_6, class FName CallFunc_GetSquadBBVar_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_3, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_4, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "InitializeBlackBoardVariables");

	Params::AAIC_SpawnerBase_C_InitializeBlackBoardVariables_Params Parms{};

	Parms.LPawn = LPawn;
	Parms.LBlackboard = LBlackboard;
	Parms.CallFunc_GetSquadBlackboard_ReturnValue = CallFunc_GetSquadBlackboard_ReturnValue;
	Parms.CallFunc_GetSquadBBVar_ReturnValue = CallFunc_GetSquadBBVar_ReturnValue;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_1 = CallFunc_GetSquadBBVar_ReturnValue_1;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_2 = CallFunc_GetSquadBBVar_ReturnValue_2;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_3 = CallFunc_GetSquadBBVar_ReturnValue_3;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_4 = CallFunc_GetSquadBBVar_ReturnValue_4;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_5 = CallFunc_GetSquadBBVar_ReturnValue_5;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_6 = CallFunc_GetSquadBBVar_ReturnValue_6;
	Parms.CallFunc_GetSquadBBVar_ReturnValue_7 = CallFunc_GetSquadBBVar_ReturnValue_7;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNavAgentLocation_ReturnValue = CallFunc_GetNavAgentLocation_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_3 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_3;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_4 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_4;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_5 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "ReceivePossess");

	Params::AAIC_SpawnerBase_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.OnSpawnerDataSet_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InSpawnerData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::OnSpawnerDataSet_1(struct FDataTableRowHandle& InSpawnerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "OnSpawnerDataSet_1");

	Params::AAIC_SpawnerBase_C_OnSpawnerDataSet_1_Params Parms{};

	Parms.InSpawnerData = InSpawnerData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SpawnerBase.AIC_SpawnerBase_C.ExecuteUbergraph_AIC_SpawnerBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_InSpawnerData                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeBlackBoardVariables_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddActionClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_SpawnerBase_C::ExecuteUbergraph_AIC_SpawnerBase(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_Event_InSpawnerData, int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& K2Node_MakeArray_Array, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_InitializeBlackBoardVariables_Success, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_AddActionClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* K2Node_Event_PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SpawnerBase_C", "ExecuteUbergraph_AIC_SpawnerBase");

	Params::AAIC_SpawnerBase_C_ExecuteUbergraph_AIC_SpawnerBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InSpawnerData = K2Node_Event_InSpawnerData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_InitializeBlackBoardVariables_Success = CallFunc_InitializeBlackBoardVariables_Success;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_AddActionClass_ReturnValue = CallFunc_AddActionClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


