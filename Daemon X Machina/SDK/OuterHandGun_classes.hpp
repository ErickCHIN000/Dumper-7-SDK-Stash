#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xEE0 - 0xEC0)
// BlueprintGeneratedClass OuterHandGun.OuterHandGun_C
class AOuterHandGun_C : public ALongRangeWeaponCommon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC0(0x8)(Transient, DuplicateTransient)
	class UTTLOuterWeaponMovement*               TTLOuterWeaponMovement;                            // 0xEC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ClosingRotating;                                   // 0xED0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OldLocation;                                       // 0xED4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AOuterHandGun_C* GetDefaultObj();

	void ChargeAttackEnd();
	void ChargeAttack();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnInputStart();
	void OnInputEnd();
	void ExecuteAttack();
	void ExtraActionOnDamaged();
	void ReattachWeaponBP();
	void ExecuteUbergraph_OuterHandGun(int32 EntryPoint, float CallFunc_GetFloatValue_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


