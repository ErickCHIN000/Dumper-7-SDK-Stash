#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x7E0 - 0x708)
// BlueprintGeneratedClass BP_AoePayload_Dispellable_Eoten.BP_AoePayload_Dispellable_Eoten_C
class ABP_AoePayload_Dispellable_Eoten_C : public ABP_AoePayload_Dispellable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x708(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_Wildlife_Eoten_C*         Eoten;                                             // 0x710(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LBrambleInt;                                       // 0x718(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_7B44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Telltime;                                          // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureCreatedObstacle_Bramble_C* WallObject;                                        // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecDef               BrambleAbility;                                    // 0x730(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TellHandle;                                        // 0x7C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        TellInt;                                           // 0x7D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Creature_Wildlife_Eoten_Apex_C*    ElderEoten;                                        // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AoePayload_Dispellable_Eoten_C* GetDefaultObj();

	void BrambleWallSpawnAudio(const struct FVector& AudioLocation, class UAkAudioEvent* AkEvent, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void BrambleWallBuildUpAudio(const struct FVector& AudioLocation, int32 Temp_int_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, class UAkAudioEvent* Temp_object_Variable_4, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void BeginFadeIn(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureCreatedObstacle_Bramble_C* CallFunc_FinishSpawningActor_ReturnValue);
	void BeginFadeOut(double TimeOverride, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue);
	void CrossServerDestroySelf(bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void CustomEvent_1(class AActor* DestroyedActor);
	void CustomEvent_2(class ANWXAICharacter* AICharacter);
	void CustomEvent_0();
	void CustomEvent_3();
	void ExecuteUbergraph_BP_AoePayload_Dispellable_Eoten(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable_1, int32 Temp_int_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class ANWXAICharacter* K2Node_CustomEvent_AICharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable_7, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, double CallFunc_Multiply_IntFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_2, const struct FVector& CallFunc_TransformLocation_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_1, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid_1, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_1, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point_1, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation_1, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor_1, bool CallFunc_NVFX_SpawnSystem_ReturnValue_1, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned_1, double K2Node_VariableSet_TickDamage_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, double K2Node_VariableSet_TickDamage_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2);
};

}


