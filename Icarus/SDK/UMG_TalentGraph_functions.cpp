#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentGraph.UMG_TalentGraph_C
// (None)

class UClass* UUMG_TalentGraph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentGraph_C");

	return Clss;
}


// UMG_TalentGraph_C UMG_TalentGraph.Default__UMG_TalentGraph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentGraph_C* UUMG_TalentGraph_C::GetDefaultObj()
{
	static class UUMG_TalentGraph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentGraph_C*>(UUMG_TalentGraph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentGraph.UMG_TalentGraph_C.OnZoomChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentGraph_C::OnZoomChanged(int32 Level, float Scale, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentGraph_C", "OnZoomChanged");

	Params::UUMG_TalentGraph_C_OnZoomChanged_Params Parms{};

	Parms.Level = Level;
	Parms.Scale = Scale;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentGraph.UMG_TalentGraph_C.Setup Panner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentViewsRowHandle       CallFunc_GetViewData_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentGraph_C::Setup_Panner(const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentGraph_C", "Setup Panner");

	Params::UUMG_TalentGraph_C_Setup_Panner_Params Parms{};

	Parms.CallFunc_GetViewData_ReturnValue = CallFunc_GetViewData_ReturnValue;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentGraph.UMG_TalentGraph_C.OnTalentTreeAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentTreeWidget*           TalentTree                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentGraph_C::OnTalentTreeAdded(class UTalentTreeWidget* TalentTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentGraph_C", "OnTalentTreeAdded");

	Params::UUMG_TalentGraph_C_OnTalentTreeAdded_Params Parms{};

	Parms.TalentTree = TalentTree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentGraph.UMG_TalentGraph_C.PostSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_TalentGraph_C::PostSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentGraph_C", "PostSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentGraph.UMG_TalentGraph_C.ExecuteUbergraph_UMG_TalentGraph
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UTalentTreeWidget*           K2Node_Event_TalentTree                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentTree_C*           K2Node_DynamicCast_AsUMG_Talent_Tree                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentGraph_C::ExecuteUbergraph_UMG_TalentGraph(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UTalentTreeWidget* K2Node_Event_TalentTree, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_TalentTree_C* K2Node_DynamicCast_AsUMG_Talent_Tree, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_2, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentGraph_C", "ExecuteUbergraph_UMG_TalentGraph");

	Params::UUMG_TalentGraph_C_ExecuteUbergraph_UMG_TalentGraph_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_Event_TalentTree = K2Node_Event_TalentTree;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Tree = K2Node_DynamicCast_AsUMG_Talent_Tree;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot_1 = K2Node_DynamicCast_AsHorizontal_Box_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


