#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_WorkshopUI_Main.wid_WorkshopUI_Main_C
// (None)

class UClass* UWid_WorkshopUI_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_WorkshopUI_Main_C");

	return Clss;
}


// wid_WorkshopUI_Main_C wid_WorkshopUI_Main.Default__wid_WorkshopUI_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_WorkshopUI_Main_C* UWid_WorkshopUI_Main_C::GetDefaultObj()
{
	static class UWid_WorkshopUI_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_WorkshopUI_Main_C*>(UWid_WorkshopUI_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.AnyTutorialPopupVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_WorkshopUI_Main_C::AnyTutorialPopupVisible(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "AnyTutorialPopupVisible");

	Params::UWid_WorkshopUI_Main_C_AnyTutorialPopupVisible_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.IsAnyCompanionAssignedToStoryMission
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EEventMap, struct FActiveQuestInfo>Quests                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EEventMap               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)

void UWid_WorkshopUI_Main_C::IsAnyCompanionAssignedToStoryMission(bool* Result, TMap<enum class EEventMap, struct FActiveQuestInfo> Quests, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> K2Node_MakeVariable_MakeVariableOutput, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, enum class EEventMap CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_NameName_ReturnValue, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "IsAnyCompanionAssignedToStoryMission");

	Params::UWid_WorkshopUI_Main_C_IsAnyCompanionAssignedToStoryMission_Params Parms{};

	Parms.Quests = Quests;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.SetTutorialSeen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PermamentData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)

void UWid_WorkshopUI_Main_C::SetTutorialSeen(class FName PermamentData, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "SetTutorialSeen");

	Params::UWid_WorkshopUI_Main_C_SetTutorialSeen_Params Parms{};

	Parms.PermamentData = PermamentData;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ValidateIgorEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundCorrectEvent                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             IgorStats                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABackend*>            CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABackend*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_LevelSelection_Entry_C*>CallFunc_GetAllLevels_Levels                                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// TArray<struct FActiveQuestInfo>    CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveQuestInfo            CallFunc_Array_Get_Item_2                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WorkshopUI_Main_C::ValidateIgorEvent(bool FoundCorrectEvent, const struct FCompanionEntry& IgorStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class ABackend*>& CallFunc_GetAllActorsOfClass_OutActors, class ABackend* CallFunc_Array_Get_Item, bool CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue_1, const struct FActiveQuestInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "ValidateIgorEvent");

	Params::UWid_WorkshopUI_Main_C_ValidateIgorEvent_Params Parms{};

	Parms.FoundCorrectEvent = FoundCorrectEvent;
	Parms.IgorStats = IgorStats;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue = CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllLevels_Levels = CallFunc_GetAllLevels_Levels;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.IsDetailInfoVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_WorkshopUI_Main_C::IsDetailInfoVisible(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "IsDetailInfoVisible");

	Params::UWid_WorkshopUI_Main_C_IsDetailInfoVisible_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.UpdatePopupPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_RoomSkillTreeConfirm_C* Popup                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor, UObjectWrapper)

void UWid_WorkshopUI_Main_C::UpdatePopupPosition(class UWid_RoomSkillTreeConfirm_C* Popup, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "UpdatePopupPosition");

	Params::UWid_WorkshopUI_Main_C_UpdatePopupPosition_Params Parms{};

	Parms.Popup = Popup;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.HideAllHighLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WorkshopUI_Main_C::HideAllHighLights(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "HideAllHighLights");

	Params::UWid_WorkshopUI_Main_C_HideAllHighLights_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry = K2Node_DynamicCast_AsWid_Level_Selection_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.SetInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ArrowsEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnterEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RMBEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WorkshopUI_Main_C::SetInput(bool ArrowsEnabled, bool FEnabled, bool EnterEnabled, bool RMBEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "SetInput");

	Params::UWid_WorkshopUI_Main_C_SetInput_Params Parms{};

	Parms.ArrowsEnabled = ArrowsEnabled;
	Parms.FEnabled = FEnabled;
	Parms.EnterEnabled = EnterEnabled;
	Parms.RMBEnabled = RMBEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.GetCurrentSelectedEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// enum class EEventMap               CallFunc_CurrentSelectedMap_Mapp                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WorkshopUI_Main_C::GetCurrentSelectedEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, enum class EEventMap CallFunc_CurrentSelectedMap_Mapp, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "GetCurrentSelectedEvent");

	Params::UWid_WorkshopUI_Main_C_GetCurrentSelectedEvent_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_CurrentSelectedMap_Mapp = CallFunc_CurrentSelectedMap_Mapp;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IWorkshopUIApp_C>NewApp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WorkshopUI_Main_C::ChangeApp(TScriptInterface<class IWid_IWorkshopUIApp_C> NewApp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "ChangeApp");

	Params::UWid_WorkshopUI_Main_C_ChangeApp_Params Parms{};

	Parms.NewApp = NewApp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputActivateTutorial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputActivateTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputActivateTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputOpenPDA
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputOpenPDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputOpenPDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputToggle1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputToggle1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputToggle1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputToggle2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputToggle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputToggle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnAssign
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::OnAssign(class FName Event, enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "OnAssign");

	Params::UWid_WorkshopUI_Main_C_OnAssign_Params Parms{};

	Parms.Event = Event;
	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnMoveOutEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::OnMoveOutEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "OnMoveOutEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputMoveOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputMoveOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputMoveOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnBackMissionSelectionEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::OnBackMissionSelectionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "OnBackMissionSelectionEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.GoBackMissionAssigmentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::GoBackMissionAssigmentEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "GoBackMissionAssigmentEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputUpDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::InputUpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputUpDown");

	Params::UWid_WorkshopUI_Main_C_InputUpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputLeftRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::InputLeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputLeftRight");

	Params::UWid_WorkshopUI_Main_C_InputLeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "Tick");

	Params::UWid_WorkshopUI_Main_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputMoveOutReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputMoveOutReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputMoveOutReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputAlternativeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputAlternativeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputAlternativeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputAnyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InputKeyboardMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InputKeyboardMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InputKeyboardMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InternalInputMoveOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InternalInputMoveOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InternalInputMoveOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InternalInputBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InternalInputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InternalInputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InternalInputAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InternalInputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InternalInputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.InternalInputKeyboardMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::InternalInputKeyboardMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "InternalInputKeyboardMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.BeginTutorials
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::BeginTutorials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "BeginTutorials");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ShowNormalPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::ShowNormalPopup(class FName Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "ShowNormalPopup");

	Params::UWid_WorkshopUI_Main_C_ShowNormalPopup_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.ExecuteUbergraph_wid_WorkshopUI_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyTutorialPopupVisible_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<struct FActiveQuestInfo>    CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IWorkshopUIApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Event                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               K2Node_CustomEvent_Map                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IWorkshopUIApp_C>CallFunc_ChangeApp_NewApp_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue_1                    (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapForActiveEvent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IWorkshopUIApp_C>CallFunc_Show_self_CastInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Axis_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IWorkshopUIApp_C>CallFunc_ChangeApp_NewApp_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Axis                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSelectedEvent_Name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_C*      CallFunc_UpdateAllCompanions_CompanionsPanel                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSelectedEvent_Name_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_C*      CallFunc_UpdateAllCompanions_CompanionsPanel_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSelectedEvent_Name_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_C*      CallFunc_UpdateAllCompanions_CompanionsPanel_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue_2                    (ReferenceParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDetailInfoVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue_3                    (ReferenceParm)
// bool                               CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveQuestInfo            CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCompletedStoryQuestsCount_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Message                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyTutorialPopupVisible_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyTutorialPopupVisible_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_4                           (NoDestructor, UObjectWrapper)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_5                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_6                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnyCompanionAssignedToStoryMission_Result             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_7                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_6                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)

void UWid_WorkshopUI_Main_C::ExecuteUbergraph_wid_WorkshopUI_Main(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_2, bool CallFunc_AnyTutorialPopupVisible_ReturnValue, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Start_self_CastInput, class FName K2Node_CustomEvent_Event, enum class EEventMap K2Node_CustomEvent_Map, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FText Temp_text_Variable, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, enum class EEventMap CallFunc_GetMapForActiveEvent_ReturnValue, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Show_self_CastInput, float K2Node_CustomEvent_Axis_1, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput_1, float K2Node_CustomEvent_Axis, class FName CallFunc_GetCurrentSelectedEvent_Name, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel, class FName CallFunc_GetCurrentSelectedEvent_Name_1, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel_1, class FName CallFunc_GetCurrentSelectedEvent_Name_2, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel_2, bool CallFunc_RemoveChild_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class FText Temp_text_Variable_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FText K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_PermanentDataGetValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsDetailInfoVisible_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_3, bool CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, int32 Temp_int_Array_Index_Variable, enum class EEventMap CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_9, const struct FActiveQuestInfo& CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, int32 CallFunc_GetCurrentDay_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCompletedStoryQuestsCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, bool CallFunc_RemoveChild_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_RemoveChild_ReturnValue_5, class FName K2Node_CustomEvent_Message, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_NotEqual_NameName_ReturnValue_3, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_RemoveChild_ReturnValue_6, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, bool CallFunc_AnyTutorialPopupVisible_ReturnValue_1, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_AnyTutorialPopupVisible_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_14, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_4, class FText K2Node_Select_Default_1, bool CallFunc_PermanentDataGetValue_ReturnValue_2, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_7, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_13, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_5, bool CallFunc_PermanentDataGetValue_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_14, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_8, class FText Temp_text_Variable_6, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_6, bool CallFunc_PermanentDataGetValue_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsAnyCompanionAssignedToStoryMission_Result, class FText Temp_text_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_15, bool Temp_bool_Variable_3, bool CallFunc_PermanentDataGetValue_ReturnValue_5, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "ExecuteUbergraph_wid_WorkshopUI_Main");

	Params::UWid_WorkshopUI_Main_C_ExecuteUbergraph_wid_WorkshopUI_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AnyTutorialPopupVisible_ReturnValue = CallFunc_AnyTutorialPopupVisible_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.K2Node_CustomEvent_Event = K2Node_CustomEvent_Event;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.CallFunc_ChangeApp_NewApp_CastInput = CallFunc_ChangeApp_NewApp_CastInput;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue_1 = CallFunc_GetAvailableCompanions_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetMapForActiveEvent_ReturnValue = CallFunc_GetMapForActiveEvent_ReturnValue;
	Parms.CallFunc_Show_self_CastInput = CallFunc_Show_self_CastInput;
	Parms.K2Node_CustomEvent_Axis_1 = K2Node_CustomEvent_Axis_1;
	Parms.CallFunc_ChangeApp_NewApp_CastInput_1 = CallFunc_ChangeApp_NewApp_CastInput_1;
	Parms.K2Node_CustomEvent_Axis = K2Node_CustomEvent_Axis;
	Parms.CallFunc_GetCurrentSelectedEvent_Name = CallFunc_GetCurrentSelectedEvent_Name;
	Parms.CallFunc_UpdateAllCompanions_CompanionsPanel = CallFunc_UpdateAllCompanions_CompanionsPanel;
	Parms.CallFunc_GetCurrentSelectedEvent_Name_1 = CallFunc_GetCurrentSelectedEvent_Name_1;
	Parms.CallFunc_UpdateAllCompanions_CompanionsPanel_1 = CallFunc_UpdateAllCompanions_CompanionsPanel_1;
	Parms.CallFunc_GetCurrentSelectedEvent_Name_2 = CallFunc_GetCurrentSelectedEvent_Name_2;
	Parms.CallFunc_UpdateAllCompanions_CompanionsPanel_2 = CallFunc_UpdateAllCompanions_CompanionsPanel_2;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue_2 = CallFunc_GetAvailableCompanions_ReturnValue_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_RemoveChild_ReturnValue_1 = CallFunc_RemoveChild_ReturnValue_1;
	Parms.CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned = CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsDetailInfoVisible_ReturnValue = CallFunc_IsDetailInfoVisible_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue_3 = CallFunc_GetAvailableCompanions_ReturnValue_3;
	Parms.CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1 = CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_4 = CallFunc_NotEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_5 = CallFunc_NotEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_6 = CallFunc_NotEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_GetCurrentDay_ReturnValue_1 = CallFunc_GetCurrentDay_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCompletedStoryQuestsCount_ReturnValue = CallFunc_GetCompletedStoryQuestsCount_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue_2 = CallFunc_RemoveChild_ReturnValue_2;
	Parms.CallFunc_RemoveChild_ReturnValue_3 = CallFunc_RemoveChild_ReturnValue_3;
	Parms.CallFunc_RemoveChild_ReturnValue_4 = CallFunc_RemoveChild_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_RemoveChild_ReturnValue_5 = CallFunc_RemoveChild_ReturnValue_5;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_1 = CallFunc_AddChildToCanvas_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_RemoveChild_ReturnValue_6 = CallFunc_RemoveChild_ReturnValue_6;
	Parms.CallFunc_GetCGHud_AsCGHUD = CallFunc_GetCGHud_AsCGHUD;
	Parms.CallFunc_GetCGHud_AsCGHUD_1 = CallFunc_GetCGHud_AsCGHUD_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_11 = CallFunc_GetCGGameInstance_AsCGGame_Instance_11;
	Parms.CallFunc_AnyTutorialPopupVisible_ReturnValue_1 = CallFunc_AnyTutorialPopupVisible_ReturnValue_1;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_1 = CallFunc_PermanentDataGetValue_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_AnyTutorialPopupVisible_ReturnValue_2 = CallFunc_AnyTutorialPopupVisible_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_14 = CallFunc_BooleanAND_ReturnValue_14;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_2 = CallFunc_AddChildToCanvas_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_12 = CallFunc_GetCGGameInstance_AsCGGame_Instance_12;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_4 = K2Node_MakeStruct_DataTableRowHandle_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_2 = CallFunc_PermanentDataGetValue_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_3 = CallFunc_AddChildToCanvas_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_4 = CallFunc_AddChildToCanvas_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_13 = CallFunc_GetCGGameInstance_AsCGGame_Instance_13;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_MakeStruct_DataTableRowHandle_5 = K2Node_MakeStruct_DataTableRowHandle_5;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_3 = CallFunc_PermanentDataGetValue_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_5 = CallFunc_AddChildToCanvas_ReturnValue_5;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_14 = CallFunc_GetCGGameInstance_AsCGGame_Instance_14;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_6 = K2Node_MakeStruct_DataTableRowHandle_6;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_4 = CallFunc_PermanentDataGetValue_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_IsAnyCompanionAssignedToStoryMission_Result = CallFunc_IsAnyCompanionAssignedToStoryMission_Result;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_6 = CallFunc_AddChildToCanvas_ReturnValue_6;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_15 = CallFunc_GetCGGameInstance_AsCGGame_Instance_15;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_5 = CallFunc_PermanentDataGetValue_ReturnValue_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.OnMoveOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_WorkshopUI_Main_C::OnMoveOut__DelegateSignature(enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "OnMoveOut__DelegateSignature");

	Params::UWid_WorkshopUI_Main_C_OnMoveOut__DelegateSignature_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WorkshopUI_Main.wid_WorkshopUI_Main_C.Finish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_WorkshopUI_Main_C::Finish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WorkshopUI_Main_C", "Finish__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


