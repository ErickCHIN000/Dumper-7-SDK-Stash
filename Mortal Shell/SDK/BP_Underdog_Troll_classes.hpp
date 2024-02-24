#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x11A0 - 0x1188)
// BlueprintGeneratedClass BP_Underdog_Troll.BP_Underdog_Troll_C
class ABP_Underdog_Troll_C : public ABP_UnderdogBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1188(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Overlapping;                                       // 0x1190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimerEnabled;                                      // 0x1191(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EF7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLocation;                                   // 0x1194(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Underdog_Troll_C* GetDefaultObj();

	void UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void DisableTrolling();
	void ReceiveTick(float DeltaSeconds);
	void ThrowSword();
	void OverlapStart();
	void OverlapEnd();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Underdog_Troll(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds);
};

}


