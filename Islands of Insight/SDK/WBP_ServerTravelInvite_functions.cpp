#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ServerTravelInvite.WBP_ServerTravelInvite_C
// (None)

class UClass* UWBP_ServerTravelInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ServerTravelInvite_C");

	return Clss;
}


// WBP_ServerTravelInvite_C WBP_ServerTravelInvite.Default__WBP_ServerTravelInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ServerTravelInvite_C* UWBP_ServerTravelInvite_C::GetDefaultObj()
{
	static class UWBP_ServerTravelInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ServerTravelInvite_C*>(UWBP_ServerTravelInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ServerTravelInvite.WBP_ServerTravelInvite_C.BndEvt__WBP_ServerTravelInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerTravelInvite_C::BndEvt__WBP_ServerTravelInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ServerTravelInvite_C", "BndEvt__WBP_ServerTravelInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UWBP_ServerTravelInvite_C_BndEvt__WBP_ServerTravelInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ServerTravelInvite.WBP_ServerTravelInvite_C.ExecuteUbergraph_WBP_ServerTravelInvite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Response                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerTravelInvite_C::ExecuteUbergraph_WBP_ServerTravelInvite(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Response, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ServerTravelInvite_C", "ExecuteUbergraph_WBP_ServerTravelInvite");

	Params::UWBP_ServerTravelInvite_C_ExecuteUbergraph_WBP_ServerTravelInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Response = K2Node_ComponentBoundEvent_Response;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


