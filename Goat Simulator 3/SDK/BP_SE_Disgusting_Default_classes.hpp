#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x488 - 0x470)
// BlueprintGeneratedClass BP_SE_Disgusting_Default.BP_SE_Disgusting_Default_C
class ABP_SE_Disgusting_Default_C : public AGGStatusEffectDisgusting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       DisgustingLoopAC;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FireSoundFadeOutTime;                              // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireSoundFadeInTime;                               // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SE_Disgusting_Default_C* GetDefaultObj();

	void BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BPResetForPool();
	void BPClientInitializeStatus(class UGGStatusEffectManager* Manager);
	void ExecuteUbergraph_BP_SE_Disgusting_Default(int32 EntryPoint, class UGGStatusEffectManager* K2Node_Event_Manager_1, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGGStatusEffectManager* K2Node_Event_Manager, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


