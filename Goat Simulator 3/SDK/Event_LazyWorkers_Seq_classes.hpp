#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass Event_LazyWorkers_Seq.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker2);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker4);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker3);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class AAmbientSound* Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AAmbientSound* Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class AAmbientSound* Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_GenericNPC_LazyWorker_C* Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class UObject* Target);
	void PlaySequenceSFX(class AAmbientSound* Target);
	void WakeNPCThatWasUnderContainer(class ABP_GenericNPC_LazyWorker_C* Target);
	void ReplaceTheWorkersWithRealNPCs(class UObject* Target, class ABP_LazyWorkers_Worker_C* K2Node_DynamicCast_AsBP_Lazy_Workers_Worker, bool K2Node_DynamicCast_bSuccess);
	void BP_LazyWorkers_Worker3_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker3);
	void BP_LazyWorkers_Worker4_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker4);
	void BP_LazyWorkers_Worker2_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker2);
	void BP_LazyWorkers_Worker_Event_0(class ABP_LazyWorkers_Worker_C* BP_LazyWorkers_Worker);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker3, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker4, class ABP_LazyWorkers_Worker_C* K2Node_CustomEvent_BP_LazyWorkers_Worker2);
};

}


