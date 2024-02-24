#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_QuestList.WBP_DB_QuestList_C
// (None)

class UClass* UWBP_DB_QuestList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_QuestList_C");

	return Clss;
}


// WBP_DB_QuestList_C WBP_DB_QuestList.Default__WBP_DB_QuestList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_QuestList_C* UWBP_DB_QuestList_C::GetDefaultObj()
{
	static class UWBP_DB_QuestList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_QuestList_C*>(UWBP_DB_QuestList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestList_C::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "ClearSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.GetSelectedQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasSelectedQuest                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        SelectedQuest                                                    (Parm, OutParm)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BP_GetNumItemsSelected_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestList_C::GetSelectedQuest(bool* HasSelectedQuest, struct FQuestAssetReference* SelectedQuest, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_BP_GetNumItemsSelected_ReturnValue, class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "GetSelectedQuest");

	Params::UWBP_DB_QuestList_C_GetSelectedQuest_Params Parms{};

	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_BP_GetNumItemsSelected_ReturnValue = CallFunc_BP_GetNumItemsSelected_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data = K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasSelectedQuest != nullptr)
		*HasSelectedQuest = Parms.HasSelectedQuest;

	if (SelectedQuest != nullptr)
		*SelectedQuest = std::move(Parms.SelectedQuest);

}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.SetListItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQuestAssetReference>QuestAssetReferences                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UBP_DB_QuestListEntryData_C*>QuestDataObjects                                                 (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestListEntryData_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestList_C::SetListItems(TArray<struct FQuestAssetReference>& QuestAssetReferences, const TArray<class UBP_DB_QuestListEntryData_C*>& QuestDataObjects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQuestAssetReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_QuestListEntryData_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "SetListItems");

	Params::UWBP_DB_QuestList_C_SetListItems_Params Parms{};

	Parms.QuestAssetReferences = QuestAssetReferences;
	Parms.QuestDataObjects = QuestDataObjects;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestList_C::BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UWBP_DB_QuestList_C_BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.ExecuteUbergraph_WBP_DB_QuestList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestList_C::ExecuteUbergraph_WBP_DB_QuestList(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UBP_DB_QuestListEntryData_C* K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "ExecuteUbergraph_WBP_DB_QuestList");

	Params::UWBP_DB_QuestList_C_ExecuteUbergraph_WBP_DB_QuestList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data = K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestList.WBP_DB_QuestList_C.OnQuestSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestAssetReference                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_QuestList_C::OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestList_C", "OnQuestSelected__DelegateSignature");

	Params::UWBP_DB_QuestList_C_OnQuestSelected__DelegateSignature_Params Parms{};

	Parms.QuestAssetReference = QuestAssetReference;

	UObject::ProcessEvent(Func, &Parms);

}

}


