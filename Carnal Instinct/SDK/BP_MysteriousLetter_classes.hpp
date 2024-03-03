#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// BlueprintGeneratedClass BP_MysteriousLetter.BP_MysteriousLetter_C
class ABP_MysteriousLetter_C : public ABP_QuestItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_MysteriousLetter_C* GetDefaultObj();

	void Remove_Interaction();
	void ExecuteUbergraph_BP_MysteriousLetter(int32 EntryPoint);
};

}


