#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ReceiveFriendInvite.WBP_ReceiveFriendInvite_C
// (None)

class UClass* UWBP_ReceiveFriendInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ReceiveFriendInvite_C");

	return Clss;
}


// WBP_ReceiveFriendInvite_C WBP_ReceiveFriendInvite.Default__WBP_ReceiveFriendInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ReceiveFriendInvite_C* UWBP_ReceiveFriendInvite_C::GetDefaultObj()
{
	static class UWBP_ReceiveFriendInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ReceiveFriendInvite_C*>(UWBP_ReceiveFriendInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ReceiveFriendInvite.WBP_ReceiveFriendInvite_C.BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ReceiveFriendInvite_C::BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReceiveFriendInvite_C", "BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UWBP_ReceiveFriendInvite_C_BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ReceiveFriendInvite.WBP_ReceiveFriendInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ReceiveFriendInvite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReceiveFriendInvite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReceiveFriendInvite.WBP_ReceiveFriendInvite_C.ExecuteUbergraph_WBP_ReceiveFriendInvite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Response                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaPlayerState*          K2Node_DynamicCast_AsSophia_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          K2Node_DynamicCast_AsSophia_Player_State_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetNicknameID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetKrakenID_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)

void UWBP_ReceiveFriendInvite_C::ExecuteUbergraph_WBP_ReceiveFriendInvite(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_ComponentBoundEvent_Response, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetNicknameID_ReturnValue, const class FString& CallFunc_GetKrakenID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReceiveFriendInvite_C", "ExecuteUbergraph_WBP_ReceiveFriendInvite");

	Params::UWBP_ReceiveFriendInvite_C_ExecuteUbergraph_WBP_ReceiveFriendInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Response = K2Node_ComponentBoundEvent_Response;
	Parms.K2Node_DynamicCast_AsSophia_Player_State = K2Node_DynamicCast_AsSophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Player_State_1 = K2Node_DynamicCast_AsSophia_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetNicknameID_ReturnValue = CallFunc_GetNicknameID_ReturnValue;
	Parms.CallFunc_GetKrakenID_ReturnValue = CallFunc_GetKrakenID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


