#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass SoundAtActorLocation.SoundAtActorLocation_C
class USoundAtActorLocation_C : public UAnimNotify
{
public:
	class USoundBase*                            Sound;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USoundAtActorLocation_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


