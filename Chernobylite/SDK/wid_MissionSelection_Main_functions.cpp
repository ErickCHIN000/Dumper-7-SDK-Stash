#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MissionSelection_Main.wid_MissionSelection_Main_C
// (None)

class UClass* UWid_MissionSelection_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MissionSelection_Main_C");

	return Clss;
}


// wid_MissionSelection_Main_C wid_MissionSelection_Main.Default__wid_MissionSelection_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MissionSelection_Main_C* UWid_MissionSelection_Main_C::GetDefaultObj()
{
	static class UWid_MissionSelection_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MissionSelection_Main_C*>(UWid_MissionSelection_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.ShowCustomTutorials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::ShowCustomTutorials(bool Show, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "ShowCustomTutorials");

	Params::UWid_MissionSelection_Main_C_ShowCustomTutorials_Params Parms{};

	Parms.Show = Show;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.AnyMenuVisible
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MenuVisible                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::AnyMenuVisible(bool* Visible, bool MenuVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_BooleanOR_ReturnValue, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "AnyMenuVisible");

	Params::UWid_MissionSelection_Main_C_AnyMenuVisible_Params Parms{};

	Parms.MenuVisible = MenuVisible;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.GetCurrentEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_CurrentSelectedMap_Mapp                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::GetCurrentEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_CurrentSelectedMap_Mapp, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "GetCurrentEvent");

	Params::UWid_MissionSelection_Main_C_GetCurrentEvent_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_CurrentSelectedMap_Mapp = CallFunc_CurrentSelectedMap_Mapp;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.UpdateAllCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_C*      CompanionsPanel                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::UpdateAllCompanions(class FName EventID, class UWid_CompanionsPanel_C** CompanionsPanel, int32 Index, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "UpdateAllCompanions");

	Params::UWid_MissionSelection_Main_C_UpdateAllCompanions_Params Parms{};

	Parms.EventID = EventID;
	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CompanionsPanel != nullptr)
		*CompanionsPanel = Parms.CompanionsPanel;

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IMissionSelectionApp_C>New                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::ChangeApp(TScriptInterface<class IWid_IMissionSelectionApp_C> New)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "ChangeApp");

	Params::UWid_MissionSelection_Main_C_ChangeApp_Params Parms{};

	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Toggle1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Toggle1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Toggle1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Toggle2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Toggle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Toggle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.UpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::UpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "UpDown");

	Params::UWid_MissionSelection_Main_C_UpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.LeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::LeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "LeftRight");

	Params::UWid_MissionSelection_Main_C_LeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.MoveOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::MoveOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "MoveOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::Show(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Show");

	Params::UWid_MissionSelection_Main_C_Show_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.AlternativeAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::AlternativeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "AlternativeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::AnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "AnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.KeyboardMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::KeyboardMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "KeyboardMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.New Sel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_LevelSelection_Entry_C* Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::New_Sel(class UWid_LevelSelection_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "New Sel");

	Params::UWid_MissionSelection_Main_C_New_Sel_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::OnSelected(class FName EventID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "OnSelected");

	Params::UWid_MissionSelection_Main_C_OnSelected_Params Parms{};

	Parms.EventID = EventID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.NewSelectionEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::NewSelectionEvent(enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "NewSelectionEvent");

	Params::UWid_MissionSelection_Main_C_NewSelectionEvent_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.ExecuteUbergraph_wid_MissionSelection_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Axis_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Axis                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IMissionSelectionApp_C>CallFunc_ChangeApp_New_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IMissionSelectionApp_C>CallFunc_Start_self_CastInput                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentSelection_EventID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetCurrentSelection_Map                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentEvent_Name                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionsPanel_C*      CallFunc_UpdateAllCompanions_CompanionsPanel                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IMissionSelectionApp_C>CallFunc_Start_self_CastInput_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyMenuVisible_Visible                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEventSystemBackend*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AEventSystemBackend*         CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LevelSelection_Entry_C* K2Node_CustomEvent_Entry                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_EventID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               K2Node_CustomEvent_Map                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item_5                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Main_C::ExecuteUbergraph_wid_MissionSelection_Main(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, float K2Node_Event_Axis_1, float K2Node_Event_Axis, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_ChangeApp_New_CastInput, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_Start_self_CastInput, class FName CallFunc_GetCurrentSelection_EventID, enum class EEventMap CallFunc_GetCurrentSelection_Map, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_Show, class FName CallFunc_GetCurrentEvent_Name, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, TScriptInterface<class IWid_IMissionSelectionApp_C> CallFunc_Start_self_CastInput_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_AnyMenuVisible_Visible, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, bool CallFunc_IsVisible_ReturnValue_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, class AEventSystemBackend* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_CustomEvent_Entry, int32 Temp_int_Array_Index_Variable_4, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_4, class FName K2Node_CustomEvent_EventID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap K2Node_CustomEvent_Map, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, const struct FInnerEvent& CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "ExecuteUbergraph_wid_MissionSelection_Main");

	Params::UWid_MissionSelection_Main_C_ExecuteUbergraph_wid_MissionSelection_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Axis_1 = K2Node_Event_Axis_1;
	Parms.K2Node_Event_Axis = K2Node_Event_Axis;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_ChangeApp_New_CastInput = CallFunc_ChangeApp_New_CastInput;
	Parms.CallFunc_Start_self_CastInput = CallFunc_Start_self_CastInput;
	Parms.CallFunc_GetCurrentSelection_EventID = CallFunc_GetCurrentSelection_EventID;
	Parms.CallFunc_GetCurrentSelection_Map = CallFunc_GetCurrentSelection_Map;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.CallFunc_GetCurrentEvent_Name = CallFunc_GetCurrentEvent_Name;
	Parms.CallFunc_UpdateAllCompanions_CompanionsPanel = CallFunc_UpdateAllCompanions_CompanionsPanel;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Start_self_CastInput_1 = CallFunc_Start_self_CastInput_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_AnyMenuVisible_Visible = CallFunc_AnyMenuVisible_Visible;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Entry = K2Node_CustomEvent_Entry;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_CustomEvent_EventID = K2Node_CustomEvent_EventID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CustomEvent_Map = K2Node_CustomEvent_Map;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.OnMoveOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Main_C::OnMoveOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "OnMoveOut__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Main.wid_MissionSelection_Main_C.Assign__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Main_C::Assign__DelegateSignature(class FName Event, enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Main_C", "Assign__DelegateSignature");

	Params::UWid_MissionSelection_Main_C_Assign__DelegateSignature_Params Parms{};

	Parms.Event = Event;
	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}

}


