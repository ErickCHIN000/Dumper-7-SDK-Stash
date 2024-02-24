#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x68 - 0x40)
// BlueprintGeneratedClass EEC_SetInitialRespitePoint.EEC_SetInitialRespitePoint_C
class UEEC_SetInitialRespitePoint_C : public UNWXGameplayEffectExecutionCalculation
{
public:
	struct FPlayerLoadoutDataReference           DebugLoadout;                                      // 0x40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEEC_SetInitialRespitePoint_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UBP_RealmEffectComponent_C* LEffectComponent, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXOwnedPlayerStart* CallFunc_CreateRespitePoint_ReturnValue, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


