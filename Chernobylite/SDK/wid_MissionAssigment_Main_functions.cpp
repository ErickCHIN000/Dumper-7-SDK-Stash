#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MissionAssigment_Main.wid_MissionAssigment_Main_C
// (None)

class UClass* UWid_MissionAssigment_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MissionAssigment_Main_C");

	return Clss;
}


// wid_MissionAssigment_Main_C wid_MissionAssigment_Main.Default__wid_MissionAssigment_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MissionAssigment_Main_C* UWid_MissionAssigment_Main_C::GetDefaultObj()
{
	static class UWid_MissionAssigment_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MissionAssigment_Main_C*>(UWid_MissionAssigment_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.AnyMenuVisible
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MenuVisible                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionAssigment_Main_C::AnyMenuVisible(bool* Visible, bool MenuVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "AnyMenuVisible");

	Params::UWid_MissionAssigment_Main_C_AnyMenuVisible_Params Parms{};

	Parms.MenuVisible = MenuVisible;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.GetCurrentEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionAssigment_Main_C::GetCurrentEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "GetCurrentEvent");

	Params::UWid_MissionAssigment_Main_C_GetCurrentEvent_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.ChangeApp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IWid_IMissionAssigmentApp_C>New_App                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionAssigment_Main_C::ChangeApp(TScriptInterface<class IWid_IMissionAssigmentApp_C> New_App)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "ChangeApp");

	Params::UWid_MissionAssigment_Main_C_ChangeApp_Params Parms{};

	Parms.New_App = New_App;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentEvent_Name                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWid_IMissionAssigmentApp_C>CallFunc_ChangeApp_New_App_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionAssigment_Main_C::Init(class FName EventID, enum class EEventMap Map, class FName CallFunc_GetCurrentEvent_Name, TScriptInterface<class IWid_IMissionAssigmentApp_C> CallFunc_ChangeApp_New_App_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Init");

	Params::UWid_MissionAssigment_Main_C_Init_Params Parms{};

	Parms.EventID = EventID;
	Parms.Map = Map;
	Parms.CallFunc_GetCurrentEvent_Name = CallFunc_GetCurrentEvent_Name;
	Parms.CallFunc_ChangeApp_New_App_CastInput = CallFunc_ChangeApp_New_App_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Toggle1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Toggle1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Toggle1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Toggle2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Toggle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Toggle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.MoveOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::MoveOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "MoveOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.UpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::UpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "UpDown");

	Params::UWid_MissionAssigment_Main_C_UpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.LeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::LeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "LeftRight");

	Params::UWid_MissionAssigment_Main_C_LeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionAssigment_Main_C::Show(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Show");

	Params::UWid_MissionAssigment_Main_C_Show_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.GoBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::GoBackEvent(class FName EventID, class FName CompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "GoBackEvent");

	Params::UWid_MissionAssigment_Main_C_GoBackEvent_Params Parms{};

	Parms.EventID = EventID;
	Parms.CompanionID = CompanionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "Tick");

	Params::UWid_MissionAssigment_Main_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.AlternativeAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::AlternativeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "AlternativeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::AnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "AnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.KeyboardMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::KeyboardMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "KeyboardMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.ExecuteUbergraph_wid_MissionAssigment_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Axis_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Axis                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_EventID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CompanionID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentEvent_Name                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyMenuVisible_Visible                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelectorMenu_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelectorMenu_C*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::ExecuteUbergraph_wid_MissionAssigment_Main(int32 EntryPoint, float K2Node_Event_Axis_1, float K2Node_Event_Axis, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, const struct FInnerEvent& CallFunc_Array_Get_Item, bool K2Node_Event_Show, class FName K2Node_CustomEvent_EventID, class FName K2Node_CustomEvent_CompanionID, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName CallFunc_GetCurrentEvent_Name, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_AnyMenuVisible_Visible, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsVisible_ReturnValue_1, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWid_LevelSelectorMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_2, class UWid_LevelSelectorMenu_C* CallFunc_Array_Get_Item_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "ExecuteUbergraph_wid_MissionAssigment_Main");

	Params::UWid_MissionAssigment_Main_C_ExecuteUbergraph_wid_MissionAssigment_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Axis_1 = K2Node_Event_Axis_1;
	Parms.K2Node_Event_Axis = K2Node_Event_Axis;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_CustomEvent_EventID = K2Node_CustomEvent_EventID;
	Parms.K2Node_CustomEvent_CompanionID = K2Node_CustomEvent_CompanionID;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetCurrentEvent_Name = CallFunc_GetCurrentEvent_Name;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_AnyMenuVisible_Visible = CallFunc_AnyMenuVisible_Visible;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.GoBackSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionAssigment_Main_C::GoBackSelected__DelegateSignature(class FName EventID, class FName CompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "GoBackSelected__DelegateSignature");

	Params::UWid_MissionAssigment_Main_C_GoBackSelected__DelegateSignature_Params Parms{};

	Parms.EventID = EventID;
	Parms.CompanionID = CompanionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionAssigment_Main.wid_MissionAssigment_Main_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionAssigment_Main_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionAssigment_Main_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


