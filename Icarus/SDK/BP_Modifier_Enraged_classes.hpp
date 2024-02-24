#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Enraged.BP_Modifier_Enraged_C
class UBP_Modifier_Enraged_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_Enraged_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ModifierRemoved_ReturnValue);
	void ModifierTick(float DeltaTime);
	void InitComponent();
	void ExecuteUbergraph_BP_Modifier_Enraged(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ABP_NPC_RockDog_Character_C* K2Node_DynamicCast_AsBP_NPC_Rock_Dog_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime);
};

}


