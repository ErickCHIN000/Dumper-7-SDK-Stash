#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x328 - 0x2F0)
// BlueprintGeneratedClass BP_ObjectSlot.BP_ObjectSlot_C
class ABP_ObjectSlot_C : public AObjectSlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         SplineConnectionPoint;                             // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TypeIndicator;                                     // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   Inventory;                                         // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_TestSplineConnection_C*            ConnectionActor;                                   // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ObjectSlot_C* GetDefaultObj();

	void GetSplineConnectionPoint(struct FVector* Location, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void PostLinkDestroyed(bool CallFunc_IsValid_ReturnValue);
	void PostLinkEstablished(const struct FVector& CallFunc_GetSplineConnectionPoint_Location, class ABP_ObjectSlot_C* K2Node_DynamicCast_AsBP_Object_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_GetSplineConnectionPoint_Location_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_TestSplineConnection_C* CallFunc_FinishSpawningActor_ReturnValue);
	bool UpdateVisibility(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	bool OnServer_Interact(class AActor* Interactor, struct FHitResult& HitResult, class ABP_ObjectSlot_C* CharacterSlotConnection, class ABP_IcarusPlayerCharacterSurvival_C* Character, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_CanLink_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetSlotType(enum class EObjectSlotType Type);
	void ExecuteUbergraph_BP_ObjectSlot(int32 EntryPoint, const struct FHighlightableRowHandle& CallFunc_MakeLiteralHighlightable_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, enum class EObjectSlotType K2Node_CustomEvent_Type, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FHighlightableRowHandle& CallFunc_MakeLiteralHighlightable_ReturnValue_1, const struct FHighlightableRowHandle& CallFunc_MakeLiteralHighlightable_ReturnValue_2);
};

}


