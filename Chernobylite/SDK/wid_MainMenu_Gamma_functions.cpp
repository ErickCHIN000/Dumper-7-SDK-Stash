#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Gamma.wid_MainMenu_Gamma_C
// (None)

class UClass* UWid_MainMenu_Gamma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Gamma_C");

	return Clss;
}


// wid_MainMenu_Gamma_C wid_MainMenu_Gamma.Default__wid_MainMenu_Gamma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Gamma_C* UWid_MainMenu_Gamma_C::GetDefaultObj()
{
	static class UWid_MainMenu_Gamma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Gamma_C*>(UWid_MainMenu_Gamma_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.ResetToDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::ResetToDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "ResetToDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.CloseGammaOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::CloseGammaOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "CloseGammaOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.PlayUIMoveSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::PlayUIMoveSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "PlayUIMoveSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.BackBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::BackBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "BackBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.SelectMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_menu_button_C*          Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_C::SelectMenu(class UWid_menu_button_C* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "SelectMenu");

	Params::UWid_MainMenu_Gamma_C_SelectMenu_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.ResetBtn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::ResetBtn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "ResetBtn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Gamma_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "PreConstruct");

	Params::UWid_MainMenu_Gamma_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "Tick");

	Params::UWid_MainMenu_Gamma_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.UpdateMainMenuButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::UpdateMainMenuButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "UpdateMainMenuButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.EnterInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::EnterInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "EnterInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.SliderValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValueMinMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValueMinMaxOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZeroOneValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_C::SliderValueChanged(float NewValueMinMax, float NewValueMinMaxOffset, float ZeroOneValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "SliderValueChanged");

	Params::UWid_MainMenu_Gamma_C_SliderValueChanged_Params Parms{};

	Parms.NewValueMinMax = NewValueMinMax;
	Parms.NewValueMinMaxOffset = NewValueMinMaxOffset;
	Parms.ZeroOneValue = ZeroOneValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.InputLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::InputLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "InputLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.InputRightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::InputRightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "InputRightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.ExecuteUbergraph_wid_MainMenu_Gamma
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_menu_button_C*          K2Node_CustomEvent_Option                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGammaValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_NewValueMinMax                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValueMinMaxOffset                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ZeroOneValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_C::ExecuteUbergraph_wid_MainMenu_Gamma(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UWid_menu_button_C* K2Node_CustomEvent_Option, enum class ESlateVisibility K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_GetGammaValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewValueMinMax, float K2Node_CustomEvent_NewValueMinMaxOffset, float K2Node_CustomEvent_ZeroOneValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "ExecuteUbergraph_wid_MainMenu_Gamma");

	Params::UWid_MainMenu_Gamma_C_ExecuteUbergraph_wid_MainMenu_Gamma_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_Option = K2Node_CustomEvent_Option;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetGammaValue_ReturnValue = CallFunc_GetGammaValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NewValueMinMax = K2Node_CustomEvent_NewValueMinMax;
	Parms.K2Node_CustomEvent_NewValueMinMaxOffset = K2Node_CustomEvent_NewValueMinMaxOffset;
	Parms.K2Node_CustomEvent_ZeroOneValue = K2Node_CustomEvent_ZeroOneValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.ExitDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::ExitDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "ExitDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.NewDeletage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::NewDeletage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "NewDeletage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma.wid_MainMenu_Gamma_C.ContinueDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_C::ContinueDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_C", "ContinueDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


