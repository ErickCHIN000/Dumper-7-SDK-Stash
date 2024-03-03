#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass AN_UpdateArrow.AN_UpdateArrow_C
class UAN_UpdateArrow_C : public UAnimNotify
{
public:
	bool                                         AttachToHand;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ArrowVisibility;                                   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAN_UpdateArrow_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ABP_CombatCharacter_C* L_CombatCharacter, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetBowStringSocketName_Name, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
};

}


