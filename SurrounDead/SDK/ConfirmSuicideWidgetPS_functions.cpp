#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C
// (None)

class UClass* UConfirmSuicideWidgetPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfirmSuicideWidgetPS_C");

	return Clss;
}


// ConfirmSuicideWidgetPS_C ConfirmSuicideWidgetPS.Default__ConfirmSuicideWidgetPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConfirmSuicideWidgetPS_C* UConfirmSuicideWidgetPS_C::GetDefaultObj()
{
	static class UConfirmSuicideWidgetPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConfirmSuicideWidgetPS_C*>(UConfirmSuicideWidgetPS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmSuicideWidgetPS_C::ClearUI(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "ClearUI");

	Params::UConfirmSuicideWidgetPS_C_ClearUI_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UConfirmSuicideWidgetPS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmSuicideWidgetPS.ConfirmSuicideWidgetPS_C.ExecuteUbergraph_ConfirmSuicideWidgetPS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmSuicideWidgetPS_C::ExecuteUbergraph_ConfirmSuicideWidgetPS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, double CallFunc_FInterpTo_ReturnValue, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmSuicideWidgetPS_C", "ExecuteUbergraph_ConfirmSuicideWidgetPS");

	Params::UConfirmSuicideWidgetPS_C_ExecuteUbergraph_ConfirmSuicideWidgetPS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_GetGameInstance_Instance = CallFunc_GetGameInstance_Instance;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


