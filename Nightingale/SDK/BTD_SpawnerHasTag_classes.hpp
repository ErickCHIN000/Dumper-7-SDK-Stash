#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTD_SpawnerHasTag.BTD_SpawnerHasTag_C
class UBTD_SpawnerHasTag_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTag                          Tag;                                               // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_SpawnerHasTag_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* Temp_object_Variable, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetSpawnerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


