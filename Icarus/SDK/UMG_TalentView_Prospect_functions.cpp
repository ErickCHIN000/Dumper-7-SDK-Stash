#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentView_Prospect.UMG_TalentView_Prospect_C
// (None)

class UClass* UUMG_TalentView_Prospect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentView_Prospect_C");

	return Clss;
}


// UMG_TalentView_Prospect_C UMG_TalentView_Prospect.Default__UMG_TalentView_Prospect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentView_Prospect_C* UUMG_TalentView_Prospect_C::GetDefaultObj()
{
	static class UUMG_TalentView_Prospect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentView_Prospect_C*>(UUMG_TalentView_Prospect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnLockedMissionsUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTimeLockedMissionInfo>NewLockedMissions                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FTimeLockedMissionInfo>RemovedLockedMissions                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<struct FFactionMissionsRowHandle, struct FTimeLockedMissionInfo>RemovedMissionsMap                                               (Edit, BlueprintVisible)
// TMap<struct FFactionMissionsRowHandle, struct FTimeLockedMissionInfo>NewMissionsMap                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentGraphWidget*          K2Node_DynamicCast_AsTalent_Graph_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTalentsRowHandle>   CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentWidget*               CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Prospect_C*      K2Node_DynamicCast_AsUMG_Talent_Prospect                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Prospect_C*      K2Node_DynamicCast_AsUMG_Talent_Prospect_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Array_Get_Item_3                                        (NoDestructor)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Map_Find_Value_1                                        (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Map_Find_Value_2                                        (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Array_Get_Item_4                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentView_Prospect_C::OnLockedMissionsUpdated(TArray<struct FTimeLockedMissionInfo>& NewLockedMissions, TArray<struct FTimeLockedMissionInfo>& RemovedLockedMissions, TMap<struct FFactionMissionsRowHandle, struct FTimeLockedMissionInfo> RemovedMissionsMap, TMap<struct FFactionMissionsRowHandle, struct FTimeLockedMissionInfo> NewMissionsMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FTalentsRowHandle>& CallFunc_Map_Keys_Keys, const struct FTalentsRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UUMG_Talent_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_Prospect, bool K2Node_DynamicCast_bSuccess_1, class UUMG_Talent_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_Prospect_1, bool K2Node_DynamicCast_bSuccess_2, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimeLockedMissionInfo& CallFunc_Array_Get_Item_3, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, int32 CallFunc_Array_Length_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FTimeLockedMissionInfo& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FTimeLockedMissionInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FTimeLockedMissionInfo& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "OnLockedMissionsUpdated");

	Params::UUMG_TalentView_Prospect_C_OnLockedMissionsUpdated_Params Parms{};

	Parms.NewLockedMissions = NewLockedMissions;
	Parms.RemovedLockedMissions = RemovedLockedMissions;
	Parms.RemovedMissionsMap = RemovedMissionsMap;
	Parms.NewMissionsMap = NewMissionsMap;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsTalent_Graph_Widget = K2Node_DynamicCast_AsTalent_Graph_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Prospect = K2Node_DynamicCast_AsUMG_Talent_Prospect;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Prospect_1 = K2Node_DynamicCast_AsUMG_Talent_Prospect_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetGraphWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTalentGraphWidget*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentGraphWidget*          K2Node_DynamicCast_AsTalent_Graph_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UTalentGraphWidget* UUMG_TalentView_Prospect_C::GetGraphWidget(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "GetGraphWidget");

	Params::UUMG_TalentView_Prospect_C_GetGraphWidget_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTalent_Graph_Widget = K2Node_DynamicCast_AsTalent_Graph_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetGraphWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTalentGraphWidget*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentGraphWidget*          K2Node_DynamicCast_AsTalent_Graph_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UTalentGraphWidget* UUMG_TalentView_Prospect_C::GetGraphWidget_0(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "GetGraphWidget_0");

	Params::UUMG_TalentView_Prospect_C_GetGraphWidget_0_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTalent_Graph_Widget = K2Node_DynamicCast_AsTalent_Graph_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetTalentTreeWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTalentTreeWidget*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TSet<class UTalentTreeWidget*>     Talent_Trees                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTalentTreeWidget*>   CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentGraph_C*          K2Node_DynamicCast_AsUMG_Talent_Graph                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UTalentTreeWidget*> UUMG_TalentView_Prospect_C::GetTalentTreeWidgets(TSet<class UTalentTreeWidget*> Talent_Trees, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_Set_ToArray_Result, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "GetTalentTreeWidgets");

	Params::UUMG_TalentView_Prospect_C_GetTalentTreeWidgets_Params Parms{};

	Parms.Talent_Trees = Talent_Trees;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Graph = K2Node_DynamicCast_AsUMG_Talent_Graph;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface*       TalentModel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CurrentArchetype                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   CallFunc_GetTalents_ReturnValue                                  (ConstParm, ReferenceParm)
// TArray<struct FTalentArchetypesRowHandle>CallFunc_GetArchetypes_ReturnValue                               (ConstParm, ReferenceParm)
// struct FTalentArchetypesRowHandle  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentGraph_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentArchetype_Player_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::Setup(class UTalentModelInterface* TalentModel, const struct FTalentArchetypesRowHandle& CurrentArchetype, int32 Temp_int_Array_Index_Variable, TArray<struct FTalentsRowHandle>& CallFunc_GetTalents_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUMG_TalentGraph_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_TalentArchetype_Player_C* CallFunc_Create_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "Setup");

	Params::UUMG_TalentView_Prospect_C_Setup_Params Parms{};

	Parms.TalentModel = TalentModel;
	Parms.CurrentArchetype = CurrentArchetype;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTalents_ReturnValue = CallFunc_GetTalents_ReturnValue;
	Parms.CallFunc_GetArchetypes_ReturnValue = CallFunc_GetArchetypes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnFail_FEA0825340002E0EB468BBA81BA64A6F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGenerateProspects       Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Prospect_C::OnFail_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "OnFail_FEA0825340002E0EB468BBA81BA64A6F");

	Params::UUMG_TalentView_Prospect_C_OnFail_FEA0825340002E0EB468BBA81BA64A6F_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnSuccess_FEA0825340002E0EB468BBA81BA64A6F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGenerateProspects       Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Prospect_C::OnSuccess_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "OnSuccess_FEA0825340002E0EB468BBA81BA64A6F");

	Params::UUMG_TalentView_Prospect_C_OnSuccess_FEA0825340002E0EB468BBA81BA64A6F_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::OnClick(const struct FTalentArchetypesRowHandle& Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "OnClick");

	Params::UUMG_TalentView_Prospect_C_OnClick_Params Parms{};

	Parms.Archetype = Archetype;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnModelViewChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTalentModelInterface*       InModel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentViewInterface*        InView                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::OnModelViewChanged(class UTalentModelInterface* InModel, class UTalentViewInterface* InView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "OnModelViewChanged");

	Params::UUMG_TalentView_Prospect_C_OnModelViewChanged_Params Parms{};

	Parms.InModel = InModel;
	Parms.InView = InView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_TalentView_Prospect_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::ProspectClicked(const struct FTalentsRowHandle& Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "ProspectClicked");

	Params::UUMG_TalentView_Prospect_C_ProspectClicked_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GenerateProspects
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTalentsRowHandle>   ProspectTalentRowHandles                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Prospect_C::GenerateProspects(TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "GenerateProspects");

	Params::UUMG_TalentView_Prospect_C_GenerateProspects_Params Parms{};

	Parms.ProspectTalentRowHandles = ProspectTalentRowHandles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature(const struct FTalentArchetypesRowHandle& Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature");

	Params::UUMG_TalentView_Prospect_C_BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature_Params Parms{};

	Parms.Archetype = Archetype;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.UpdateTerrainSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentView_Prospect_C::UpdateTerrainSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "UpdateTerrainSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ReturnToTerrainSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentView_Prospect_C::ReturnToTerrainSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "ReturnToTerrainSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentView_Prospect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.SetSelectedArchetype
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::SetSelectedArchetype(struct FTalentArchetypesRowHandle& Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "SetSelectedArchetype");

	Params::UUMG_TalentView_Prospect_C_SetSelectedArchetype_Params Parms{};

	Parms.Archetype = Archetype;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.SetEncryptedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnProspectAvailability Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::SetEncryptedState(enum class EOnProspectAvailability Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "SetEncryptedState");

	Params::UUMG_TalentView_Prospect_C_SetEncryptedState_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.SetIsOpenWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OpenWorld                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentView_Prospect_C::SetIsOpenWorld(bool OpenWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "SetIsOpenWorld");

	Params::UUMG_TalentView_Prospect_C_SetIsOpenWorld_Params Parms{};

	Parms.OpenWorld = OpenWorld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ExecuteUbergraph_UMG_TalentView_Prospect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_TalentGraph_C*          K2Node_DynamicCast_AsUMG_Talent_Graph                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGenerateProspects       Temp_struct_Variable                                             (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGenerateProspects       K2Node_CustomEvent_Response                                      (ConstParm)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UTalentWidget*               CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Prospect_C*      K2Node_DynamicCast_AsUMG_Talent_Prospect                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentArchetypesRowHandle  K2Node_CustomEvent_Archetype_1                                   (NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentArchetype_Player_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentArchetypesRowHandle>CallFunc_GetArchetypes_ReturnValue                               (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface*       K2Node_Event_InModel                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentViewInterface*        K2Node_Event_InView                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               CallFunc_Array_Get_Item_3                                        (None)
// struct FTalentsRowHandle           K2Node_CustomEvent_Talent                                        (NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   K2Node_CustomEvent_ProspectTalentRowHandles                      (ConstParm, ReferenceParm)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item_4                                        (NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           CallFunc_Map_Find_Value_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// struct FReqGenerateProspects       K2Node_MakeStruct_ReqGenerateProspects                           (None)
// class UGenerateProspectsCallbackProxyGen*CallFunc_GenerateProspects_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentArchetypesRowHandle>CallFunc_GetArchetypes_ReturnValue_1                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentArchetypesRowHandle  K2Node_ComponentBoundEvent_Archetype                             (NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  K2Node_CustomEvent_Archetype                                     (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys_2                                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FProspectInfo               K2Node_MakeStruct_ProspectInfo                                   (None)
// struct FTalentsRowHandle           CallFunc_Map_Find_Value_3                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResGenerateProspects       K2Node_CustomEvent_Response_1                                    (ConstParm)
// enum class EOnProspectAvailability K2Node_CustomEvent_Status                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_TalentGraph_C*          K2Node_DynamicCast_AsUMG_Talent_Graph_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentTreeWidget*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTalentsRowHandle>   CallFunc_Map_Keys_Keys_3                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item_7                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentWidget*               CallFunc_Map_Find_Value_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Prospect_C*      K2Node_DynamicCast_AsUMG_Talent_Prospect_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<struct FTimeLockedMissionInfo>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_OpenWorld                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentView_Prospect_C::ExecuteUbergraph_UMG_TalentView_Prospect(int32 EntryPoint, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool Temp_bool_Variable, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FResGenerateProspects& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, const struct FResGenerateProspects& K2Node_CustomEvent_Response, class UTalentTreeWidget* CallFunc_Array_Get_Item, TArray<struct FTalentsRowHandle>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_6, const struct FTalentsRowHandle& CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTalentWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMG_Talent_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_Prospect, bool K2Node_DynamicCast_bSuccess_1, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Archetype_1, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, class UUMG_TalentArchetype_Player_C* CallFunc_Array_Get_Item_2, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class UTalentModelInterface* K2Node_Event_InModel, class UTalentViewInterface* K2Node_Event_InView, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, int32 Temp_int_Array_Index_Variable_7, const struct FProspectInfo& CallFunc_Array_Get_Item_3, const struct FTalentsRowHandle& K2Node_CustomEvent_Talent, TArray<struct FTalentsRowHandle>& K2Node_CustomEvent_ProspectTalentRowHandles, const struct FTalentsRowHandle& CallFunc_Array_Get_Item_4, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, int32 CallFunc_Array_Length_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_6, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, const struct FTalentsRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FProspectInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const struct FReqGenerateProspects& K2Node_MakeStruct_ReqGenerateProspects, class UGenerateProspectsCallbackProxyGen* CallFunc_GenerateProspects_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue_1, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FTalentArchetypesRowHandle& K2Node_ComponentBoundEvent_Archetype, enum class ESlateVisibility K2Node_Select_Default, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Archetype, bool CallFunc_IsWithEditor_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_7, TArray<class FString>& CallFunc_Map_Keys_Keys_2, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_5, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FProspectInfo& K2Node_MakeStruct_ProspectInfo, const struct FTalentsRowHandle& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FResGenerateProspects& K2Node_CustomEvent_Response_1, enum class EOnProspectAvailability K2Node_CustomEvent_Status, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph_1, bool K2Node_DynamicCast_bSuccess_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item_6, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FTalentsRowHandle>& CallFunc_Map_Keys_Keys_3, int32 CallFunc_Array_Length_ReturnValue_6, const struct FTalentsRowHandle& CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_6, class UTalentWidget* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UUMG_Talent_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_Prospect_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<struct FTimeLockedMissionInfo>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_OpenWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "ExecuteUbergraph_UMG_TalentView_Prospect");

	Params::UUMG_TalentView_Prospect_C_ExecuteUbergraph_UMG_TalentView_Prospect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Graph = K2Node_DynamicCast_AsUMG_Talent_Graph;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Prospect = K2Node_DynamicCast_AsUMG_Talent_Prospect;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Archetype_1 = K2Node_CustomEvent_Archetype_1;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetArchetypes_ReturnValue = CallFunc_GetArchetypes_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_Event_InModel = K2Node_Event_InModel;
	Parms.K2Node_Event_InView = K2Node_Event_InView;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_CustomEvent_Talent = K2Node_CustomEvent_Talent;
	Parms.K2Node_CustomEvent_ProspectTalentRowHandles = K2Node_CustomEvent_ProspectTalentRowHandles;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.K2Node_MakeStruct_ReqGenerateProspects = K2Node_MakeStruct_ReqGenerateProspects;
	Parms.CallFunc_GenerateProspects_ReturnValue = CallFunc_GenerateProspects_ReturnValue;
	Parms.CallFunc_GetModel_ReturnValue_1 = CallFunc_GetModel_ReturnValue_1;
	Parms.CallFunc_GetArchetypes_ReturnValue_1 = CallFunc_GetArchetypes_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Archetype = K2Node_ComponentBoundEvent_Archetype;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Archetype = K2Node_CustomEvent_Archetype;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Map_Keys_Keys_2 = CallFunc_Map_Keys_Keys_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_ProspectInfo = K2Node_MakeStruct_ProspectInfo;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Graph_1 = K2Node_DynamicCast_AsUMG_Talent_Graph_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Map_Keys_Keys_3 = CallFunc_Map_Keys_Keys_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Prospect_1 = K2Node_DynamicCast_AsUMG_Talent_Prospect_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_OpenWorld = K2Node_CustomEvent_OpenWorld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectListUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentView_Prospect_C::ProspectListUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "ProspectListUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_TalentView_Prospect_C::ProspectSelected__DelegateSignature(const struct FFProspectServerInfo& ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Prospect_C", "ProspectSelected__DelegateSignature");

	Params::UUMG_TalentView_Prospect_C_ProspectSelected__DelegateSignature_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


