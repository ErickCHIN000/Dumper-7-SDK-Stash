#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_IsRetreated.BTD_IsRetreated_C
class UBTD_IsRetreated_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_IsRetreated_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_HasAIRetreated_ReturnValue);
};

}


