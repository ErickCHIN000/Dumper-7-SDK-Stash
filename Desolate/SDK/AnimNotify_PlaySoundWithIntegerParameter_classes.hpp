#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass AnimNotify_PlaySoundWithIntegerParameter.AnimNotify_PlaySoundWithIntegerParameter_C
class UAnimNotify_PlaySoundWithIntegerParameter_C : public UAnimNotify
{
public:
	class USoundCue*                             Sound;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_PlaySoundWithIntegerParameter_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ASHAICharacter* K2Node_DynamicCast_AsSHAICharacter, bool K2Node_DynamicCast_bSuccess);
};

}


