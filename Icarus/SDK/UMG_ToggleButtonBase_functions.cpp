#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ToggleButtonBase.UMG_ToggleButtonBase_C
// (None)

class UClass* UUMG_ToggleButtonBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ToggleButtonBase_C");

	return Clss;
}


// UMG_ToggleButtonBase_C UMG_ToggleButtonBase.Default__UMG_ToggleButtonBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ToggleButtonBase_C* UUMG_ToggleButtonBase_C::GetDefaultObj()
{
	static class UUMG_ToggleButtonBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ToggleButtonBase_C*>(UUMG_ToggleButtonBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.VisuallyToggleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VisualToggledState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetImageButton_ImageButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue                       (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue_1                     (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue_2                     (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue_3                     (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FButtonStyle                K2Node_Select_Default                                            (None)

void UUMG_ToggleButtonBase_C::VisuallyToggleButton(bool VisualToggledState, bool Temp_bool_Variable, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_2, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "VisuallyToggleButton");

	Params::UUMG_ToggleButtonBase_C_VisuallyToggleButton_Params Parms{};

	Parms.VisualToggledState = VisualToggledState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetImageButton_ImageButton = CallFunc_GetImageButton_ImageButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue = CallFunc_MakeBrushFromMaterial_ReturnValue;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue_1 = CallFunc_MakeBrushFromMaterial_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue_2 = CallFunc_MakeBrushFromMaterial_ReturnValue_2;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue_3 = CallFunc_MakeBrushFromMaterial_ReturnValue_3;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetDisabledTextColour
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetDisabledTextColour_Colour                            (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_ToggleButtonBase_C::GetDisabledTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetDisabledTextColour_Colour, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "GetDisabledTextColour");

	Params::UUMG_ToggleButtonBase_C_GetDisabledTextColour_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDisabledTextColour_Colour = CallFunc_GetDisabledTextColour_Colour;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetPressedTextColour
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetPressedTextColour_Colour                             (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_ToggleButtonBase_C::GetPressedTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetPressedTextColour_Colour, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "GetPressedTextColour");

	Params::UUMG_ToggleButtonBase_C_GetPressedTextColour_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPressedTextColour_Colour = CallFunc_GetPressedTextColour_Colour;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetHoveredTextColour
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetHoveredTextColour_Colour                             (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_ToggleButtonBase_C::GetHoveredTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetHoveredTextColour_Colour, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "GetHoveredTextColour");

	Params::UUMG_ToggleButtonBase_C_GetHoveredTextColour_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetHoveredTextColour_Colour = CallFunc_GetHoveredTextColour_Colour;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.GetNormalTextColour
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Colour                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetNormalTextColour_Colour                              (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UUMG_ToggleButtonBase_C::GetNormalTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetNormalTextColour_Colour, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "GetNormalTextColour");

	Params::UUMG_ToggleButtonBase_C_GetNormalTextColour_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetNormalTextColour_Colour = CallFunc_GetNormalTextColour_Colour;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Colour != nullptr)
		*Colour = std::move(Parms.Colour);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.UntoggleOthers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                InRadioParent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StopSearching                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_DynamicCast_AsUMG_Toggle_Button_Base                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButtonBase_C::UntoggleOthers(class UPanelWidget* InRadioParent, bool StopSearching, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "UntoggleOthers");

	Params::UUMG_ToggleButtonBase_C_UntoggleOthers_Params Parms{};

	Parms.InRadioParent = InRadioParent;
	Parms.StopSearching = StopSearching;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUMG_Toggle_Button_Base = K2Node_DynamicCast_AsUMG_Toggle_Button_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.SetToggled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButtonBase_C::SetToggled(bool Toggled, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UPanelWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "SetToggled");

	Params::UUMG_ToggleButtonBase_C_SetToggled_Params Parms{};

	Parms.Toggled = Toggled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ToggleButtonBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.OnClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButtonBase_C::OnClickEvent(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "OnClickEvent");

	Params::UUMG_ToggleButtonBase_C_OnClickEvent_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.ExecuteUbergraph_UMG_ToggleButtonBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_GetImageButton_ImageButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ToggleButtonBase_C::ExecuteUbergraph_UMG_ToggleButtonBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "ExecuteUbergraph_UMG_ToggleButtonBase");

	Params::UUMG_ToggleButtonBase_C_ExecuteUbergraph_UMG_ToggleButtonBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetImageButton_ImageButton = CallFunc_GetImageButton_ImageButton;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Untoggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButtonBase_C::Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "Untoggled__DelegateSignature");

	Params::UUMG_ToggleButtonBase_C_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ToggleButtonBase.UMG_ToggleButtonBase_C.Toggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ToggleButtonBase_C::Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ToggleButtonBase_C", "Toggled__DelegateSignature");

	Params::UUMG_ToggleButtonBase_C_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


