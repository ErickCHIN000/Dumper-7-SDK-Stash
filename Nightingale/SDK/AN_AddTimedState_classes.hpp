#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass AN_AddTimedState.AN_AddTimedState_C
class UAN_AddTimedState_C : public UAnimNotify
{
public:
	struct FGameplayTag                          StateTag;                                          // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       Time;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AddTimedState_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_AddTimedState_TimePeriod_ImplicitCast);
};

}


