#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_KrakenDisconnected.WBP_KrakenDisconnected_C
// (None)

class UClass* UWBP_KrakenDisconnected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_KrakenDisconnected_C");

	return Clss;
}


// WBP_KrakenDisconnected_C WBP_KrakenDisconnected.Default__WBP_KrakenDisconnected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_KrakenDisconnected_C* UWBP_KrakenDisconnected_C::GetDefaultObj()
{
	static class UWBP_KrakenDisconnected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_KrakenDisconnected_C*>(UWBP_KrakenDisconnected_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_KrakenDisconnected.WBP_KrakenDisconnected_C.BndEvt__WBP_KrakenDisconnected_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KrakenDisconnected_C::BndEvt__WBP_KrakenDisconnected_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KrakenDisconnected_C", "BndEvt__WBP_KrakenDisconnected_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KrakenDisconnected.WBP_KrakenDisconnected_C.BndEvt__WBP_KrakenDisconnected_ExitBtn_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_KrakenDisconnected_C::BndEvt__WBP_KrakenDisconnected_ExitBtn_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KrakenDisconnected_C", "BndEvt__WBP_KrakenDisconnected_ExitBtn_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KrakenDisconnected.WBP_KrakenDisconnected_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_KrakenDisconnected_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KrakenDisconnected_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KrakenDisconnected.WBP_KrakenDisconnected_C.OnRejoinedKraken_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_KrakenDisconnected_C::OnRejoinedKraken_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KrakenDisconnected_C", "OnRejoinedKraken_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_KrakenDisconnected.WBP_KrakenDisconnected_C.ExecuteUbergraph_WBP_KrakenDisconnected
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGISKraken*                  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SophiaGameInstance_C*    K2Node_DynamicCast_AsBP_Sophia_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_KrakenDisconnected_C::ExecuteUbergraph_WBP_KrakenDisconnected(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KrakenDisconnected_C", "ExecuteUbergraph_WBP_KrakenDisconnected");

	Params::UWBP_KrakenDisconnected_C_ExecuteUbergraph_WBP_KrakenDisconnected_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Game_Instance = K2Node_DynamicCast_AsBP_Sophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


