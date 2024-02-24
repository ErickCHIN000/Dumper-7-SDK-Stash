#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x46C - 0x3A8)
// BlueprintGeneratedClass Usable_Crypt.Usable_Crypt_C
class AUsable_Crypt_C : public AUsable_Chest_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      TerrorRadius;                                      // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OnUsedParticles;                                   // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBeenUsed;                                       // 0x3D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EmittingTerrorToPlayer;                            // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CharacterToTerrorize;                              // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SecondsSinceLastHeartbeat;                         // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SecondsBetweenHeartbeats;                          // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousDistanceFromTerror;                        // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastHeartbeatVolume;                               // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         CurrentlyPlayingMusicRef;                          // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousMusicVolumeMultiplier;                     // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CryptDefaultNotificationTimeout;                   // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       DemonicWhispers;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeartbeatRadiusEnabled_;                         // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2E20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAdvancedEnemySpawner_C*>       Spawners;                                          // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Spawn_Delay;                                       // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WhisperCurrentVolume;                              // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceTo;                                        // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SphereRadius;                                      // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ControllerAudio_C*                 BP_ControllerAudio_Whispers;                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Whispers;                                    // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Whispers_StartTime;                                // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Crypt_C* GetDefaultObj();

	void DualSense_Whispers_FadeIn(bool CallFunc_IsValid_ReturnValue);
	void DualSense_Whispers_FadeOut(bool CallFunc_IsValid_ReturnValue);
	void DualSense_Whispers_Create(uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void DualSense_Heartbeat(uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void HeartbeatAndWhisphers(bool Local_ShouldHeartbeat, bool Local_NotUsable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float CallFunc_MapRangeClamped_ReturnValue, bool K2Node_Select_Default, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_GetScaledSphereRadius_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float K2Node_Select_Default_1, float CallFunc_FInterpTo_ReturnValue_1, float K2Node_Select_Default_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void EndOutlineFocus(bool* Success);
	void BeginOutlineFocus(bool* Success);
	void AdjustWhisperVolume(bool WasActorUsed_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetIsActorUsable(bool* IsUsable, bool CallFunc_GetIsActorUsable_IsUsable);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
	void OnWasUsed(bool* Success, float LocalRotation, bool CallFunc_OnWasUsed_Success);
	void ReceiveBeginPlay();
	void OnUsed();
	void OpenChest(bool WasFromBeginPlay);
	void CreateDemonicWhispersAudio();
	void TerrorRadiusBeginOverlap();
	void TerrorRadiusEndOverlap();
	void ForceTerrorRadiusEnd();
	void BndEvt__TerrorRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__TerrorRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void StartPraying(class AZero_Base_C* Character);
	void StopPraying(class AZero_Base_C* Character);
	void ExecuteUbergraph_Usable_Crypt(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IPuzzleActivationInterface_C> K2Node_DynamicCast_AsPuzzle_Activation_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_WasFromBeginPlay, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class AAdvancedEnemySpawner_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsActorUsable_IsUsable, const struct FTransform& Temp_struct_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_2, class UAudioComponent* CallFunc_AddComponent_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsValid_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_4, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable, class AZero_Base_C* K2Node_CustomEvent_Character_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AZero_Base_C* K2Node_CustomEvent_Character);
};

}


