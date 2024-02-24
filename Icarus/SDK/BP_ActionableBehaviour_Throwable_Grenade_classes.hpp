#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x471 - 0x461)
// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C
class UBP_ActionableBehaviour_Throwable_Grenade_C : public UBP_ActionableBehaviour_Throwable_C
{
public:
	uint8                                        Pad_92C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsPinPulled;                                       // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Throwable_Grenade_C* GetDefaultObj();

	void IsCharging(bool* Charging, bool CallFunc_IsCharging_Charging, bool CallFunc_BooleanAND_ReturnValue);
	void RequestThrow(bool CallFunc_CanThrow_CanThrow);
	void CanThrow(bool* CanThrow, bool CallFunc_CanThrow_CanThrow, bool CallFunc_BooleanAND_ReturnValue);
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, class AActor* AnimInstancePawn);
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade(int32 EntryPoint, const struct FAnimNotifyEvent& K2Node_Event_Notify, class AActor* K2Node_Event_AnimInstancePawn, class UIcarusAnimNotify* K2Node_DynamicCast_AsIcarus_Anim_Notify, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchString_CmpSuccess);
};

}


