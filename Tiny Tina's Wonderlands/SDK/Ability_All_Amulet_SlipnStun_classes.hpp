#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB6 (0x1E8 - 0x132)
// BlueprintGeneratedClass Ability_All_Amulet_SlipnStun.Ability_All_Amulet_SlipnStun_C
class UAbility_All_Amulet_SlipnStun_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_414D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Amulet_SacSkeep; // 0x140(0x28)(None)
	class UOakCharacterMovementComponent*        CharacterMovement;                                 // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         Character;                                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BonusDamageScaler;                                 // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ShockSlideAttachPoint;                             // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_L_Foot_Slide;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FXRFoot;                                           // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Amulet_SlipnStun; // 0x1A0(0x28)(None)
	class UWwiseAudioComponent*                  Character_Audio;                                   // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                WwisePlaybackInst;                                 // 0x1D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_All_Amulet_SlipnStun_C* GetDefaultObj();

	void StartSliding();
	void Event_StopSliding(struct FSlideEndedDetails& Details);
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void SpawnSplat();
	void ApplyStaticShock();
	void StaticStorm_OnCausedMeleeDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_All_Amulet_SlipnStun(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FSlideEndedDetails& K2Node_CustomEvent_Details1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AOakCharacter* K2Node_DynamicCast_AsOak_Character1, bool K2Node_DynamicCast_bSuccess1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue3, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess3);
};

}


