#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x368 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C
class UWBP_HUD_Structure_TotalRequiredResources_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              ResourceRequirementsBox;                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Entry_Size_Override;                               // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2CD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               StructurePiece;                                    // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_TotalRequiredResources_C* GetDefaultObj();

	void InitializeDesignerPreview(int32 Temp_int_Variable, class UWBP_HUD_Structure_TotalRequiredResources_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnResourcesRemoved(struct FStructureRemoveResourcesContext& RemovedResourcesContext);
	void OnResourcesAdded(struct FStructureAddResourcesContext& AddResourcesContext);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void GetStructurePiece(class UObject* InStructure, class UObject** OutStructure, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue);
	void TryAddResourcesEntry(struct FStructureResourceRequirements& ResourceRequirements, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_TotalRequiredResources_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFuel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	bool IsFuel(struct FStructureResourceRequirements& Requirements, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_ConstraintHasTag_ReturnValue);
	void Refresh(const TArray<struct FStructureResourceRequirements>& LResourceRequirements, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, bool CallFunc_HasAnyChildren_ReturnValue, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateStructure(class UObject* NewStructure, class UObject* CallFunc_GetStructurePiece_OutStructure, bool CallFunc_IsValid_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_TotalRequiredResources(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


