#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x660 - 0x658)
// BlueprintGeneratedClass AIC_Creature_Wildlife_Summon.AIC_Creature_Wildlife_Summon_C
class AAIC_Creature_Wildlife_Summon_C : public AAIC_Creature_Wildlife_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAIC_Creature_Wildlife_Summon_C* GetDefaultObj();

	void TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_AIC_Creature_Wildlife_Summon(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FAIStimulus& K2Node_Event_Stimulus);
};

}


