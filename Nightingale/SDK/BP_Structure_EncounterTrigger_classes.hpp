#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0xB18 - 0xA38)
// BlueprintGeneratedClass BP_Structure_EncounterTrigger.BP_Structure_EncounterTrigger_C
class ABP_Structure_EncounterTrigger_C : public ABP_Structure_Functional_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  VFXAnchor;                                         // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_StructureEncounterTriggerState  StructureState;                                    // 0xA48(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         PieceActive;                                       // 0xA49(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlayerInteracted;                                // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScopedAkComponent*                    CachedEncounterScopedAk;                           // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DamageTriggersInteraction;                         // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UNiagaraComponent*>  ActiveEffect;                                      // 0xA70(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FGameplayTag, struct FS_EncounterPresentation> AffinityMap;                                       // 0xAC0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          PaletteAndFaction;                                 // 0xB10(0x8)(Edit, BlueprintVisible, Net, SaveGame, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_EncounterTrigger_C* GetDefaultObj();

	void InitializeFromSDA(bool CallFunc_GetEncounterData_bIsValid, class UStructureEncounterSettings* CallFunc_GetEncounterData_OutEncounterData);
	void GetEncounterScopedAk(class UScopedAkComponent** ScopedAk, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void OnRep_StructureState(bool K2Node_SwitchEnum_CmpSuccess);
	void CreateVFX(const struct FGameplayTag& Row, const struct FS_EncounterAVFXParams& AVFXParams, class FName VFXKey, bool SpawnedAudio, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_CreateEncounterVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterVFX_NiagaraSystem);
	void CreateSFX(const struct FGameplayTag& Row, const struct FS_EncounterAVFXParams& AVFXParams, bool SpawnedAudio, bool CallFunc_IsDedicatedServer_ReturnValue);
	void CreateAVFX(const struct FGameplayTag& Row, const struct FS_EncounterAVFXParams& AVFXParams, class FName VFXKey, bool SpawnedAudio, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem);
	void OnPlayerInteraction(class APawn* Pawn);
	void Initialize_Enum();
	void Advertise_Enum();
	void Activated_Enum();
	void Deactivated_Enum();
	void Completed_Enum();
	void Reset_Enum();
	void Multicast_DeactivateComponent(class FName TargetComponent);
	void Multicast_CleanupVFX();
	void InteractVFX();
	void SpawnVFX();
	void CleanupVFX();
	void DeactivateComponent(class FName TargetComponent);
	void DestroyComponent(class FName TargetComponent);
	void ReceiveBeginPlay();
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void Play_Interact_Sound();
	void UpdateActive(bool Active);
	void Initialize_Structure_Trigger(class UObject* Structure);
	void SSMReady(class AManagerBase* Manager, bool bIsReady);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void PerformDirtyRealmReset();
	void FinishSpawnFromContext(struct FStructureEncounterSpawnContext& SpawnContext);
	void ExecuteUbergraph_BP_Structure_EncounterTrigger(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSubclassOf<class AManagerBase> Temp_class_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_TargetComponent_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName K2Node_CustomEvent_TargetComponent_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, class FName K2Node_CustomEvent_TargetComponent, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_Active, class UObject* K2Node_CustomEvent_Structure, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_1, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, const struct FStructureEncounterSpawnContext& K2Node_Event_SpawnContext);
	void OnPlayerInteracted__DelegateSignature(class ABP_Structure_EncounterTrigger_C* Triggering_Structure);
};

}


