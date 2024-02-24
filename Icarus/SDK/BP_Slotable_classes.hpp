#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x200 - 0xD0)
// BlueprintGeneratedClass BP_Slotable.BP_Slotable_C
class UBP_Slotable_C : public USlotableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          SlotRenderTick;                                    // 0xD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  HighlightedVisualizer;                             // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                RequiredSocketNameSubstring;                       // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LinkedMesh;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FVector, struct FSlotWrapper>    SocketMap;                                         // 0x100(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FVector>                       SocketStatusKeysReplicated;                        // 0x150(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<struct FSlotWrapper>                  SlotWrapperReplicated;                             // 0x160(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            ItemAddedToSlot;                                   // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventory*                            LinkedInventory;                                   // 0x180(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   StaticmeshHardRefs;                                // 0x188(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, float>                           SlotFreezeTimer;                                   // 0x198(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SlotCount;                                         // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5039[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusItem*>                   AllAttachedActors;                                 // 0x1F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Slotable_C* GetDefaultObj();

	void GetActorArrayFromSlots(TArray<class AIcarusItem*>* AllAttachedActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlotWrapper& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	class AIcarusActor* GetActorInSlot(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSlotWrapper& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void PushConfigToInventorySlots(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1);
	void AddToSlotFromItemData(const struct FVector& SocketLocation, const struct FTransform& SocketTrans, const struct FItemData& ItemData, class AIcarusItem** IcarusItem, class AIcarusItem* SpawnedItem, const struct FItemData& CallFunc_CreateItem_ReturnValue, const struct FTransform& Temp_struct_Variable, TScriptInterface<class ISlotableItem> K2Node_DynamicCast_AsSlotable_Item, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSpawnTransformOffset_OutTransformOffset, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, class AIcarusGOAPCorpseBase* K2Node_DynamicCast_AsIcarus_GOAPCorpse_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue);
	void InventoryLocationToSlotLink(const struct FVector& Slot, class AIcarusItem* Item, int32 SlotLocation, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Find_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue, bool CallFunc_EstablishInventoryLink_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void SlotableInteract(class AIcarusPlayerCharacter* Instigator, bool* SuccessfullyInteracted, const struct FItemData& ItemDataRef, bool CallFunc_ConsumeFocusedItem_ReturnValue, bool CallFunc_FindNearestLookedAtSocket_HitSlotVisualizer, const struct FVector& CallFunc_FindNearestLookedAtSocket_ClosestSocketLocation2, class AIcarusItem* CallFunc_FindNearestLookedAtSocket_MappedItem2, const struct FTransform& CallFunc_FindNearestLookedAtSocket_ClosestSocketTrans2, class FName CallFunc_FindNearestLookedAtSocket_ClosestSocketName2, float CallFunc_FindNearestLookedAtSocket_ClosestDistance, const struct FSlotWrapper& CallFunc_FindNearestLookedAtSocket_ClosestSlotWrapper, bool CallFunc_CanInteract_CanInteract, bool CallFunc_CanInteract_HitSlotVisualizer, bool CallFunc_CanInteract_PassedQuery, class UStaticMeshComponent* CallFunc_CanInteract_HitStaticMesh_Component, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, class AIcarusItem* Temp_wildcard_Variable, const struct FItemData& CallFunc_GetSerialisedItemData_ReturnValue, class AIcarusItem* CallFunc_AddToSlotFromItemData_IcarusItem, bool CallFunc_IsValid_ReturnValue_1);
	void IsComponentAVisualizer(class UActorComponent* Component, bool* IsVisualizer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FSlotWrapper>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FSlotWrapper& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnRep_SlotWrapperReplicated();
	void ConfigureVisualizerMeshDefaults(class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* MeshToUse, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ClientUpdateSocketMapFromArrays(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FSlotWrapper& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSlotWrapper& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ServerUpdateSlotVisualizer(struct FVector& Location, class UStaticMeshComponent* Socket_Visualizer, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FSlotWrapper& K2Node_MakeStruct_SlotWrapper);
	void ServerUpdateSlotItem(struct FVector& Location, class AIcarusItem*& Item, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FSlotWrapper& K2Node_MakeStruct_SlotWrapper);
	void CanInteract(class AIcarusPlayerCharacter* PlayerChar, bool* CanInteract, bool* HitSlotVisualizer, bool* PassedQuery, class UStaticMeshComponent** HitStaticMesh_Component, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsComponentAVisualizer_IsVisualizer, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetClosestSocketToLocation_ClosestSocket2, const struct FTransform& CallFunc_GetClosestSocketToLocation_ClosestSocketTrans, class FName CallFunc_GetClosestSocketToLocation_ClosestSocketName, float CallFunc_GetClosestSocketToLocation_ClosestDistance2, const struct FSlotWrapper& CallFunc_GetClosestSocketToLocation_ClosestSlotWrapper, bool CallFunc_DoesItemMeetSlotQuery_QueryMet);
	void DoesItemMeetSlotQuery(class AIcarusItem* Item, const struct FVector& Slot, bool* QueryMet, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void OnRep_SocketStatusKeysReplicated();
	void GetClosestSocketToLocation(const struct FVector& WorldSpaceLocation, struct FVector* ClosestSocket2, struct FTransform* ClosestSocketTrans, class FName* ClosestSocketName, float* ClosestDistance2, struct FSlotWrapper* ClosestSlotWrapper, const struct FTransform& ClosestTrans, class FName ClosestName, float ClosestDistance, const struct FVector& Closest, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FVector>& CallFunc_Map_Keys_Keys, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void FindNearestLookedAtSocket(class AIcarusPlayerCharacter* PlayerChar2, bool* HitSlotVisualizer, struct FVector* ClosestSocketLocation2, class AIcarusItem** MappedItem2, struct FTransform* ClosestSocketTrans2, class FName* ClosestSocketName2, float* ClosestDistance, struct FSlotWrapper* ClosestSlotWrapper, TArray<struct FSlotWrapper>& CallFunc_Map_Values_Values, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetClosestSocketToLocation_ClosestSocket2, const struct FTransform& CallFunc_GetClosestSocketToLocation_ClosestSocketTrans, class FName CallFunc_GetClosestSocketToLocation_ClosestSocketName, float CallFunc_GetClosestSocketToLocation_ClosestDistance2, const struct FSlotWrapper& CallFunc_GetClosestSocketToLocation_ClosestSlotWrapper, bool CallFunc_IsComponentAVisualizer_IsVisualizer, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetClosestSocketToLocation_ClosestSocket2_1, const struct FTransform& CallFunc_GetClosestSocketToLocation_ClosestSocketTrans_1, class FName CallFunc_GetClosestSocketToLocation_ClosestSocketName_1, float CallFunc_GetClosestSocketToLocation_ClosestDistance2_1, const struct FSlotWrapper& CallFunc_GetClosestSocketToLocation_ClosestSlotWrapper_1, const struct FSlotWrapper& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void InitSockets(bool FoundMatch, const TArray<class FString>& DeliminatedName, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable_2, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_ToLower_ReturnValue, const struct FSlotableData& CallFunc_GetSlotableData_Slotable, enum class EDataValid CallFunc_GetSlotableData_Paths, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, const struct FSocketStringIDQuery& CallFunc_Array_Get_Item_2, const class FString& CallFunc_ToLower_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class FName CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue_2, const struct FSlotWrapper& K2Node_MakeStruct_SlotWrapper, bool CallFunc_Contains_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue);
	void OnLoaded_66DA3BA040838D67FF74688CF800B7E9(class UObject* Loaded);
	void ReceiveBeginPlay();
	void SlotRenderChange(class UHighlightableComponent* Highlightable, class UPrimitiveComponent* Component, bool bHighlighted);
	void LookTick();
	void AsyncClientUpdateSocketStatus();
	void Itemaddedbind(class UInventory* Inventory, int32 Location);
	void Itemremovebind(class UInventory* Inventory, int32 Location);
	void Itemsupdated();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AsyncConfigAllVisualizers();
	void ExecuteUbergraph_BP_Slotable(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_CanInteract_CanInteract, bool CallFunc_CanInteract_HitSlotVisualizer, bool CallFunc_CanInteract_PassedQuery, class UStaticMeshComponent* CallFunc_CanInteract_HitStaticMesh_Component, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UHighlightableComponent* K2Node_CustomEvent_Highlightable, class UPrimitiveComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bHighlighted, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UHighlightableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UStaticMeshComponent* CallFunc_AddActorComponent_OutComponent, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, TArray<struct FVector>& CallFunc_Map_Keys_Keys, TArray<struct FVector>& CallFunc_Map_Keys_Keys_1, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_GetClosestSocketToLocation_ClosestSocket2, const struct FTransform& CallFunc_GetClosestSocketToLocation_ClosestSocketTrans, class FName CallFunc_GetClosestSocketToLocation_ClosestSocketName, float CallFunc_GetClosestSocketToLocation_ClosestDistance2, const struct FSlotWrapper& CallFunc_GetClosestSocketToLocation_ClosestSlotWrapper, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FSlotWrapper& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FSlotWrapper>& CallFunc_Map_Values_Values, const struct FSlotWrapper& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, const struct FSlotWrapper& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location_1, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_3, const struct FSlotWrapper& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_8, const struct FSlotWrapper& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AIcarusItem* CallFunc_AddToSlotFromItemData_IcarusItem, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsServer_ReturnValue_2, TArray<struct FSlotWrapper>& CallFunc_Map_Values_Values_1, const struct FSlotWrapper& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, TArray<struct FSlotWrapper>& CallFunc_Map_Values_Values_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, class UMaterialInterface* Temp_object_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, int32 Temp_int_Variable_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void ItemAddedToSlot__DelegateSignature(const struct FVector& Slot, class AIcarusItem* NewItem);
};

}


