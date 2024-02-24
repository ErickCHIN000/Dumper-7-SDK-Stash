#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x990 - 0x988)
// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C
class UFireProjectileComponent_MagicSMG_Lightning_C : public UFireProjectileComponent_MagicSMG_Base_PerShot_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x988(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFireProjectileComponent_MagicSMG_Lightning_C* GetDefaultObj();

	void DoSpecialBarrelBehavior();
	void K2_OnDeactivated();
	void K2_OnActivated();
	void OnPerformMelee_MagicSMG(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget);
	void MagicSMG_ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning(int32 EntryPoint, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bAutoReload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FOakLightBeamInitializationData& K2Node_MakeStruct_OakLightBeamInitializationData, class AActor* CallFunc_GetOwner_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue4, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData, bool K2Node_CustomEvent_bSuccess, class AActor* K2Node_CustomEvent_MeleeTarget, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}


