#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x420 - 0x418)
// BlueprintGeneratedClass ReputationBiologist_Hard.ReputationBiologist_Hard_C
class AReputationBiologist_Hard_C : public AGenericItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AReputationBiologist_Hard_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_ReputationBiologist_Hard(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


