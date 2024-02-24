#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x488 (0x7C8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_BuildModeFeedback.WBP_BuildModeFeedback_C
class UWBP_BuildModeFeedback_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_OverflowingTraitWarning;                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Traits;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_card;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_292;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PlaceableStructureTitle;                       // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_EnvironmentTraits;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_NegativeTraits;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_PositiveTraits;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStructureTraitComponent*              Interactable_Structure_Trait_Component;            // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FStructureData                        Interactable_Structure_Data;                       // 0x390(0x3E0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UObject*                               Interactable_Actor;                                // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class UWBP_sw_BuildModeFeedback_C*> TraitToWidgetMap;                                  // 0x778(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_BuildModeFeedback_C* GetDefaultObj();

	void OnPlacementEnded(class UObject* PlacementActor, bool bIsPlacementSuccessful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void EnsureLastChildHasNoDivider(int32 PositiveChildrenCount, int32 NegativeChildrenCount, const TArray<class UWidget*>& Children, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWBP_sw_BuildModeFeedback_C* K2Node_DynamicCast_AsWBP_Sw_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_sw_BuildModeFeedback_C* K2Node_DynamicCast_AsWBP_Sw_Build_Mode_Feedback_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UWBP_sw_BuildModeFeedback_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_BuildModeFeedback_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ClearTraitChildren();
	void HandleTraitAdd(const struct FStructureTrait& Trait, class UStructureTraitUIData* LTraitUIData, class UWBP_sw_BuildModeFeedback_C* Widget, class UWBP_sw_BuildModeFeedback_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2);
	void HandleAddInitialTraits(enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleTraitAdditions(TArray<struct FStructureTrait>& AddedTraits, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleTraitRemovals(TArray<struct FStructureTrait>& RemovedTraits, const struct FStructureTrait& CurTrait, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FStructureTrait& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_sw_BuildModeFeedback_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2);
	void Unbind_All_Events(class ANWXPlayerController* PlayerController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1);
	void Set_Traits(const struct FStructureTraitChangedContext& Context, const struct FStructureTrait& CurTrait, const TArray<struct FStructureTrait>& LNegativeTraits, const TArray<struct FStructureTrait>& LPositiveTraits, const struct FStructureTrait& LActiveTrait, bool CallFunc_IsValid_ReturnValue, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits, TArray<struct FStructureTrait>& CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits);
	void On_Structure_Traits_Changed(struct FStructureTraitChangedContext& TraitChangedContext, TScriptInterface<class IStructurePlacementFeedbackInterface> K2Node_DynamicCast_AsStructure_Placement_Feedback_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStructurePlacementFeedback& CallFunc_Client_GetPlacementFeedback_ReturnValue);
	void Update_Card_Image();
	void Cache_Variables(class UObject* Placement_Structure, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnPlacementStarted(class UObject* PlacementActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void Hide_UI();
	void Show_UI();
	void BuildMode_Context_Changed(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_BuildModeFeedback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2);
};

}


