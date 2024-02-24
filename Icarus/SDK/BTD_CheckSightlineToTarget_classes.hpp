#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0xCB - 0xA0)
// BlueprintGeneratedClass BTD_CheckSightlineToTarget.BTD_CheckSightlineToTarget_C
class UBTD_CheckSightlineToTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0xA0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Controller_Needs_Line_Of_Sight_to_Target;          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Needs_Target_Within_Controller_View;               // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Needs_Controller_Within_Target_View;               // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTD_CheckSightlineToTarget_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget, bool CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView, bool CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2);
};

}


