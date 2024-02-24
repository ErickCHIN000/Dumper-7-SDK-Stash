#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x160 - 0x148)
// BlueprintGeneratedClass BP_CE_Shaman_Totem.BP_CE_Shaman_Totem_C
class UBP_CE_Shaman_Totem_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	enum class Enum_ShamanTotemFXSize            FXSize;                                            // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_186B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              TeleportPS;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_Shaman_Totem_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_BP_CE_Shaman_Totem(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


