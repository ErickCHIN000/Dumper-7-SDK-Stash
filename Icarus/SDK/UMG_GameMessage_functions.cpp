#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_GameMessage.UMG_GameMessage_C
// (None)

class UClass* UUMG_GameMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_GameMessage_C");

	return Clss;
}


// UMG_GameMessage_C UMG_GameMessage.Default__UMG_GameMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_GameMessage_C* UUMG_GameMessage_C::GetDefaultObj()
{
	static class UUMG_GameMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_GameMessage_C*>(UUMG_GameMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_GameMessage.UMG_GameMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_GameMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GameMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_GameMessage.UMG_GameMessage_C.RemoveMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_GameMessage_C::RemoveMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GameMessage_C", "RemoveMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_GameMessage.UMG_GameMessage_C.ExecuteUbergraph_UMG_GameMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UUMG_GameMessage_C::ExecuteUbergraph_UMG_GameMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GameMessage_C", "ExecuteUbergraph_UMG_GameMessage");

	Params::UUMG_GameMessage_C_ExecuteUbergraph_UMG_GameMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


