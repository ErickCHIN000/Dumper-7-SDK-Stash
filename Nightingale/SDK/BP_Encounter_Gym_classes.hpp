#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x328 - 0x2A0)
// BlueprintGeneratedClass BP_Encounter_Gym.BP_Encounter_Gym_C
class ABP_Encounter_Gym_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UEncounterDataAsset*>           EncounterDataAssets;                               // 0x2C0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TScriptInterface<class IEncounterManagerInterface> EncounterManagerInterface;                         // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_RuntimeRealmSystemComponent_C*     RuntimeRealmSystem;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AStreamingLevelProxyActor*             StreamedLevel;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        EncounterIndexToSpawn;                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlugIndexToSpawn;                                  // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEncounterAssetsLoaded;                           // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AEncounterConfig*                      SpawnedEncounterConfig;                            // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlugCollectionAsset*>          PlugCollections;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPlugAssetPartition*                   PlugPartition;                                     // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_Gym_C* GetDefaultObj();

	void LoadPlugPartition(int32 Temp_int_Array_Index_Variable, class UPlugAssetPartition* CallFunc_SpawnObject_ReturnValue, class UPlugCollectionAsset* CallFunc_Array_Get_Item, bool CallFunc_Load_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void AreEncounterAssetsLoaded(bool* AssetsLoaded, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnPlugLevelSteamed(class AStreamingLevelProxyActor* StreamedProxy, TArray<class AEncounterConfig*>& CallFunc_GetAllActorsOfClass_OutActors, class AEncounterConfig* CallFunc_Array_Get_Item, class UEncounterDataAsset* CallFunc_Array_Get_Item_1);
	void SpawnEncounter_Internal(class FName PlugName, const struct FPOIPlugStreamingLevelDefinition& PlugDefinition, const struct FSoftLevelPath& LevelPath, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CopyPlugFromPartition_bFound, const struct FPOIPlugStreamingLevelDefinition& CallFunc_CopyPlugFromPartition_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UEncounterDataAsset* CallFunc_Array_Get_Item, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FPOIStreamingLevelDefinition& K2Node_MakeStruct_POIStreamingLevelDefinition, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevelFromPath_ReturnValue);
	void OnRep_EncounterDataAssets(bool CallFunc_AreEncounterAssetsLoaded_AssetsLoaded, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void OnManagersReady(bool Success);
	void OnEncounterDataAssetsLoaded();
	void ClearEncounter();
	void SpawnEncounter(int32 EncounterIndex, class FName PlugName);
	void ExecuteUbergraph_BP_Encounter_Gym(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TArray<class UEncounterDataAsset*>& CallFunc_GetEncounterDataAssets_DataAssets, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class IInterface> Temp_class_Variable, bool K2Node_CustomEvent_Success, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 K2Node_CustomEvent_EncounterIndex, class FName K2Node_CustomEvent_PlugName, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_GetLoadedLevelInstanceName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue);
	void OnEncounterAssetsLoaded__DelegateSignature();
};

}


