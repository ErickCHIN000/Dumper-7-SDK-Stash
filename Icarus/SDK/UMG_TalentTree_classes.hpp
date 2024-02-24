#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x3A1 - 0x330)
// WidgetBlueprintGeneratedClass UMG_TalentTree.UMG_TalentTree_C
class UUMG_TalentTree_C : public UTalentTreeWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BottomSpacer;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            CanvasSlot;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            EditorSlot;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               LeftSpacer;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightSpacer;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TopSpacer;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TreeOverlay;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Horizontal;                                        // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2149[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox2D                                Boundary;                                          // 0x384(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class UUMG_TalentTreeTitle_C*                TitleWidget;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QueueRefresh;                                      // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_TalentTree_C* GetDefaultObj();

	struct FVector2D GetCanvasSize(const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue);
	void OnTalentChanged(struct FTalentsRowHandle& Talent, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess);
	void OnTalentRemoved(struct FTalentsRowHandle& Talent, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void Refresh_Talent_State(class UUMG_Talent_Base_C* Talent, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue);
	struct FVector2D GetCanvasOffset(bool bAbsolute, const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue_1, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue);
	void ClearTalentTree();
	void OnTalentTreeCreated(class UUMG_TalentTreeTitle_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, class UPanelSlot* CallFunc_SetContent_ReturnValue, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default);
	void OnTalentAdded(struct FTalentsRowHandle& Talent, const struct FTalentView& ViewData, class UUMG_Talent_Base_C* Widget, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsTalent_Widget, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTalentWidget* CallFunc_Create_ReturnValue, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void Refresh_Tree(class UTalentModelInterface_Const* Model);
	void Connect_To_Model();
	void Set_Width_Override(float Override);
	void Set_Height_Override(float Override);
	void SetOrientation(enum class EOrientation Orientation);
	void SetEditorCanvas(class UUserWidget* EditorCanvas);
	void Talent_Hovered(class UUMG_Talent_Base_C* Talent);
	void Talent_Unhovered();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetZoomLevel(int32 Level, float Scale);
	void ExecuteUbergraph_UMG_TalentTree(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UTalentModelInterface_Const* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Override_1, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, float K2Node_CustomEvent_Override, enum class EOrientation K2Node_Event_Orientation, class UUserWidget* K2Node_Event_EditorCanvas, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UUMG_Talent_Base_C* K2Node_CustomEvent_Talent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_Event_Level, float K2Node_Event_Scale, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class UTalentWidget*>& CallFunc_Map_Values_Values, TArray<class UTalentWidget*>& CallFunc_Map_Values_Values_1, class UTalentWidget* CallFunc_Array_Get_Item, class UTalentWidget* CallFunc_Array_Get_Item_1, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


