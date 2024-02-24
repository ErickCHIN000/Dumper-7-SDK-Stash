#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_TasksPanel.wid_TasksPanel_C
// (None)

class UClass* UWid_TasksPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_TasksPanel_C");

	return Clss;
}


// wid_TasksPanel_C wid_TasksPanel.Default__wid_TasksPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_TasksPanel_C* UWid_TasksPanel_C::GetDefaultObj()
{
	static class UWid_TasksPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_TasksPanel_C*>(UWid_TasksPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_TasksPanel.wid_TasksPanel_C.GetCurrentSelection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// class UWid_TasksPanel_List_Entry_C*CallFunc_GetCurrentSelection_Entry                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_TasksPanel_C::GetCurrentSelection(class FName* EventID, enum class EEventMap* Map, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, class UWid_TasksPanel_List_Entry_C* CallFunc_GetCurrentSelection_Entry, const struct FInnerEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "GetCurrentSelection");

	Params::UWid_TasksPanel_C_GetCurrentSelection_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_GetCurrentSelection_Entry = CallFunc_GetCurrentSelection_Entry;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventID != nullptr)
		*EventID = Parms.EventID;

	if (Map != nullptr)
		*Map = Parms.Map;

}


// Function wid_TasksPanel.wid_TasksPanel_C.DeselectAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_TasksPanel_List_Entry_C*K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_C::DeselectAll(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "DeselectAll");

	Params::UWid_TasksPanel_C_DeselectAll_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry = K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_TasksPanel_Type    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_C::Update(enum class Enum_TasksPanel_Type Type, enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Update");

	Params::UWid_TasksPanel_C_Update_Params Parms{};

	Parms.Type = Type;
	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Internal_UpdateMainTasks_Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Filter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SelectOnly                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_TasksPanel_List_Entry_C*K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue_1                           (None)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// enum class EEventMap               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMapEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value_1                                        (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// struct FDescriptionInfo            CallFunc_GetQuestDescription_ReturnValue                         (None)

void UWid_TasksPanel_C::Internal_UpdateMainTasks_Location(enum class EEventMap Filter, bool SelectOnly, bool NewLocalVar_0, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, class UWidget* CallFunc_GetChildAt_ReturnValue, enum class EEventMap CallFunc_Array_Get_Item, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue_1, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys_1, enum class EEventMap CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsMapEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Internal_UpdateMainTasks_Location");

	Params::UWid_TasksPanel_C_Internal_UpdateMainTasks_Location_Params Parms{};

	Parms.Filter = Filter;
	Parms.SelectOnly = SelectOnly;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry = K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetActiveQuests_ReturnValue_1 = CallFunc_GetActiveQuests_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_IsMapEnabled_ReturnValue = CallFunc_IsMapEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_GetQuestDescription_ReturnValue = CallFunc_GetQuestDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TasksPanel_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TasksPanel.wid_TasksPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "Tick");

	Params::UWid_TasksPanel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel.wid_TasksPanel_C.ExecuteUbergraph_wid_TasksPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_C::ExecuteUbergraph_wid_TasksPanel(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "ExecuteUbergraph_wid_TasksPanel");

	Params::UWid_TasksPanel_C_ExecuteUbergraph_wid_TasksPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TasksPanel.wid_TasksPanel_C.EventSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TasksPanel_C::EventSelected__DelegateSignature(class FName EventID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TasksPanel_C", "EventSelected__DelegateSignature");

	Params::UWid_TasksPanel_C_EventSelected__DelegateSignature_Params Parms{};

	Parms.EventID = EventID;

	UObject::ProcessEvent(Func, &Parms);

}

}


