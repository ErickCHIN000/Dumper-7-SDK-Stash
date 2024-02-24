#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MechanismPower.MechanismPower_C
// (None)

class UClass* IMechanismPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MechanismPower_C");

	return Clss;
}


// MechanismPower_C MechanismPower.Default__MechanismPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMechanismPower_C* IMechanismPower_C::GetDefaultObj()
{
	static class IMechanismPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMechanismPower_C*>(IMechanismPower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MechanismPower.MechanismPower_C.OnTriggerUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Trigger                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMechanismPower_C::OnTriggerUse(class AActor* Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MechanismPower_C", "OnTriggerUse");

	Params::IMechanismPower_C_OnTriggerUse_Params Parms{};

	Parms.Trigger = Trigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MechanismPower.MechanismPower_C.LampPuzzleTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMechanismPower_C::LampPuzzleTrigger(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MechanismPower_C", "LampPuzzleTrigger");

	Params::IMechanismPower_C_LampPuzzleTrigger_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


