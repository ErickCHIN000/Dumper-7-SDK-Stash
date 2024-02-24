#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass Tractor_Seq.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AAmbientSound* SC_Vehicle_Truck_Engine);
	void SequenceEvent_0(class ABP_GenericNPC_C* Target);
	void SC_Vehicle_Truck_Engine_Event_0(class AAmbientSound* SC_Vehicle_Truck_Engine);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AAmbientSound* K2Node_CustomEvent_SC_Vehicle_Truck_Engine);
};

}


