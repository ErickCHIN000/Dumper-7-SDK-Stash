#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x348 - 0x2F0)
// BlueprintGeneratedClass BP_MPGameState.BP_MPGameState_C
class ABP_MPGameState_C : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemSnapCaptor_C*                  SnapActorRef;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstCaptureDone;                                  // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UJSI_Slot_C*>                   ItemsQueue;                                        // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       SnapDelay;                                         // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          AllInspectedIDs;                                   // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                AllUIDs;                                           // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_MPGameState_C* GetDefaultObj();

	void InspectorGetPrimitiveComponent(class AActor* Actor, class UPrimitiveComponent** Comp, TScriptInterface<class IBP_WeaponAttachments_C> K2Node_DynamicCast_AsBP_Weapon_Attachments, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_Jig_GetPrimitiveComponent_Comp);
	void GetItemInspectInfo(class FName ItemId, struct FS_ItemInspectInfo* Info, bool* Found, const struct FS_ItemInspectInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetLocalAttachmentByID(class FName ItemId, bool* Found, class FName* Socket, enum class EAttachmentType* Type, class UClass** Class, const struct FLocalAttachmentInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SpawnSnapshotCaptor(class UJSI_Slot_C* ItemRef, class ABP_ItemInspector_C** InspectorRef, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ItemInspector_C* CallFunc_FinishSpawningActor_ReturnValue);
	void UpdateSnapCustom(const struct FVector& Location, const struct FRotator& Rotation, double FOV, class UJSI_Slot_C* JigItem, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetJigitem_Custom_Found, bool CallFunc_SetJigitem_Custom_ShareRenderTargetWithSimilarItems);
	void AddItemToQueue(class UJSI_Slot_C* Item, bool* Result, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UpdateAttachments(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, TArray<class FName>& Attachments, class UTextureRenderTarget** RenderTarget);
	void UpdateSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, class UTextureRenderTarget** RenderTarget, class UTextureRenderTarget2D* CallFunc_UpdateSnap_Output_Get);
	void GetSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D** Texture, bool CallFunc_CanItemBeCaptured_ReturnValue, bool CallFunc_CanItemBeCaptured_Shared, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetSnapNoCapture_Output_Get, bool CallFunc_GetSnapNoCapture_FromShared_, int32 CallFunc_Array_Add_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ItemSnapCaptor_C* CallFunc_FinishSpawningActor_ReturnValue);
	void GetSnapCustomUI(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ItemSnapCaptor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnMPComponentSaveLoaded(class UBP_JigMultiplayer_C* MPComp, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void GetNewUniqueID(int32* Ouput_Get, int32 NewUID, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_RandomBool_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	bool CanItemBeCaptured(class UJSI_Slot_C* ItemRef, bool* Shared, class FName CallFunc_GetItemID_ItemID, const struct FS_ItemInspectInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void HandleQueue();
	void HandleSnapTaken();
	void OnSnapTaken();
	void ExecuteUbergraph_BP_MPGameState(int32 EntryPoint, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UJSI_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_IsSnapOnStandBy_SnapIsOnStandby, class FName CallFunc_GetItemID_ItemID, class FName CallFunc_GetItemID_ItemID_1, bool CallFunc_SetJigitem_Found, bool CallFunc_SetJigitem_ShareRenderTargetWithSimilarItems, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UJSI_Slot_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UJSI_Slot_C* CallFunc_Array_Get_Item_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Delay_Duration_ImplicitCast);
};

}


