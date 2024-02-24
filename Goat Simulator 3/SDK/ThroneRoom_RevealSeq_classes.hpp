#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass ThroneRoom_RevealSeq.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_12(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_11(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_10(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_ThroneRoom_Scanner_C* BP_ThroneRoom_Scanner);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_ThroneRoom_MainDoors_C* BP_ThroneRoom_MainDoors);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_ThroneRoom_MainDoors_C* BP_ThroneRoom_MainDoors);
	void OpenDoors(class ABP_ThroneRoom_MainDoors_C* BP_ThroneRoom_MainDoors);
	void FadeOut(class ABP_ThroneRoom_Scanner_C* BP_ThroneRoom_Scanner);
	void OpenDoorSoundTrigger(class ABP_ThroneRoom_MainDoors_C* BP_ThroneRoom_MainDoors);
	void ActivateTorch(class ABP_ThroneRoom_Torch_C* BP_ThroneRoom_Torch);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class ABP_ThroneRoom_Torch_C* K2Node_CustomEvent_BP_ThroneRoom_Torch, class ABP_ThroneRoom_MainDoors_C* K2Node_CustomEvent_BP_ThroneRoom_MainDoors_1, class ABP_ThroneRoom_Scanner_C* K2Node_CustomEvent_BP_ThroneRoom_Scanner, class ABP_ThroneRoom_MainDoors_C* K2Node_CustomEvent_BP_ThroneRoom_MainDoors);
};

}


