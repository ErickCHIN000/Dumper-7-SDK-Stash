#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomMoveTo.CustomMoveTo_C
// (None)

class UClass* UCustomMoveTo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMoveTo_C");

	return Clss;
}


// CustomMoveTo_C CustomMoveTo.Default__CustomMoveTo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomMoveTo_C* UCustomMoveTo_C::GetDefaultObj()
{
	static class UCustomMoveTo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMoveTo_C*>(UCustomMoveTo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomMoveTo.CustomMoveTo_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomMoveTo_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMoveTo_C", "ReceiveTick");

	Params::UCustomMoveTo_C_ReceiveTick_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomMoveTo.CustomMoveTo_C.ExecuteUbergraph_CustomMoveTo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingRequestResultCallFunc_MoveToActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingRequestResultCallFunc_MoveToActor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomMoveTo_C::ExecuteUbergraph_CustomMoveTo(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMoveTo_C", "ExecuteUbergraph_CustomMoveTo");

	Params::UCustomMoveTo_C_ExecuteUbergraph_CustomMoveTo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_MoveToActor_ReturnValue = CallFunc_MoveToActor_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MoveToActor_ReturnValue_1 = CallFunc_MoveToActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


