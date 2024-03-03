#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x711 - 0x6F0)
// BlueprintGeneratedClass BP_MageAI.BP_MageAI_C
class ABP_MageAI_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExtendedStatComponent_C*              ExtendedMana;                                      // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilityComponent_C*                   AbilityComponent;                                  // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTargetable;                                     // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_MageAI_C* GetDefaultObj();

	void CanCastAbility(bool* Result, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetMagicDamage(float* Value, float CallFunc_GetStatValue_Value);
	void GetCastingSpeed(float* Value, float CallFunc_GetStatValue_Value);
	void IsTargetable(bool* Return_value, bool CallFunc_IsTargetable_return_value, bool CallFunc_BooleanAND_ReturnValue);
	void GetDesiredRotation(struct FRotator* Rotation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_GetIsCasting_Result, const struct FTransform& CallFunc_GetEffectTransform_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_GetDesiredRotation_Rotation, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_0_OnAbilityStarted__DelegateSignature();
	void BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_1_OnAbilityEnded__DelegateSignature(enum class E_AbilityEndResult Result);
	void BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_2_OnManaConsumed__DelegateSignature(float Amount);
	void BndEvt__StateManager_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(enum class E_State PrevState, enum class E_State NewState);
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
	void MakeUntargetable(float Duration);
	void ExecuteUbergraph_BP_MageAI(int32 EntryPoint, enum class E_State CallFunc_GetState_State, enum class E_AbilityEndResult K2Node_ComponentBoundEvent_Result, float K2Node_ComponentBoundEvent_Amount, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class E_State K2Node_ComponentBoundEvent_PrevState, enum class E_State K2Node_ComponentBoundEvent_NewState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, enum class EMovementMode K2Node_Event_PrevMovementMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_PrevCustomMode, uint8 K2Node_Event_NewCustomMode, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, float K2Node_CustomEvent_Duration, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


