#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_Players.EnvQueryContext_Players_C
// (None)

class UClass* UEnvQueryContext_Players_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_Players_C");

	return Clss;
}


// EnvQueryContext_Players_C EnvQueryContext_Players.Default__EnvQueryContext_Players_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_Players_C* UEnvQueryContext_Players_C::GetDefaultObj()
{
	static class UEnvQueryContext_Players_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_Players_C*>(UEnvQueryContext_Players_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_Players.EnvQueryContext_Players_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm)
// TArray<class AIcarusPlayerCharacter*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)

void UEnvQueryContext_Players_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_Players_C", "ProvideActorsSet");

	Params::UEnvQueryContext_Players_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


