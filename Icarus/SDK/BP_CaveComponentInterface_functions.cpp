#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaveComponentInterface.BP_CaveComponentInterface_C
// (None)

class UClass* IBP_CaveComponentInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaveComponentInterface_C");

	return Clss;
}


// BP_CaveComponentInterface_C BP_CaveComponentInterface.Default__BP_CaveComponentInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_CaveComponentInterface_C* IBP_CaveComponentInterface_C::GetDefaultObj()
{
	static class IBP_CaveComponentInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_CaveComponentInterface_C*>(IBP_CaveComponentInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CaveComponentInterface.BP_CaveComponentInterface_C.SetCaveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInCave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CaveActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CaveComponentInterface_C::SetCaveState(bool IsInCave, class AActor* CaveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveComponentInterface_C", "SetCaveState");

	Params::IBP_CaveComponentInterface_C_SetCaveState_Params Parms{};

	Parms.IsInCave = IsInCave;
	Parms.CaveActor = CaveActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


