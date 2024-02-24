#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DorgDeathContainer.DorgDeathContainer_C
// (Actor)

class UClass* ADorgDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DorgDeathContainer_C");

	return Clss;
}


// DorgDeathContainer_C DorgDeathContainer.Default__DorgDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADorgDeathContainer_C* ADorgDeathContainer_C::GetDefaultObj()
{
	static class ADorgDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADorgDeathContainer_C*>(ADorgDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DorgDeathContainer.DorgDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADorgDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DorgDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DorgDeathContainer.DorgDeathContainer_C.ExecuteUbergraph_DorgDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADorgDeathContainer_C::ExecuteUbergraph_DorgDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DorgDeathContainer_C", "ExecuteUbergraph_DorgDeathContainer");

	Params::ADorgDeathContainer_C_ExecuteUbergraph_DorgDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


