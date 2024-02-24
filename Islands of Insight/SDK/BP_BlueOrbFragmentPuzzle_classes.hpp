#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5B0 - 0x578)
// BlueprintGeneratedClass BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C
class ABP_BlueOrbFragmentPuzzle_C : public ABlueOrbFragmentPuzzle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPuzzleBoundsComponent*                PuzzleBounds;                                      // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMarkerEmitter*                        MarkerEmitter;                                     // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Solved_Timeline_Solved_CE6CD8CC45A21E1C17F5499C7DF4C643; // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Solved_Timeline__Direction_CE6CD8CC45A21E1C17F5499C7DF4C643; // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Solved_Timeline;                                   // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FindTimeline_Solved_6B3389864D9B3803CD65F39A4103E96D; // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FindTimeline__Direction_6B3389864D9B3803CD65F39A4103E96D; // 0x5A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FindTimeline;                                      // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BlueOrbFragmentPuzzle_C* GetDefaultObj();

	void FindTimeline__FinishedFunc();
	void FindTimeline__UpdateFunc();
	void Solved_Timeline__FinishedFunc();
	void Solved_Timeline__UpdateFunc();
	void BPI_FoundTrinket(class UStaticMeshComponent* Trinket, bool bLoadingFromPersistence);
	void BP_OnSolved_Client();
	void ExecuteUbergraph_BP_BlueOrbFragmentPuzzle(int32 EntryPoint, class UStaticMeshComponent* K2Node_Event_trinket, bool K2Node_Event_bLoadingFromPersistence);
};

}


