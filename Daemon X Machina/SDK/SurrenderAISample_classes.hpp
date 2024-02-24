#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E0 - 0x4D8)
// BlueprintGeneratedClass SurrenderAISample.SurrenderAISample_C
class ASurrenderAISample_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASurrenderAISample_C* GetDefaultObj();

	void UserConstructionScript();
	void AIProcess();
	void AIInit();
	void AIHateTargetChanged(class AActor* TargetActor);
	void AIAttackFinished();
	void ExecuteUbergraph_SurrenderAISample(int32 EntryPoint, bool CallFunc_ActionWait_ReturnValue, class AActor* K2Node_Event_targetActor);
};

}


