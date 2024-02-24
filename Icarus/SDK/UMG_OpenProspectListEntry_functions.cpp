#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C
// (None)

class UClass* UUMG_OpenProspectListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OpenProspectListEntry_C");

	return Clss;
}


// UMG_OpenProspectListEntry_C UMG_OpenProspectListEntry.Default__UMG_OpenProspectListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OpenProspectListEntry_C* UUMG_OpenProspectListEntry_C::GetDefaultObj()
{
	static class UUMG_OpenProspectListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OpenProspectListEntry_C*>(UUMG_OpenProspectListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.FocusUpdated
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FButtonStyle                K2Node_Select_Default                                            (ConstParm)

void UUMG_OpenProspectListEntry_C::FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "FocusUpdated");

	Params::UUMG_OpenProspectListEntry_C_FocusUpdated_Params Parms{};

	Parms.bNewFocus = bNewFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OpenProspectListEntry_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "GetFocusWidget");

	Params::UUMG_OpenProspectListEntry_C_GetFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenProspectListEntry_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "GetImageButton");

	Params::UUMG_OpenProspectListEntry_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.GetButtonText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  ButtonText                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenProspectListEntry_C::GetButtonText(class UTextBlock** ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "GetButtonText");

	Params::UUMG_OpenProspectListEntry_C_GetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_OpenProspectListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OpenProspectListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "PreConstruct");

	Params::UUMG_OpenProspectListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C.ExecuteUbergraph_UMG_OpenProspectListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenProspectListEntry_C::ExecuteUbergraph_UMG_OpenProspectListEntry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenProspectListEntry_C", "ExecuteUbergraph_UMG_OpenProspectListEntry");

	Params::UUMG_OpenProspectListEntry_C_ExecuteUbergraph_UMG_OpenProspectListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


