#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C
// (None)

class UClass* UWid_pda_NotesList_Companions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_Companions_C");

	return Clss;
}


// wid_pda_NotesList_Companions_C wid_pda_NotesList_Companions.Default__wid_pda_NotesList_Companions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_Companions_C* UWid_pda_NotesList_Companions_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_Companions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_Companions_C*>(UWid_pda_NotesList_Companions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C.AddDecisions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ECompanionDecisionResultTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UWid_pda_NotesList_Companions_Decisions_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_NotesList_Companions_C::AddDecisions(class FName CompanionID, class FText TitleText, enum class ECompanionDecisionResultType Type, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWid_pda_NotesList_Companions_Decisions_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_C", "AddDecisions");

	Params::UWid_pda_NotesList_Companions_C_AddDecisions_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.TitleText = TitleText;
	Parms.Type = Type;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C.SetContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NotesList_Companions_C::SetContent(class FName CompanionID, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_C", "SetContent");

	Params::UWid_pda_NotesList_Companions_C_SetContent_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NotesList_Companions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_C", "PreConstruct");

	Params::UWid_pda_NotesList_Companions_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_Companions.wid_pda_NotesList_Companions_C.ExecuteUbergraph_wid_pda_NotesList_Companions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NotesList_Companions_C::ExecuteUbergraph_wid_pda_NotesList_Companions(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_C", "ExecuteUbergraph_wid_pda_NotesList_Companions");

	Params::UWid_pda_NotesList_Companions_C_ExecuteUbergraph_wid_pda_NotesList_Companions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


