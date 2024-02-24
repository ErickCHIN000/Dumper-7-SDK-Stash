#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3A0 - 0x398)
// BlueprintGeneratedClass BP_Modifier_Drink.BP_Modifier_Drink_C
class UBP_Modifier_Drink_C : public UBP_Modifier_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_Drink_C* GetDefaultObj();

	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Modifier_Drink(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
};

}


