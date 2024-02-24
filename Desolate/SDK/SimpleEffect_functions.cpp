#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleEffect.SimpleEffect_C
// (Actor)

class UClass* ASimpleEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleEffect_C");

	return Clss;
}


// SimpleEffect_C SimpleEffect.Default__SimpleEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimpleEffect_C* ASimpleEffect_C::GetDefaultObj()
{
	static class ASimpleEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleEffect_C*>(ASimpleEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleEffect.SimpleEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASimpleEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SimpleEffect.SimpleEffect_C.ExecuteUbergraph_SimpleEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASimpleEffect_C::ExecuteUbergraph_SimpleEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleEffect_C", "ExecuteUbergraph_SimpleEffect");

	Params::ASimpleEffect_C_ExecuteUbergraph_SimpleEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


