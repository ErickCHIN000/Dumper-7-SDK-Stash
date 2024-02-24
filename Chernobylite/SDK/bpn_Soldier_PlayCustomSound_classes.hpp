#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass bpn_Soldier_PlayCustomSound.bpn_Soldier_PlayCustomSound_C
class Ubpn_Soldier_PlayCustomSound_C : public UAnimNotify
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubpn_Soldier_PlayCustomSound_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
};

}


