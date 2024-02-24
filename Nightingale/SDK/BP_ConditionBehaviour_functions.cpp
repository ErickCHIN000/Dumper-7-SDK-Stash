#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour.BP_ConditionBehaviour_C
// (None)

class UClass* UBP_ConditionBehaviour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_C");

	return Clss;
}


// BP_ConditionBehaviour_C BP_ConditionBehaviour.Default__BP_ConditionBehaviour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_C* UBP_ConditionBehaviour_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_C*>(UBP_ConditionBehaviour_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.GetDebugText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)

void UBP_ConditionBehaviour_C::GetDebugText(class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_C_GetDebugText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.GetDebugDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      OutDescription                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetDebugText_Description                                (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_C::GetDebugDescription(class FString& OutDescription, class FText CallFunc_GetDebugText_Description, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "GetDebugDescription");

	Params::UBP_ConditionBehaviour_C_GetDebugDescription_Params Parms{};

	Parms.OutDescription = OutDescription;
	Parms.CallFunc_GetDebugText_Description = CallFunc_GetDebugText_Description;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.GetConditionPlayerState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerState_C*           PlayerState                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_C::GetConditionPlayerState(class ABP_PlayerState_C** PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "GetConditionPlayerState");

	Params::UBP_ConditionBehaviour_C_GetConditionPlayerState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerState != nullptr)
		*PlayerState = Parms.PlayerState;

}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.SetContextObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_C::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "SetContextObject");

	Params::UBP_ConditionBehaviour_C_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour.BP_ConditionBehaviour_C.ExecuteUbergraph_BP_ConditionBehaviour
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ContextObject                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_C::ExecuteUbergraph_BP_ConditionBehaviour(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class UObject* K2Node_Event_ContextObject, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_C", "ExecuteUbergraph_BP_ConditionBehaviour");

	Params::UBP_ConditionBehaviour_C_ExecuteUbergraph_BP_ConditionBehaviour_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.K2Node_Event_ContextObject = K2Node_Event_ContextObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


