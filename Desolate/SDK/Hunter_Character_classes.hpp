#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x11D5 - 0x11A9)
// BlueprintGeneratedClass Hunter_Character.Hunter_Character_C
class AHunter_Character_C : public ABaseAggressiveAiCharacter_C
{
public:
	uint8                                        Pad_1990[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       SoClose_Music;                                     // 0x11B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_OW_HunterTeleport;                              // 0x11C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Teleport_Location;                                 // 0x11C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnemyLocked;                                     // 0x11D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AHunter_Character_C* GetDefaultObj();

	bool OnDeathState(bool CallFunc_OnDeathState_ReturnValue);
	void UpdateStealth(bool Value);
	bool UpdateAttackState(float DeltaTime, bool CallFunc_UpdateAttackState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	bool OnAttackState(bool CallFunc_OnAttackState_ReturnValue);
	void SetEnemyLocked(bool NewValue);
	void ReceiveBeginPlay();
	void TeleportToLocation(const struct FVector& TargetLocation, class AActor* TargetActor);
	void StartStealthEvent();
	void StopStealthEvent();
	void PlayTeleportEffects();
	void ExecuteUbergraph_Hunter_Character(int32 EntryPoint, const struct FVector& K2Node_Event_TargetLocation, class AActor* K2Node_Event_TargetActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


