#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTS_BaseSyncService.BTS_BaseSyncService_C
// (None)

class UClass* UBTS_BaseSyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTS_BaseSyncService_C");

	return Clss;
}


// BTS_BaseSyncService_C BTS_BaseSyncService.Default__BTS_BaseSyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTS_BaseSyncService_C* UBTS_BaseSyncService_C::GetDefaultObj()
{
	static class UBTS_BaseSyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTS_BaseSyncService_C*>(UBTS_BaseSyncService_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetMovingDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetMovingDuration(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetMovingDuration");

	Params::UBTS_BaseSyncService_C_SS_SetMovingDuration_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetMovingLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetMovingLocation(const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetMovingLocation");

	Params::UBTS_BaseSyncService_C_SS_SetMovingLocation_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetIsHitted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHitted                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTS_BaseSyncService_C::SS_SetIsHitted(bool bIsHitted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetIsHitted");

	Params::UBTS_BaseSyncService_C_SS_SetIsHitted_Params Parms{};

	Parms.bIsHitted = bIsHitted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetSlowProjectileReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTS_BaseSyncService_C::SS_SetSlowProjectileReady(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetSlowProjectileReady");

	Params::UBTS_BaseSyncService_C_SS_SetSlowProjectileReady_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetEvadePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EvadePoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetEvadePoint(const struct FVector& EvadePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetEvadePoint");

	Params::UBTS_BaseSyncService_C_SS_SetEvadePoint_Params Parms{};

	Parms.EvadePoint = EvadePoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetAggroEmotionReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTS_BaseSyncService_C::SS_SetAggroEmotionReady(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetAggroEmotionReady");

	Params::UBTS_BaseSyncService_C_SS_SetAggroEmotionReady_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetBehaviorType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIBehaviorType         BehaviorType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetBehaviorType(enum class EAIBehaviorType BehaviorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetBehaviorType");

	Params::UBTS_BaseSyncService_C_SS_SetBehaviorType_Params Parms{};

	Parms.BehaviorType = BehaviorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetGroupMovingLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     GroupMovingLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetGroupMovingLocation(const struct FVector& GroupMovingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetGroupMovingLocation");

	Params::UBTS_BaseSyncService_C_SS_SetGroupMovingLocation_Params Parms{};

	Parms.GroupMovingLocation = GroupMovingLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SyncLastNoiseLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SyncLastNoiseLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SyncLastNoiseLocation");

	Params::UBTS_BaseSyncService_C_SS_SyncLastNoiseLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SpawnPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetSpawnPoint(const struct FVector& SpawnPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetSpawnPoint");

	Params::UBTS_BaseSyncService_C_SS_SetSpawnPoint_Params Parms{};

	Parms.SpawnPoint = SpawnPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIStates               PreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetState(enum class EAIStates State, enum class EAIStates PreviousState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetState");

	Params::UBTS_BaseSyncService_C_SS_SetState_Params Parms{};

	Parms.State = State;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetPatrolPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PatrolPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::SS_SetPatrolPoint(const struct FVector& PatrolPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "SS_SetPatrolPoint");

	Params::UBTS_BaseSyncService_C_SS_SetPatrolPoint_Params Parms{};

	Parms.PatrolPoint = PatrolPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_BaseSyncService_C::ReceiveSearchStart(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "ReceiveSearchStart");

	Params::UBTS_BaseSyncService_C_ReceiveSearchStart_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTS_BaseSyncService.BTS_BaseSyncService_C.ExecuteUbergraph_BTS_BaseSyncService
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAiCharacter_C*          K2Node_DynamicCast_AsBase_Ai_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSyncService_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTS_BaseSyncService_C::ExecuteUbergraph_BTS_BaseSyncService(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetSyncService_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTS_BaseSyncService_C", "ExecuteUbergraph_BTS_BaseSyncService");

	Params::UBTS_BaseSyncService_C_ExecuteUbergraph_BTS_BaseSyncService_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Ai_Character = K2Node_DynamicCast_AsBase_Ai_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetSyncService_Result = CallFunc_SetSyncService_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}


