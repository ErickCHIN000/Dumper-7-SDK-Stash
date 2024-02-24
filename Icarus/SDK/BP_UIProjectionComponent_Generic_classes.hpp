#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x150 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C
class UBP_UIProjectionComponent_Generic_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsAlive;                                           // 0x118(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         StatAbilityEnable;                                 // 0x119(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3915[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DotToSee;                                          // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeToDotSee;                                     // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeToCloseCircleSee;                             // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DotSeeEnable;                                      // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CircleCloseSee;                                    // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3931[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusActor*                          CurrentItem;                                       // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightOffset;                                       // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpOffset;                                          // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousUpdateEnabled;                             // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3941[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PreviousWidgetClass;                               // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_Generic_C* GetDefaultObj();

	void GatherBounds();
	struct FVector GetProjectionLocation(class UBillboardComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void UpdateEnabled(bool ToolTIpVisible, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UHighlightableComponent* CallFunc_GetTrait_ReturnValue, TScriptInterface<class IBP_SecondaryWidgetInterface_C> K2Node_DynamicCast_AsBP_Secondary_Widget_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActive_ReturnValue, class UClass* CallFunc_GetWidgetClass_Widget, class UClass* K2Node_ClassDynamicCast_AsW_Projection_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UItemableComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsActive_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_IsAlive();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_UIProjectionComponent_Generic(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


