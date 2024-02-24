#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C
// (None)

class UClass* UWBP_ChallengeDetailPane_ConditionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChallengeDetailPane_ConditionEntry_C");

	return Clss;
}


// WBP_ChallengeDetailPane_ConditionEntry_C WBP_ChallengeDetailPane_ConditionEntry.Default__WBP_ChallengeDetailPane_ConditionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChallengeDetailPane_ConditionEntry_C* UWBP_ChallengeDetailPane_ConditionEntry_C::GetDefaultObj()
{
	static class UWBP_ChallengeDetailPane_ConditionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChallengeDetailPane_ConditionEntry_C*>(UWBP_ChallengeDetailPane_ConditionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_ConditionEntry_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_ConditionEntry_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_ConditionEntry_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_ConditionEntry_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChallengeDetailPane_ConditionEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_ConditionEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C.ExecuteUbergraph_WBP_ChallengeDetailPane_ConditionEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeDetailPane_ConditionEntry_C::ExecuteUbergraph_WBP_ChallengeDetailPane_ConditionEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeDetailPane_ConditionEntry_C", "ExecuteUbergraph_WBP_ChallengeDetailPane_ConditionEntry");

	Params::UWBP_ChallengeDetailPane_ConditionEntry_C_ExecuteUbergraph_WBP_ChallengeDetailPane_ConditionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


