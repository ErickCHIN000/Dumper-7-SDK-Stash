#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SendGridInvite.WBP_SendGridInvite_C
// (None)

class UClass* UWBP_SendGridInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SendGridInvite_C");

	return Clss;
}


// WBP_SendGridInvite_C WBP_SendGridInvite.Default__WBP_SendGridInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SendGridInvite_C* UWBP_SendGridInvite_C::GetDefaultObj()
{
	static class UWBP_SendGridInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SendGridInvite_C*>(UWBP_SendGridInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SendGridInvite.WBP_SendGridInvite_C.BndEvt__WBP_SendGridInvite_WBP_GridButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SendGridInvite_C::BndEvt__WBP_SendGridInvite_WBP_GridButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SendGridInvite_C", "BndEvt__WBP_SendGridInvite_WBP_GridButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SendGridInvite.WBP_SendGridInvite_C.CloseAndShowMessage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SendGridInvite_C::CloseAndShowMessage(class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SendGridInvite_C", "CloseAndShowMessage");

	Params::UWBP_SendGridInvite_C_CloseAndShowMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SendGridInvite.WBP_SendGridInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SendGridInvite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SendGridInvite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SendGridInvite.WBP_SendGridInvite_C.ExecuteUbergraph_WBP_SendGridInvite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          K2Node_DynamicCast_AsSophia_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InParty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (ConstParm)
// class UWBP_RevampedGameHUD_C*      K2Node_DynamicCast_AsWBP_Revamped_Game_HUD                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SendGridInvite_C::ExecuteUbergraph_WBP_SendGridInvite(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_InParty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_CustomEvent_Message, class UWBP_RevampedGameHUD_C* K2Node_DynamicCast_AsWBP_Revamped_Game_HUD, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SendGridInvite_C", "ExecuteUbergraph_WBP_SendGridInvite");

	Params::UWBP_SendGridInvite_C_ExecuteUbergraph_WBP_SendGridInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsSophia_Player_State = K2Node_DynamicCast_AsSophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_InParty_ReturnValue = CallFunc_InParty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_DynamicCast_AsWBP_Revamped_Game_HUD = K2Node_DynamicCast_AsWBP_Revamped_Game_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


