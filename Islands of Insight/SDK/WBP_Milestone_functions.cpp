#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Milestone.WBP_Milestone_C
// (None)

class UClass* UWBP_Milestone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Milestone_C");

	return Clss;
}


// WBP_Milestone_C WBP_Milestone.Default__WBP_Milestone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Milestone_C* UWBP_Milestone_C::GetDefaultObj()
{
	static class UWBP_Milestone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Milestone_C*>(UWBP_Milestone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Milestone.WBP_Milestone_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Milestone_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Milestone_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Milestone.WBP_Milestone_C.ExecuteUbergraph_WBP_Milestone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Milestone_C::ExecuteUbergraph_WBP_Milestone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Milestone_C", "ExecuteUbergraph_WBP_Milestone");

	Params::UWBP_Milestone_C_ExecuteUbergraph_WBP_Milestone_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


