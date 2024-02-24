#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SettingsMenuPS.SettingsMenuPS_C
// (None)

class UClass* USettingsMenuPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsMenuPS_C");

	return Clss;
}


// SettingsMenuPS_C SettingsMenuPS.Default__SettingsMenuPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsMenuPS_C* USettingsMenuPS_C::GetDefaultObj()
{
	static class USettingsMenuPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsMenuPS_C*>(USettingsMenuPS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SettingsMenuPS.SettingsMenuPS_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettingsMenuPS_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SettingsMenuPS.SettingsMenuPS_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettingsMenuPS_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SettingsMenuPS.SettingsMenuPS_C.CategoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USettingsMenuPS_C::CategoryChanged(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "CategoryChanged");

	Params::USettingsMenuPS_C_CategoryChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsMenuPS.SettingsMenuPS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USettingsMenuPS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SettingsMenuPS.SettingsMenuPS_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USettingsMenuPS_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SettingsMenuPS.SettingsMenuPS_C.ExecuteUbergraph_SettingsMenuPS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Value                                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSettingOption              K2Node_MakeStruct_SettingOption                                  (None)
// struct FSettingOption              K2Node_MakeStruct_SettingOption_1                                (None)
// struct FSettingOption              K2Node_MakeStruct_SettingOption_2                                (None)
// struct FSettingOption              K2Node_MakeStruct_SettingOption_3                                (None)
// TArray<struct FSettingOption>      K2Node_MakeArray_Array                                           (ReferenceParm)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USettingsMenuPS_C::ExecuteUbergraph_SettingsMenuPS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, const struct FSettingOption& K2Node_MakeStruct_SettingOption, const struct FSettingOption& K2Node_MakeStruct_SettingOption_1, const struct FSettingOption& K2Node_MakeStruct_SettingOption_2, const struct FSettingOption& K2Node_MakeStruct_SettingOption_3, TArray<struct FSettingOption>& K2Node_MakeArray_Array, class AHUD_Game_C* CallFunc_GetGameHUD_HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsMenuPS_C", "ExecuteUbergraph_SettingsMenuPS");

	Params::USettingsMenuPS_C_ExecuteUbergraph_SettingsMenuPS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.K2Node_MakeStruct_SettingOption = K2Node_MakeStruct_SettingOption;
	Parms.K2Node_MakeStruct_SettingOption_1 = K2Node_MakeStruct_SettingOption_1;
	Parms.K2Node_MakeStruct_SettingOption_2 = K2Node_MakeStruct_SettingOption_2;
	Parms.K2Node_MakeStruct_SettingOption_3 = K2Node_MakeStruct_SettingOption_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;

	UObject::ProcessEvent(Func, &Parms);

}

}


