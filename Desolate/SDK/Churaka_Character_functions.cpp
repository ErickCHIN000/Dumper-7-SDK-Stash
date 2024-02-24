#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Churaka_Character.Churaka_Character_C
// (Actor, Pawn)

class UClass* AChuraka_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Churaka_Character_C");

	return Clss;
}


// Churaka_Character_C Churaka_Character.Default__Churaka_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChuraka_Character_C* AChuraka_Character_C::GetDefaultObj()
{
	static class AChuraka_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChuraka_Character_C*>(AChuraka_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Churaka_Character.Churaka_Character_C.SetPatrolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EChuraka_PatrolTypes    NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChuraka_Character_C::SetPatrolType(enum class EChuraka_PatrolTypes NewType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "SetPatrolType");

	Params::AChuraka_Character_C_SetPatrolType_Params Parms{};

	Parms.NewType = NewType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.PlayAiNoise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChuraka_Character_C::PlayAiNoise(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "PlayAiNoise");

	Params::AChuraka_Character_C_PlayAiNoise_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.OnAlertStateStop
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnAlertStateStop_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChuraka_Character_C::OnAlertStateStop(bool CallFunc_OnAlertStateStop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "OnAlertStateStop");

	Params::AChuraka_Character_C_OnAlertStateStop_Params Parms{};

	Parms.CallFunc_OnAlertStateStop_ReturnValue = CallFunc_OnAlertStateStop_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Churaka_Character.Churaka_Character_C.OnAlertState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnAlertState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChuraka_Character_C::OnAlertState(bool CallFunc_OnAlertState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "OnAlertState");

	Params::AChuraka_Character_C_OnAlertState_Params Parms{};

	Parms.CallFunc_OnAlertState_ReturnValue = CallFunc_OnAlertState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Churaka_Character.Churaka_Character_C.UpdateAlertTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::UpdateAlertTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "UpdateAlertTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.StopAlertTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::StopAlertTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "StopAlertTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.StartAlertTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void AChuraka_Character_C::StartAlertTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "StartAlertTimer");

	Params::AChuraka_Character_C_StartAlertTimer_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.CalculatePatrolPoi
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHappen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChuraka_Character_C::CalculatePatrolPoi(bool* Result, bool CallFunc_ShouldHappen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "CalculatePatrolPoi");

	Params::AChuraka_Character_C_CalculatePatrolPoi_Params Parms{};

	Parms.CallFunc_ShouldHappen_ReturnValue = CallFunc_ShouldHappen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Churaka_Character.Churaka_Character_C.ResetPatrolPOI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AChuraka_Character_C::ResetPatrolPOI(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "ResetPatrolPOI");

	Params::AChuraka_Character_C_ResetPatrolPOI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Churaka_Character.Churaka_Character_C.SetPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EChuraka_PatrolPoiType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChuraka_Character_C::SetPatrolPoi(enum class EChuraka_PatrolPoiType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "SetPatrolPoi");

	Params::AChuraka_Character_C_SetPatrolPoi_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.SetSyncService
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTS_BaseSyncService_C*      Service                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChuraka_SyncService_C*      K2Node_DynamicCast_AsChuraka_Sync_Service                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSyncService_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChuraka_Character_C::SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class UChuraka_SyncService_C* K2Node_DynamicCast_AsChuraka_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "SetSyncService");

	Params::AChuraka_Character_C_SetSyncService_Params Parms{};

	Parms.Service = Service;
	Parms.K2Node_DynamicCast_AsChuraka_Sync_Service = K2Node_DynamicCast_AsChuraka_Sync_Service;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetSyncService_Result = CallFunc_SetSyncService_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Churaka_Character.Churaka_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChuraka_Character_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "ReceiveTick");

	Params::AChuraka_Character_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.AlertTimerStartEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::AlertTimerStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "AlertTimerStartEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.AlertTimerStopEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::AlertTimerStopEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "AlertTimerStopEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.BB_SyncPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChuraka_Character_C::BB_SyncPatrolPoi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "BB_SyncPatrolPoi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_Character.Churaka_Character_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChuraka_Character_C::CustomEvent(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "CustomEvent");

	Params::AChuraka_Character_C_CustomEvent_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_Character.Churaka_Character_C.ExecuteUbergraph_Churaka_Character
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetHeadRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetPeripheralVisionAngle_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChuraka_Character_C::ExecuteUbergraph_Churaka_Character(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetPeripheralVisionAngle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_Character_C", "ExecuteUbergraph_Churaka_Character");

	Params::AChuraka_Character_C_ExecuteUbergraph_Churaka_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds_1 = K2Node_Event_DeltaSeconds_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetHeadRotation_ReturnValue = CallFunc_GetHeadRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPeripheralVisionAngle_ReturnValue = CallFunc_GetPeripheralVisionAngle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


