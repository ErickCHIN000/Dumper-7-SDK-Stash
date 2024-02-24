#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SplinePatrolling.SplinePatrolling_C
// (None)

class UClass* USplinePatrolling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplinePatrolling_C");

	return Clss;
}


// SplinePatrolling_C SplinePatrolling.Default__SplinePatrolling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USplinePatrolling_C* USplinePatrolling_C::GetDefaultObj()
{
	static class USplinePatrolling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USplinePatrolling_C*>(USplinePatrolling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SplinePatrolling.SplinePatrolling_C.DebugFailure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void USplinePatrolling_C::DebugFailure(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "DebugFailure");

	Params::USplinePatrolling_C_DebugFailure_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplinePatrolling.SplinePatrolling_C.OnFail_284584B4460E4E537C50A1B7CA5A0C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplinePatrolling_C::OnFail_284584B4460E4E537C50A1B7CA5A0C15(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "OnFail_284584B4460E4E537C50A1B7CA5A0C15");

	Params::USplinePatrolling_C_OnFail_284584B4460E4E537C50A1B7CA5A0C15_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplinePatrolling.SplinePatrolling_C.OnSuccess_284584B4460E4E537C50A1B7CA5A0C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplinePatrolling_C::OnSuccess_284584B4460E4E537C50A1B7CA5A0C15(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "OnSuccess_284584B4460E4E537C50A1B7CA5A0C15");

	Params::USplinePatrolling_C_OnSuccess_284584B4460E4E537C50A1B7CA5A0C15_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplinePatrolling.SplinePatrolling_C.SplinePatrolling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USplinePatrolling_C::SplinePatrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "SplinePatrolling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplinePatrolling.SplinePatrolling_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplinePatrolling_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "ReceiveExecuteAI");

	Params::USplinePatrolling_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplinePatrolling.SplinePatrolling_C.NextPatrolPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USplinePatrolling_C::NextPatrolPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "NextPatrolPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplinePatrolling.SplinePatrolling_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplinePatrolling_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "ReceiveAbortAI");

	Params::USplinePatrolling_C_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplinePatrolling.SplinePatrolling_C.ReprisePatrolling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USplinePatrolling_C::ReprisePatrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "ReprisePatrolling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplinePatrolling.SplinePatrolling_C.OnFailSkipPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USplinePatrolling_C::OnFailSkipPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "OnFailSkipPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplinePatrolling.SplinePatrolling_C.ExecuteUbergraph_SplinePatrolling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USplinePatrolling_C::ExecuteUbergraph_SplinePatrolling(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplinePatrolling_C", "ExecuteUbergraph_SplinePatrolling");

	Params::USplinePatrolling_C_ExecuteUbergraph_SplinePatrolling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


