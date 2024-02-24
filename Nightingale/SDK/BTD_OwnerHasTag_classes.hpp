#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTD_OwnerHasTag.BTD_OwnerHasTag_C
class UBTD_OwnerHasTag_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTag                          Tag;                                               // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_OwnerHasTag_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


