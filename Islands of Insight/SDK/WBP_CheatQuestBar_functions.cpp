#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CheatQuestBar.WBP_CheatQuestBar_C
// (None)

class UClass* UWBP_CheatQuestBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CheatQuestBar_C");

	return Clss;
}


// WBP_CheatQuestBar_C WBP_CheatQuestBar.Default__WBP_CheatQuestBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CheatQuestBar_C* UWBP_CheatQuestBar_C::GetDefaultObj()
{
	static class UWBP_CheatQuestBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CheatQuestBar_C*>(UWBP_CheatQuestBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CheatQuestBar.WBP_CheatQuestBar_C.BndEvt__WBP_CheatQuestBar_Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CheatQuestBar_C::BndEvt__WBP_CheatQuestBar_Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CheatQuestBar_C", "BndEvt__WBP_CheatQuestBar_Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CheatQuestBar.WBP_CheatQuestBar_C.ExecuteUbergraph_WBP_CheatQuestBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CheatQuestBar_C::ExecuteUbergraph_WBP_CheatQuestBar(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CheatQuestBar_C", "ExecuteUbergraph_WBP_CheatQuestBar");

	Params::UWBP_CheatQuestBar_C_ExecuteUbergraph_WBP_CheatQuestBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


