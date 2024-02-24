#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultRadioSelectSetting.DefaultRadioSelectSetting_C
// (None)

class UClass* UDefaultRadioSelectSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultRadioSelectSetting_C");

	return Clss;
}


// DefaultRadioSelectSetting_C DefaultRadioSelectSetting.Default__DefaultRadioSelectSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultRadioSelectSetting_C* UDefaultRadioSelectSetting_C::GetDefaultObj()
{
	static class UDefaultRadioSelectSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultRadioSelectSetting_C*>(UDefaultRadioSelectSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DefaultRadioSelectSetting.DefaultRadioSelectSetting_C.BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDefaultRadioSelectSetting_C::BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultRadioSelectSetting_C", "BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");

	Params::UDefaultRadioSelectSetting_C_BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultRadioSelectSetting.DefaultRadioSelectSetting_C.Change to Preset Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDefaultRadioSelectSetting_C::Change_to_Preset_Value(const class FString& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultRadioSelectSetting_C", "Change to Preset Value");

	Params::UDefaultRadioSelectSetting_C_Change_to_Preset_Value_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultRadioSelectSetting.DefaultRadioSelectSetting_C.ExecuteUbergraph_DefaultRadioSelectSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewParam                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultRadioSelectSetting_C::ExecuteUbergraph_DefaultRadioSelectSetting(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Value, const class FString& K2Node_CustomEvent_NewParam, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultRadioSelectSetting_C", "ExecuteUbergraph_DefaultRadioSelectSetting");

	Params::UDefaultRadioSelectSetting_C_ExecuteUbergraph_DefaultRadioSelectSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultRadioSelectSetting.DefaultRadioSelectSetting_C.NoLongerUsingPreset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDefaultRadioSelectSetting_C::NoLongerUsingPreset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultRadioSelectSetting_C", "NoLongerUsingPreset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DefaultRadioSelectSetting.DefaultRadioSelectSetting_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDefaultRadioSelectSetting_C::OnChanged__DelegateSignature(const class FString& Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultRadioSelectSetting_C", "OnChanged__DelegateSignature");

	Params::UDefaultRadioSelectSetting_C_OnChanged__DelegateSignature_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}

}


