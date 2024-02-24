#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_Character.Dog_Character_C
// (Actor, Pawn)

class UClass* ADog_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_Character_C");

	return Clss;
}


// Dog_Character_C Dog_Character.Default__Dog_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADog_Character_C* ADog_Character_C::GetDefaultObj()
{
	static class ADog_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADog_Character_C*>(ADog_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dog_Character.Dog_Character_C.SetPatrolTypes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDog_PatrolType         NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADog_Character_C::SetPatrolTypes(enum class EDog_PatrolType NewType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "SetPatrolTypes");

	Params::ADog_Character_C_SetPatrolTypes_Params Parms{};

	Parms.NewType = NewType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_Character.Dog_Character_C.OnAttackStateStop
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnAttackStateStop_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::OnAttackStateStop(bool CallFunc_OnAttackStateStop_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "OnAttackStateStop");

	Params::ADog_Character_C_OnAttackStateStop_Params Parms{};

	Parms.CallFunc_OnAttackStateStop_ReturnValue = CallFunc_OnAttackStateStop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.CanChangeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADog_Character_C::CanChangeTarget(bool* Result, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "CanChangeTarget");

	Params::ADog_Character_C_CanChangeTarget_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Dog_Character.Dog_Character_C.UpdateSpecialState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateSpecialState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateNoiseAggro_Updated                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::UpdateSpecialState(float DeltaTime, bool CallFunc_UpdateSpecialState_ReturnValue, bool CallFunc_UpdateNoiseAggro_Updated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "UpdateSpecialState");

	Params::ADog_Character_C_UpdateSpecialState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateSpecialState_ReturnValue = CallFunc_UpdateSpecialState_ReturnValue;
	Parms.CallFunc_UpdateNoiseAggro_Updated = CallFunc_UpdateNoiseAggro_Updated;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.UpdateInspectState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateInspectState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::UpdateInspectState(float DeltaTime, bool CallFunc_UpdateInspectState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "UpdateInspectState");

	Params::ADog_Character_C_UpdateInspectState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateInspectState_ReturnValue = CallFunc_UpdateInspectState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.UpdateAlertState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateAlertState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::UpdateAlertState(float DeltaTime, bool CallFunc_UpdateAlertState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "UpdateAlertState");

	Params::ADog_Character_C_UpdateAlertState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateAlertState_ReturnValue = CallFunc_UpdateAlertState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.ResetSpecialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADog_Character_C::ResetSpecialState(float CallFunc_GetValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "ResetSpecialState");

	Params::ADog_Character_C_ResetSpecialState_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_Character.Dog_Character_C.OnPatrolStateStop
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnPatrolStateStop_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::OnPatrolStateStop(bool CallFunc_OnPatrolStateStop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "OnPatrolStateStop");

	Params::ADog_Character_C_OnPatrolStateStop_Params Parms{};

	Parms.CallFunc_OnPatrolStateStop_ReturnValue = CallFunc_OnPatrolStateStop_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.OnSpecialState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSpecialState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalculateNextPatrolPoint_PatrolPoint                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ADog_Character_C::OnSpecialState(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_OnSpecialState_ReturnValue, const struct FVector& CallFunc_CalculateNextPatrolPoint_PatrolPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "OnSpecialState");

	Params::ADog_Character_C_OnSpecialState_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_OnSpecialState_ReturnValue = CallFunc_OnSpecialState_ReturnValue;
	Parms.CallFunc_CalculateNextPatrolPoint_PatrolPoint = CallFunc_CalculateNextPatrolPoint_PatrolPoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.UpdateAttackState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateAttackState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetGroupSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPercentageValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ADog_Character_C::UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetGroupSize_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetEnemyCharacter_ReturnValue, float CallFunc_GetPercentageValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "UpdateAttackState");

	Params::ADog_Character_C_UpdateAttackState_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateAttackState_ReturnValue = CallFunc_UpdateAttackState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGroupSize_ReturnValue = CallFunc_GetGroupSize_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetEnemyCharacter_ReturnValue = CallFunc_SetEnemyCharacter_ReturnValue;
	Parms.CallFunc_GetPercentageValue_ReturnValue = CallFunc_GetPercentageValue_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dog_Character.Dog_Character_C.ResetPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADog_Character_C::ResetPOI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "ResetPOI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_Character.Dog_Character_C.SetSyncService
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTS_BaseSyncService_C*      Service                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDog_SyncService_C*          K2Node_DynamicCast_AsDog_Sync_Service                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSyncService_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADog_Character_C::SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class UDog_SyncService_C* K2Node_DynamicCast_AsDog_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "SetSyncService");

	Params::ADog_Character_C_SetSyncService_Params Parms{};

	Parms.Service = Service;
	Parms.K2Node_DynamicCast_AsDog_Sync_Service = K2Node_DynamicCast_AsDog_Sync_Service;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetSyncService_Result = CallFunc_SetSyncService_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Dog_Character.Dog_Character_C.SetPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDog_PatrolPoiType      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADog_Character_C::SetPatrolPoi(enum class EDog_PatrolPoiType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "SetPatrolPoi");

	Params::ADog_Character_C_SetPatrolPoi_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_Character.Dog_Character_C.CalculatePOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldHappen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHappen_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHappen_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHappen_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHappen_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADog_Character_C::CalculatePOI(bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue_1, bool CallFunc_ShouldHappen_ReturnValue_2, bool CallFunc_ShouldHappen_ReturnValue_3, bool CallFunc_ShouldHappen_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "CalculatePOI");

	Params::ADog_Character_C_CalculatePOI_Params Parms{};

	Parms.CallFunc_ShouldHappen_ReturnValue = CallFunc_ShouldHappen_ReturnValue;
	Parms.CallFunc_ShouldHappen_ReturnValue_1 = CallFunc_ShouldHappen_ReturnValue_1;
	Parms.CallFunc_ShouldHappen_ReturnValue_2 = CallFunc_ShouldHappen_ReturnValue_2;
	Parms.CallFunc_ShouldHappen_ReturnValue_3 = CallFunc_ShouldHappen_ReturnValue_3;
	Parms.CallFunc_ShouldHappen_ReturnValue_4 = CallFunc_ShouldHappen_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_Character.Dog_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADog_Character_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_Character.Dog_Character_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADog_Character_C::CustomEvent(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "CustomEvent");

	Params::ADog_Character_C_CustomEvent_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dog_Character.Dog_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADog_Character_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_Character.Dog_Character_C.BB_SyncPatrolPoi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADog_Character_C::BB_SyncPatrolPoi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "BB_SyncPatrolPoi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_Character.Dog_Character_C.OnApplyCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADog_Character_C::OnApplyCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "OnApplyCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dog_Character.Dog_Character_C.ExecuteUbergraph_Dog_Character
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_GetHeadRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADog_Character_C::ExecuteUbergraph_Dog_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dog_Character_C", "ExecuteUbergraph_Dog_Character");

	Params::ADog_Character_C_ExecuteUbergraph_Dog_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHeadRotation_ReturnValue = CallFunc_GetHeadRotation_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


