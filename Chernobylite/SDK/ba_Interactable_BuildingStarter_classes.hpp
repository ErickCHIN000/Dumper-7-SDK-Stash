#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x461 - 0x319)
// BlueprintGeneratedClass ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C
class Aba_Interactable_BuildingStarter_C : public Aba_InteractableCustom_00_C
{
public:
	uint8                                        Pad_22AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBillboardComponent*                   Billboard;                                         // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       OnLevelPlace;                                      // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_0;                                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Axis;                                              // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  bp_BuildSystem;                                    // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_1FC78BB847990D75E6F2BCB31D64E6B8; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_1FC78BB847990D75E6F2BCB31D64E6B8; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2301[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWorkshop;                                      // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2311[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           AviableOnFieldCatalogs;                            // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           FieldOnlyCatalogs;                                 // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           AllCatalogues;                                     // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_231B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OriginalTransform;                                 // 0x3B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        OriginalPowerLimit;                                // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayersOriginalLocation;                           // 0x3E4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BuildSystemStarted;                                // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BuildSystemEnded;                                  // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Expanded;                                          // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2339[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMat;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                Spawned_Volume;                                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ItemInHand;                                        // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Dispatcher_PlayerAquiredOrLostScrapTarget;         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            DispatcherChanged_State;                           // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                          Saved_tiers;                                       // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ItemShouldShow;                                    // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_Interactable_BuildingStarter_C* GetDefaultObj();

	TArray<class AActor*> GetAdditionalActorsToHighlight();
	TArray<TSoftObjectPtr<class UPrimitiveComponent>> GetMeshesToSkipDuringHighlight();
	bool ShouldIgnoreScan();
	TArray<class USkeletalMeshComponent*> GetForcedMeshesToHighlight();
	enum class EScannableResourceType GetResourceType();
	bool ShouldBeHightlighted();
	void GetIsInWorkshop(bool* IsInWorkshop);
	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void SetPowerLimit(int32 LimitDelta, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_PowerManagmentAddToLimit_ReturnValue, int32 CallFunc_PowerManagmentGetLimit_ReturnValue, bool CallFunc_PowerManagmentRemoveFromLimit_ReturnValue);
	void SelectCatalogues(TArray<struct FDataTableRowHandle>* Aviable_in_workshop, TArray<struct FDataTableRowHandle>* AviableInField, const TArray<struct FDataTableRowHandle>& ReturnField, const TArray<struct FDataTableRowHandle>& ReturnWorkshop, const TArray<class FName>& AllowedOnlyOnlevel, const TArray<class FName>& AllowedOnLevel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InteractionOut();
	void CustomEvent_0(bool SpawnedAnything);
	void Ready();
	void GoBack();
	void LoadingFinished();
	void ReceiveBeginPlay();
	void Started_Event_0();
	void Finished_Event_0(bool SpawnedAnything);
	void SendScrapDispatcher(bool HasTarget, class ABaseBuildSystemEntity* New_Target);
	void SendChangedState(bool Is_Building);
	void ExecuteUbergraph_ba_Interactable_BuildingStarter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class Abp_BuildSystem_C* K2Node_DynamicCast_AsBp_Build_System, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool K2Node_CustomEvent_SpawnedAnything_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_BuildSystemDeactivateTierName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_PowerManagmentGetLimit_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class Abp_BuildSystem_C* K2Node_DynamicCast_AsBp_Build_System_1, bool K2Node_DynamicCast_bSuccess_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_BuildSystemActivateTierName_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, class Abp_BuildSystem_C* K2Node_DynamicCast_AsBp_Build_System_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_CustomEvent_SpawnedAnything, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery_1, bool CallFunc_QueryActivity_OutQueryResult_1, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue_1, class Abp_BuildSystem_C* K2Node_DynamicCast_AsBp_Build_System_3, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_CustomEvent_HasTarget, class ABaseBuildSystemEntity* K2Node_CustomEvent_New_Target, bool K2Node_CustomEvent_Is_Building, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, TArray<class FName>& CallFunc_BuildSystemGetActiveTier_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_BuildSystemActivateTierName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BuildSystemDeactivateTierName_ReturnValue_1, TArray<class ARadarAfterImage*>& CallFunc_GetAllActorsOfClass_OutActors, class ARadarAfterImage* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Variable, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_2, TArray<struct FDataTableRowHandle>& K2Node_Select_Default);
	void DispatcherChanged_State__DelegateSignature(bool Is_Building);
	void Dispatcher_PlayerAquiredOrLostScrapTarget__DelegateSignature(bool HasTarget, class ABaseBuildSystemEntity* New_Target);
	void BuildSystemEnded__DelegateSignature(bool SpawnedAnything);
	void BuildSystemStarted__DelegateSignature();
};

}


