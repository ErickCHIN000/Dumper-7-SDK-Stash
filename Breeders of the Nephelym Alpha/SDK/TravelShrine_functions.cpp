#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TravelShrine.TravelShrine_C
// (Actor)

class UClass* ATravelShrine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelShrine_C");

	return Clss;
}


// TravelShrine_C TravelShrine.Default__TravelShrine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATravelShrine_C* ATravelShrine_C::GetDefaultObj()
{
	static class ATravelShrine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATravelShrine_C*>(ATravelShrine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TravelShrine.TravelShrine_C.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ATravelShrine_C::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelShrine_C", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TravelShrine.TravelShrine_C.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ATravelShrine_C::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelShrine_C", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TravelShrine.TravelShrine_C.ExecuteUbergraph_TravelShrine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATravelShrine_C::ExecuteUbergraph_TravelShrine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelShrine_C", "ExecuteUbergraph_TravelShrine");

	Params::ATravelShrine_C_ExecuteUbergraph_TravelShrine_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


