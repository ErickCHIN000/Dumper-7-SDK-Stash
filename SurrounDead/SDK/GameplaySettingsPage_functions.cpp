#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameplaySettingsPage.GameplaySettingsPage_C
// (None)

class UClass* UGameplaySettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplaySettingsPage_C");

	return Clss;
}


// GameplaySettingsPage_C GameplaySettingsPage.Default__GameplaySettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameplaySettingsPage_C* UGameplaySettingsPage_C::GetDefaultObj()
{
	static class UGameplaySettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplaySettingsPage_C*>(UGameplaySettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameplaySettingsPage_C::BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsPage_C", "BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplaySettingsPage.GameplaySettingsPage_C.BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGameplaySettingsPage_C::BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsPage_C", "BndEvt__GameplaySettingsPage_ResetVehicles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplaySettingsPage.GameplaySettingsPage_C.ExecuteUbergraph_GameplaySettingsPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UResetVehiclesWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGameplaySettingsPage_C::ExecuteUbergraph_GameplaySettingsPage(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UResetVehiclesWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsPage_C", "ExecuteUbergraph_GameplaySettingsPage");

	Params::UGameplaySettingsPage_C_ExecuteUbergraph_GameplaySettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


