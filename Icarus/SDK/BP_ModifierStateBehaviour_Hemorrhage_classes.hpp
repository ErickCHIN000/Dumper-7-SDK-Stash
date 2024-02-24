#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_Hemorrhage.BP_ModifierStateBehaviour_Hemorrhage_C
class UBP_ModifierStateBehaviour_Hemorrhage_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_Hemorrhage_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue);
	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Hemorrhage(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}


