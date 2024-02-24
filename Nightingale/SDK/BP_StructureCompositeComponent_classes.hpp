#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// BlueprintGeneratedClass BP_StructureCompositeComponent.BP_StructureCompositeComponent_C
class UBP_StructureCompositeComponent_C : public UStructureCompositeComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_StructureCompositeComponent_C* GetDefaultObj();

	void SpawnDroppedResource(struct FCompositePieceResourceDropContext& ResourceDropContext, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RestoreStructureDataFromPersistence();
	void RestoreHealthFromPieces(class UAbilitySystemComponent* AbilitySystemComponent, class UObject* Piece, int32 Temp_int_Variable, int32 CallFunc_GetPieceCount_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_AddPieceHealthToOwningStructure_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void K2_OnRepCompositePieces();
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_StructureCompositeComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess);
};

}


