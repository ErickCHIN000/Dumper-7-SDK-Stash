#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerContext.PlayerContext_C
// (None)

class UClass* UPlayerContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerContext_C");

	return Clss;
}


// PlayerContext_C PlayerContext.Default__PlayerContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerContext_C* UPlayerContext_C::GetDefaultObj()
{
	static class UPlayerContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerContext_C*>(UPlayerContext_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerContext.PlayerContext_C.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerContext_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerContext_C", "ProvideSingleActor");

	Params::UPlayerContext_C_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}

}


