#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x281 (0x4E1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ContextImage.UMG_ContextImage_C
class UUMG_ContextImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          ContextImageBox;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Crosshair_C*                      UMG_Crosshair;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AIcarusActor*                          LastObject;                                        // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           ValidColour;                                       // 0x288(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           InvalidColour;                                     // 0x2B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemData                             HeldItem;                                          // 0x2D8(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        CurrentAlpha;                                      // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1601[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFContextImageConditions>      ContextImageQueries;                               // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ForceShowCrosshair;                                // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ContextImage_C* GetDefaultObj();

	void SetForceShowCrosshair(bool ForceShowCrosshair);
	enum class EViewTraceResultPriority GetContextResultPriority(struct FViewTraceResult& Result, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FValidInteractQueriesRowHandle& CallFunc_GetObjectInteraction_RowHandle, bool CallFunc_GetObjectInteraction_bValidInteract, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_wildcard_Variable, bool CallFunc_BooleanOR_ReturnValue, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue);
	void UpdateContext(enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FValidInteractQueriesRowHandle& CallFunc_GetPlayerBestViewResultInteraction_FoundInteraction, bool CallFunc_GetPlayerBestViewResultInteraction_bValidInteraction, bool CallFunc_GetPlayerBestViewResultInteraction_ReturnValue, const struct FValidInteractQuery& CallFunc_GetValidInteractQueriesStruct_ValidInteractQueries, enum class EValid CallFunc_GetValidInteractQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateTarget(float Alpha);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_ContextImage(int32 EntryPoint, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_1, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_2, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_3, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_4, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_5, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FFContextImageConditions& K2Node_MakeStruct_FContextImageConditions_6, const struct FVector& CallFunc_GetVelocity_ReturnValue, TArray<struct FFContextImageConditions>& K2Node_MakeArray_Array, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


