#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_AISpawnerTetherTarget.EnvQueryContext_AISpawnerTetherTarget_C
// (None)

class UClass* UEnvQueryContext_AISpawnerTetherTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_AISpawnerTetherTarget_C");

	return Clss;
}


// EnvQueryContext_AISpawnerTetherTarget_C EnvQueryContext_AISpawnerTetherTarget.Default__EnvQueryContext_AISpawnerTetherTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_AISpawnerTetherTarget_C* UEnvQueryContext_AISpawnerTetherTarget_C::GetDefaultObj()
{
	static class UEnvQueryContext_AISpawnerTetherTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_AISpawnerTetherTarget_C*>(UEnvQueryContext_AISpawnerTetherTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_AISpawnerTetherTarget.EnvQueryContext_AISpawnerTetherTarget_C.ProvideSingleActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AIcarusPlayerCharacter*>Players                                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_AISpawner_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AISpawner_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnvQueryContext_AISpawnerTetherTarget_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, const TArray<class AIcarusPlayerCharacter*>& Players, TArray<class ABP_AISpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_AISpawner_C* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_AISpawnerTetherTarget_C", "ProvideSingleActor");

	Params::UEnvQueryContext_AISpawnerTetherTarget_C_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.Players = Players;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}

}


