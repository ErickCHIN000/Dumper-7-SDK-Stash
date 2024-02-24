#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C
// (None)

class UClass* UBP_TemporalRealmTimerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TemporalRealmTimerComponent_C");

	return Clss;
}


// BP_TemporalRealmTimerComponent_C BP_TemporalRealmTimerComponent.Default__BP_TemporalRealmTimerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TemporalRealmTimerComponent_C* UBP_TemporalRealmTimerComponent_C::GetDefaultObj()
{
	static class UBP_TemporalRealmTimerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TemporalRealmTimerComponent_C*>(UBP_TemporalRealmTimerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.ShouldOptOutOfPersistenceStore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_TemporalRealmTimerComponent_C::ShouldOptOutOfPersistenceStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "ShouldOptOutOfPersistenceStore");

	Params::UBP_TemporalRealmTimerComponent_C_ShouldOptOutOfPersistenceStore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.GetPersistenceObjectByKey
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PersistenceKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     PersistedObject                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class UObject*>GenericDataMap                                                   (Edit, BlueprintVisible)
// class UObject*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class UObject*>CallFunc_GetGenericObjectMap_GenericDataMap                      (None)
// bool                               CallFunc_GetGenericObjectMap_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemporalRealmTimerComponent_C::GetPersistenceObjectByKey(const class FString& PersistenceKey, bool* bSuccess, class UObject** PersistedObject, TMap<class FString, class UObject*> GenericDataMap, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "GetPersistenceObjectByKey");

	Params::UBP_TemporalRealmTimerComponent_C_GetPersistenceObjectByKey_Params Parms{};

	Parms.PersistenceKey = PersistenceKey;
	Parms.GenericDataMap = GenericDataMap;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGenericObjectMap_GenericDataMap = CallFunc_GetGenericObjectMap_GenericDataMap;
	Parms.CallFunc_GetGenericObjectMap_Success = CallFunc_GetGenericObjectMap_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (PersistedObject != nullptr)
		*PersistedObject = Parms.PersistedObject;

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.SetPersistenceObjectByKey
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PersistenceKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     ObjectToPersist                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OldPersistedObject                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class UObject*>GenericDataMap                                                   (Edit, BlueprintVisible)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class UObject*>CallFunc_GetGenericObjectMap_GenericDataMap                      (None)
// bool                               CallFunc_GetGenericObjectMap_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StoreGenericObjectMap_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemporalRealmTimerComponent_C::SetPersistenceObjectByKey(const class FString& PersistenceKey, class UObject* ObjectToPersist, class UObject* OldPersistedObject, TMap<class FString, class UObject*> GenericDataMap, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TMap<class FString, class UObject*> CallFunc_GetGenericObjectMap_GenericDataMap, bool CallFunc_GetGenericObjectMap_Success, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_StoreGenericObjectMap_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "SetPersistenceObjectByKey");

	Params::UBP_TemporalRealmTimerComponent_C_SetPersistenceObjectByKey_Params Parms{};

	Parms.PersistenceKey = PersistenceKey;
	Parms.ObjectToPersist = ObjectToPersist;
	Parms.OldPersistedObject = OldPersistedObject;
	Parms.GenericDataMap = GenericDataMap;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGenericObjectMap_GenericDataMap = CallFunc_GetGenericObjectMap_GenericDataMap;
	Parms.CallFunc_GetGenericObjectMap_Success = CallFunc_GetGenericObjectMap_Success;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_StoreGenericObjectMap_Success = CallFunc_StoreGenericObjectMap_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.OnLinkedReferencesRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TemporalRealmTimerComponent_C::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "OnLinkedReferencesRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TemporalRealmTimerComponent_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TemporalRealmTimerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemporalRealmTimerComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "ReceiveTick");

	Params::UBP_TemporalRealmTimerComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TemporalRealmTimerComponent.BP_TemporalRealmTimerComponent_C.ExecuteUbergraph_BP_TemporalRealmTimerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPersistenceObjectByKey_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPersistenceObjectByKey_PersistedObject               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_TemporalRealmTimerComponent_C*K2Node_DynamicCast_AsBP_Temporal_Realm_Timer_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_DoubleToInt64_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemporalRealmTimerComponent_C::ExecuteUbergraph_BP_TemporalRealmTimerComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_Conv_Int64ToDouble_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue_1, const struct FDateTime& CallFunc_UtcNow_ReturnValue_1, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue_1, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class UBP_TemporalRealmTimerComponent_C* K2Node_DynamicCast_AsBP_Temporal_Realm_Timer_Component, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_DoubleToInt64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TemporalRealmTimerComponent_C", "ExecuteUbergraph_BP_TemporalRealmTimerComponent");

	Params::UBP_TemporalRealmTimerComponent_C_ExecuteUbergraph_BP_TemporalRealmTimerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue = CallFunc_DateTimeToUnixTimestamp_ReturnValue;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue = CallFunc_Conv_Int64ToDouble_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue = CallFunc_GetRealTimeElapsedSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue_1 = CallFunc_GetRealTimeElapsedSeconds_ReturnValue_1;
	Parms.CallFunc_UtcNow_ReturnValue_1 = CallFunc_UtcNow_ReturnValue_1;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue_1 = CallFunc_DateTimeToUnixTimestamp_ReturnValue_1;
	Parms.CallFunc_GetPersistenceObjectByKey_bSuccess = CallFunc_GetPersistenceObjectByKey_bSuccess;
	Parms.CallFunc_GetPersistenceObjectByKey_PersistedObject = CallFunc_GetPersistenceObjectByKey_PersistedObject;
	Parms.K2Node_DynamicCast_AsBP_Temporal_Realm_Timer_Component = K2Node_DynamicCast_AsBP_Temporal_Realm_Timer_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_DoubleToInt64_ReturnValue = CallFunc_Conv_DoubleToInt64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


