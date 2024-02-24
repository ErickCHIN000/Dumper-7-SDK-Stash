#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_Mantle_Unarmed.Action_Mantle_Unarmed_C
class UAction_Mantle_Unarmed_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Mantle_Unarmed_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_Mantle_Unarmed(int32 EntryPoint, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EIsAutonomousOuput CallFunc_BranchOnIsAutonomous_Branches, bool K2Node_SwitchEnum_CmpSuccess);
};

}


