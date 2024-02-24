#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4B8 - 0x4A0)
// BlueprintGeneratedClass AIActionOuterComponent.AIActionOuterComponent_C
class UAIActionOuterComponent_C : public UTTLAIActionOuterComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class AArsenalCharacter_C*                   SelfArsenal;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLAIController*                      SelfController;                                    // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIActionOuterComponent_C* GetDefaultObj();

	bool FireOuterSupportWeapon(class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_FireOuterSupportWeapon_ReturnValue, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryStartAim_isStartAim);
	bool FireOuterSubWeapon(class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FireOuterSubWeapon_ReturnValue);
	void AttackOuterWeapon(bool IsMainWeapon, bool* Result, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class UArsenalFireControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_ProcessFireInput_Result, bool CallFunc_IsValid_ReturnValue2);
	bool FireOuterMainWeapon(bool CallFunc_AttackOuterWeapon_Result, bool CallFunc_FireOuterMainWeapon_ReturnValue);
	void FinishAttackWeaponRightBP();
	void FinishAttackWeaponShoulderBP();
	void FinishAttackWeaponLeftBP();
	void StartGetOnBP();
	void ExecuteUbergraph_AIActionOuterComponent(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AAIController* CallFunc_GetAIController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLAIController* K2Node_DynamicCast_AsTTLAIController, bool K2Node_DynamicCast_bSuccess2, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UTTLArsenalMovementComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTTLAIActionComponent* CallFunc_GetComponentByClass_ReturnValue3);
};

}


