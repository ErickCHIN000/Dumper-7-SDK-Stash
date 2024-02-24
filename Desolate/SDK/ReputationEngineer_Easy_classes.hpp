#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x420 - 0x418)
// BlueprintGeneratedClass ReputationEngineer_Easy.ReputationEngineer_Easy_C
class AReputationEngineer_Easy_C : public AGenericItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AReputationEngineer_Easy_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_ReputationEngineer_Easy(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


