#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C
// (None)

class UClass* UWid_MainMenu_Controls_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Controls_Controller_C");

	return Clss;
}


// wid_MainMenu_Controls_Controller_C wid_MainMenu_Controls_Controller.Default__wid_MainMenu_Controls_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Controls_Controller_C* UWid_MainMenu_Controls_Controller_C::GetDefaultObj()
{
	static class UWid_MainMenu_Controls_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Controls_Controller_C*>(UWid_MainMenu_Controls_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.UpdateLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPS4                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)

void UWid_MainMenu_Controls_Controller_C::UpdateLayout(bool IsPS4, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "UpdateLayout");

	Params::UWid_MainMenu_Controls_Controller_C_UpdateLayout_Params Parms{};

	Parms.IsPS4 = IsPS4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.UpdateControllerType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPS4GamepadConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_Controller_C::UpdateControllerType(bool CallFunc_IsPS4GamepadConnected_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "UpdateControllerType");

	Params::UWid_MainMenu_Controls_Controller_C_UpdateControllerType_Params Parms{};

	Parms.CallFunc_IsPS4GamepadConnected_ReturnValue = CallFunc_IsPS4GamepadConnected_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.Back
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_Controller_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Controls_Controller_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "PreConstruct");

	Params::UWid_MainMenu_Controls_Controller_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.InputBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Controls_Controller_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C.ExecuteUbergraph_wid_MainMenu_Controls_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_MainMenu_Controls_Controller_C::ExecuteUbergraph_wid_MainMenu_Controls_Controller(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_FormatText_Output, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Controls_Controller_C", "ExecuteUbergraph_wid_MainMenu_Controls_Controller");

	Params::UWid_MainMenu_Controls_Controller_C_ExecuteUbergraph_wid_MainMenu_Controls_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


