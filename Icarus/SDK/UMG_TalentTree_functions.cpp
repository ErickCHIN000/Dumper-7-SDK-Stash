#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentTree.UMG_TalentTree_C
// (None)

class UClass* UUMG_TalentTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentTree_C");

	return Clss;
}


// UMG_TalentTree_C UMG_TalentTree.Default__UMG_TalentTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentTree_C* UUMG_TalentTree_C::GetDefaultObj()
{
	static class UUMG_TalentTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentTree_C*>(UUMG_TalentTree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentTree.UMG_TalentTree_C.GetCanvasSize
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetPaintSpaceGeometry_ReturnValue                       (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UUMG_TalentTree_C::GetCanvasSize(const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "GetCanvasSize");

	Params::UUMG_TalentTree_C_GetCanvasSize_Params Parms{};

	Parms.CallFunc_GetPaintSpaceGeometry_ReturnValue = CallFunc_GetPaintSpaceGeometry_ReturnValue;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentTree.UMG_TalentTree_C.OnTalentChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UTalentWidget*               CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Base_C*          K2Node_DynamicCast_AsUMG_Talent_Base                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTree_C::OnTalentChanged(struct FTalentsRowHandle& Talent, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "OnTalentChanged");

	Params::UUMG_TalentTree_C_OnTalentChanged_Params Parms{};

	Parms.Talent = Talent;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Base = K2Node_DynamicCast_AsUMG_Talent_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.OnTalentRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UTalentWidget*               CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTree_C::OnTalentRemoved(struct FTalentsRowHandle& Talent, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "OnTalentRemoved");

	Params::UUMG_TalentTree_C_OnTalentRemoved_Params Parms{};

	Parms.Talent = Talent;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Refresh Talent State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Talent_Base_C*          Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            CallFunc_GetTalentState_OutData                                  (NoDestructor)
// bool                               CallFunc_GetTalentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTree_C::Refresh_Talent_State(class UUMG_Talent_Base_C* Talent, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Refresh Talent State");

	Params::UUMG_TalentTree_C_Refresh_Talent_State_Params Parms{};

	Parms.Talent = Talent;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_GetTalentState_OutData = CallFunc_GetTalentState_OutData;
	Parms.CallFunc_GetTalentState_ReturnValue = CallFunc_GetTalentState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.GetCanvasOffset
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bAbsolute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetPaintSpaceGeometry_ReturnValue                       (ConstParm, IsPlainOldData, NoDestructor)
// struct FGeometry                   CallFunc_GetPaintSpaceGeometry_ReturnValue_1                     (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_LocalToAbsolute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UUMG_TalentTree_C::GetCanvasOffset(bool bAbsolute, const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue_1, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "GetCanvasOffset");

	Params::UUMG_TalentTree_C_GetCanvasOffset_Params Parms{};

	Parms.bAbsolute = bAbsolute;
	Parms.CallFunc_GetPaintSpaceGeometry_ReturnValue = CallFunc_GetPaintSpaceGeometry_ReturnValue;
	Parms.CallFunc_GetPaintSpaceGeometry_ReturnValue_1 = CallFunc_GetPaintSpaceGeometry_ReturnValue_1;
	Parms.CallFunc_LocalToAbsolute_ReturnValue = CallFunc_LocalToAbsolute_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentTree.UMG_TalentTree_C.ClearTalentTree
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UUMG_TalentTree_C::ClearTalentTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "ClearTalentTree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTree.UMG_TalentTree_C.OnTalentTreeCreated
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_TalentTreeTitle_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FTalentViewsRowHandle       CallFunc_GetViewData_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentTree                 CallFunc_GetTalentTreesStruct_TalentTrees                        (None)
// enum class EValid                  CallFunc_GetTalentTreesStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UUMG_TalentTree_C::OnTalentTreeCreated(class UUMG_TalentTreeTitle_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, class UPanelSlot* CallFunc_SetContent_ReturnValue, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "OnTalentTreeCreated");

	Params::UUMG_TalentTree_C_OnTalentTreeCreated_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetViewData_ReturnValue = CallFunc_GetViewData_ReturnValue;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_GetTalentTreesStruct_TalentTrees = CallFunc_GetTalentTreesStruct_TalentTrees;
	Parms.CallFunc_GetTalentTreesStruct_Paths = CallFunc_GetTalentTreesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.OnTalentAdded
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FTalentView                 ViewData                                                         (Edit, BlueprintVisible)
// class UUMG_Talent_Base_C*          Widget                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsTalent_Widget                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UTalentWidget*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Talent_Base_C*          K2Node_DynamicCast_AsUMG_Talent_Base                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentViewsRowHandle       CallFunc_GetViewData_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::OnTalentAdded(struct FTalentsRowHandle& Talent, const struct FTalentView& ViewData, class UUMG_Talent_Base_C* Widget, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsTalent_Widget, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTalentWidget* CallFunc_Create_ReturnValue, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "OnTalentAdded");

	Params::UUMG_TalentTree_C_OnTalentAdded_Params Parms{};

	Parms.Talent = Talent;
	Parms.ViewData = ViewData;
	Parms.Widget = Widget;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ClassDynamicCast_AsTalent_Widget = K2Node_ClassDynamicCast_AsTalent_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Base = K2Node_DynamicCast_AsUMG_Talent_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetViewData_ReturnValue = CallFunc_GetViewData_ReturnValue;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Refresh Tree
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::Refresh_Tree(class UTalentModelInterface_Const* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Refresh Tree");

	Params::UUMG_TalentTree_C_Refresh_Tree_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Connect To Model
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentTree_C::Connect_To_Model()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Connect To Model");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Set Width Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::Set_Width_Override(float Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Set Width Override");

	Params::UUMG_TalentTree_C_Set_Width_Override_Params Parms{};

	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Set Height Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Override                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::Set_Height_Override(float Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Set Height Override");

	Params::UUMG_TalentTree_C_Set_Height_Override_Params Parms{};

	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.SetOrientation
// (BlueprintEvent)
// Parameters:
// enum class EOrientation            Orientation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::SetOrientation(enum class EOrientation Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "SetOrientation");

	Params::UUMG_TalentTree_C_SetOrientation_Params Parms{};

	Parms.Orientation = Orientation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.SetEditorCanvas
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 EditorCanvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::SetEditorCanvas(class UUserWidget* EditorCanvas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "SetEditorCanvas");

	Params::UUMG_TalentTree_C_SetEditorCanvas_Params Parms{};

	Parms.EditorCanvas = EditorCanvas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Talent Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Talent_Base_C*          Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::Talent_Hovered(class UUMG_Talent_Base_C* Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Talent Hovered");

	Params::UUMG_TalentTree_C_Talent_Hovered_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Talent Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentTree_C::Talent_Unhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Talent Unhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTree.UMG_TalentTree_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "Tick");

	Params::UUMG_TalentTree_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.SetZoomLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTree_C::SetZoomLevel(int32 Level, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "SetZoomLevel");

	Params::UUMG_TalentTree_C_SetZoomLevel_Params Parms{};

	Parms.Level = Level;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTree.UMG_TalentTree_C.ExecuteUbergraph_UMG_TalentTree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* K2Node_CustomEvent_Model                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Override_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Override                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOrientation            K2Node_Event_Orientation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_EditorCanvas                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Talent_Base_C*          K2Node_CustomEvent_Talent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTalentWidget*>       CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UTalentWidget*>       CallFunc_Map_Values_Values_1                                     (ReferenceParm, ContainsInstancedReference)
// class UTalentWidget*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentWidget*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Talent_Base_C*          K2Node_DynamicCast_AsUMG_Talent_Base                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Base_C*          K2Node_DynamicCast_AsUMG_Talent_Base_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentTree_C::ExecuteUbergraph_UMG_TalentTree(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UTalentModelInterface_Const* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Override_1, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, float K2Node_CustomEvent_Override, enum class EOrientation K2Node_Event_Orientation, class UUserWidget* K2Node_Event_EditorCanvas, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UUMG_Talent_Base_C* K2Node_CustomEvent_Talent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_Event_Level, float K2Node_Event_Scale, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class UTalentWidget*>& CallFunc_Map_Values_Values, TArray<class UTalentWidget*>& CallFunc_Map_Values_Values_1, class UTalentWidget* CallFunc_Array_Get_Item, class UTalentWidget* CallFunc_Array_Get_Item_1, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base, bool K2Node_DynamicCast_bSuccess, class UUMG_Talent_Base_C* K2Node_DynamicCast_AsUMG_Talent_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTree_C", "ExecuteUbergraph_UMG_TalentTree");

	Params::UUMG_TalentTree_C_ExecuteUbergraph_UMG_TalentTree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Override_1 = K2Node_CustomEvent_Override_1;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.K2Node_CustomEvent_Override = K2Node_CustomEvent_Override;
	Parms.K2Node_Event_Orientation = K2Node_Event_Orientation;
	Parms.K2Node_Event_EditorCanvas = K2Node_Event_EditorCanvas;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.K2Node_CustomEvent_Talent = K2Node_CustomEvent_Talent;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.CallFunc_GetModel_ReturnValue_1 = CallFunc_GetModel_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Base = K2Node_DynamicCast_AsUMG_Talent_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Base_1 = K2Node_DynamicCast_AsUMG_Talent_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


