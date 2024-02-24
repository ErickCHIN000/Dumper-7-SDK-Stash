#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatLibrary.BP_StatLibrary_C
// (None)

class UClass* UBP_StatLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatLibrary_C");

	return Clss;
}


// BP_StatLibrary_C BP_StatLibrary.Default__BP_StatLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StatLibrary_C* UBP_StatLibrary_C::GetDefaultObj()
{
	static class UBP_StatLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StatLibrary_C*>(UBP_StatLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StatLibrary.BP_StatLibrary_C.DualActorStatCheck
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Stat1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Actor2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Stat2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BothActors_have_Stats                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BoolStatCheck_HasStat                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BoolStatCheck_HasStat_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_StatLibrary_C::DualActorStatCheck(class AActor* Actor1, const struct FStatsEnum& Stat1, class AActor* Actor2, const struct FStatsEnum& Stat2, class UObject* __WorldContext, bool* BothActors_have_Stats, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_BoolStatCheck_HasStat_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatLibrary_C", "DualActorStatCheck");

	Params::UBP_StatLibrary_C_DualActorStatCheck_Params Parms{};

	Parms.Actor1 = Actor1;
	Parms.Stat1 = Stat1;
	Parms.Actor2 = Actor2;
	Parms.Stat2 = Stat2;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BoolStatCheck_HasStat = CallFunc_BoolStatCheck_HasStat;
	Parms.CallFunc_BoolStatCheck_HasStat_1 = CallFunc_BoolStatCheck_HasStat_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BothActors_have_Stats != nullptr)
		*BothActors_have_Stats = Parms.BothActors_have_Stats;

}


// Function BP_StatLibrary.BP_StatLibrary_C.HasAllBoolStatCheck
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticEnum>    Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasAllStats                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BoolStatCheck_HasStat                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StatLibrary_C::HasAllBoolStatCheck(class AActor* Actor, TArray<struct FItemsStaticEnum>& Stat, class UObject* __WorldContext, bool* HasAllStats, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BoolStatCheck_HasStat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatLibrary_C", "HasAllBoolStatCheck");

	Params::UBP_StatLibrary_C_HasAllBoolStatCheck_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stat = Stat;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BoolStatCheck_HasStat = CallFunc_BoolStatCheck_HasStat;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAllStats != nullptr)
		*HasAllStats = Parms.HasAllStats;

}


// Function BP_StatLibrary.BP_StatLibrary_C.HasAnyBoolStatCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStatsEnum>          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasSomeStats                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_BoolStatCheck_HasStat                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StatLibrary_C::HasAnyBoolStatCheck(class AActor* Actor, TArray<struct FStatsEnum>& Stat, class UObject* __WorldContext, bool* HasSomeStats, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStatsEnum& CallFunc_Array_Get_Item, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatLibrary_C", "HasAnyBoolStatCheck");

	Params::UBP_StatLibrary_C_HasAnyBoolStatCheck_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stat = Stat;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BoolStatCheck_HasStat = CallFunc_BoolStatCheck_HasStat;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasSomeStats != nullptr)
		*HasSomeStats = Parms.HasSomeStats;

}


// Function BP_StatLibrary.BP_StatLibrary_C.BoolStatCheck
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasStat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusStatContainer*        Temp_wildcard_Variable                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_StatLibrary_C::BoolStatCheck(class AActor* Actor, const struct FStatsEnum& Stat, class UObject* __WorldContext, bool* HasStat, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, class UIcarusStatContainer* Temp_wildcard_Variable, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatLibrary_C", "BoolStatCheck");

	Params::UBP_StatLibrary_C_BoolStatCheck_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stat = Stat;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasStat != nullptr)
		*HasStat = Parms.HasStat;

}

}


