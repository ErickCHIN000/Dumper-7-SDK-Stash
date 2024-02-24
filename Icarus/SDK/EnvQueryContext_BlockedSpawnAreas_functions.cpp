#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_BlockedSpawnAreas.EnvQueryContext_BlockedSpawnAreas_C
// (None)

class UClass* UEnvQueryContext_BlockedSpawnAreas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_BlockedSpawnAreas_C");

	return Clss;
}


// EnvQueryContext_BlockedSpawnAreas_C EnvQueryContext_BlockedSpawnAreas.Default__EnvQueryContext_BlockedSpawnAreas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_BlockedSpawnAreas_C* UEnvQueryContext_BlockedSpawnAreas_C::GetDefaultObj()
{
	static class UEnvQueryContext_BlockedSpawnAreas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_BlockedSpawnAreas_C*>(UEnvQueryContext_BlockedSpawnAreas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_BlockedSpawnAreas.EnvQueryContext_BlockedSpawnAreas_C.ProvideLocationsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm)
// TArray<struct FVector>             Output                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AISpawner_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnBlocker               CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnvQueryContext_BlockedSpawnAreas_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, const TArray<struct FVector>& Output, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_AISpawner_C* CallFunc_GetActorOfClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnBlocker& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlockedSpawnAreas_C", "ProvideLocationsSet");

	Params::UEnvQueryContext_BlockedSpawnAreas_C_ProvideLocationsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.Output = Output;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);

}

}


