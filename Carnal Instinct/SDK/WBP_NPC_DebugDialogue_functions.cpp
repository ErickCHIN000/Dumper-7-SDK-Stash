#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C
// (None)

class UClass* UWBP_NPC_DebugDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_DebugDialogue_C");

	return Clss;
}


// WBP_NPC_DebugDialogue_C WBP_NPC_DebugDialogue.Default__WBP_NPC_DebugDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_DebugDialogue_C* UWBP_NPC_DebugDialogue_C::GetDefaultObj()
{
	static class UWBP_NPC_DebugDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_DebugDialogue_C*>(UWBP_NPC_DebugDialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C.fnAddLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NPC_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FStruct_DT_NPC_Dialogue     Current_Line                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class Enum_NPC_Dialogue_State Line_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_Dialogue_State State                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_DialogueLine_C*     Widget                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Edit, BlueprintVisible)
// struct FStruct_DT_NPC_Dialogue     Line                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_DialogueLine_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_DebugDialogue_C::FnAddLine(class FText NPC_Name, const struct FStruct_DT_NPC_Dialogue& Current_Line, enum class Enum_NPC_Dialogue_State Line_State, enum class Enum_NPC_Dialogue_State State, class UWBP_NPC_DialogueLine_C* Widget, class FText Name, const struct FStruct_DT_NPC_Dialogue& Line, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_NPC_DialogueLine_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugDialogue_C", "fnAddLine");

	Params::UWBP_NPC_DebugDialogue_C_FnAddLine_Params Parms{};

	Parms.NPC_Name = NPC_Name;
	Parms.Current_Line = Current_Line;
	Parms.Line_State = Line_State;
	Parms.State = State;
	Parms.Widget = Widget;
	Parms.Name = Name;
	Parms.Line = Line;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C.fnSetActiveProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Profile_Index                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              I                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     W                                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_TODRow_C*           K2Node_DynamicCast_AsWBP_NPC_TODRow                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_NPC_TODRow_C*           K2Node_DynamicCast_AsWBP_NPC_TODRow_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NPC_DebugDialogue_C::FnSetActiveProfile(int32 Profile_Index, int32 I, class UWidget* W, int32 Index, int32 Temp_int_Array_Index_Variable, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow, bool K2Node_DynamicCast_bSuccess, class UWBP_NPC_TODRow_C* K2Node_DynamicCast_AsWBP_NPC_TODRow_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugDialogue_C", "fnSetActiveProfile");

	Params::UWBP_NPC_DebugDialogue_C_FnSetActiveProfile_Params Parms{};

	Parms.Profile_Index = Profile_Index;
	Parms.I = I;
	Parms.W = W;
	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsWBP_NPC_TODRow = K2Node_DynamicCast_AsWBP_NPC_TODRow;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWBP_NPC_TODRow_1 = K2Node_DynamicCast_AsWBP_NPC_TODRow_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C.fnPopulateProfiles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_NPC_Profile> Profile_List                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWBP_NPC_TODRow_C*           Row                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_NPC_Profile         ProfileStruct                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_NPC_Profile> List                                                             (Edit, BlueprintVisible)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_TODRow_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_NPC_Profile         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NPC_DebugDialogue_C::FnPopulateProfiles(TArray<struct FStruct_NPC_Profile>& Profile_List, class UWBP_NPC_TODRow_C* Row, const struct FStruct_NPC_Profile& ProfileStruct, const TArray<struct FStruct_NPC_Profile>& List, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_NPC_TODRow_C* CallFunc_Create_ReturnValue, const struct FStruct_NPC_Profile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugDialogue_C", "fnPopulateProfiles");

	Params::UWBP_NPC_DebugDialogue_C_FnPopulateProfiles_Params Parms{};

	Parms.Profile_List = Profile_List;
	Parms.Row = Row;
	Parms.ProfileStruct = ProfileStruct;
	Parms.List = List;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugDialogue.WBP_NPC_DebugDialogue_C.ExecuteUbergraph_WBP_NPC_DebugDialogue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_DebugDialogue_C::ExecuteUbergraph_WBP_NPC_DebugDialogue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugDialogue_C", "ExecuteUbergraph_WBP_NPC_DebugDialogue");

	Params::UWBP_NPC_DebugDialogue_C_ExecuteUbergraph_WBP_NPC_DebugDialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


