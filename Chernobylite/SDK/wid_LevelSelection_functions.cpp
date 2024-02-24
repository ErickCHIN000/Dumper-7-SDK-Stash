#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelSelection.wid_LevelSelection_C
// (None)

class UClass* UWid_LevelSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelSelection_C");

	return Clss;
}


// wid_LevelSelection_C wid_LevelSelection.Default__wid_LevelSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelSelection_C* UWid_LevelSelection_C::GetDefaultObj()
{
	static class UWid_LevelSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelSelection_C*>(UWid_LevelSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelSelection.wid_LevelSelection_C.GetCurrentSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::GetCurrentSelection(class FName* EventID, enum class EEventMap* Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "GetCurrentSelection");

	Params::UWid_LevelSelection_C_GetCurrentSelection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventID != nullptr)
		*EventID = Parms.EventID;

	if (Map != nullptr)
		*Map = Parms.Map;

}


// Function wid_LevelSelection.wid_LevelSelection_C.GetAllLevelsDesc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWid_LevelSelection_Entry_Desc_C*>LevelsDesc                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWid_LevelSelection_Entry_Desc_C*>Result                                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_Desc_C*K2Node_DynamicCast_AsWid_Level_Selection_Entry_Desc              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::GetAllLevelsDesc(TArray<class UWid_LevelSelection_Entry_Desc_C*>* LevelsDesc, const TArray<class UWid_LevelSelection_Entry_Desc_C*>& Result, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_LevelSelection_Entry_Desc_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry_Desc, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "GetAllLevelsDesc");

	Params::UWid_LevelSelection_C_GetAllLevelsDesc_Params Parms{};

	Parms.Result = Result;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry_Desc = K2Node_DynamicCast_AsWid_Level_Selection_Entry_Desc;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelsDesc != nullptr)
		*LevelsDesc = std::move(Parms.LevelsDesc);

}


// Function wid_LevelSelection.wid_LevelSelection_C.GetAllLevels
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWid_LevelSelection_Entry_C*>Levels                                                           (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWid_LevelSelection_Entry_C*>Result                                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_C::GetAllLevels(TArray<class UWid_LevelSelection_Entry_C*>* Levels, const TArray<class UWid_LevelSelection_Entry_C*>& Result, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "GetAllLevels");

	Params::UWid_LevelSelection_C_GetAllLevels_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry = K2Node_DynamicCast_AsWid_Level_Selection_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Levels != nullptr)
		*Levels = std::move(Parms.Levels);

}


// Function wid_LevelSelection.wid_LevelSelection_C.SelectByMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_C::SelectByMap(enum class EEventMap Map, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "SelectByMap");

	Params::UWid_LevelSelection_C_SelectByMap_Params Parms{};

	Parms.Map = Map;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry = K2Node_DynamicCast_AsWid_Level_Selection_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection.wid_LevelSelection_C.CurrentSelectedMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EEventMap               Mapp                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::CurrentSelectedMap(enum class EEventMap* Mapp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "CurrentSelectedMap");

	Params::UWid_LevelSelection_C_CurrentSelectedMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mapp != nullptr)
		*Mapp = Parms.Mapp;

}


// Function wid_LevelSelection.wid_LevelSelection_C.SelectElem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_LevelSelection_Entry_C* Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::SelectElem(class UWid_LevelSelection_Entry_C* Next, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "SelectElem");

	Params::UWid_LevelSelection_C_SelectElem_Params Parms{};

	Parms.Next = Next;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "PreConstruct");

	Params::UWid_LevelSelection_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.UpdateAllLevels
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_C::UpdateAllLevels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "UpdateAllLevels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection.wid_LevelSelection_C.ExecuteUbergraph_wid_LevelSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_LevelSelection_Entry_Desc_C*>CallFunc_GetAllLevelsDesc_LevelsDesc                             (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_Desc_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_LevelSelection_Entry_Desc_C*>CallFunc_GetAllLevelsDesc_LevelsDesc_1                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_LevelSelection_Entry_C*>CallFunc_GetAllLevels_Levels                                     (ReferenceParm, ContainsInstancedReference)
// class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_LevelSelection_Entry_C*>CallFunc_GetAllLevels_Levels_1                                   (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_Desc_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_C::ExecuteUbergraph_wid_LevelSelection(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<class UWid_LevelSelection_Entry_Desc_C*>& CallFunc_GetAllLevelsDesc_LevelsDesc, int32 Temp_int_Loop_Counter_Variable_1, class UWid_LevelSelection_Entry_Desc_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class UWid_LevelSelection_Entry_Desc_C*>& CallFunc_GetAllLevelsDesc_LevelsDesc_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_3, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UWid_LevelSelection_Entry_Desc_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildIndex_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "ExecuteUbergraph_wid_LevelSelection");

	Params::UWid_LevelSelection_C_ExecuteUbergraph_wid_LevelSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetAllLevelsDesc_LevelsDesc = CallFunc_GetAllLevelsDesc_LevelsDesc;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllLevelsDesc_LevelsDesc_1 = CallFunc_GetAllLevelsDesc_LevelsDesc_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllLevels_Levels = CallFunc_GetAllLevels_Levels;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetAllLevels_Levels_1 = CallFunc_GetAllLevels_Levels_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry = K2Node_DynamicCast_AsWid_Level_Selection_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildIndex_ReturnValue_1 = CallFunc_GetChildIndex_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Level_Selection_Entry_1 = K2Node_DynamicCast_AsWid_Level_Selection_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection.wid_LevelSelection_C.NewSelectionObj__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_LevelSelection_Entry_C* Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::NewSelectionObj__DelegateSignature(class UWid_LevelSelection_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "NewSelectionObj__DelegateSignature");

	Params::UWid_LevelSelection_C_NewSelectionObj__DelegateSignature_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection.wid_LevelSelection_C.NewSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEventMap               Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelection_C::NewSelection__DelegateSignature(enum class EEventMap Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_C", "NewSelection__DelegateSignature");

	Params::UWid_LevelSelection_C_NewSelection__DelegateSignature_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}

}


