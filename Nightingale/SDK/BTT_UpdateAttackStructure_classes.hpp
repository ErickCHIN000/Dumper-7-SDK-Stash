#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC8 - 0xA8)
// BlueprintGeneratedClass BTT_UpdateAttackStructure.BTT_UpdateAttackStructure_C
class UBTT_UpdateAttackStructure_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_StructureCompositePiece_C*         CompositePiece;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    BPCreature;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_UpdateAttackStructure_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_UpdateAttackStructure(int32 EntryPoint, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue, class UBP_StructureCompositeComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, int32 CallFunc_GetPieceCount_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Variable, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, class UBP_StructureCompositePiece_C* K2Node_DynamicCast_AsBP_Structure_Composite_Piece, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> CallFunc_GetEventsObject_self_CastInput, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, bool CallFunc_IsStructureOfType_ReturnValue, bool CallFunc_IsStructureOfType_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> CallFunc_GetEventsObject_self_CastInput_1, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject_1, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_GetReachableNavTransform_Success, const struct FTransform& CallFunc_GetReachableNavTransform_ReachableNavTransform, class UObject* CallFunc_GetReachableNavTransform_Structure, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool CallFunc_IsLocationReachableOnNavMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_1, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_3, bool K2Node_SwitchEnum_CmpSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IBPI_StructureComponentOwner_C> CallFunc_GetEventsObject_self_CastInput_2, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject_3);
};

}


