#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Tamed.BP_Modifier_Tamed_C
class UBP_Modifier_Tamed_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_Tamed_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Tamed(int32 EntryPoint, float K2Node_Event_DeltaTime);
};

}


