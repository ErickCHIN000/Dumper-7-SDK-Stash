#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C
// (None)

class UClass* UBP_ConditionBehaviour_NPC_Recruited_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_NPC_Recruited_C");

	return Clss;
}


// BP_ConditionBehaviour_NPC_Recruited_C BP_ConditionBehaviour_NPC_Recruited.Default__BP_ConditionBehaviour_NPC_Recruited_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_NPC_Recruited_C* UBP_ConditionBehaviour_NPC_Recruited_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_NPC_Recruited_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_NPC_Recruited_C*>(UBP_ConditionBehaviour_NPC_Recruited_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_NPC_Recruited_C::GetDebugText(class FText* Description, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_NPC_Recruited_C_GetDebugText_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_NPC_Recruited_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_NPC_Recruited_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.OnPawnSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_NPC_Recruited_C::OnPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "OnPawnSet");

	Params::UBP_ConditionBehaviour_NPC_Recruited_C_OnPawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.LeaderRecruitedCompanion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RecruitedCompanion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_NPC_Recruited_C::LeaderRecruitedCompanion(class AActor* RecruitedCompanion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "LeaderRecruitedCompanion");

	Params::UBP_ConditionBehaviour_NPC_Recruited_C_LeaderRecruitedCompanion_Params Parms{};

	Parms.RecruitedCompanion = RecruitedCompanion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_NPC_Recruited.BP_ConditionBehaviour_NPC_Recruited_C.ExecuteUbergraph_BP_ConditionBehaviour_NPC_Recruited
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    CallFunc_MakeConditionPersistentDataFromBool_ReturnValue         (NoDestructor)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompanion_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_CustomEvent_Player                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_RecruitedCompanion                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_NPC_Recruited_C::ExecuteUbergraph_BP_ConditionBehaviour_NPC_Recruited(int32 EntryPoint, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasCompanion_ReturnValue, class APlayerState* K2Node_CustomEvent_Player, class APawn* K2Node_CustomEvent_NewPawn, class APawn* K2Node_CustomEvent_OldPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue_4, class AActor* K2Node_CustomEvent_RecruitedCompanion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_NPC_Recruited_C", "ExecuteUbergraph_BP_ConditionBehaviour_NPC_Recruited");

	Params::UBP_ConditionBehaviour_NPC_Recruited_C_ExecuteUbergraph_BP_ConditionBehaviour_NPC_Recruited_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeConditionPersistentDataFromBool_ReturnValue = CallFunc_MakeConditionPersistentDataFromBool_ReturnValue;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_HasCompanion_ReturnValue = CallFunc_HasCompanion_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_RecruitedCompanion = K2Node_CustomEvent_RecruitedCompanion;

	UObject::ProcessEvent(Func, &Parms);

}

}


