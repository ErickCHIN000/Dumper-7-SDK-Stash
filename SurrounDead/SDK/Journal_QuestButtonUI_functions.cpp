#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Journal_QuestButtonUI.Journal_QuestButtonUI_C
// (None)

class UClass* UJournal_QuestButtonUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Journal_QuestButtonUI_C");

	return Clss;
}


// Journal_QuestButtonUI_C Journal_QuestButtonUI.Default__Journal_QuestButtonUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournal_QuestButtonUI_C* UJournal_QuestButtonUI_C::GetDefaultObj()
{
	static class UJournal_QuestButtonUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournal_QuestButtonUI_C*>(UJournal_QuestButtonUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Journal_QuestButtonUI.Journal_QuestButtonUI_C.BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_QuestButtonUI_C::BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestButtonUI_C", "BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestButtonUI.Journal_QuestButtonUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournal_QuestButtonUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestButtonUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestButtonUI.Journal_QuestButtonUI_C.ExecuteUbergraph_Journal_QuestButtonUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQuestName_ReturnValue                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournal_QuestButtonUI_C::ExecuteUbergraph_Journal_QuestButtonUI(int32 EntryPoint, class FText CallFunc_GetQuestName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestButtonUI_C", "ExecuteUbergraph_Journal_QuestButtonUI");

	Params::UJournal_QuestButtonUI_C_ExecuteUbergraph_Journal_QuestButtonUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQuestName_ReturnValue = CallFunc_GetQuestName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


