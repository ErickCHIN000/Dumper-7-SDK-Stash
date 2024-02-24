#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C
class UBP_DamageObject_CompositePiece_C : public UBP_DamageObject_StructureConstructed_C
{
public:

	static class UClass* StaticClass();
	static class UBP_DamageObject_CompositePiece_C* GetDefaultObj();

	void Apply_Perks(class AActor* DesctructionSource, class UAbilitySystemComponent* Ability_System, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void DropResource(class UObject* Structure, const struct FInventoryEntry& Resource, const struct FTransform& SpawnTransform, class UStructureCompositeComponent* OwningStructureCompositeComp, const struct FCompositePieceResourceDropContext& K2Node_MakeStruct_CompositePieceResourceDropContext, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success, bool CallFunc_DoStructureDestroy_Success, bool CallFunc_IsStructureValid_ReturnValue, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess_1);
	void GetDroppableResources(class UObject* Structure, TArray<struct FInventoryEntry>* DroppableResources, class UObject* LStructure, TArray<struct FInventoryEntry>& CallFunc_GetDroppableResources_DroppableResources, TArray<struct FInventoryEntry>& CallFunc_MovePieceResourcesToOwningStructure_OutUnusedResources, bool CallFunc_MovePieceResourcesToOwningStructure_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


