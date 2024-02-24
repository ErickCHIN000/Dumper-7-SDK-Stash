#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusPointLight.BP_IcarusPointLight_C
// (SceneComponent)

class UClass* UBP_IcarusPointLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusPointLight_C");

	return Clss;
}


// BP_IcarusPointLight_C BP_IcarusPointLight.Default__BP_IcarusPointLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusPointLight_C* UBP_IcarusPointLight_C::GetDefaultObj()
{
	static class UBP_IcarusPointLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusPointLight_C*>(UBP_IcarusPointLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusPointLight.BP_IcarusPointLight_C.InitLightSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusPointLight_C::InitLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPointLight_C", "InitLightSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPointLight.BP_IcarusPointLight_C.ShadowSettingUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusPointLight_C::ShadowSettingUpdated(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPointLight_C", "ShadowSettingUpdated");

	Params::UBP_IcarusPointLight_C_ShadowSettingUpdated_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPointLight.BP_IcarusPointLight_C.UpdateShadowSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusPointLight_C::UpdateShadowSetting(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPointLight_C", "UpdateShadowSetting");

	Params::UBP_IcarusPointLight_C_UpdateShadowSetting_Params Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPointLight.BP_IcarusPointLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_IcarusPointLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPointLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPointLight.BP_IcarusPointLight_C.ExecuteUbergraph_BP_IcarusPointLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bNewValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightShadows_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusPointLight_C::ExecuteUbergraph_BP_IcarusPointLight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_bNewValue, bool CallFunc_BooleanAND_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_GetLightShadows_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPointLight_C", "ExecuteUbergraph_BP_IcarusPointLight");

	Params::UBP_IcarusPointLight_C_ExecuteUbergraph_BP_IcarusPointLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_bNewValue = K2Node_CustomEvent_bNewValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetLightShadows_ReturnValue = CallFunc_GetLightShadows_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


