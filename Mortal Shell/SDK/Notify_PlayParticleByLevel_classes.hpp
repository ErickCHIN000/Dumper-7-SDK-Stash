#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x80 - 0x38)
// BlueprintGeneratedClass Notify_PlayParticleByLevel.Notify_PlayParticleByLevel_C
class UNotify_PlayParticleByLevel_C : public UAnimNotify
{
public:
	TArray<enum class Enum_ParticleByLevel>      SpawnIfCurrentLevelIs;                             // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UParticleSystem*                       ParticleSystem;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocationOffset;                                    // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x5C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               Scale;                                             // 0x68(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attached;                                          // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotify_PlayParticleByLevel_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, enum class Enum_ParticleByLevel Local_CurrentLevel, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue);
};

}


