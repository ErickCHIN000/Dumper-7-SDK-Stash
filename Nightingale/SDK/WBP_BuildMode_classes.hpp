#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD4 (0x41C - 0x348)
// WidgetBlueprintGeneratedClass WBP_BuildMode.WBP_BuildMode_C
class UWBP_BuildMode_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       BuildmodeSwitcher;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BuildPlacementActionSwitcher;                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      CompositeImage;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      DecorationImage;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_IconBox_Buildmode;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_IconBox_PlacementMode;                          // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Hb_OpenGuidebook;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_CompositeStructureLimit;             // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_DecorationLimit;                     // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_action;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CompositeStructureMax;                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_StructureMax;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionPresentation_C*  WBP_CommonInputActionPresentation_CancelBuildMode; // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionPresentation_C*  WBP_CommonInputActionPresentation_CancelPlacementMode; // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_Vert_C* WBP_Component_SoftEdge_Divider_Vert;               // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_Vert_C* WBP_Component_SoftEdge_Divider_Vert_1;             // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_CancelBuildMode;                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_CancelPlacementMode;                // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UInputAction>>   BuildModeActions;                                  // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UInputAction>>   PlacementModeActions;                              // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MaxConstructedCount;                               // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCompositeCount;                                 // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           DefaultColor;                                      // 0x408(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_BuildMode_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_1(const struct FRealmStructureCountInfo& RealmStructureCountInfo);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FRealmStructureCountInfo& RealmStructureCountInfo);
	void ResetStructureLimitCosmetics();
	void OnPlacementStarted(class UObject* PlacementActor, const struct FSlateColor& HighlightColor, bool CallFunc_IsValid_ReturnValue, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess_1);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UStructureSubsystem* CallFunc_GetStructureSubsystem_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue_1);
	void SetupBindings(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UStructureSubsystem* CallFunc_GetStructureSubsystem_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void UpdateStructureLimits(struct FRealmStructureCountInfo& RealmStructureCountInfo, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	void Initialize(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UStructureSubsystem* CallFunc_GetStructureSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRealmStructureCountInfo& CallFunc_GetRealmStructureCountInfo_ReturnValue, const struct FRealmStructureCapInfo& CallFunc_GetRealmStructureCapInfo_ReturnValue);
	void GenerateContextualActionWidgets(TArray<TSoftObjectPtr<class UInputAction>>& InActions, class UHorizontalBox* WidgieHolder, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftObjectPtr<class UInputAction> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_BuildMode_ContextualAction_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void InitializeContextualActions(class UInputMappingContext* IMC_BuildMode, class UInputMappingContext* IMC_PlacementMode);
	void OnBuildModeContextChangedHandler(class UBP_BuildModeFeedbackData_C* Data, enum class EBuildModeContext Mode, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_BuildMode(int32 EntryPoint, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


