#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x320 - 0x2E4)
// BlueprintGeneratedClass Ability_Player_BaseBuff.Ability_Player_BaseBuff_C
class AAbility_Player_BaseBuff_C : public AAbility_Player_C
{
public:
	uint8                                        Pad_1A93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_StatType                        StatType;                                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BuffValue;                                         // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuffDuration;                                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BuffColor;                                         // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BuffCastParticle;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound;                                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_Player_BaseBuff_C* GetDefaultObj();

	void ApplyBuff(class AAE_Buff_C* L_Buff, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, enum class E_StatType CallFunc_GetStatType_StatType, TArray<class AAE_Buff_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AAE_Buff_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AAE_Buff_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Released();
	void SpawnParticle();
	void Effect();
	void PlaySound();
	void ExecuteUbergraph_Ability_Player_BaseBuff(int32 EntryPoint, class UAnimMontage* CallFunc_GetAbilityMontage_Montage, float CallFunc_PlayAbilityMontage_Duration, bool CallFunc_StartAbility_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


