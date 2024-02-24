#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_QuestJournalQuest.BP_QuestJournalQuest_C
// (None)

class UClass* UBP_QuestJournalQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestJournalQuest_C");

	return Clss;
}


// BP_QuestJournalQuest_C BP_QuestJournalQuest.Default__BP_QuestJournalQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestJournalQuest_C* UBP_QuestJournalQuest_C::GetDefaultObj()
{
	static class UBP_QuestJournalQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestJournalQuest_C*>(UBP_QuestJournalQuest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestJournalQuest.BP_QuestJournalQuest_C.BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_QuestJournalQuest_C::BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestJournalQuest_C", "BndEvt__BP_QuestJournalQuest_Button_Quest_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestJournalQuest.BP_QuestJournalQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_QuestJournalQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestJournalQuest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestJournalQuest.BP_QuestJournalQuest_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestJournalQuest_C::Set_Selected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestJournalQuest_C", "Set Selected");

	Params::UBP_QuestJournalQuest_C_Set_Selected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuestJournalQuest.BP_QuestJournalQuest_C.ExecuteUbergraph_BP_QuestJournalQuest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQuestName_ReturnValue                                (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UBP_QuestJournalQuest_C::ExecuteUbergraph_BP_QuestJournalQuest(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Selected, class FText CallFunc_GetQuestName_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestJournalQuest_C", "ExecuteUbergraph_BP_QuestJournalQuest");

	Params::UBP_QuestJournalQuest_C_ExecuteUbergraph_BP_QuestJournalQuest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.CallFunc_GetQuestName_ReturnValue = CallFunc_GetQuestName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


