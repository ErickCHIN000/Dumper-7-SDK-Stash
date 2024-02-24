#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C
// (None)

class UClass* UBP_RuntimeRealmSystemComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuntimeRealmSystemComponent_C");

	return Clss;
}


// BP_RuntimeRealmSystemComponent_C BP_RuntimeRealmSystemComponent.Default__BP_RuntimeRealmSystemComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuntimeRealmSystemComponent_C* UBP_RuntimeRealmSystemComponent_C::GetDefaultObj()
{
	static class UBP_RuntimeRealmSystemComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuntimeRealmSystemComponent_C*>(UBP_RuntimeRealmSystemComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.UpdatePersistedData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPersistedRealmConfig*       Persisted_Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPoiDistributionKey_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPOIDistributionHash_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::UpdatePersistedData(class UPersistedRealmConfig* Persisted_Object, const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, int32 CallFunc_GetPOIDistributionHash_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "UpdatePersistedData");

	Params::UBP_RuntimeRealmSystemComponent_C_UpdatePersistedData_Params Parms{};

	Parms.Persisted_Object = Persisted_Object;
	Parms.CallFunc_GetPoiDistributionKey_ReturnValue = CallFunc_GetPoiDistributionKey_ReturnValue;
	Parms.CallFunc_GetPOIDistributionHash_ReturnValue = CallFunc_GetPOIDistributionHash_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetRealmSettingsProcessor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URealmSettingsProcessor*     Processor                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ProcessorFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmDataSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindDataProcessor_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmSettingsProcessor*     K2Node_DynamicCast_AsRealm_Settings_Processor                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::GetRealmSettingsProcessor(class URealmSettingsProcessor** Processor, bool* ProcessorFound, class URealmDataSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UObject* CallFunc_FindDataProcessor_ReturnValue, class URealmSettingsProcessor* K2Node_DynamicCast_AsRealm_Settings_Processor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "GetRealmSettingsProcessor");

	Params::UBP_RuntimeRealmSystemComponent_C_GetRealmSettingsProcessor_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_FindDataProcessor_ReturnValue = CallFunc_FindDataProcessor_ReturnValue;
	Parms.K2Node_DynamicCast_AsRealm_Settings_Processor = K2Node_DynamicCast_AsRealm_Settings_Processor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Processor != nullptr)
		*Processor = Parms.Processor;

	if (ProcessorFound != nullptr)
		*ProcessorFound = Parms.ProcessorFound;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.RestoreDataFromPersistence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPersistedRealmConfig*       PersistedObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::RestoreDataFromPersistence(class UPersistedRealmConfig* PersistedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "RestoreDataFromPersistence");

	Params::UBP_RuntimeRealmSystemComponent_C_RestoreDataFromPersistence_Params Parms{};

	Parms.PersistedObject = PersistedObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ReadTemporalConfig
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmSettingsProcessor*     CallFunc_GetRealmSettingsProcessor_Processor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmSettingsProcessor_ProcessorFound                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTemporalConfig             CallFunc_GetTemporalConfig_ReturnValue                           (ConstParm)

void UBP_RuntimeRealmSystemComponent_C::ReadTemporalConfig(bool* Result, class URealmSettingsProcessor* CallFunc_GetRealmSettingsProcessor_Processor, bool CallFunc_GetRealmSettingsProcessor_ProcessorFound, const struct FTemporalConfig& CallFunc_GetTemporalConfig_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ReadTemporalConfig");

	Params::UBP_RuntimeRealmSystemComponent_C_ReadTemporalConfig_Params Parms{};

	Parms.CallFunc_GetRealmSettingsProcessor_Processor = CallFunc_GetRealmSettingsProcessor_Processor;
	Parms.CallFunc_GetRealmSettingsProcessor_ProcessorFound = CallFunc_GetRealmSettingsProcessor_ProcessorFound;
	Parms.CallFunc_GetTemporalConfig_ReturnValue = CallFunc_GetTemporalConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.InitializeResourceProxyBuckets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADynamicResourceSpawningManager*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::InitializeResourceProxyBuckets(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ADynamicResourceSpawningManager* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "InitializeResourceProxyBuckets");

	Params::UBP_RuntimeRealmSystemComponent_C_InitializeResourceProxyBuckets_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Configure New Streaming Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOIStreamingLevelDefinitionPOI                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_StreamingLevelProxy_C*   StreamingLevelProxy                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Tags                                                             (Edit, BlueprintVisible)
// TScriptInterface<class IStreamingLevelProxyInterface>CallFunc_SetStreamingDefData_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStreamingLevelProxyInterface>CallFunc_AddGameplayTags_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetPOITags_POITags                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::Configure_New_Streaming_Level(struct FPOIStreamingLevelDefinition& POI, class ABP_StreamingLevelProxy_C*& StreamingLevelProxy, const struct FGameplayTagContainer& Tags, TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_SetStreamingDefData_self_CastInput, TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_AddGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetPOITags_POITags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "Configure New Streaming Level");

	Params::UBP_RuntimeRealmSystemComponent_C_Configure_New_Streaming_Level_Params Parms{};

	Parms.POI = POI;
	Parms.StreamingLevelProxy = StreamingLevelProxy;
	Parms.Tags = Tags;
	Parms.CallFunc_SetStreamingDefData_self_CastInput = CallFunc_SetStreamingDefData_self_CastInput;
	Parms.CallFunc_AddGameplayTags_self_CastInput = CallFunc_AddGameplayTags_self_CastInput;
	Parms.CallFunc_GetPOITags_POITags = CallFunc_GetPOITags_POITags;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetUniqueStreamingLevelPrefix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prefix                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutPrefix                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UniquePrefix                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::GetUniqueStreamingLevelPrefix(const class FString& Prefix, class FString* OutPrefix, const class FString& UniquePrefix, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "GetUniqueStreamingLevelPrefix");

	Params::UBP_RuntimeRealmSystemComponent_C_GetUniqueStreamingLevelPrefix_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.UniquePrefix = UniquePrefix;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPrefix != nullptr)
		*OutPrefix = std::move(Parms.OutPrefix);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnStreamingLevelFromPath
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftLevelPath              Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPOIStreamingLevelDefinitionPOI                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  Transform                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix                 (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_StreamingLevelProxy_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AStreamingLevelProxyActor* UBP_RuntimeRealmSystemComponent_C::SpawnStreamingLevelFromPath(struct FSoftLevelPath& Path, struct FPOIStreamingLevelDefinition& POI, struct FTransform& Transform, const class FString& CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue, class ABP_StreamingLevelProxy_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "SpawnStreamingLevelFromPath");

	Params::UBP_RuntimeRealmSystemComponent_C_SpawnStreamingLevelFromPath_Params Parms{};

	Parms.Path = Path;
	Parms.POI = POI;
	Parms.Transform = Transform;
	Parms.CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix = CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue = CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ReadPOIDistribution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPersistedRealmConfig*       Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GeneratePOIDistributionFromKey_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::ReadPOIDistribution(class UPersistedRealmConfig* Config, bool CallFunc_GeneratePOIDistributionFromKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ReadPOIDistribution");

	Params::UBP_RuntimeRealmSystemComponent_C_ReadPOIDistribution_Params Parms{};

	Parms.Config = Config;
	Parms.CallFunc_GeneratePOIDistributionFromKey_ReturnValue = CallFunc_GeneratePOIDistributionFromKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.PublishPOISeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPoiDistributionKey_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPOIDistributionHash_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::PublishPOISeed(const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, int32 CallFunc_GetPOIDistributionHash_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "PublishPOISeed");

	Params::UBP_RuntimeRealmSystemComponent_C_PublishPOISeed_Params Parms{};

	Parms.CallFunc_GetPoiDistributionKey_ReturnValue = CallFunc_GetPoiDistributionKey_ReturnValue;
	Parms.CallFunc_GetPOIDistributionHash_ReturnValue = CallFunc_GetPOIDistributionHash_ReturnValue;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.MakeNewPOIDistribution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ReadTemporalConfig_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GeneratePOIDistributionFromKey_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GeneratePOIDistribution_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::MakeNewPOIDistribution(bool CallFunc_ReadTemporalConfig_Result, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_GeneratePOIDistributionFromKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GeneratePOIDistribution_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "MakeNewPOIDistribution");

	Params::UBP_RuntimeRealmSystemComponent_C_MakeNewPOIDistribution_Params Parms{};

	Parms.CallFunc_ReadTemporalConfig_Result = CallFunc_ReadTemporalConfig_Result;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GeneratePOIDistributionFromKey_ReturnValue = CallFunc_GeneratePOIDistributionFromKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GeneratePOIDistribution_ReturnValue = CallFunc_GeneratePOIDistribution_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetSeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Seed                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::GetSeed(int32* Seed, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "GetSeed");

	Params::UBP_RuntimeRealmSystemComponent_C_GetSeed_Params Parms{};

	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Seed != nullptr)
		*Seed = Parms.Seed;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.RandomizeProfileInteger
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RandMax                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::RandomizeProfileInteger(int32 RandMax, int32* Output, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "RandomizeProfileInteger");

	Params::UBP_RuntimeRealmSystemComponent_C_RandomizeProfileInteger_Params Parms{};

	Parms.RandMax = RandMax;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetRealmPersistenceObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPersistedRealmConfig*       AsPersistedRealmConfig                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetGameState_GameState                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPersistenceObjectByKey_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPersistenceObjectByKey_PersistedObject               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPersistedRealmConfig*       K2Node_DynamicCast_AsPersisted_Realm_Config                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::GetRealmPersistenceObject(class UPersistedRealmConfig** AsPersistedRealmConfig, class ANWXGameStateBase* CallFunc_GetGameState_GameState, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class UPersistedRealmConfig* K2Node_DynamicCast_AsPersisted_Realm_Config, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "GetRealmPersistenceObject");

	Params::UBP_RuntimeRealmSystemComponent_C_GetRealmPersistenceObject_Params Parms{};

	Parms.CallFunc_GetGameState_GameState = CallFunc_GetGameState_GameState;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistenceObjectByKey_bSuccess = CallFunc_GetPersistenceObjectByKey_bSuccess;
	Parms.CallFunc_GetPersistenceObjectByKey_PersistedObject = CallFunc_GetPersistenceObjectByKey_PersistedObject;
	Parms.K2Node_DynamicCast_AsPersisted_Realm_Config = K2Node_DynamicCast_AsPersisted_Realm_Config;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsPersistedRealmConfig != nullptr)
		*AsPersistedRealmConfig = Parms.AsPersistedRealmConfig;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.CreatePersistenceObject
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPersistedRealmConfig*       PersistenceObject                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPOIDistributionHash_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPoiDistributionKey_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class UPersistedRealmConfig*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::CreatePersistenceObject(class UPersistedRealmConfig** PersistenceObject, int32 CallFunc_GetPOIDistributionHash_ReturnValue, const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, class UPersistedRealmConfig* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "CreatePersistenceObject");

	Params::UBP_RuntimeRealmSystemComponent_C_CreatePersistenceObject_Params Parms{};

	Parms.CallFunc_GetPOIDistributionHash_ReturnValue = CallFunc_GetPOIDistributionHash_ReturnValue;
	Parms.CallFunc_GetPoiDistributionKey_ReturnValue = CallFunc_GetPoiDistributionKey_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PersistenceObject != nullptr)
		*PersistenceObject = Parms.PersistenceObject;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnStreamingLevel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPOIStreamingLevelDefinitionPOIData                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AStreamingLevelProxyActor*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Tags                                                             (Edit, BlueprintVisible)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_StreamingLevelProxy_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix                 (ZeroConstructor, HasGetValueTypeHash)

class AStreamingLevelProxyActor* UBP_RuntimeRealmSystemComponent_C::SpawnStreamingLevel(struct FPOIStreamingLevelDefinition& POIData, struct FVector& Location, struct FRotator& Rotation, const struct FGameplayTagContainer& Tags, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue, class ABP_StreamingLevelProxy_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "SpawnStreamingLevel");

	Params::UBP_RuntimeRealmSystemComponent_C_SpawnStreamingLevel_Params Parms{};

	Parms.POIData = POIData;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Tags = Tags;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue = CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix = CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Profile_Component_Randomizer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CelestialType_Max                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NebulaBrightness_Max                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NebulaColour_Max                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RingColour_Max                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RingTile_Max                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CloudIndex_Max                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MoonSaturation_Max                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MoonColour_Max                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MoonType_Max                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MoonVis_Max                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Season_Max                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ColorRow_Max                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomizeProfileInteger_Output_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_Profile_Component_RandomizeK2Node_MakeStruct_S_Profile_Component_Randomize                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SimulationMonitorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::Profile_Component_Randomizer(int32 CelestialType_Max, int32 NebulaBrightness_Max, int32 NebulaColour_Max, int32 RingColour_Max, int32 RingTile_Max, int32 CloudIndex_Max, int32 MoonSaturation_Max, int32 MoonColour_Max, int32 MoonType_Max, int32 MoonVis_Max, int32 Season_Max, int32 ColorRow_Max, int32 CallFunc_RandomizeProfileInteger_Output, int32 CallFunc_RandomizeProfileInteger_Output_1, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, int32 CallFunc_RandomizeProfileInteger_Output_2, int32 CallFunc_RandomizeProfileInteger_Output_3, int32 CallFunc_RandomizeProfileInteger_Output_4, int32 CallFunc_RandomizeProfileInteger_Output_5, int32 CallFunc_RandomizeProfileInteger_Output_6, int32 CallFunc_RandomizeProfileInteger_Output_7, int32 CallFunc_RandomizeProfileInteger_Output_8, int32 CallFunc_RandomizeProfileInteger_Output_9, int32 CallFunc_RandomizeProfileInteger_Output_10, int32 CallFunc_RandomizeProfileInteger_Output_11, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FS_Profile_Component_Randomize& K2Node_MakeStruct_S_Profile_Component_Randomize, class UBP_SimulationMonitorComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "Profile_Component_Randomizer");

	Params::UBP_RuntimeRealmSystemComponent_C_Profile_Component_Randomizer_Params Parms{};

	Parms.CelestialType_Max = CelestialType_Max;
	Parms.NebulaBrightness_Max = NebulaBrightness_Max;
	Parms.NebulaColour_Max = NebulaColour_Max;
	Parms.RingColour_Max = RingColour_Max;
	Parms.RingTile_Max = RingTile_Max;
	Parms.CloudIndex_Max = CloudIndex_Max;
	Parms.MoonSaturation_Max = MoonSaturation_Max;
	Parms.MoonColour_Max = MoonColour_Max;
	Parms.MoonType_Max = MoonType_Max;
	Parms.MoonVis_Max = MoonVis_Max;
	Parms.Season_Max = Season_Max;
	Parms.ColorRow_Max = ColorRow_Max;
	Parms.CallFunc_RandomizeProfileInteger_Output = CallFunc_RandomizeProfileInteger_Output;
	Parms.CallFunc_RandomizeProfileInteger_Output_1 = CallFunc_RandomizeProfileInteger_Output_1;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue_1 = CallFunc_RandomBool_ReturnValue_1;
	Parms.CallFunc_RandomizeProfileInteger_Output_2 = CallFunc_RandomizeProfileInteger_Output_2;
	Parms.CallFunc_RandomizeProfileInteger_Output_3 = CallFunc_RandomizeProfileInteger_Output_3;
	Parms.CallFunc_RandomizeProfileInteger_Output_4 = CallFunc_RandomizeProfileInteger_Output_4;
	Parms.CallFunc_RandomizeProfileInteger_Output_5 = CallFunc_RandomizeProfileInteger_Output_5;
	Parms.CallFunc_RandomizeProfileInteger_Output_6 = CallFunc_RandomizeProfileInteger_Output_6;
	Parms.CallFunc_RandomizeProfileInteger_Output_7 = CallFunc_RandomizeProfileInteger_Output_7;
	Parms.CallFunc_RandomizeProfileInteger_Output_8 = CallFunc_RandomizeProfileInteger_Output_8;
	Parms.CallFunc_RandomizeProfileInteger_Output_9 = CallFunc_RandomizeProfileInteger_Output_9;
	Parms.CallFunc_RandomizeProfileInteger_Output_10 = CallFunc_RandomizeProfileInteger_Output_10;
	Parms.CallFunc_RandomizeProfileInteger_Output_11 = CallFunc_RandomizeProfileInteger_Output_11;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_MakeStruct_S_Profile_Component_Randomize = K2Node_MakeStruct_S_Profile_Component_Randomize;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetPOITags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPOIStreamingLevelDefinitionPOIData                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       POITags                                                          (Parm, OutParm)
// struct FGameplayTagContainer       Tags                                                             (Edit, BlueprintVisible)
// bool                               CallFunc_BiomeToTag_FoundMatch                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_BiomeToTag_Tag                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FootprintToTag_FoundMatch                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_FootprintToTag_Tag                                      (NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::GetPOITags(const struct FPOIStreamingLevelDefinition& POIData, struct FGameplayTagContainer* POITags, const struct FGameplayTagContainer& Tags, bool CallFunc_BiomeToTag_FoundMatch, const struct FGameplayTag& CallFunc_BiomeToTag_Tag, bool CallFunc_FootprintToTag_FoundMatch, const struct FGameplayTag& CallFunc_FootprintToTag_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "GetPOITags");

	Params::UBP_RuntimeRealmSystemComponent_C_GetPOITags_Params Parms{};

	Parms.POIData = POIData;
	Parms.Tags = Tags;
	Parms.CallFunc_BiomeToTag_FoundMatch = CallFunc_BiomeToTag_FoundMatch;
	Parms.CallFunc_BiomeToTag_Tag = CallFunc_BiomeToTag_Tag;
	Parms.CallFunc_FootprintToTag_FoundMatch = CallFunc_FootprintToTag_FoundMatch;
	Parms.CallFunc_FootprintToTag_Tag = CallFunc_FootprintToTag_Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (POITags != nullptr)
		*POITags = std::move(Parms.POITags);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnLevelPackageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStreamingLevelProxyActor*   StreamingLevelProxy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::OnLevelPackageLoaded(class AStreamingLevelProxyActor* StreamingLevelProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "OnLevelPackageLoaded");

	Params::UBP_RuntimeRealmSystemComponent_C_OnLevelPackageLoaded_Params Parms{};

	Parms.StreamingLevelProxy = StreamingLevelProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnPOIByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        POIRowName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   StreamingLevelProxy                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundMatch                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOIStreamingLevelDefinitionCallFunc_GetPOIDefinitionByName_POIDefinition                    (None)
// bool                               CallFunc_GetPOIDefinitionByName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_SpawnStreamingLevel_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::SpawnPOIByName(class FName POIRowName, const struct FTransform& Transform, bool* bSuccess, class AStreamingLevelProxyActor** StreamingLevelProxy, bool FoundMatch, const struct FPOIStreamingLevelDefinition& CallFunc_GetPOIDefinitionByName_POIDefinition, bool CallFunc_GetPOIDefinitionByName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "SpawnPOIByName");

	Params::UBP_RuntimeRealmSystemComponent_C_SpawnPOIByName_Params Parms{};

	Parms.POIRowName = POIRowName;
	Parms.Transform = Transform;
	Parms.FoundMatch = FoundMatch;
	Parms.CallFunc_GetPOIDefinitionByName_POIDefinition = CallFunc_GetPOIDefinitionByName_POIDefinition;
	Parms.CallFunc_GetPOIDefinitionByName_ReturnValue = CallFunc_GetPOIDefinitionByName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnStreamingLevel_ReturnValue = CallFunc_SpawnStreamingLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (StreamingLevelProxy != nullptr)
		*StreamingLevelProxy = Parms.StreamingLevelProxy;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnPlugByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlugRowName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        POIRowName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOIPlugStreamingLevelDefinitionPlugDefinition                                                   (Edit, BlueprintVisible)
// struct FPOIStreamingLevelDefinitionLevelDefinition                                                  (Edit, BlueprintVisible)
// struct FPOIStreamingLevelDefinitionCallFunc_GetPOIDefinitionByName_POIDefinition                    (None)
// bool                               CallFunc_GetPOIDefinitionByName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_SpawnStreamingLevelFromPath_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPOIPlugStreamingLevelDefinitionCallFunc_GetPlugDefinitionByName_PlugDefinition                  (None)
// bool                               CallFunc_GetPlugDefinitionByName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::SpawnPlugByName(class FName PlugRowName, class FName POIRowName, const struct FTransform& Transform, bool* bSuccess, const struct FPOIPlugStreamingLevelDefinition& PlugDefinition, const struct FPOIStreamingLevelDefinition& LevelDefinition, const struct FPOIStreamingLevelDefinition& CallFunc_GetPOIDefinitionByName_POIDefinition, bool CallFunc_GetPOIDefinitionByName_ReturnValue, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevelFromPath_ReturnValue, const struct FPOIPlugStreamingLevelDefinition& CallFunc_GetPlugDefinitionByName_PlugDefinition, bool CallFunc_GetPlugDefinitionByName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "SpawnPlugByName");

	Params::UBP_RuntimeRealmSystemComponent_C_SpawnPlugByName_Params Parms{};

	Parms.PlugRowName = PlugRowName;
	Parms.POIRowName = POIRowName;
	Parms.Transform = Transform;
	Parms.PlugDefinition = PlugDefinition;
	Parms.LevelDefinition = LevelDefinition;
	Parms.CallFunc_GetPOIDefinitionByName_POIDefinition = CallFunc_GetPOIDefinitionByName_POIDefinition;
	Parms.CallFunc_GetPOIDefinitionByName_ReturnValue = CallFunc_GetPOIDefinitionByName_ReturnValue;
	Parms.CallFunc_SpawnStreamingLevelFromPath_ReturnValue = CallFunc_SpawnStreamingLevelFromPath_ReturnValue;
	Parms.CallFunc_GetPlugDefinitionByName_PlugDefinition = CallFunc_GetPlugDefinitionByName_PlugDefinition;
	Parms.CallFunc_GetPlugDefinitionByName_ReturnValue = CallFunc_GetPlugDefinitionByName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnRep_bHasFinishedSpawningPOI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::OnRep_bHasFinishedSpawningPOI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "OnRep_bHasFinishedSpawningPOI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.DoesBiomeMatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EBiomeID>        BiomesAllowed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               DoesMatch                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::DoesBiomeMatch(TArray<enum class EBiomeID>& BiomesAllowed, bool* DoesMatch, enum class EBiomeID Temp_byte_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "DoesBiomeMatch");

	Params::UBP_RuntimeRealmSystemComponent_C_DoesBiomeMatch_Params Parms{};

	Parms.BiomesAllowed = BiomesAllowed;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DoesMatch != nullptr)
		*DoesMatch = Parms.DoesMatch;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ChooseRealmProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RealmProfileIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      ValidRealmIndices                                                (Edit, BlueprintVisible)
// int32                              CurrentProfileIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeed_Seed                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue                            (ZeroConstructor, NoDestructor)
// class UBP_SimulationMonitorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerFromStream_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::ChooseRealmProfile(int32 RealmProfileIndex, const TArray<int32>& ValidRealmIndices, int32 CurrentProfileIndex, int32 CallFunc_GetSeed_Seed, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, class UBP_SimulationMonitorComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ChooseRealmProfile");

	Params::UBP_RuntimeRealmSystemComponent_C_ChooseRealmProfile_Params Parms{};

	Parms.RealmProfileIndex = RealmProfileIndex;
	Parms.ValidRealmIndices = ValidRealmIndices;
	Parms.CurrentProfileIndex = CurrentProfileIndex;
	Parms.CallFunc_GetSeed_Seed = CallFunc_GetSeed_Seed;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_MakeRandomStream_ReturnValue = CallFunc_MakeRandomStream_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_RandomIntegerFromStream_ReturnValue = CallFunc_RandomIntegerFromStream_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.POIDataToString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPOIData                    POIData                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_RuntimeRealmSystemComponent_C::POIDataToString(struct FPOIData& POIData, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "POIDataToString");

	Params::UBP_RuntimeRealmSystemComponent_C_POIDataToString_Params Parms{};

	Parms.POIData = POIData;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ApplyConfigFlags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GameState_C*             GameState                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPersistedRealmConfig*       PersistenceObject                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPersistedRealmConfig*       CallFunc_CreatePersistenceObject_PersistenceObject               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPersistenceObjectByKey_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPersistenceObjectByKey_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPersistenceObjectByKey_PersistedObject               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPersistedRealmConfig*       K2Node_DynamicCast_AsPersisted_Realm_Config                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::ApplyConfigFlags(class ABP_GameState_C* GameState, class UPersistedRealmConfig* PersistenceObject, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue_1, class UPersistedRealmConfig* CallFunc_CreatePersistenceObject_PersistenceObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetPersistenceObjectByKey_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, class UPersistedRealmConfig* K2Node_DynamicCast_AsPersisted_Realm_Config, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ApplyConfigFlags");

	Params::UBP_RuntimeRealmSystemComponent_C_ApplyConfigFlags_Params Parms{};

	Parms.GameState = GameState;
	Parms.PersistenceObject = PersistenceObject;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue_1 = CallFunc_GetNWXGameStateBase_ReturnValue_1;
	Parms.CallFunc_CreatePersistenceObject_PersistenceObject = CallFunc_CreatePersistenceObject_PersistenceObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetPersistenceObjectByKey_bSuccess = CallFunc_SetPersistenceObjectByKey_bSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPersistenceObjectByKey_bSuccess = CallFunc_GetPersistenceObjectByKey_bSuccess;
	Parms.CallFunc_GetPersistenceObjectByKey_PersistedObject = CallFunc_GetPersistenceObjectByKey_PersistedObject;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPersisted_Realm_Config = K2Node_DynamicCast_AsPersisted_Realm_Config;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.DebugPOICounts
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::DebugPOICounts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "DebugPOICounts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.AllLevelsLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::AllLevelsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "AllLevelsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Multicast_DisplayPOIList
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              POIList                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RuntimeRealmSystemComponent_C::Multicast_DisplayPOIList(TArray<class FString>& POIList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "Multicast_DisplayPOIList");

	Params::UBP_RuntimeRealmSystemComponent_C_Multicast_DisplayPOIList_Params Parms{};

	Parms.POIList = POIList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.TrackingRunningWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::TrackingRunningWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "TrackingRunningWorld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnRealmSettingsReady
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRealmSettings              RealmSettings                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RuntimeRealmSystemComponent_C::OnRealmSettingsReady(struct FRealmSettings& RealmSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "OnRealmSettingsReady");

	Params::UBP_RuntimeRealmSystemComponent_C_OnRealmSettingsReady_Params Parms{};

	Parms.RealmSettings = RealmSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnRRPTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::OnRRPTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "OnRRPTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ExecuteUbergraph_BP_RuntimeRealmSystemComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTrackingRunningWorld_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_POIList                                       (ConstParm, ReferenceParm)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTestRealm_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRealmSettingsProvider>K2Node_DynamicCast_AsRealm_Settings_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              K2Node_CustomEvent_RealmSettings                                 (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmSettingsProcessor*     CallFunc_GetRealmSettingsProcessor_Processor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmSettingsProcessor_ProcessorFound                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRealmSettingsProvider>CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRealmSettingsProvider>CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RuntimeRealmSystemComponent_C::ExecuteUbergraph_BP_RuntimeRealmSystemComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsTrackingRunningWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FString>& K2Node_CustomEvent_POIList, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsTestRealm_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, TScriptInterface<class IRealmSettingsProvider> K2Node_DynamicCast_AsRealm_Settings_Provider, bool K2Node_DynamicCast_bSuccess, const struct FRealmSettings& K2Node_CustomEvent_RealmSettings, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue_1, class URealmSettingsProcessor* CallFunc_GetRealmSettingsProcessor_Processor, bool CallFunc_GetRealmSettingsProcessor_ProcessorFound, TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput, TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ExecuteUbergraph_BP_RuntimeRealmSystemComponent");

	Params::UBP_RuntimeRealmSystemComponent_C_ExecuteUbergraph_BP_RuntimeRealmSystemComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsTrackingRunningWorld_ReturnValue = CallFunc_IsTrackingRunningWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_POIList = K2Node_CustomEvent_POIList;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsTestRealm_ReturnValue = CallFunc_IsTestRealm_ReturnValue;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.K2Node_DynamicCast_AsRealm_Settings_Provider = K2Node_DynamicCast_AsRealm_Settings_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_RealmSettings = K2Node_CustomEvent_RealmSettings;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetWorldSettings_ReturnValue_1 = CallFunc_GetWorldSettings_ReturnValue_1;
	Parms.CallFunc_GetRealmSettingsProcessor_Processor = CallFunc_GetRealmSettingsProcessor_Processor;
	Parms.CallFunc_GetRealmSettingsProcessor_ProcessorFound = CallFunc_GetRealmSettingsProcessor_ProcessorFound;
	Parms.CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput = CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput;
	Parms.CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1 = CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.POIStreamingSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::POIStreamingSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "POIStreamingSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.FinishedPlacingPOIs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::FinishedPlacingPOIs__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "FinishedPlacingPOIs__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ConfigReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_RuntimeRealmSystemComponent_C::ConfigReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RuntimeRealmSystemComponent_C", "ConfigReady__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


