#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_SpawnBlockers.EnvQueryContext_SpawnBlockers_C
// (None)

class UClass* UEnvQueryContext_SpawnBlockers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_SpawnBlockers_C");

	return Clss;
}


// EnvQueryContext_SpawnBlockers_C EnvQueryContext_SpawnBlockers.Default__EnvQueryContext_SpawnBlockers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_SpawnBlockers_C* UEnvQueryContext_SpawnBlockers_C::GetDefaultObj()
{
	static class UEnvQueryContext_SpawnBlockers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_SpawnBlockers_C*>(UEnvQueryContext_SpawnBlockers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_SpawnBlockers.EnvQueryContext_SpawnBlockers_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)

void UEnvQueryContext_SpawnBlockers_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_SpawnBlockers_C", "ProvideActorsSet");

	Params::UEnvQueryContext_SpawnBlockers_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


