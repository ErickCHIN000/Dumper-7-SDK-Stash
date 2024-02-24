#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KickerAnomaly.KickerAnomaly_C
// (Actor)

class UClass* AKickerAnomaly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KickerAnomaly_C");

	return Clss;
}


// KickerAnomaly_C KickerAnomaly.Default__KickerAnomaly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKickerAnomaly_C* AKickerAnomaly_C::GetDefaultObj()
{
	static class AKickerAnomaly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKickerAnomaly_C*>(AKickerAnomaly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KickerAnomaly.KickerAnomaly_C.OnDamageApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerController*         PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnDamageApplied_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AKickerAnomaly_C::OnDamageApplied(class ASHPlayerController* PlayerController, bool* Result, bool CallFunc_OnDamageApplied_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KickerAnomaly_C", "OnDamageApplied");

	Params::AKickerAnomaly_C_OnDamageApplied_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_OnDamageApplied_Result = CallFunc_OnDamageApplied_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


