#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x400 - 0x220)
// BlueprintGeneratedClass Action_SpellThrow_Base.Action_SpellThrow_Base_C
class UAction_SpellThrow_Base_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DefaultFX;                                         // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SelectedFX;                                        // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightHandAction;                                   // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FXCollection;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayOnEndEvents;                                   // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FX_HandSocket_L;                                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FX_HandSocket_R;                                   // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FX_SigilSocket_L;                                  // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FX_SigilSocket_R;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_ChannelingInst;                              // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                OwningActor;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           GrenadeMod;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakElementalType                 SpellElement;                                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_SpellStart;                                  // 0x2A8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_SpellChannelingStart;                        // 0x2F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_SpellChannelingStop;                         // 0x348(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_SpellCast;                                   // 0x398(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FWwisePlaybackInstance                Audio_StartCastInst;                               // 0x3E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Base_C* GetDefaultObj();

	void DeterminSnapLocation(class AActor* Actor, class USceneComponent** Component, class FName* Socket, bool Temp_bool_Variable, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, class FName Temp_name_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class FName Temp_name_Variable1, bool Temp_bool_Variable1, class USceneComponent* K2Node_Select_Default, class FName K2Node_Select1_Default);
	void LockSpellActions(bool EnableLocks, bool IsBringingUpWeapon, enum class EGbxActionEndState EndState, class FName SpellLockRight, class FName SpellLock, class FName MeleeLockRight, class FName MeleeLock, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable1, class FName K2Node_Select_Default, class AActor* CallFunc_K2_GetActor_ReturnValue, class FName K2Node_Select1_Default, class AActor* CallFunc_K2_GetActor_ReturnValue1);
	void Audio_StopChanneling(float TransitionDuration, class UWwiseEvent* WwiseEvent, bool CallFunc_IsValid_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void GetSpellElement(class UObject* Object, enum class EOakElementalType* ReturnedElement, bool Temp_bool_Variable, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UInventorySlotData* Temp_object_Variable, class UInventorySlotData* Temp_object_Variable1, class UClass* CallFunc_GetSpellDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UInventorySlotData* K2Node_Select_Default, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1);
	void Audio_FailSpell(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, bool UseSigilSocket, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetSpellSocket_Socket, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void Audio_CastSpell(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, bool UseSigilSocket, class UWwiseEvent* LocalWwiseEvent, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void Audio_StartChanneling(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, bool UseSigilSocket, class FName CallFunc_GetSpellSocket_Socket, bool CallFunc_IsAudioPlaying_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
	void Audio_StartCast(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, bool UseSigilSocket, class FName CallFunc_GetSpellSocket_Socket, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
	class UParticleSystem* GetCollectionFX(class AActor* Actor, class UClass* Collection, bool Temp_bool_Variable, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, class UInventorySlotData* Temp_object_Variable, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UInventorySlotData* Temp_object_Variable1, class UInventorySlotData* K2Node_Select_Default, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue);
	void PlayFX(class AActor* Actor, class UParticleSystem* FX, bool Play1stFX, bool Play3rdFX, bool SigilSocket, class UParticleSystemComponent** OnestFXComponent, class UParticleSystemComponent** ThreerdFXComponent, class FName* Socket, class UParticleSystemComponent* ThreerdFXComp, class UParticleSystemComponent* OnestFXComp, class FName CallFunc_GetSpellSocket_Socket, class FName CallFunc_GetSpellSocket_Socket1, class FName CallFunc_GetSpellSocket_Socket2, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
	void GetSpellFX(class AActor* Actor, class UParticleSystem** SpellActionFX, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSpellSocket(bool UseSigilSocket, class FName* Socket, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class FName K2Node_Select_Default, class FName K2Node_Select1_Default, class FName K2Node_Select2_Default);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBeginBringUpWeapon(class AActor* Actor);
	void ExecuteUbergraph_Action_SpellThrow_Base(int32 EntryPoint, class AActor* K2Node_Event_Actor2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetSpellFX_SpellActionFX, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket);
};

}


