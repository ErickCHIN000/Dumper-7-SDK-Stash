#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1208 - 0x11F0)
// BlueprintGeneratedClass LightBrigandBase_Tutorial.LightBrigandBase_Tutorial_C
class ALightBrigandBase_Tutorial_C : public ALightBrigandBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FadeOutTimeline_NewTrack_0_DD639A1140400DA4EDEF79B9B6034D54; // 0x11F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeOutTimeline__Direction_DD639A1140400DA4EDEF79B9B6034D54; // 0x11FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeOutTimeline;                                   // 0x1200(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightBrigandBase_Tutorial_C* GetDefaultObj();

	void FadeOutTimeline__FinishedFunc();
	void FadeOutTimeline__UpdateFunc();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_LightBrigandBase_Tutorial(int32 EntryPoint, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim);
};

}


