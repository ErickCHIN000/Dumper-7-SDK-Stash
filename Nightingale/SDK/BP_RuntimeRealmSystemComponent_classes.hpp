#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x4E0 - 0x3D0)
// BlueprintGeneratedClass BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C
class UBP_RuntimeRealmSystemComponent_C : public URuntimeRealmPlacer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ConfigFlagsSet;                                    // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4790[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ConfigReady;                                       // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       ConfigTimeout;                                     // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            RealmProfiles;                                     // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FinishedPlacingPOIs;                               // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHasFinishedSpawningPOI;                           // 0x410(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4795[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            POIStreamingSpawned;                               // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MaxSeed;                                           // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4797[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPOIStreamingLevelDefinition>  POIList;                                           // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                PersistenceObjectKey;                              // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         PersistenceIsTracking;                             // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_479B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnedLevelCounter;                               // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RRPInitialized;                                    // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_479D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTemporalConfig                       TemporalConfig;                                    // 0x460(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	class URealmSettingsProcessor*               RealmSettingsProcessor;                            // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RuntimeRealmSystemComponent_C* GetDefaultObj();

	void UpdatePersistedData(class UPersistedRealmConfig* Persisted_Object, const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, int32 CallFunc_GetPOIDistributionHash_ReturnValue);
	void GetRealmSettingsProcessor(class URealmSettingsProcessor** Processor, bool* ProcessorFound, class URealmDataSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UObject* CallFunc_FindDataProcessor_ReturnValue, class URealmSettingsProcessor* K2Node_DynamicCast_AsRealm_Settings_Processor, bool K2Node_DynamicCast_bSuccess);
	void RestoreDataFromPersistence(class UPersistedRealmConfig* PersistedObject);
	void ReadTemporalConfig(bool* Result, class URealmSettingsProcessor* CallFunc_GetRealmSettingsProcessor_Processor, bool CallFunc_GetRealmSettingsProcessor_ProcessorFound, const struct FTemporalConfig& CallFunc_GetTemporalConfig_ReturnValue);
	void InitializeResourceProxyBuckets(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ADynamicResourceSpawningManager* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Configure_New_Streaming_Level(struct FPOIStreamingLevelDefinition& POI, class ABP_StreamingLevelProxy_C*& StreamingLevelProxy, const struct FGameplayTagContainer& Tags, TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_SetStreamingDefData_self_CastInput, TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_AddGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetPOITags_POITags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void GetUniqueStreamingLevelPrefix(const class FString& Prefix, class FString* OutPrefix, const class FString& UniquePrefix, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class AStreamingLevelProxyActor* SpawnStreamingLevelFromPath(struct FSoftLevelPath& Path, struct FPOIStreamingLevelDefinition& POI, struct FTransform& Transform, const class FString& CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue, class ABP_StreamingLevelProxy_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReadPOIDistribution(class UPersistedRealmConfig* Config, bool CallFunc_GeneratePOIDistributionFromKey_ReturnValue);
	void PublishPOISeed(const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, int32 CallFunc_GetPOIDistributionHash_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue);
	void MakeNewPOIDistribution(bool CallFunc_ReadTemporalConfig_Result, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_GeneratePOIDistributionFromKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GeneratePOIDistribution_ReturnValue);
	void GetSeed(int32* Seed, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue);
	void RandomizeProfileInteger(int32 RandMax, int32* Output, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void GetRealmPersistenceObject(class UPersistedRealmConfig** AsPersistedRealmConfig, class ANWXGameStateBase* CallFunc_GetGameState_GameState, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class UPersistedRealmConfig* K2Node_DynamicCast_AsPersisted_Realm_Config, bool K2Node_DynamicCast_bSuccess_1);
	void CreatePersistenceObject(class UPersistedRealmConfig** PersistenceObject, int32 CallFunc_GetPOIDistributionHash_ReturnValue, const class FString& CallFunc_GetPoiDistributionKey_ReturnValue, class UPersistedRealmConfig* CallFunc_SpawnObject_ReturnValue);
	class AStreamingLevelProxyActor* SpawnStreamingLevel(struct FPOIStreamingLevelDefinition& POIData, struct FVector& Location, struct FRotator& Rotation, const struct FGameplayTagContainer& Tags, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue, class ABP_StreamingLevelProxy_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix);
	void Profile_Component_Randomizer(int32 CelestialType_Max, int32 NebulaBrightness_Max, int32 NebulaColour_Max, int32 RingColour_Max, int32 RingTile_Max, int32 CloudIndex_Max, int32 MoonSaturation_Max, int32 MoonColour_Max, int32 MoonType_Max, int32 MoonVis_Max, int32 Season_Max, int32 ColorRow_Max, int32 CallFunc_RandomizeProfileInteger_Output, int32 CallFunc_RandomizeProfileInteger_Output_1, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, int32 CallFunc_RandomizeProfileInteger_Output_2, int32 CallFunc_RandomizeProfileInteger_Output_3, int32 CallFunc_RandomizeProfileInteger_Output_4, int32 CallFunc_RandomizeProfileInteger_Output_5, int32 CallFunc_RandomizeProfileInteger_Output_6, int32 CallFunc_RandomizeProfileInteger_Output_7, int32 CallFunc_RandomizeProfileInteger_Output_8, int32 CallFunc_RandomizeProfileInteger_Output_9, int32 CallFunc_RandomizeProfileInteger_Output_10, int32 CallFunc_RandomizeProfileInteger_Output_11, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FS_Profile_Component_Randomize& K2Node_MakeStruct_S_Profile_Component_Randomize, class UBP_SimulationMonitorComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void GetPOITags(const struct FPOIStreamingLevelDefinition& POIData, struct FGameplayTagContainer* POITags, const struct FGameplayTagContainer& Tags, bool CallFunc_BiomeToTag_FoundMatch, const struct FGameplayTag& CallFunc_BiomeToTag_Tag, bool CallFunc_FootprintToTag_FoundMatch, const struct FGameplayTag& CallFunc_FootprintToTag_Tag);
	void OnLevelPackageLoaded(class AStreamingLevelProxyActor* StreamingLevelProxy);
	void SpawnPOIByName(class FName POIRowName, const struct FTransform& Transform, bool* bSuccess, class AStreamingLevelProxyActor** StreamingLevelProxy, bool FoundMatch, const struct FPOIStreamingLevelDefinition& CallFunc_GetPOIDefinitionByName_POIDefinition, bool CallFunc_GetPOIDefinitionByName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevel_ReturnValue);
	void SpawnPlugByName(class FName PlugRowName, class FName POIRowName, const struct FTransform& Transform, bool* bSuccess, const struct FPOIPlugStreamingLevelDefinition& PlugDefinition, const struct FPOIStreamingLevelDefinition& LevelDefinition, const struct FPOIStreamingLevelDefinition& CallFunc_GetPOIDefinitionByName_POIDefinition, bool CallFunc_GetPOIDefinitionByName_ReturnValue, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevelFromPath_ReturnValue, const struct FPOIPlugStreamingLevelDefinition& CallFunc_GetPlugDefinitionByName_PlugDefinition, bool CallFunc_GetPlugDefinitionByName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_bHasFinishedSpawningPOI();
	void DoesBiomeMatch(TArray<enum class EBiomeID>& BiomesAllowed, bool* DoesMatch, enum class EBiomeID Temp_byte_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void ChooseRealmProfile(int32 RealmProfileIndex, const TArray<int32>& ValidRealmIndices, int32 CurrentProfileIndex, int32 CallFunc_GetSeed_Seed, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, class UBP_SimulationMonitorComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue);
	void Initialize();
	class FString POIDataToString(struct FPOIData& POIData, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void ApplyConfigFlags(class ABP_GameState_C* GameState, class UPersistedRealmConfig* PersistenceObject, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue_1, class UPersistedRealmConfig* CallFunc_CreatePersistenceObject_PersistenceObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetPersistenceObjectByKey_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_GetPersistenceObjectByKey_bSuccess, class UObject* CallFunc_GetPersistenceObjectByKey_PersistedObject, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, class UPersistedRealmConfig* K2Node_DynamicCast_AsPersisted_Realm_Config, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void DebugPOICounts();
	void AllLevelsLoaded();
	void Multicast_DisplayPOIList(TArray<class FString>& POIList);
	void TrackingRunningWorld();
	void OnRealmSettingsReady(struct FRealmSettings& RealmSettings);
	void OnRRPTimeout();
	void ExecuteUbergraph_BP_RuntimeRealmSystemComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsTrackingRunningWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FString>& K2Node_CustomEvent_POIList, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsTestRealm_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, TScriptInterface<class IRealmSettingsProvider> K2Node_DynamicCast_AsRealm_Settings_Provider, bool K2Node_DynamicCast_bSuccess, const struct FRealmSettings& K2Node_CustomEvent_RealmSettings, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue_1, class URealmSettingsProcessor* CallFunc_GetRealmSettingsProcessor_Processor, bool CallFunc_GetRealmSettingsProcessor_ProcessorFound, TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput, TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void POIStreamingSpawned__DelegateSignature();
	void FinishedPlacingPOIs__DelegateSignature();
	void ConfigReady__DelegateSignature();
};

}


