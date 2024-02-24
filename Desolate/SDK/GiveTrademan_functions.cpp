#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GiveTrademan.GiveTrademan_C
// (None)

class UClass* UGiveTrademan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiveTrademan_C");

	return Clss;
}


// GiveTrademan_C GiveTrademan.Default__GiveTrademan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiveTrademan_C* UGiveTrademan_C::GetDefaultObj()
{
	static class UGiveTrademan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiveTrademan_C*>(UGiveTrademan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiveTrademan.GiveTrademan_C.OnActorUsed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHoldUsed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiveTrademan_C::OnActorUsed_Event_0(class ASHPlayerCharacter* Sender, class AActor* InteractedActor, bool IsHoldUsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiveTrademan_C", "OnActorUsed_Event_0");

	Params::UGiveTrademan_C_OnActorUsed_Event_0_Params Parms{};

	Parms.Sender = Sender;
	Parms.InteractedActor = InteractedActor;
	Parms.IsHoldUsed = IsHoldUsed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiveTrademan.GiveTrademan_C.ExecuteUbergraph_GiveTrademan
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Sender                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractedActor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsHoldUsed                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiveTrademan_C::ExecuteUbergraph_GiveTrademan(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Sender, class AActor* K2Node_Event_InteractedActor, bool K2Node_Event_IsHoldUsed, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiveTrademan_C", "ExecuteUbergraph_GiveTrademan");

	Params::UGiveTrademan_C_ExecuteUbergraph_GiveTrademan_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Sender = K2Node_Event_Sender;
	Parms.K2Node_Event_InteractedActor = K2Node_Event_InteractedActor;
	Parms.K2Node_Event_IsHoldUsed = K2Node_Event_IsHoldUsed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


