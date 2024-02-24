#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x605 - 0x5E2)
// BlueprintGeneratedClass BP_Part_BTM_MK1.BP_Part_BTM_MK1_C
class ABP_Part_BTM_MK1_C : public ABP_PartBase_C
{
public:
	uint8                                        Pad_2342[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     FxTakeOffThruster;                                 // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FxLandingThruster;                                 // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         EngineActive;                                      // 0x600(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EngineAudioActive;                                 // 0x601(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         FeetDeployed;                                      // 0x602(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LandingThrusterFX;                                 // 0x603(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         TakeoffThrusterFX;                                 // 0x604(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Part_BTM_MK1_C* GetDefaultObj();

	void OnRep_TakeoffThrusterFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void OnRep_LandingThrusterFX();
	void TriggerEvent(const struct FDropShipActionsEnum& Actions, bool K2Node_SwitchRowEnum_CmpSuccess);
	void GetMesh(class UPrimitiveComponent** Mesh);
};

}


