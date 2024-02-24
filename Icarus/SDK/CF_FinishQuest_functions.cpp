#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_FinishQuest.CF_FinishQuest_C
// (None)

class UClass* UCF_FinishQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_FinishQuest_C");

	return Clss;
}


// CF_FinishQuest_C CF_FinishQuest.Default__CF_FinishQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_FinishQuest_C* UCF_FinishQuest_C::GetDefaultObj()
{
	static class UCF_FinishQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_FinishQuest_C*>(UCF_FinishQuest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_FinishQuest.CF_FinishQuest_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_FinishQuest_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FinishQuest_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_FinishQuest.CF_FinishQuest_C.ExecuteUbergraph_CF_FinishQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_FinishQuest_C::ExecuteUbergraph_CF_FinishQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FinishQuest_C", "ExecuteUbergraph_CF_FinishQuest");

	Params::UCF_FinishQuest_C_ExecuteUbergraph_CF_FinishQuest_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


