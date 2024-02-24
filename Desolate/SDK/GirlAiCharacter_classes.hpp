#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1148 - 0x112C)
// BlueprintGeneratedClass GirlAiCharacter.GirlAiCharacter_C
class AGirlAiCharacter_C : public ABaseAiCharacter_C
{
public:
	uint8                                        Pad_AB9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            TargetCharacter;                                   // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGirlAiCharacter_C* GetDefaultObj();

	void SetTargetCharacter(class ACharacter* Character);
	void LookAtTargetCharacter(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GirlAiCharacter(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds);
};

}


