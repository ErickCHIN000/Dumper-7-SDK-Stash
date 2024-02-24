#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x458 - 0x420)
// BlueprintGeneratedClass GenericNote.GenericNote_C
class AGenericNote_C : public AGenericLootItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Particle;                                          // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FNoteLearnKey                         NoteKey;                                           // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NoteText;                                          // 0x440(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGenericNote_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericNote(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


