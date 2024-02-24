#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C
// (None)

class UClass* UUI_PhotoModeInputHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PhotoModeInputHelper_C");

	return Clss;
}


// UI_PhotoModeInputHelper_C UI_PhotoModeInputHelper.Default__UI_PhotoModeInputHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PhotoModeInputHelper_C* UUI_PhotoModeInputHelper_C::GetDefaultObj()
{
	static class UUI_PhotoModeInputHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PhotoModeInputHelper_C*>(UUI_PhotoModeInputHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_PhotoModeInputHelper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeInputHelper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C.GameMenuPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeInputHelper_C::GameMenuPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeInputHelper_C", "GameMenuPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C.GameMenuReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeInputHelper_C::GameMenuReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeInputHelper_C", "GameMenuReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeInputHelper.UI_PhotoModeInputHelper_C.ExecuteUbergraph_UI_PhotoModeInputHelper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInputEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeInputHelper_C::ExecuteUbergraph_UI_PhotoModeInputHelper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsInputEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeInputHelper_C", "ExecuteUbergraph_UI_PhotoModeInputHelper");

	Params::UUI_PhotoModeInputHelper_C_ExecuteUbergraph_UI_PhotoModeInputHelper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsInputEnabled_ReturnValue = CallFunc_IsInputEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


