#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HunterDeathContainer.HunterDeathContainer_C
// (Actor)

class UClass* AHunterDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HunterDeathContainer_C");

	return Clss;
}


// HunterDeathContainer_C HunterDeathContainer.Default__HunterDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHunterDeathContainer_C* AHunterDeathContainer_C::GetDefaultObj()
{
	static class AHunterDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHunterDeathContainer_C*>(AHunterDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HunterDeathContainer.HunterDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHunterDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HunterDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HunterDeathContainer.HunterDeathContainer_C.ExecuteUbergraph_HunterDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHunterDeathContainer_C::ExecuteUbergraph_HunterDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HunterDeathContainer_C", "ExecuteUbergraph_HunterDeathContainer");

	Params::AHunterDeathContainer_C_ExecuteUbergraph_HunterDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


