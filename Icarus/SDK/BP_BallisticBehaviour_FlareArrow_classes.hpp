#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x7BC - 0x7A8)
// BlueprintGeneratedClass BP_BallisticBehaviour_FlareArrow.BP_BallisticBehaviour_FlareArrow_C
class UBP_BallisticBehaviour_FlareArrow_C : public UBP_BallisticBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HadUpwardsTrajectory;                              // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeed;                                          // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BallisticBehaviour_FlareArrow_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BallisticBehaviour_FlareArrow(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


