#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x284 - 0x230)
// BlueprintGeneratedClass BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C
class ABP_ThroneRoom_Torch_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGStatusEffectSourceComponent*        GGStatusEffectSource;                              // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       TorchAC;                                           // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TorchPS;                                           // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Torch;                                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x270(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_BD4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DefaultTorchColor;                                 // 0x274(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThroneRoom_Torch_C* GetDefaultObj();

	void OnRep_IsActive();
	void DeactivateTorchFX();
	void ActivateTorchFX(class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Set_Torch_Active(bool Active, bool CallFunc_HasAuthority_ReturnValue);
	void UserConstructionScript();
	void BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void ReceiveBeginPlay();
	void ResetTorchColor();
	void ExecuteUbergraph_BP_ThroneRoom_Torch(int32 EntryPoint, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_HasAuthority_ReturnValue);
};

}


