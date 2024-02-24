#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x41 - 0x40)
// BlueprintGeneratedClass Audio_NotifyState_Rustle.Audio_NotifyState_Rustle_C
class UAudio_NotifyState_Rustle_C : public UAudio_NotifyState_Base_C
{
public:
	enum class ERustleAudioLength                Rustle_Length;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAudio_NotifyState_Rustle_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_PlayRustleAudio_Return, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
};

}


