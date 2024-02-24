#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x101 - 0xF8)
// BlueprintGeneratedClass BP_DialoguePersistenceComponent.BP_DialoguePersistenceComponent_C
class UBP_DialoguePersistenceComponent_C : public UPersistentDataComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         PuckIntroComplete;                                 // 0x100(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DialoguePersistenceComponent_C* GetDefaultObj();

	void OnRep_PuckIntroComplete();
	void SetPuckIntroComplete();
	void ExecuteUbergraph_BP_DialoguePersistenceComponent(int32 EntryPoint);
};

}


