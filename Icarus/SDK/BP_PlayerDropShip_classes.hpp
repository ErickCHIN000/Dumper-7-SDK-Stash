#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x65 (0x37D - 0x318)
// BlueprintGeneratedClass BP_PlayerDropShip.BP_PlayerDropShip_C
class ABP_PlayerDropShip_C : public AIcarusRocket
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightableComponent*               Highlightable;                                     // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                Interactable;                                      // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSurvival_C*  AssignedPlayer;                                    // 0x338(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABP_DropshipSeat_C*>            Seats;                                             // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_PartBase_C*>                HighlightComponents;                               // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_DropshipSeat_C*                    SeatToEnter;                                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Seated;                                            // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DestinationHeight;                                 // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandHeightThreshold;                               // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Descend;                                           // 0x374(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialPositionOffset_0;                           // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Land;                                              // 0x37C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_PlayerDropShip_C* GetDefaultObj();

	void CalculateLandingVelocity(float Delta, struct FVector* Velocity, float* RangeDelta, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UpdateHighlight(class ABP_PartBase_C* Part, bool State, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AIcarusRocketPart*>& CallFunc_GetParts_ReturnValue, class AIcarusRocketPart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AIcarusRocketPart*>& CallFunc_GetParts_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AIcarusRocketPart* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnRocketAssembled(class ABP_PartBase_C* CurrentPart, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item, class ABP_DropshipSeat_C* K2Node_DynamicCast_AsBP_Dropship_Seat, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_DropshipSeat_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class AIcarusRocketPart*>& CallFunc_GetParts_ReturnValue, class AIcarusRocketPart* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ReceiveBeginPlay();
	void OnWorldInteraction(class UInteractableComponent* Interactable, class AActor* Instigator, struct FHitResult& HitResult);
	void EnterSeat(class ABP_DropshipSeat_C* DropShipSeat);
	void ReceiveTick(float DeltaSeconds);
	void Start();
	void Build_Default();
	void ExecuteUbergraph_BP_PlayerDropShip(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInteractableComponent* K2Node_CustomEvent_interactable, class AActor* K2Node_CustomEvent_Instigator, const struct FHitResult& K2Node_CustomEvent_HitResult, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_DropshipSeat_C* K2Node_CustomEvent_DropShipSeat, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_CalculateLandingVelocity_Velocity, float CallFunc_CalculateLandingVelocity_RangeDelta, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EnterSeat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_MakeLiteralItemTemplate_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


