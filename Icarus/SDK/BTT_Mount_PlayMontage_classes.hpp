#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x150 - 0x119)
// BlueprintGeneratedClass BTT_Mount_PlayMontage.BTT_Mount_PlayMontage_C
class UBTT_Mount_PlayMontage_C : public UBTTask_PlayMontage_C
{
public:
	uint8                                        Pad_29F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AnimationTag;                                      // 0x11C(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_29F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UIcarusGOAPAction>       FallbackGOAPAction;                                // 0x128(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_Mount_PlayMontage_C* GetDefaultObj();

	void GetMontage(class UAnimMontage** Montage, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_2);
};

}


