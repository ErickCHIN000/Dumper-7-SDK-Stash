#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestTaskLineHUD.QuestTaskLineHUD_C
// (None)

class UClass* UQuestTaskLineHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTaskLineHUD_C");

	return Clss;
}


// QuestTaskLineHUD_C QuestTaskLineHUD.Default__QuestTaskLineHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestTaskLineHUD_C* UQuestTaskLineHUD_C::GetDefaultObj()
{
	static class UQuestTaskLineHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTaskLineHUD_C*>(UQuestTaskLineHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestTaskLineHUD.QuestTaskLineHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTaskLineHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTaskLineHUD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestTaskLineHUD.QuestTaskLineHUD_C.ExecuteUbergraph_QuestTaskLineHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTaskLineHUD_C::ExecuteUbergraph_QuestTaskLineHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTaskLineHUD_C", "ExecuteUbergraph_QuestTaskLineHUD");

	Params::UQuestTaskLineHUD_C_ExecuteUbergraph_QuestTaskLineHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


