#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DazeShrine.DazeShrine_C
// (Actor)

class UClass* ADazeShrine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DazeShrine_C");

	return Clss;
}


// DazeShrine_C DazeShrine.Default__DazeShrine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADazeShrine_C* ADazeShrine_C::GetDefaultObj()
{
	static class ADazeShrine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADazeShrine_C*>(ADazeShrine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DazeShrine.DazeShrine_C.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ADazeShrine_C::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DazeShrine_C", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DazeShrine.DazeShrine_C.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ADazeShrine_C::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DazeShrine_C", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DazeShrine.DazeShrine_C.ExecuteUbergraph_DazeShrine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADazeShrine_C::ExecuteUbergraph_DazeShrine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DazeShrine_C", "ExecuteUbergraph_DazeShrine");

	Params::ADazeShrine_C_ExecuteUbergraph_DazeShrine_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


