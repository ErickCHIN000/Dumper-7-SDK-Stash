#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// BlueprintGeneratedClass BP_AnimActor_PhoneRight.BP_AnimActor_PhoneRight_C
class ABP_AnimActor_PhoneRight_C : public AGGAnimationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             PhoneFlashSound;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnimActor_PhoneRight_C* GetDefaultObj();

	void NotifyWasTriggered(const struct FGameplayTag& NotifyTag);
	void ExecuteUbergraph_BP_AnimActor_PhoneRight(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_NotifyTag, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue);
};

}


