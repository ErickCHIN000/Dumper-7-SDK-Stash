#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xA50 - 0xA24)
// BlueprintGeneratedClass RadiateDamageActor_Fissure_JaggedTooth.RadiateDamageActor_Fissure_JaggedTooth_C
class ARadiateDamageActor_Fissure_JaggedTooth_C : public ARadiateDamageActor_Fissure_C
{
public:
	uint8                                        Pad_2BF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(Transient, DuplicateTransient)
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DamageLocation;                                    // 0xA38(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MineTimerHandle;                                   // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ARadiateDamageActor_Fissure_JaggedTooth_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Event_SpawnMine();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_RadiateDamageActor_Fissure_JaggedTooth(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, const struct FHitResult& Temp_struct_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, float CallFunc_GetSpellStatusEffectChance_ReturnValue, float CallFunc_GetSpellModDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool Temp_bool_Variable1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, float CallFunc_GetSpellModRadius_ReturnValue1, float CallFunc_GetSpellStatusEffectDamage_ReturnValue1, float CallFunc_GetSpellStatusEffectChance_ReturnValue1, float CallFunc_GetSpellModDamage_ReturnValue1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
};

}


