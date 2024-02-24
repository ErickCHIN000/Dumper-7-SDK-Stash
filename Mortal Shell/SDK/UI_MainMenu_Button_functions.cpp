#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MainMenu_Button.UI_MainMenu_Button_C
// (None)

class UClass* UUI_MainMenu_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MainMenu_Button_C");

	return Clss;
}


// UI_MainMenu_Button_C UI_MainMenu_Button.Default__UI_MainMenu_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MainMenu_Button_C* UUI_MainMenu_Button_C::GetDefaultObj()
{
	static class UUI_MainMenu_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MainMenu_Button_C*>(UUI_MainMenu_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.DebugButtonSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::DebugButtonSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "DebugButtonSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.GetDisabledColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 OtherColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UUI_MainMenu_Button_C::GetDisabledColor(const struct FSlateColor& OtherColor, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "GetDisabledColor");

	Params::UUI_MainMenu_Button_C_GetDisabledColor_Params Parms{};

	Parms.OtherColor = OtherColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetDisabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue                            (None)

void UUI_MainMenu_Button_C::MMB_SetDisabled(bool IsDisabled, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_SetDisabled");

	Params::UUI_MainMenu_Button_C_MMB_SetDisabled_Params Parms{};

	Parms.IsDisabled = IsDisabled;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDisabledColor_ReturnValue = CallFunc_GetDisabledColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UUI_MainMenu_Button_C::MMB_SetFontSize(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_SetFontSize");

	Params::UUI_MainMenu_Button_C_MMB_SetFontSize_Params Parms{};

	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::MMB_SetWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_SetWidth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetTextToLower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::MMB_SetTextToLower()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_SetTextToLower");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Unavailable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnavailable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue                            (None)

void UUI_MainMenu_Button_C::MMB_Unavailable(bool IsUnavailable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_Unavailable");

	Params::UUI_MainMenu_Button_C_MMB_Unavailable_Params Parms{};

	Parms.IsUnavailable = IsUnavailable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDisabledColor_ReturnValue = CallFunc_GetDisabledColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Deselected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue                            (None)

void UUI_MainMenu_Button_C::MMB_Deselected(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_Deselected");

	Params::UUI_MainMenu_Button_C_MMB_Deselected_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDisabledColor_ReturnValue = CallFunc_GetDisabledColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue                            (None)

void UUI_MainMenu_Button_C::MMB_Selected(class USoundBase* Sound, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_Selected");

	Params::UUI_MainMenu_Button_C_MMB_Selected_Params Parms{};

	Parms.Sound = Sound;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDisabledColor_ReturnValue = CallFunc_GetDisabledColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Blink_Stop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue                            (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 CallFunc_GetDisabledColor_ReturnValue_1                          (None)

void UUI_MainMenu_Button_C::MMB_Blink_Stop(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_Blink_Stop");

	Params::UUI_MainMenu_Button_C_MMB_Blink_Stop_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDisabledColor_ReturnValue = CallFunc_GetDisabledColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetDisabledColor_ReturnValue_1 = CallFunc_GetDisabledColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_Blink_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Button_C::MMB_Blink_Start(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_Blink_Start");

	Params::UUI_MainMenu_Button_C_MMB_Blink_Start_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.MMB_SetTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_TextToLower_ReturnValue                                 (None)

void UUI_MainMenu_Button_C::MMB_SetTextValue(class FText CallFunc_TextToLower_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "MMB_SetTextValue");

	Params::UUI_MainMenu_Button_C_MMB_SetTextValue_Params Parms{};

	Parms.CallFunc_TextToLower_ReturnValue = CallFunc_TextToLower_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "PreConstruct");

	Params::UUI_MainMenu_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.OnLanguageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Button_C::OnLanguageChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "OnLanguageChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.ExecuteUbergraph_UI_MainMenu_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Button_C::ExecuteUbergraph_UI_MainMenu_Button(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "ExecuteUbergraph_UI_MainMenu_Button");

	Params::UUI_MainMenu_Button_C_ExecuteUbergraph_UI_MainMenu_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Button_C::Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "Unhovered__DelegateSignature");

	Params::UUI_MainMenu_Button_C_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Button_C::Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "Hovered__DelegateSignature");

	Params::UUI_MainMenu_Button_C_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Button.UI_MainMenu_Button_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Button_C::Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Button_C", "Clicked__DelegateSignature");

	Params::UUI_MainMenu_Button_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


