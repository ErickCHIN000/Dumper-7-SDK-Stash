#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x4F8 - 0x4B8)
// BlueprintGeneratedClass BP_DeathDarkForm.BP_DeathDarkForm_C
class ABP_DeathDarkForm_C : public ACharacter
{
public:
	uint8                                        Pad_E65[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_SmearEffect_Bounce_5426553D44E6E894041B19BB9D149A56; // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_SmearEffect_TimeDilation_5426553D44E6E894041B19BB9D149A56; // 0x4CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_SmearEffect_SmearEffectAlpha_5426553D44E6E894041B19BB9D149A56; // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_SmearEffect__Direction_5426553D44E6E894041B19BB9D149A56; // 0x4D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_SmearEffect;                              // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DarkFormMaterial;                                  // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DeathShellBP;                                      // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathDarkForm_C* GetDefaultObj();

	void CreateDarkFormMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Timeline_SmearEffect__FinishedFunc();
	void Timeline_SmearEffect__UpdateFunc();
	void CoolEffects();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_DeathDarkForm(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class ARagdollImpactEffect_C* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


