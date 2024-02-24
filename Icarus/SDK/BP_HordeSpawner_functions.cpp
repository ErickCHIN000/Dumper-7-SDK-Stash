#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HordeSpawner.BP_HordeSpawner_C
// (Actor)

class UClass* ABP_HordeSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HordeSpawner_C");

	return Clss;
}


// BP_HordeSpawner_C BP_HordeSpawner.Default__BP_HordeSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HordeSpawner_C* ABP_HordeSpawner_C::GetDefaultObj()
{
	static class ABP_HordeSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HordeSpawner_C*>(ABP_HordeSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HordeSpawner.BP_HordeSpawner_C.GetLevelForAI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionDifficulty      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionDifficulty      CallFunc_GetCurrentProspectDifficulty_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GenerateLevelFromLocation_Level                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeSpawner_C::GetLevelForAI(int32* Level, enum class EMissionDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, int32 Temp_wildcard_Variable, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GenerateLevelFromLocation_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HordeSpawner_C", "GetLevelForAI");

	Params::ABP_HordeSpawner_C_GetLevelForAI_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetCurrentProspectDifficulty_ReturnValue = CallFunc_GetCurrentProspectDifficulty_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GenerateLevelFromLocation_Level = CallFunc_GenerateLevelFromLocation_Level;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function BP_HordeSpawner.BP_HordeSpawner_C.EQSComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeSpawner_C::EQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HordeSpawner_C", "EQSComplete");

	Params::ABP_HordeSpawner_C_EQSComplete_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HordeSpawner.BP_HordeSpawner_C.SpawnCreature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHordeCreatureSetup         Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InitialSpawnDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeSpawner_C::SpawnCreature(const struct FHordeCreatureSetup& Creature, float Multiplier, float InitialSpawnDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HordeSpawner_C", "SpawnCreature");

	Params::ABP_HordeSpawner_C_SpawnCreature_Params Parms{};

	Parms.Creature = Creature;
	Parms.Multiplier = Multiplier;
	Parms.InitialSpawnDelay = InitialSpawnDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HordeSpawner.BP_HordeSpawner_C.ExecuteUbergraph_BP_HordeSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelForAI_Level                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHordeCreatureSetup         K2Node_CustomEvent_Creature                                      (None)
// float                              K2Node_CustomEvent_Multiplier                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InitialSpawnDelay                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class AActor*                      CallFunc_SpawnNewAI_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HordeSpawner_C::ExecuteUbergraph_BP_HordeSpawner(int32 EntryPoint, int32 CallFunc_GetLevelForAI_Level, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, const struct FHordeCreatureSetup& K2Node_CustomEvent_Creature, float K2Node_CustomEvent_Multiplier, float K2Node_CustomEvent_InitialSpawnDelay, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AActor* CallFunc_SpawnNewAI_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HordeSpawner_C", "ExecuteUbergraph_BP_HordeSpawner");

	Params::ABP_HordeSpawner_C_ExecuteUbergraph_BP_HordeSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLevelForAI_Level = CallFunc_GetLevelForAI_Level;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.K2Node_CustomEvent_Creature = K2Node_CustomEvent_Creature;
	Parms.K2Node_CustomEvent_Multiplier = K2Node_CustomEvent_Multiplier;
	Parms.K2Node_CustomEvent_InitialSpawnDelay = K2Node_CustomEvent_InitialSpawnDelay;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SpawnNewAI_ReturnValue = CallFunc_SpawnNewAI_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HordeSpawner.BP_HordeSpawner_C.NPCSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusNPCGOAPCharacter_C*NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HordeSpawner_C::NPCSpawned__DelegateSignature(class ABP_IcarusNPCGOAPCharacter_C* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HordeSpawner_C", "NPCSpawned__DelegateSignature");

	Params::ABP_HordeSpawner_C_NPCSpawned__DelegateSignature_Params Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

}

}


