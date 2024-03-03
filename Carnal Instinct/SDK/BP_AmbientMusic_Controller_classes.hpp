#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass BP_AmbientMusic_Controller.BP_AmbientMusic_Controller_C
class ABP_AmbientMusic_Controller_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AmbientSound;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Music;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CombatMusic_;                                      // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AmbientMusic_;                                     // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C15[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentSound;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AmbientMusic_Controller_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void CombatMusic();
	void AmbientMusic();
	void BossMusic();
	void TombGuardian();
	void SetAmbientSound(class USoundBase* Sound);
	void ExecuteUbergraph_BP_AmbientMusic_Controller(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


