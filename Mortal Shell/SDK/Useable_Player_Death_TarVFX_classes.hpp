#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x330 - 0x312)
// BlueprintGeneratedClass Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C
class AUseable_Player_Death_TarVFX_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_28A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUseable_Player_Death_TarVFX_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, const class FString& TeleportCommand, bool CallFunc_OnActorUsed_Success);
	void OnWasUsed(bool* Success, float LocalRotation, bool CallFunc_OnWasUsed_Success);
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Useable_Player_Death_TarVFX(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
};

}


