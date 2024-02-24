#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeavyDashToBTTask.HeavyDashToBTTask_C
// (None)

class UClass* UHeavyDashToBTTask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeavyDashToBTTask_C");

	return Clss;
}


// HeavyDashToBTTask_C HeavyDashToBTTask.Default__HeavyDashToBTTask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeavyDashToBTTask_C* UHeavyDashToBTTask_C::GetDefaultObj()
{
	static class UHeavyDashToBTTask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeavyDashToBTTask_C*>(UHeavyDashToBTTask_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeavyDashToBTTask.HeavyDashToBTTask_C.OnFail_0B680C9B4EACD3D7C1F0DF9437E03BC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavyDashToBTTask_C::OnFail_0B680C9B4EACD3D7C1F0DF9437E03BC3(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyDashToBTTask_C", "OnFail_0B680C9B4EACD3D7C1F0DF9437E03BC3");

	Params::UHeavyDashToBTTask_C_OnFail_0B680C9B4EACD3D7C1F0DF9437E03BC3_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyDashToBTTask.HeavyDashToBTTask_C.OnSuccess_0B680C9B4EACD3D7C1F0DF9437E03BC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavyDashToBTTask_C::OnSuccess_0B680C9B4EACD3D7C1F0DF9437E03BC3(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyDashToBTTask_C", "OnSuccess_0B680C9B4EACD3D7C1F0DF9437E03BC3");

	Params::UHeavyDashToBTTask_C_OnSuccess_0B680C9B4EACD3D7C1F0DF9437E03BC3_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyDashToBTTask.HeavyDashToBTTask_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavyDashToBTTask_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyDashToBTTask_C", "ReceiveTickAI");

	Params::UHeavyDashToBTTask_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyDashToBTTask.HeavyDashToBTTask_C.ExecuteUbergraph_HeavyDashToBTTask
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHeavyEnemy_C*               K2Node_DynamicCast_AsHeavy_Enemy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetValueAsVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeavyDashToBTTask_C::ExecuteUbergraph_HeavyDashToBTTask(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AHeavyEnemy_C* K2Node_DynamicCast_AsHeavy_Enemy, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetValueAsVector_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyDashToBTTask_C", "ExecuteUbergraph_HeavyDashToBTTask");

	Params::UHeavyDashToBTTask_C_ExecuteUbergraph_HeavyDashToBTTask_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsHeavy_Enemy = K2Node_DynamicCast_AsHeavy_Enemy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueAsVector_ReturnValue = CallFunc_GetValueAsVector_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


