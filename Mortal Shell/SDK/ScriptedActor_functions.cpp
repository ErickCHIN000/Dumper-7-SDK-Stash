#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedActor.ScriptedActor_C
// (Actor)

class UClass* AScriptedActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedActor_C");

	return Clss;
}


// ScriptedActor_C ScriptedActor.Default__ScriptedActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedActor_C* AScriptedActor_C::GetDefaultObj()
{
	static class AScriptedActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedActor_C*>(AScriptedActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedActor.ScriptedActor_C.TriggerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedActor_C::TriggerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedActor_C", "TriggerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedActor.ScriptedActor_C.ExecuteUbergraph_ScriptedActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedActor_C::ExecuteUbergraph_ScriptedActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedActor_C", "ExecuteUbergraph_ScriptedActor");

	Params::AScriptedActor_C_ExecuteUbergraph_ScriptedActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


