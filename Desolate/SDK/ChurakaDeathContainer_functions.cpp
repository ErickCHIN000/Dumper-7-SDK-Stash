#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChurakaDeathContainer.ChurakaDeathContainer_C
// (Actor)

class UClass* AChurakaDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChurakaDeathContainer_C");

	return Clss;
}


// ChurakaDeathContainer_C ChurakaDeathContainer.Default__ChurakaDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurakaDeathContainer_C* AChurakaDeathContainer_C::GetDefaultObj()
{
	static class AChurakaDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurakaDeathContainer_C*>(AChurakaDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChurakaDeathContainer.ChurakaDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AChurakaDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChurakaDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChurakaDeathContainer.ChurakaDeathContainer_C.ExecuteUbergraph_ChurakaDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChurakaDeathContainer_C::ExecuteUbergraph_ChurakaDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChurakaDeathContainer_C", "ExecuteUbergraph_ChurakaDeathContainer");

	Params::AChurakaDeathContainer_C_ExecuteUbergraph_ChurakaDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


