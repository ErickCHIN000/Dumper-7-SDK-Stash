#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x54 - 0x38)
// BlueprintGeneratedClass PlayerFootstepParticle.PlayerFootstepParticle_C
class UPlayerFootstepParticle_C : public UAnimNotify
{
public:
	enum class EFootstepSocket                   FootstepSocket;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       EditorOnlyEmitter;                                 // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               Scale;                                             // 0x48(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerFootstepParticle_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


