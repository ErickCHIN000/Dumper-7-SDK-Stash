#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_04_notification_slot.w_04_notification_slot_C
// (None)

class UClass* UW_04_notification_slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_04_notification_slot_C");

	return Clss;
}


// w_04_notification_slot_C w_04_notification_slot.Default__w_04_notification_slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_04_notification_slot_C* UW_04_notification_slot_C::GetDefaultObj()
{
	static class UW_04_notification_slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_04_notification_slot_C*>(UW_04_notification_slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_04_notification_slot.w_04_notification_slot_C.GetQuestName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        NextQuestText                                                    (Parm, OutParm)

void UW_04_notification_slot_C::GetQuestName(class FText* NextQuestText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_notification_slot_C", "GetQuestName");

	Params::UW_04_notification_slot_C_GetQuestName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextQuestText != nullptr)
		*NextQuestText = Parms.NextQuestText;

}


// Function w_04_notification_slot.w_04_notification_slot_C.Finished_A082DF524874080BA2D205B01F149380
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_04_notification_slot_C::Finished_A082DF524874080BA2D205B01F149380()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_notification_slot_C", "Finished_A082DF524874080BA2D205B01F149380");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_04_notification_slot.w_04_notification_slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_04_notification_slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_notification_slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_04_notification_slot.w_04_notification_slot_C.ExecuteUbergraph_w_04_notification_slot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_04_notification_slot_C::ExecuteUbergraph_w_04_notification_slot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_notification_slot_C", "ExecuteUbergraph_w_04_notification_slot");

	Params::UW_04_notification_slot_C_ExecuteUbergraph_w_04_notification_slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


