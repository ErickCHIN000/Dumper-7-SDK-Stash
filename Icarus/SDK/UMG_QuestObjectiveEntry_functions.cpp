#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C
// (None)

class UClass* UUMG_QuestObjectiveEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_QuestObjectiveEntry_C");

	return Clss;
}


// UMG_QuestObjectiveEntry_C UMG_QuestObjectiveEntry.Default__UMG_QuestObjectiveEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_QuestObjectiveEntry_C* UUMG_QuestObjectiveEntry_C::GetDefaultObj()
{
	static class UUMG_QuestObjectiveEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_QuestObjectiveEntry_C*>(UUMG_QuestObjectiveEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_FA89F8484A04F5B013BEE5B07F351D47
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_QuestObjectiveEntry_C::Finished_FA89F8484A04F5B013BEE5B07F351D47()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "Finished_FA89F8484A04F5B013BEE5B07F351D47");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_54BD1BA940CD590F99FE70B029DA39D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_QuestObjectiveEntry_C::Finished_54BD1BA940CD590F99FE70B029DA39D5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "Finished_54BD1BA940CD590F99FE70B029DA39D5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_E810283B4FB239E8364D2C8C80E2C89B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_QuestObjectiveEntry_C::Finished_E810283B4FB239E8364D2C8C80E2C89B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "Finished_E810283B4FB239E8364D2C8C80E2C89B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Finished_150A755A4DAA0F7702CFB689A47AFB20
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_QuestObjectiveEntry_C::Finished_150A755A4DAA0F7702CFB689A47AFB20()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "Finished_150A755A4DAA0F7702CFB689A47AFB20");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Complete                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ParentComplete                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SubObjective                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestObjectiveEntry_C::Setup(class FText Text, bool Complete, bool ParentComplete, bool SubObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "Setup");

	Params::UUMG_QuestObjectiveEntry_C_Setup_Params Parms{};

	Parms.Text = Text;
	Parms.Complete = Complete;
	Parms.ParentComplete = ParentComplete;
	Parms.SubObjective = SubObjective;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_QuestObjectiveEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "OnListItemObjectSet");

	Params::UUMG_QuestObjectiveEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestObjectiveEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "BP_OnItemSelectionChanged");

	Params::UUMG_QuestObjectiveEntry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestObjectiveEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "BP_OnItemExpansionChanged");

	Params::UUMG_QuestObjectiveEntry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_QuestObjectiveEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C.ExecuteUbergraph_UMG_QuestObjectiveEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// bool                               K2Node_CustomEvent_Complete                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ParentComplete                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_SubObjective                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_QuestObjectiveEntry_C::ExecuteUbergraph_UMG_QuestObjectiveEntry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_Complete, bool K2Node_CustomEvent_ParentComplete, bool K2Node_CustomEvent_SubObjective, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_IsAnyAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestObjectiveEntry_C", "ExecuteUbergraph_UMG_QuestObjectiveEntry");

	Params::UUMG_QuestObjectiveEntry_C_ExecuteUbergraph_UMG_QuestObjectiveEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_Complete = K2Node_CustomEvent_Complete;
	Parms.K2Node_CustomEvent_ParentComplete = K2Node_CustomEvent_ParentComplete;
	Parms.K2Node_CustomEvent_SubObjective = K2Node_CustomEvent_SubObjective;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_2 = CallFunc_CreatePlayAnimationProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_3 = CallFunc_CreatePlayAnimationProxyObject_Result_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


