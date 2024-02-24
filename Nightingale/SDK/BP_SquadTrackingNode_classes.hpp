#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x400 - 0x2A0)
// BlueprintGeneratedClass BP_SquadTrackingNode.BP_SquadTrackingNode_C
class ABP_SquadTrackingNode_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FS_TrackingData_Node                  NodeData;                                          // 0x2B0(0x50)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_TrackingNodeType                NodeType;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NodeId;                                            // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       NodeCreationTime;                                  // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       NodeLife;                                          // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGuid                                 SpawnerID;                                         // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpawnerCreationTime;                               // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                SpawnerClass;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        CreatureCount;                                     // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2B76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSplinePoint>                  NavSplineData;                                     // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	bool                                         Debug;                                             // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2B85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SquadTrackingNode_C*               PrecedingNode;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ABP_SquadTrackingNode_C*               SucceedingNode;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNodeInitialized;                                 // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNodeDestroyed;                                   // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNodePromoted;                                    // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_SquadTrackingNode_Client_C*        ClientProxy;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NodeExpiryTimer;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Creature_Name;                                     // 0x3B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSoftObjectPtr<class UTexture2D>             Creature_Icon;                                     // 0x3C8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABP_CreatureBase_C*>            Tracked_Squad;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_SquadTrackingNode_C* GetDefaultObj();

	void DestroyLegacyNodes(bool Log, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool CheckPromotingNodeRequirements(class ABP_SquadTrackingNode_C* PromotingNode, const struct FGuid& PromotingSpawnerID, int32 PromotingNodeID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetNodeExpiryTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void CollateTrailNavSplineData(TArray<struct FSplinePoint>* CollatedSplineData, const TArray<struct FSplinePoint>& SplineData, TArray<struct FSplinePoint>& CallFunc_CollateTrailNavSplineData_CollatedSplineData, bool CallFunc_IsValid_ReturnValue);
	void NodeDestroyed(bool CallFunc_IsValid_ReturnValue);
	void ExpireNode(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CollateClientNodeData(struct FS_TrackingData_ClientNode* ClientNodeData, bool CallFunc_IsServer_ReturnValue, const struct FS_TrackingData_ClientNode& K2Node_MakeStruct_S_TrackingData_ClientNode, bool CallFunc_HasAuthority_ReturnValue);
	void DestroyClientProxy(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnClientProxy(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_SquadTrackingNode_Client_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FS_TrackingData_ClientNode& CallFunc_CollateClientNodeData_ClientNodeData, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_SquadTrackingNode_Client_C* CallFunc_FinishSpawningActor_ReturnValue_1);
	void ChangeNodeType(enum class E_TrackingNodeType NewNodeType);
	void PromoteToInitialNode(class ABP_SquadTrackingNode_C* PromotingNode, const struct FGuid& PromotingNodeSpawnerID, int32 PromotingNodeID, bool Force, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_GetNodeID_NodeID, bool CallFunc_CheckPromotingNodeRequirements_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class ABP_SquadTrackingNode_C* CallFunc_FindInitialNode_NewestNode, int32 CallFunc_FindInitialNode_Steps);
	void FindTrailLength(int32* TrailLength, class ABP_SquadTrackingNode_C* CallFunc_FindLatestNode_OldestNode, class ABP_SquadTrackingNode_C* CallFunc_FindInitialNode_NewestNode, int32 CallFunc_FindInitialNode_Steps);
	void FindLatestNode(class ABP_SquadTrackingNode_C** OldestNode, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ABP_SquadTrackingNode_C* CallFunc_FindLatestNode_OldestNode, bool CallFunc_IsValid_ReturnValue);
	void FindInitialNode(class ABP_SquadTrackingNode_C** NewestNode, int32* Steps, int32 TrailLengthCounter, class ABP_SquadTrackingNode_C* CallFunc_FindInitialNode_NewestNode, int32 CallFunc_FindInitialNode_Steps, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Variable);
	void SucceedPrecedingNode(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TrackingNodeLog(const class FString& LogMessage, enum class ENWXLogLevel LogLevel);
	void SetSucceedingNode(class ABP_SquadTrackingNode_C* NewSucceedingNode, int32 LSuccedingNodeID, class ABP_SquadTrackingNode_C* LSuccedingNodePrecedingNode, int32 CallFunc_GetNodeID_NodeID, const class FString& CallFunc_Conv_IntToString_ReturnValue, class ABP_SquadTrackingNode_C* CallFunc_GetPrecedingNode_PrecedingNode, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetNodeID_NodeID_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetSucceedingNode(class ABP_SquadTrackingNode_C** SucceedingNode);
	void GetTrailNavSplineData(TArray<struct FSplinePoint>* NavSplineData, const TArray<struct FSplinePoint>& SerializedNodeData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FSplinePoint>& CallFunc_CollateTrailNavSplineData_CollatedSplineData, const struct FSplinePoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FSplinePoint& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float K2Node_SetFieldsInStruct_InputKey_ImplicitCast);
	void GetTrailSimpleSplineData(TArray<struct FSplinePoint>* SplineData, const TArray<struct FSplinePoint>& CollatedSplineData, TArray<struct FSplinePoint>& CallFunc_GetTrailSimpleSplineData_SplineData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSplinePoint& K2Node_MakeStruct_SplinePoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float K2Node_MakeStruct_InputKey_ImplicitCast);
	void GetNodeNavSplineData(TArray<struct FSplinePoint>* NavSplineData);
	double GetNodeNormalizedAge(float CallFunc_GetGameTimeSinceCreation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void GetNodeLifespan(double* NodeLife);
	void GetNodeType(enum class E_TrackingNodeType* NodeType);
	void GetNodeID(int32* NodeId);
	void GetPrecedingNode(class ABP_SquadTrackingNode_C** PrecedingNode);
	void InitTrackingNode(bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void DebugDisplayData(const struct FTransform& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, enum class E_TrackingNodeType Temp_byte_Variable, TArray<class UActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, class UMaterialInterface* Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable, class UMaterialInterface* Temp_object_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class E_TrackingNodeType Temp_byte_Variable_1, const struct FColor& K2Node_MakeStruct_Color, const struct FColor& K2Node_MakeStruct_Color_1, class UMaterialInterface* K2Node_Select_Default, const struct FColor& K2Node_MakeStruct_Color_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FColor& K2Node_Select_Default_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void PreceedingNodeDestroyed(class AActor* DestroyedActor);
	void CrossServerDestoryNode();
	void ReceiveAuthorityGained();
	void ExecuteUbergraph_BP_SquadTrackingNode(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsValid_ReturnValue, class ABP_SquadTrackingNode_C* K2Node_DynamicCast_AsBP_Squad_Tracking_Node, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1);
	void OnNodePromoted__DelegateSignature();
	void OnNodeInitialized__DelegateSignature();
	void OnNodeDestroyed__DelegateSignature();
};

}


