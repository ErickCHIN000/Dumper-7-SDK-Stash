#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass Event_TheButterflyEffect_Seq.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Tornado_C* BP_Tornado);
	void TornadoStartSound(class ABP_Tornado_C* BP_Tornado);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_Tornado_C* K2Node_CustomEvent_BP_Tornado);
};

}


