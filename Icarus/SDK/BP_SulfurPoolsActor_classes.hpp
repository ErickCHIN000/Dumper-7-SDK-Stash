#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E8 - 0x2C0)
// BlueprintGeneratedClass BP_SulfurPoolsActor.BP_SulfurPoolsActor_C
class ABP_SulfurPoolsActor_C : public AIcarusActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_SulfurGas_Up;                                   // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SulfurPoolRadius;                                  // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnRate;                                         // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EffectActive;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2825[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AuraId;                                            // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SulfurPoolsActor_C* GetDefaultObj();

	void OnRep_EffectActive();
	void UserConstructionScript();
	void TriggerSulfurPoolsEffect(bool Active);
	void ExecuteUbergraph_BP_SulfurPoolsActor(int32 EntryPoint, bool K2Node_CustomEvent_Active, bool CallFunc_RemoveModifierState_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
};

}


