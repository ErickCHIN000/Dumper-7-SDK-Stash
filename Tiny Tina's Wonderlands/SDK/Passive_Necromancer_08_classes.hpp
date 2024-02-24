#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x290 (0x558 - 0x2C8)
// BlueprintGeneratedClass Passive_Necromancer_08.Passive_Necromancer_08_C
class UPassive_Necromancer_08_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	float                                        ProcChance;                                        // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3035[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProcChanceHandle;                                  // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        BuffDuration;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BuffDurationHandle;                                // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SpawnTimer;                                        // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_303F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 SpawnTimerHandle;                                  // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGbxAbility*                           NecromancerFeat;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakGameInstance*                      GameInstance;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3044[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x350(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FEnvQueryParams                       EQS;                                               // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 ProjectileRadiusHandle;                            // 0x438(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 ProjectileDamageHandle;                            // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       EQS_Enemy;                                         // 0x468(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 DurationHandle;                                    // 0x520(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 HasFlyerTags;                                      // 0x538(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_08_C* GetDefaultObj();

	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, class AActor* CallFunc_GetAbilityOwner_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue);
	void GbxAsyncRequest_Spawned_7F57AD99423A890B6D676A95C01429E5(class AActor* Actor, int32 InstanceIndex);
	void OnActivated();
	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void SpawnNewHydra();
	void ExecuteUbergraph_Passive_Necromancer_08(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess2, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FVector& CallFunc_FindNavMeshPoint_Result, bool CallFunc_FindNavMeshPoint_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue1, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, int32 CallFunc_GetManagedActorCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess3, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer, bool K2Node_DynamicCast_bSuccess4, class UGbxAbility* CallFunc_GetClassFeat_Res, class AActor* CallFunc_GetDemiLich_Ref, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool CallFunc_IsAbilityTimerActive_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue4, float CallFunc_GetDataTableValueFromHandle_ReturnValue5, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess5, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

}


