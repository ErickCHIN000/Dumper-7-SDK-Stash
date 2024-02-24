#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_menu_Benchmark_button.wid_menu_Benchmark_button_C
// (None)

class UClass* UWid_menu_Benchmark_button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_menu_Benchmark_button_C");

	return Clss;
}


// wid_menu_Benchmark_button_C wid_menu_Benchmark_button.Default__wid_menu_Benchmark_button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_menu_Benchmark_button_C* UWid_menu_Benchmark_button_C::GetDefaultObj()
{
	static class UWid_menu_Benchmark_button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_menu_Benchmark_button_C*>(UWid_menu_Benchmark_button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_menu_Benchmark_button_C::GetEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "GetEntryIndex");

	Params::UWid_menu_Benchmark_button_C_GetEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.PlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_menu_Benchmark_button_C::PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "PlayClickEffect");

	Params::UWid_menu_Benchmark_button_C_PlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_Selected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaySoundEffect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_menu_Benchmark_button_C::SetSelected(bool New_Selected, bool PlaySoundEffect, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_Select_Default, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "SetSelected");

	Params::UWid_menu_Benchmark_button_C_SetSelected_Params Parms{};

	Parms.New_Selected = New_Selected;
	Parms.PlaySoundEffect = PlaySoundEffect;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::DecrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "DecrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.IncrementValueRelesed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::IncrementValueRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "IncrementValueRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::DecrementValueReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "DecrementValueReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_menu_Benchmark_button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "PreConstruct");

	Params::UWid_menu_Benchmark_button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.SetSelectableEntryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_menu_Benchmark_button_C::SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "SetSelectableEntryOwner");

	Params::UWid_menu_Benchmark_button_C_SetSelectableEntryOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_menu_Benchmark_button_C::Select(bool IsSelected, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "Select");

	Params::UWid_menu_Benchmark_button_C_Select_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.SetEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_menu_Benchmark_button_C::SetEntryIndex(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "SetEntryIndex");

	Params::UWid_menu_Benchmark_button_C_SetEntryIndex_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::IncrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "IncrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.Triggered By Keyboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::Triggered_By_Keyboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "Triggered By Keyboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.ExecuteUbergraph_wid_menu_Benchmark_button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>K2Node_Event_Owner                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsSelected                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_menu_Benchmark_button_C::ExecuteUbergraph_wid_menu_Benchmark_button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "ExecuteUbergraph_wid_menu_Benchmark_button");

	Params::UWid_menu_Benchmark_button_C_ExecuteUbergraph_wid_menu_Benchmark_button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.K2Node_Event_IsSelected = K2Node_Event_IsSelected;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_menu_Benchmark_button.wid_menu_Benchmark_button_C.BtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_menu_Benchmark_button_C::BtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_menu_Benchmark_button_C", "BtnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


