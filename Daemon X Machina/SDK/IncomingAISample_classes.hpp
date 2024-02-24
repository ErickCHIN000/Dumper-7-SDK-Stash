#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E0 - 0x4D8)
// BlueprintGeneratedClass IncomingAISample.IncomingAISample_C
class AIncomingAISample_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AIncomingAISample_C* GetDefaultObj();

	void UserConstructionScript();
	void AIProcess();
	void AIInit();
	void AIHateTargetChanged(class AActor* TargetActor);
	void AIAttackFinished();
	void ExecuteUbergraph_IncomingAISample(int32 EntryPoint, bool CallFunc_ActionGoToIncomingTargetPoint_ReturnValue, class AActor* K2Node_Event_targetActor);
};

}


