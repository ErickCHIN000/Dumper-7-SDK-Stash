#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x180 - 0x170)
// BlueprintGeneratedClass ArsenalFireControlComponent.ArsenalFireControlComponent_C
class UArsenalFireControlComponent_C : public UTTLArsenalFireControlComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)
	class ABaseCharacter_C*                      Owner;                                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalFireControlComponent_C* GetDefaultObj();

	void GetShoulderWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetLeftWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetRightWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetShoulderWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue);
	void GetLeftWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue);
	void GetRightWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue);
	void GetWeaponRangeSpecialBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void ProcessSupportWeaponAttackInput(bool IsStart, bool IsAIControl, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryCatchGrenadeEitherHand_Succeed, bool CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult, bool CallFunc_TryStartAim_isStartAim, class ATTLWeaponBase* CallFunc_GetCurrentSupportWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanSupportInput_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetCloseRangeComboAttackLeftBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetCloseRangeComboAttackRightBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void EndShoulderAttack(bool CallFunc_IsKnockBackDamage_ReturnValue, class ATTLActiveMissileLauncher* K2Node_DynamicCast_AsTTLActive_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetWeaponRangeShoulderBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetWeaponRangeLeftBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void GetWeaponRangeRightBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void CheckShoulderFiring(bool CallFunc_IsReloading_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ProcessShoulderAttackInput(bool IsStart, bool CallFunc_ProcessShoulderInputCPP_ReturnValue);
	void ProcessFireInput(bool IsLeft, bool* Result, bool ReturnValue, bool IsEnabledGrenade, bool CallFunc_ProcessHandInputCPP_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ArsenalFireControlComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
};

}


