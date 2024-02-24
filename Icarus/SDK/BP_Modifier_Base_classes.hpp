#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Base.BP_Modifier_Base_C
class UBP_Modifier_Base_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_Base_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue);
	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Base(int32 EntryPoint, float K2Node_Event_DeltaTime);
};

}


