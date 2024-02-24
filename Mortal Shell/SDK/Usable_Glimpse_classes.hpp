#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x32C - 0x312)
// BlueprintGeneratedClass Usable_Glimpse.Usable_Glimpse_C
class AUsable_Glimpse_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_263F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        GlimpsesToGain;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Glimpse_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_OnActorUsed_Success);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Usable_Glimpse(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


