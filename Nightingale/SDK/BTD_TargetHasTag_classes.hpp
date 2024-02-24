#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass BTD_TargetHasTag.BTD_TargetHasTag_C
class UBTD_TargetHasTag_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTag                          Tag;                                               // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xA8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTD_TargetHasTag_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue);
};

}


