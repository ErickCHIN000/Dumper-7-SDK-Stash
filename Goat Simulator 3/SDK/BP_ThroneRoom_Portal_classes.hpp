#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x3E4 - 0x3B1)
// BlueprintGeneratedClass BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C
class ABP_ThroneRoom_Portal_C : public ABP_Teleporter_C
{
public:
	uint8                                        Pad_BAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       PortalLoop_AC;                                     // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PortalPS;                                          // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               TeleportingGoat;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PortalLocation;                                    // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThroneRoom_Portal_C* GetDefaultObj();

	void BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void PlayPortalAudio();
	void ExecuteUbergraph_BP_ThroneRoom_Portal(int32 EntryPoint, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1);
};

}


