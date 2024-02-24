#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Journal_QuestConfirmForget.Journal_QuestConfirmForget_C
// (None)

class UClass* UJournal_QuestConfirmForget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Journal_QuestConfirmForget_C");

	return Clss;
}


// Journal_QuestConfirmForget_C Journal_QuestConfirmForget.Default__Journal_QuestConfirmForget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournal_QuestConfirmForget_C* UJournal_QuestConfirmForget_C::GetDefaultObj()
{
	static class UJournal_QuestConfirmForget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournal_QuestConfirmForget_C*>(UJournal_QuestConfirmForget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournal_QuestConfirmForget_C::ClearUI(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "ClearUI");

	Params::UJournal_QuestConfirmForget_C_ClearUI_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_QuestConfirmForget_C::BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_QuestConfirmForget_C::BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJournal_QuestConfirmForget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournal_QuestConfirmForget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_QuestConfirmForget.Journal_QuestConfirmForget_C.ExecuteUbergraph_Journal_QuestConfirmForget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UJournal_QuestConfirmForget_C::ExecuteUbergraph_Journal_QuestConfirmForget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_QuestConfirmForget_C", "ExecuteUbergraph_Journal_QuestConfirmForget");

	Params::UJournal_QuestConfirmForget_C_ExecuteUbergraph_Journal_QuestConfirmForget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


