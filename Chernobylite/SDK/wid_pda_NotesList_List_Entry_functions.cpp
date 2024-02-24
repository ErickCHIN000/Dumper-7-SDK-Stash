#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C
// (None)

class UClass* UWid_pda_NotesList_List_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_List_Entry_C");

	return Clss;
}


// wid_pda_NotesList_List_Entry_C wid_pda_NotesList_List_Entry.Default__wid_pda_NotesList_List_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_List_Entry_C* UWid_pda_NotesList_List_Entry_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_List_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_List_Entry_C*>(UWid_pda_NotesList_List_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFromKeyboard                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_NotesList_List_Entry_C::SetSelected(bool NewSelected, bool IsFromKeyboard, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "SetSelected");

	Params::UWid_pda_NotesList_List_Entry_C_SetSelected_Params Parms{};

	Parms.NewSelected = NewSelected;
	Parms.IsFromKeyboard = IsFromKeyboard;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NotesList_List_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "PreConstruct");

	Params::UWid_pda_NotesList_List_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_pda_NotesList_List_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_pda_NotesList_List_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_pda_NotesList_List_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_NotesList_List_Entry.wid_pda_NotesList_List_Entry_C.ExecuteUbergraph_wid_pda_NotesList_List_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_NotesList_List_Entry_C::ExecuteUbergraph_wid_pda_NotesList_List_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetChildIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_List_Entry_C", "ExecuteUbergraph_wid_pda_NotesList_List_Entry");

	Params::UWid_pda_NotesList_List_Entry_C_ExecuteUbergraph_wid_pda_NotesList_List_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


