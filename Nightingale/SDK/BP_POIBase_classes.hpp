#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x510 - 0x358)
// BlueprintGeneratedClass BP_POIBase.BP_POIBase_C
class ABP_POIBase_C : public ANWXActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDiscoverableRadiusComponent*          DiscoverableRadius;                                // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapPinComponent*                      MapPin;                                            // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelAwareComponent*                  LevelAware;                                        // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestComponent_C*                Harvest_Component;                                 // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Root_Mesh;                                         // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                Mesh_Components;                                   // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UChildActorComponent*>          Child_Actor_Components;                            // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       Z_Trace_Start_Offset;                              // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Z_Trace_End_Offset;                                // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       POI_Landscape_Radius;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Show_Debug_Arrows;                                 // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_Random_Replacement;                          // 0x3D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_Random_Rotations;                            // 0x3DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_32B6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Context_Actors;                                    // 0x3E0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, ExposeOnSpawn)
	TMap<class AActor*, class UClass*>           Replacement_Actors;                                // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FS_POICachedOffset>            CachedActors;                                      // 0x440(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FActorAndInstanceIds>          ResourceActorsAndIds;                              // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        Allowed_Context_Actor_Classes;                     // 0x460(0x10)(Edit, BlueprintVisible)
	class ABP_CreatureManager_C*                 CreatureManager;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                  Spawn_Points_Hostile;                              // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                  Spawn_Points_Friendly;                             // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         TagsSet;                                           // 0x498(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, int32>             FootprintRadiusToDiscoverableRadius;               // 0x4A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UInteractiveInstancedMeshProxyComponent*> ResourcesToProcess;                                // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AInteractiveInstancedMeshManagerIndex* IIMManager_Index;                                  // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ResourceProcessingTimer;                           // 0x508(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_POIBase_C* GetDefaultObj();

	void GetTagContainer(struct FGameplayTagContainer* GameplayTagContainer);
	void ProcessResourceProxies(const TArray<class UInteractiveInstancedMeshProxyComponent*>& StartingResourcesToProcess, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UInteractiveInstancedMeshProxyComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RegisterResourceFromComponent(class UInteractiveInstancedMeshProxyComponent* IIMProxyComponent, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class AActor* CallFunc_GetGameplayActorForLocation_ReturnValue, class AResourceNodeIIMBase* K2Node_DynamicCast_AsResource_Node_IIMBase, bool K2Node_DynamicCast_bSuccess, const struct FIIMInstance& CallFunc_AddInstance_OutInstance, bool CallFunc_AddInstance_ReturnValue);
	void InitializePOI(class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, TScriptInterface<class IBPI_HasTagContainer_C> K2Node_DynamicCast_AsBPI_Has_Tag_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagContainer_GameplayTagContainer, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetDiscoverableRadius_IsDiscoverable, int32 CallFunc_GetDiscoverableRadius_Radius, bool CallFunc_IsValid_ReturnValue_2);
	void GetDiscoverableRadius(bool* IsDiscoverable, int32* Radius, int32 MediumPOIRadius, int32 LargePOIRadius, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void RegisterResourcesToIIM(class UObject* NewLocalVar_0, class AInteractiveInstancedMeshManagerIndex* IIMManagerIndex, const TArray<class UInteractiveInstancedMeshProxyComponent*>& IIMProxyComponents, class UInteractiveInstancedMeshProxyComponent* IIMProxyComponent, const TArray<class ABP_ResourceIIMProxy_C*>& ResourceProxies, class ABP_ResourceIIMProxy_C* ResourceProxy, class ABP_ResourceNode_IIM_C* ResourceNode, class ABP_IIMProxy_C* IIMProxy, const TArray<class ABP_IIMProxy_C*>& IIMProxies, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetLevelActors_OutLevelActors, bool CallFunc_GetLevelActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<class UInteractiveInstancedMeshProxyComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UInteractiveInstancedMeshProxyComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void Translate_Context_Actors_to_Landscape(double ActorOffset, class AActor* ContextActor);
	void Translate_Components_to_Landscape(const struct FVector& NewLocation, class USceneComponent* POI_Scene_Component);
	void Randomize_Actors(const struct FTransform& Cached_Context_Actor_Transform, class AActor* Cached_Context_Actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Verify_Context_Actors(bool* All_Context_Actors_Valid, bool Actor_Was_Missing, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void UserConstructionScript(class AActor* Cached_Parent_Prefab, class AActor* Cached_Context_Actor, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void BndEvt__LevelAware_K2Node_ComponentBoundEvent_0_OnLevelStreamingCompleteSignature__DelegateSignature();
	void BndEvt__DiscoverableRadius_K2Node_ComponentBoundEvent_1_DiscoveredByPlayerDynamicDelegate__DelegateSignature(class APlayerState* PlayerState);
	void Bake_Prefab_Offsets();
	void Refresh_Context_Actors();
	void ReceiveActorReady();
	void ExecuteUbergraph_BP_POIBase(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class APlayerState* K2Node_ComponentBoundEvent_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess, const struct FMapPinData& CallFunc_GetMapPinData_ReturnValue, TScriptInterface<class ILocationTrackerInterface> CallFunc_Server_AddMapPinData_self_CastInput, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Verify_Context_Actors_All_Context_Actors_Valid, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class AActor* CallFunc_Array_Get_Item_2, double CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FS_POICachedOffset& K2Node_MakeStruct_S_POICachedOffset, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, float K2Node_MakeStruct_Offset_5_A3208FCE46CD00617AEDFEB08C28298A_ImplicitCast, float CallFunc_DrawDebugCircle_Radius_ImplicitCast);
};

}


