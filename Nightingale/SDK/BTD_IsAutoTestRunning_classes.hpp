#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_IsAutoTestRunning.BTD_IsAutoTestRunning_C
class UBTD_IsAutoTestRunning_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_IsAutoTestRunning_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, bool CallFunc_AreAutomatedTestsRunning_ReturnValue);
};

}


