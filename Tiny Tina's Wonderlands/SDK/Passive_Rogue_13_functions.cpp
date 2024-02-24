#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_13.Passive_Rogue_13_C
// (None)

class UClass* UPassive_Rogue_13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_13_C");

	return Clss;
}


// Passive_Rogue_13_C Passive_Rogue_13.Default__Passive_Rogue_13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_13_C* UPassive_Rogue_13_C::GetDefaultObj()
{
	static class UPassive_Rogue_13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_13_C*>(UPassive_Rogue_13_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Rogue_13.Passive_Rogue_13_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_13_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_13_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_13.Passive_Rogue_13_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_13_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_13_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_13.Passive_Rogue_13_C.ExecuteUbergraph_Passive_Rogue_13
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Rogue_13_C::ExecuteUbergraph_Passive_Rogue_13(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_13_C", "ExecuteUbergraph_Passive_Rogue_13");

	Params::UPassive_Rogue_13_C_ExecuteUbergraph_Passive_Rogue_13_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


