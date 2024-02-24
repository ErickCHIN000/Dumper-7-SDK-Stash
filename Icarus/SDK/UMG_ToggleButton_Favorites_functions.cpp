#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C
// (None)

class UClass* UUMG_ToggleButton_Favorites_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ToggleButton_Favorites_C");

	return Clss;
}


// UMG_ToggleButton_Favorites_C UMG_ToggleButton_Favorites.Default__UMG_ToggleButton_Favorites_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ToggleButton_Favorites_C* UUMG_ToggleButton_Favorites_C::GetDefaultObj()
{
	static class UUMG_ToggleButton_Favorites_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ToggleButton_Favorites_C*>(UUMG_ToggleButton_Favorites_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.SetInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_Favorites_C::SetInitialState(bool Toggled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "SetInitialState");

	Params::UUMG_ToggleButton_Favorites_C_SetInitialState_Params Parms{};

	Parms.Toggled = Toggled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.OnUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ToggleButton_Favorites_C::OnUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "OnUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.OnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_Favorites_C::OnHover(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "OnHover");

	Params::UUMG_ToggleButton_Favorites_C_OnHover_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.SetButtonImages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_Favorites_C::SetButtonImages(class UMaterialInstance* Normal, class UMaterialInstance* Hovered, class UMaterialInstance* Pressed, class UMaterialInstance* Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "SetButtonImages");

	Params::UUMG_ToggleButton_Favorites_C_SetButtonImages_Params Parms{};

	Parms.Normal = Normal;
	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.VisuallyToggleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VisualToggledState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_ToggleButton_Favorites_C::VisuallyToggleButton(bool VisualToggledState, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "VisuallyToggleButton");

	Params::UUMG_ToggleButton_Favorites_C_VisuallyToggleButton_Params Parms{};

	Parms.VisualToggledState = VisualToggledState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButton_Favorites_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "GetFocusWidget");

	Params::UUMG_ToggleButton_Favorites_C_GetFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_Favorites_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "GetImageButton");

	Params::UUMG_ToggleButton_Favorites_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ToggleButton_Favorites_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C.ExecuteUbergraph_UMG_ToggleButton_Favorites
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButton_Favorites_C::ExecuteUbergraph_UMG_ToggleButton_Favorites(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButton_Favorites_C", "ExecuteUbergraph_UMG_ToggleButton_Favorites");

	Params::UUMG_ToggleButton_Favorites_C_ExecuteUbergraph_UMG_ToggleButton_Favorites_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


