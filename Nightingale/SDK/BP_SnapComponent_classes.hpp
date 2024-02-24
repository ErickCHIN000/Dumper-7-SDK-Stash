#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x17A - 0x168)
// BlueprintGeneratedClass BP_SnapComponent.BP_SnapComponent_C
class UBP_SnapComponent_C : public UStructureGridComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugDrawGridPoints;                               // 0x170(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         PlacementRequiresSnap;                             // 0x171(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESnapType                         SnapType;                                          // 0x172(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultGridPointIndex;                             // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeSupportedByAdjacency;                         // 0x178(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSupportOtherPieces;                             // 0x179(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SnapComponent_C* GetDefaultObj();

	void OnRep_DebugDrawGridPoints(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ToggleSnapPointVisibility();
	void ExecuteUbergraph_BP_SnapComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UCompositePieceSnapObject*>& CallFunc_DEBUG_GetAllSnapObjects_OutSnapObjects, class UCompositePieceSnapObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_CompositePieceSnapObject_C* K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UCompositePieceSnapObject* CallFunc_GetSinglePieceSnapObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_DEBUG_DrawGridPoints_DeltaSeconds_ImplicitCast);
};

}


