#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BTD_HasModifierState.BTD_HasModifierState_C
class UBTD_HasModifierState_C : public UBTDecorator_BlueprintBase
{
public:
	struct FModifierStatesRowHandle              ModifierState;                                     // 0xA0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_HasModifierState_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_HasModifierState_ReturnValue);
};

}


