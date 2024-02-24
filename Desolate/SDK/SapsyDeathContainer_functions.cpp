#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsyDeathContainer.SapsyDeathContainer_C
// (Actor)

class UClass* ASapsyDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsyDeathContainer_C");

	return Clss;
}


// SapsyDeathContainer_C SapsyDeathContainer.Default__SapsyDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsyDeathContainer_C* ASapsyDeathContainer_C::GetDefaultObj()
{
	static class ASapsyDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsyDeathContainer_C*>(ASapsyDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SapsyDeathContainer.SapsyDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASapsyDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SapsyDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SapsyDeathContainer.SapsyDeathContainer_C.ExecuteUbergraph_SapsyDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASapsyDeathContainer_C::ExecuteUbergraph_SapsyDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SapsyDeathContainer_C", "ExecuteUbergraph_SapsyDeathContainer");

	Params::ASapsyDeathContainer_C_ExecuteUbergraph_SapsyDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


