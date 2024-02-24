#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C
// (None)

class UClass* UWid_AvailableMissionsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_AvailableMissionsPanel_C");

	return Clss;
}


// wid_AvailableMissionsPanel_C wid_AvailableMissionsPanel.Default__wid_AvailableMissionsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_AvailableMissionsPanel_C* UWid_AvailableMissionsPanel_C::GetDefaultObj()
{
	static class UWid_AvailableMissionsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_AvailableMissionsPanel_C*>(UWid_AvailableMissionsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.SelectCompanionAtIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::SelectCompanionAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "SelectCompanionAtIndex");

	Params::UWid_AvailableMissionsPanel_C_SelectCompanionAtIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.SelectFirstCompanionWithoutMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AvailableMissionsPanel_C::SelectFirstCompanionWithoutMission(int32 CurrentIndex, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "SelectFirstCompanionWithoutMission");

	Params::UWid_AvailableMissionsPanel_C_SelectFirstCompanionWithoutMission_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentCompanion_Name = CallFunc_GetCurrentCompanion_Name;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection = CallFunc_GetCurrentCompanion_CurrentSelection;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.ShowCustomTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AvailableMissionsPanel_C::ShowCustomTutorial(bool Show, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "ShowCustomTutorial");

	Params::UWid_AvailableMissionsPanel_C_ShowCustomTutorial_Params Parms{};

	Parms.Show = Show;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.GetbIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWid_AvailableMissionsPanel_C::GetbIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "GetbIsEnabled_0");

	Params::UWid_AvailableMissionsPanel_C_GetbIsEnabled_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.UpdateAllCompanions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AvailableMissionsPanel_C::UpdateAllCompanions(int32 Temp_int_Variable, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "UpdateAllCompanions");

	Params::UWid_AvailableMissionsPanel_C_UpdateAllCompanions_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCurrentCompanion_Name = CallFunc_GetCurrentCompanion_Name;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection = CallFunc_GetCurrentCompanion_CurrentSelection;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.UpdateAssignButtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentCompanion_Name                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_AvailableMissionsPanel_C::UpdateAssignButtn(class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "UpdateAssignButtn");

	Params::UWid_AvailableMissionsPanel_C_UpdateAssignButtn_Params Parms{};

	Parms.CallFunc_GetCurrentCompanion_Name = CallFunc_GetCurrentCompanion_Name;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection = CallFunc_GetCurrentCompanion_CurrentSelection;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::Update(class FName EventID, enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Update");

	Params::UWid_AvailableMissionsPanel_C_Update_Params Parms{};

	Parms.EventID = EventID;
	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.OnCompanionSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::OnCompanionSelection(class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "OnCompanionSelection");

	Params::UWid_AvailableMissionsPanel_C_OnCompanionSelection_Params Parms{};

	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::Toggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Toggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "Tick");

	Params::UWid_AvailableMissionsPanel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.OnCompanionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AvailableMissionsPanel_C::OnCompanionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "OnCompanionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.ExecuteUbergraph_wid_AvailableMissionsPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABackend*>            CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// class ABackend*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentCompanion_Name_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionsPanel_Entry_C*K2Node_DynamicCast_AsWid_Companions_Panel_Entry                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanBeCurrentSend_CanBeSend                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCanBeCurrentSend_PreventingBuff                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEventSystemBackend*> CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class AEventSystemBackend*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCompanionForQuest_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentCompanion_Name_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentCompanion_CurrentSelection_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_WorkshopUI_Main_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWid_WorkshopUI_Main_C*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_AvailableMissionsPanel_C::ExecuteUbergraph_wid_AvailableMissionsPanel(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable, bool Temp_bool_Variable_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NameID, class FName CallFunc_GetCurrentCompanion_Name, int32 CallFunc_GetCurrentCompanion_CurrentSelection, class FName CallFunc_GetCurrentCompanion_Name_1, int32 CallFunc_GetCurrentCompanion_CurrentSelection_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class ABackend*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, class ABackend* CallFunc_Array_Get_Item, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCurrentCompanion_Name_2, int32 CallFunc_GetCurrentCompanion_CurrentSelection_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue, class UWid_CompanionsPanel_Entry_C* K2Node_DynamicCast_AsWid_Companions_Panel_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCanBeCurrentSend_CanBeSend, class FName CallFunc_GetCanBeCurrentSend_PreventingBuff, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentCompanion_Name_3, int32 CallFunc_GetCurrentCompanion_CurrentSelection_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess_1, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AEventSystemBackend* CallFunc_Array_Get_Item_1, bool CallFunc_SetCompanionForQuest_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName CallFunc_GetCurrentCompanion_Name_4, int32 CallFunc_GetCurrentCompanion_CurrentSelection_4, int32 CallFunc_PostEvent_ReturnValue_1, TArray<class UWid_WorkshopUI_Main_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWid_WorkshopUI_Main_C* CallFunc_Array_Get_Item_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "ExecuteUbergraph_wid_AvailableMissionsPanel");

	Params::UWid_AvailableMissionsPanel_C_ExecuteUbergraph_wid_AvailableMissionsPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CustomEvent_NameID = K2Node_CustomEvent_NameID;
	Parms.CallFunc_GetCurrentCompanion_Name = CallFunc_GetCurrentCompanion_Name;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection = CallFunc_GetCurrentCompanion_CurrentSelection;
	Parms.CallFunc_GetCurrentCompanion_Name_1 = CallFunc_GetCurrentCompanion_Name_1;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection_1 = CallFunc_GetCurrentCompanion_CurrentSelection_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentCompanion_Name_2 = CallFunc_GetCurrentCompanion_Name_2;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection_2 = CallFunc_GetCurrentCompanion_CurrentSelection_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue = CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Companions_Panel_Entry = K2Node_DynamicCast_AsWid_Companions_Panel_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCanBeCurrentSend_CanBeSend = CallFunc_GetCanBeCurrentSend_CanBeSend;
	Parms.CallFunc_GetCanBeCurrentSend_PreventingBuff = CallFunc_GetCanBeCurrentSend_PreventingBuff;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentCompanion_Name_3 = CallFunc_GetCurrentCompanion_Name_3;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection_3 = CallFunc_GetCurrentCompanion_CurrentSelection_3;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SetCompanionForQuest_ReturnValue = CallFunc_SetCompanionForQuest_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCurrentCompanion_Name_4 = CallFunc_GetCurrentCompanion_Name_4;
	Parms.CallFunc_GetCurrentCompanion_CurrentSelection_4 = CallFunc_GetCurrentCompanion_CurrentSelection_4;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.CompanionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::CompanionChanged__DelegateSignature(class FName CompanionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "CompanionChanged__DelegateSignature");

	Params::UWid_AvailableMissionsPanel_C_CompanionChanged__DelegateSignature_Params Parms{};

	Parms.CompanionName = CompanionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.NewCompanionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::NewCompanionSelected__DelegateSignature(class FName NameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "NewCompanionSelected__DelegateSignature");

	Params::UWid_AvailableMissionsPanel_C_NewCompanionSelected__DelegateSignature_Params Parms{};

	Parms.NameID = NameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AvailableMissionsPanel.wid_AvailableMissionsPanel_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AvailableMissionsPanel_C::GoBack__DelegateSignature(class FName EventID, class FName CompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AvailableMissionsPanel_C", "GoBack__DelegateSignature");

	Params::UWid_AvailableMissionsPanel_C_GoBack__DelegateSignature_Params Parms{};

	Parms.EventID = EventID;
	Parms.CompanionID = CompanionID;

	UObject::ProcessEvent(Func, &Parms);

}

}


