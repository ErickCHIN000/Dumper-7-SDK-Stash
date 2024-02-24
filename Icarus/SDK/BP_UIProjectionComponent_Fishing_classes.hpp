#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x119 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C
class UBP_UIProjectionComponent_Fishing_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsAbleToCatch;                                     // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_Fishing_C* GetDefaultObj();

	void GetFishingRod(class ABP_SkeletalItem_Fishing_Rod_C** FishingRod, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod);
	void GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ForceProjectionUpdate();
	void ExecuteUbergraph_BP_UIProjectionComponent_Fishing(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* CallFunc_GetOwningPlayer_AsIcarus_Player_Character, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCasted_Casted, bool CallFunc_BooleanAND_ReturnValue);
};

}


