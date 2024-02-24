#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass AN_AddState.AN_AddState_C
class UAN_AddState_C : public UAnimNotify
{
public:
	struct FGameplayTag                          StateTag;                                          // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AddState_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


