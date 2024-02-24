#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkdwellerDeathContainer.DarkdwellerDeathContainer_C
// (Actor)

class UClass* ADarkdwellerDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkdwellerDeathContainer_C");

	return Clss;
}


// DarkdwellerDeathContainer_C DarkdwellerDeathContainer.Default__DarkdwellerDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkdwellerDeathContainer_C* ADarkdwellerDeathContainer_C::GetDefaultObj()
{
	static class ADarkdwellerDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkdwellerDeathContainer_C*>(ADarkdwellerDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DarkdwellerDeathContainer.DarkdwellerDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADarkdwellerDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkdwellerDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DarkdwellerDeathContainer.DarkdwellerDeathContainer_C.ExecuteUbergraph_DarkdwellerDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADarkdwellerDeathContainer_C::ExecuteUbergraph_DarkdwellerDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DarkdwellerDeathContainer_C", "ExecuteUbergraph_DarkdwellerDeathContainer");

	Params::ADarkdwellerDeathContainer_C_ExecuteUbergraph_DarkdwellerDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


