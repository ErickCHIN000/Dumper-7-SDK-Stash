#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x24C - 0x240)
// BlueprintGeneratedClass BP_Achievement_Stratosphere.BP_Achievement_Stratosphere_C
class ABP_Achievement_Stratosphere_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Hight_Limit;                                       // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Achievement_Stratosphere_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Achievement_Stratosphere(int32 EntryPoint, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, float K2Node_Event_DeltaSeconds, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


