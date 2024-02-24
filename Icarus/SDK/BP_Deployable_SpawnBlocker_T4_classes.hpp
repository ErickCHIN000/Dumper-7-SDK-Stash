#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x7A0 - 0x78D)
// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C
class ABP_Deployable_SpawnBlocker_T4_C : public ABP_Deployable_SpawnBlocker_C
{
public:
	uint8                                        Pad_68DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_SoundWave;                                      // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deployable_SpawnBlocker_T4_C* GetDefaultObj();

	void UpdateSpawnBlockerEffects(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void OnEnergyStateUpdated(bool IsActive);
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4(int32 EntryPoint, bool K2Node_Event_IsActive, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
};

}


