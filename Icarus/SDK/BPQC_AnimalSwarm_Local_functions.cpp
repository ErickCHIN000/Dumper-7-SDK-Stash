#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C
// (None)

class UClass* UBPQC_AnimalSwarm_Local_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPQC_AnimalSwarm_Local_C");

	return Clss;
}


// BPQC_AnimalSwarm_Local_C BPQC_AnimalSwarm_Local.Default__BPQC_AnimalSwarm_Local_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPQC_AnimalSwarm_Local_C* UBPQC_AnimalSwarm_Local_C::GetDefaultObj()
{
	static class UBPQC_AnimalSwarm_Local_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPQC_AnimalSwarm_Local_C*>(UBPQC_AnimalSwarm_Local_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.GetCreatureToSpawnFromAtmosphere
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAtmospheresEnum            Atmosphere                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FAISetupRowHandle           OutCreature                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetupRowHandle           Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_6                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_7                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_8                                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_9                                           (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_10                                          (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_11                                          (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_12                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_13                                          (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_14                                          (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Temp_struct_Variable_15                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_Select_Default_2                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_Select_Default_3                                          (NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_Select_Default_4                                          (NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_Local_C::GetCreatureToSpawnFromAtmosphere(const struct FAtmospheresEnum& Atmosphere, struct FAISetupRowHandle* OutCreature, int32 Temp_int_Variable, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FAISetupRowHandle& Temp_struct_Variable, const struct FAISetupRowHandle& Temp_struct_Variable_1, const struct FAISetupRowHandle& Temp_struct_Variable_2, int32 Temp_int_Variable_1, const struct FAISetupRowHandle& Temp_struct_Variable_3, const struct FAISetupRowHandle& Temp_struct_Variable_4, const struct FAISetupRowHandle& Temp_struct_Variable_5, int32 Temp_int_Variable_2, const struct FAISetupRowHandle& Temp_struct_Variable_6, const struct FAISetupRowHandle& Temp_struct_Variable_7, const struct FAISetupRowHandle& Temp_struct_Variable_8, int32 Temp_int_Variable_3, const struct FAISetupRowHandle& Temp_struct_Variable_9, const struct FAISetupRowHandle& Temp_struct_Variable_10, const struct FAISetupRowHandle& Temp_struct_Variable_11, const struct FAISetupRowHandle& Temp_struct_Variable_12, int32 Temp_int_Variable_4, const struct FAISetupRowHandle& Temp_struct_Variable_13, const struct FAISetupRowHandle& Temp_struct_Variable_14, const struct FAISetupRowHandle& Temp_struct_Variable_15, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, const struct FAISetupRowHandle& K2Node_Select_Default, const struct FAISetupRowHandle& K2Node_Select_Default_1, int32 CallFunc_RandomInteger_ReturnValue_2, const struct FAISetupRowHandle& K2Node_Select_Default_2, int32 CallFunc_RandomInteger_ReturnValue_3, const struct FAISetupRowHandle& K2Node_Select_Default_3, const struct FAISetupRowHandle& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "GetCreatureToSpawnFromAtmosphere");

	Params::UBPQC_AnimalSwarm_Local_C_GetCreatureToSpawnFromAtmosphere_Params Parms{};

	Parms.Atmosphere = Atmosphere;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_RandomInteger_ReturnValue_2 = CallFunc_RandomInteger_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_RandomInteger_ReturnValue_3 = CallFunc_RandomInteger_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCreature != nullptr)
		*OutCreature = std::move(Parms.OutCreature);

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ModifyTimeByAttraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              RawValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ModifiedValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_Local_C::ModifyTimeByAttraction(float RawValue, float* ModifiedValue, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "ModifyTimeByAttraction");

	Params::UBPQC_AnimalSwarm_Local_C_ModifyTimeByAttraction_Params Parms{};

	Parms.RawValue = RawValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedValue != nullptr)
		*ModifiedValue = Parms.ModifiedValue;

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.GetFallbackCreature
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAISetupRowHandle           CreatureToSpawn                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorState*                 CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAtmospheresEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature            (NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_Local_C::GetFallbackCreature(struct FAISetupRowHandle* CreatureToSpawn, class AActor* CallFunc_GetOwner_ReturnValue, class UActorState* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAtmospheresEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FAISetupRowHandle& CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "GetFallbackCreature");

	Params::UBPQC_AnimalSwarm_Local_C_GetFallbackCreature_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature = CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatureToSpawn != nullptr)
		*CreatureToSpawn = std::move(Parms.CreatureToSpawn);

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ModifyAmountByAttraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RawValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ModifiedValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_Local_C::ModifyAmountByAttraction(int32 RawValue, int32* ModifiedValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "ModifyAmountByAttraction");

	Params::UBPQC_AnimalSwarm_Local_C_ModifyAmountByAttraction_Params Parms{};

	Parms.RawValue = RawValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedValue != nullptr)
		*ModifiedValue = Parms.ModifiedValue;

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.CanSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBPQC_AnimalSwarm_Local_C::CanSpawn(bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "CanSpawn");

	Params::UBPQC_AnimalSwarm_Local_C_CanSpawn_Params Parms{};

	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.Select AITo Spawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAISetupRowHandle           Output                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_GetFallbackCreature_CreatureToSpawn                     (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AISpawner_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AISpawner_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_PickNewAIToSpawn_Output                                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PickNewAIToSpawn_Level                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PickNewAIToSpawn_ValidSpawn                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPQC_AnimalSwarm_Local_C::Select_AITo_Spawn(struct FAISetupRowHandle* Output, const struct FAISetupRowHandle& CallFunc_GetFallbackCreature_CreatureToSpawn, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_AISpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_AISpawner_C* CallFunc_Array_Get_Item, const struct FAISetupRowHandle& CallFunc_PickNewAIToSpawn_Output, int32 CallFunc_PickNewAIToSpawn_Level, bool CallFunc_PickNewAIToSpawn_ValidSpawn, bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "Select AITo Spawn");

	Params::UBPQC_AnimalSwarm_Local_C_Select_AITo_Spawn_Params Parms{};

	Parms.CallFunc_GetFallbackCreature_CreatureToSpawn = CallFunc_GetFallbackCreature_CreatureToSpawn;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PickNewAIToSpawn_Output = CallFunc_PickNewAIToSpawn_Output;
	Parms.CallFunc_PickNewAIToSpawn_Level = CallFunc_PickNewAIToSpawn_Level;
	Parms.CallFunc_PickNewAIToSpawn_ValidSpawn = CallFunc_PickNewAIToSpawn_ValidSpawn;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.SpawnCreature
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPQC_AnimalSwarm_Local_C::SpawnCreature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "SpawnCreature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPQC_AnimalSwarm_Local_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C.ExecuteUbergraph_BPQC_AnimalSwarm_Local
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ModifyTimeByAttraction_ModifiedValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionDifficulty      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_Select_AITo_Spawn_Output                                (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAISetupRowHandle>   K2Node_MakeArray_Array                                           (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               CallFunc_GetActiveProspectInfo_ReturnValue                       (ConstParm)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ModifyAmountByAttraction_ModifiedValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_Local_C::ExecuteUbergraph_BPQC_AnimalSwarm_Local(int32 EntryPoint, float CallFunc_ModifyTimeByAttraction_ModifiedValue, enum class EMissionDifficulty Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, const struct FAISetupRowHandle& CallFunc_Select_AITo_Spawn_Output, TArray<struct FAISetupRowHandle>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_ModifyAmountByAttraction_ModifiedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_Local_C", "ExecuteUbergraph_BPQC_AnimalSwarm_Local");

	Params::UBPQC_AnimalSwarm_Local_C_ExecuteUbergraph_BPQC_AnimalSwarm_Local_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ModifyTimeByAttraction_ModifiedValue = CallFunc_ModifyTimeByAttraction_ModifiedValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Select_AITo_Spawn_Output = CallFunc_Select_AITo_Spawn_Output;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectInfo_ReturnValue = CallFunc_GetActiveProspectInfo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ModifyAmountByAttraction_ModifiedValue = CallFunc_ModifyAmountByAttraction_ModifiedValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


