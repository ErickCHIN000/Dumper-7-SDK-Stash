#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ToggleButton_Image.UMG_ToggleButton_Image_C
// (None)

class UClass* UUMG_ToggleButton_Image_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ToggleButton_Image_C");

	return Clss;
}


// UMG_ToggleButton_Image_C UMG_ToggleButton_Image.Default__UMG_ToggleButton_Image_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ToggleButton_Image_C* UUMG_ToggleButton_Image_C::GetDefaultObj()
{
	static class UUMG_ToggleButton_Image_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ToggleButton_Image_C*>(UUMG_ToggleButton_Image_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.FocusUpdated
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FButtonStyle                K2Node_Select_Default                                            (ConstParm)

void UUMG_ToggleButton_Image_C::FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "FocusUpdated");

	Params::UUMG_ToggleButton_Image_C_FocusUpdated_Params Parms{};

	Parms.bNewFocus = bNewFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_Image_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "GetFocusWidget");

	Params::UUMG_ToggleButton_Image_C_GetFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_Image_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "GetImageButton");

	Params::UUMG_ToggleButton_Image_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ToggleButton_Image_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "PreConstruct");

	Params::UUMG_ToggleButton_Image_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Image.UMG_ToggleButton_Image_C.ExecuteUbergraph_UMG_ToggleButton_Image
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_Image_C::ExecuteUbergraph_UMG_ToggleButton_Image(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Image_C", "ExecuteUbergraph_UMG_ToggleButton_Image");

	Params::UUMG_ToggleButton_Image_C_ExecuteUbergraph_UMG_ToggleButton_Image_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


