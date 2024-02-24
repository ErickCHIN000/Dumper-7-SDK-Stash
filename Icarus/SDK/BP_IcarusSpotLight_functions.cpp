#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusSpotLight.BP_IcarusSpotLight_C
// (SceneComponent)

class UClass* UBP_IcarusSpotLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusSpotLight_C");

	return Clss;
}


// BP_IcarusSpotLight_C BP_IcarusSpotLight.Default__BP_IcarusSpotLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusSpotLight_C* UBP_IcarusSpotLight_C::GetDefaultObj()
{
	static class UBP_IcarusSpotLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusSpotLight_C*>(UBP_IcarusSpotLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusSpotLight.BP_IcarusSpotLight_C.UpdateShadowSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusSpotLight_C::UpdateShadowSetting(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSpotLight_C", "UpdateShadowSetting");

	Params::UBP_IcarusSpotLight_C_UpdateShadowSetting_Params Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusSpotLight.BP_IcarusSpotLight_C.InitLightSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_IcarusSpotLight_C::InitLightSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSpotLight_C", "InitLightSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSpotLight.BP_IcarusSpotLight_C.ShadowSettingUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusSpotLight_C::ShadowSettingUpdated(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSpotLight_C", "ShadowSettingUpdated");

	Params::UBP_IcarusSpotLight_C_ShadowSettingUpdated_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusSpotLight.BP_IcarusSpotLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_IcarusSpotLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSpotLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusSpotLight.BP_IcarusSpotLight_C.ExecuteUbergraph_BP_IcarusSpotLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLightShadows_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusSpotLight_C::ExecuteUbergraph_BP_IcarusSpotLight(int32 EntryPoint, bool K2Node_CustomEvent_bNewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetLightShadows_ReturnValue, bool K2Node_CustomEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusSpotLight_C", "ExecuteUbergraph_BP_IcarusSpotLight");

	Params::UBP_IcarusSpotLight_C_ExecuteUbergraph_BP_IcarusSpotLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bNewValue = K2Node_CustomEvent_bNewValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLightShadows_ReturnValue = CallFunc_GetLightShadows_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


