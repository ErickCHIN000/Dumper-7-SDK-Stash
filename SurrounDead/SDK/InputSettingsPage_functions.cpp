#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InputSettingsPage.InputSettingsPage_C
// (None)

class UClass* UInputSettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputSettingsPage_C");

	return Clss;
}


// InputSettingsPage_C InputSettingsPage.Default__InputSettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputSettingsPage_C* UInputSettingsPage_C::GetDefaultObj()
{
	static class UInputSettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputSettingsPage_C*>(UInputSettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputSettingsPage.InputSettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInputSettingsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputSettingsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputSettingsPage.InputSettingsPage_C.BndEvt__InputSettingsPage_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInputSettingsPage_C::BndEvt__InputSettingsPage_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputSettingsPage_C", "BndEvt__InputSettingsPage_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature");

	Params::UInputSettingsPage_C_BndEvt__InputSettingsPage_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputSettingsPage.InputSettingsPage_C.ExecuteUbergraph_InputSettingsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInputMappings        CallFunc_GetPlayerInputMappingsStatic_ReturnValue                (None)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputSettingsPage_C::ExecuteUbergraph_InputSettingsPage(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Value, bool K2Node_SwitchString_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FPlayerInputMappings& CallFunc_GetPlayerInputMappingsStatic_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputSettingsPage_C", "ExecuteUbergraph_InputSettingsPage");

	Params::UInputSettingsPage_C_ExecuteUbergraph_InputSettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetPlayerInputMappingsStatic_ReturnValue = CallFunc_GetPlayerInputMappingsStatic_ReturnValue;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


