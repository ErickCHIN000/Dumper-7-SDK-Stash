#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x310 - 0x230)
// BlueprintGeneratedClass BPTrapBear.BPTrapBear_C
class ABPTrapBear_C : public ASignificanceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Trap_08;                                           // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ActivationArea;                                    // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_LightBrigand_MeshLerp_Lerp_8740F9514E09E00188BEDE8FFE70ED23; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_LightBrigand_MeshLerp__Direction_8740F9514E09E00188BEDE8FFE70ED23; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_LightBrigand_MeshLerp;                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TrapSFX;                                           // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_TrapBearHitCharacter         EHitCharacter;                                     // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2513[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      HitCharacter;                                      // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     Enemy;                                             // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasEnemy;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BrigandMeshInitialRelativeLoc;                     // 0x28C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayMontagePosition;                               // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasLightBrigand;                                   // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasVampire;                                        // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2538[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          ZeroBase;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVampire_EnemyChar_C*                  Vampire;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALightBrigandBase_C*                   LightBrigand;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHeavyBrigandBase_C*                   HeavyBrigand;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownBeforeReset;                               // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_HeavyStaggered;                       // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TImer_LightBrigand_1;                              // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TImer_LightBrigand_2;                              // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TImer_LightBrigand_3;                              // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         WasHeavyBrigand;                                   // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HeavyBrigand_HeavyStaggered;                       // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2562[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_HeavyBrigand_1;                              // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_HeavyBrigand_2;                              // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Vampire_HeavyStaggered;                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_256B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Vampire_1;                                   // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Vampire_2;                                   // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTrapBear_C* GetDefaultObj();

	void LerpLightBrigandMesh(float Lerp, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void ParalyzeHitCharacter(bool IsParalyzed_);
	void AddHitCharacterOffset(enum class Enum_TrapBearHitCharacter Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, enum class Enum_TrapBearHitCharacter Temp_byte_Variable_1, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_CheckYaw_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult);
	void SetHitCharacterRotation(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_CheckYaw_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	bool CheckYaw(float Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SetHitCharacterLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void Timeline_LightBrigand_MeshLerp__FinishedFunc();
	void Timeline_LightBrigand_MeshLerp__UpdateFunc();
	void OnNotifyEnd_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName);
	void OnNotifyBegin_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName);
	void OnInterrupted_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName);
	void OnBlendOut_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName);
	void OnCompleted_E3E4F7094E8DEF220D53BE95CBCC90FC(class FName NotifyName);
	void OnNotifyEnd_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName);
	void OnNotifyBegin_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName);
	void OnInterrupted_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName);
	void OnBlendOut_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName);
	void OnCompleted_45A214DB4B3576D7E0B66A912FFF9654(class FName NotifyName);
	void OnNotifyEnd_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName);
	void OnNotifyBegin_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName);
	void OnInterrupted_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName);
	void OnBlendOut_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName);
	void OnCompleted_2490A9FB47DB45DA8D979A9B29B7B122(class FName NotifyName);
	void OnNotifyEnd_174852434F4463EDF346C586C6926C46(class FName NotifyName);
	void OnNotifyBegin_174852434F4463EDF346C586C6926C46(class FName NotifyName);
	void OnInterrupted_174852434F4463EDF346C586C6926C46(class FName NotifyName);
	void OnBlendOut_174852434F4463EDF346C586C6926C46(class FName NotifyName);
	void OnCompleted_174852434F4463EDF346C586C6926C46(class FName NotifyName);
	void SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime);
	void BndEvt__ActivationArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Trap_Activated();
	void Trap_Activate();
	void Trap_Reset();
	void Trap_Activate_PlayerCharacter();
	void Trap_Activate_LightBrigand();
	void Trap_Activate_HeavyBrigand();
	void Trap_Activate_Vampire();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void LightBrigand_Trap_Active_1();
	void LightBrigand_Trap_Active_2();
	void LightBrigand_Trap_Active_3();
	void HeavyBrigand_Trap_Active_1();
	void HeavyBrigand_Trap_Active_2();
	void Vampire_Trap_Active_1();
	void Vampire_Trap_Active_2();
	void SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName);
	void ExecuteUbergraph_BPTrapBear(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class USoundBase* K2Node_Event_Sound_1, float K2Node_Event_Volume, float K2Node_Event_Pitch, float K2Node_Event_StartTime, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_ApplyDamage_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue, class AHeavyBrigandBase_C* K2Node_DynamicCast_AsHeavy_Brigand_Base, bool K2Node_DynamicCast_bSuccess_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AHeavyBrigandBase_C* K2Node_DynamicCast_AsHeavy_Brigand_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_1, class FName Temp_name_Variable_2, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char, bool K2Node_DynamicCast_bSuccess_5, class FName K2Node_CustomEvent_NotifyName_10, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool K2Node_SwitchEnum_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Not_PreBool_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base_1, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_SwitchEnum_CmpSuccess_1, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char_1, bool K2Node_DynamicCast_bSuccess_8, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, class FName K2Node_CustomEvent_NotifyName_13, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_2, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_Not_PreBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName Temp_name_Variable_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const struct FVector& K2Node_Event_Location, enum class Enum_ControllerAudio_Type K2Node_Event_SoundType, class USoundBase* K2Node_Event_Sound, float K2Node_Event_SoundVolume, enum class Enum_ControllerAudio_Type K2Node_Event_VibrationType, class USoundBase* K2Node_Event_Vibration, float K2Node_Event_VibrationVolume, bool K2Node_Event_AttachToComponent, bool K2Node_Event_UseSocketLocation, class FName K2Node_Event_SocketName, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26);
};

}


