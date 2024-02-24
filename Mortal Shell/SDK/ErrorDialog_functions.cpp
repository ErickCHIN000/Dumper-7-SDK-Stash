#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ErrorDialog.ErrorDialog_C
// (None)

class UClass* UErrorDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ErrorDialog_C");

	return Clss;
}


// ErrorDialog_C ErrorDialog.Default__ErrorDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UErrorDialog_C* UErrorDialog_C::GetDefaultObj()
{
	static class UErrorDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UErrorDialog_C*>(UErrorDialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ErrorDialog.ErrorDialog_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      IncomingMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UErrorDialog_C::SetMessage(const class FString& IncomingMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ErrorDialog_C", "SetMessage");

	Params::UErrorDialog_C_SetMessage_Params Parms{};

	Parms.IncomingMessage = IncomingMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorDialog.ErrorDialog_C.GetMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UErrorDialog_C::GetMessage(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ErrorDialog_C", "GetMessage");

	Params::UErrorDialog_C_GetMessage_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ErrorDialog.ErrorDialog_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UErrorDialog_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ErrorDialog_C", "BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ErrorDialog.ErrorDialog_C.ExecuteUbergraph_ErrorDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorDialog_C::ExecuteUbergraph_ErrorDialog(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ErrorDialog_C", "ExecuteUbergraph_ErrorDialog");

	Params::UErrorDialog_C_ExecuteUbergraph_ErrorDialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


