#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_ToggleCombat.AN_ToggleCombat_C
class UAN_ToggleCombat_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_ToggleCombat_C* GetDefaultObj();

	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ToggleIsInCombat_Dummy);
};

}


