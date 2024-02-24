#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C
// (Actor)

class UClass* Aba_InvestigationBoard_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InvestigationBoard_Controller_C");

	return Clss;
}


// ba_InvestigationBoard_Controller_C ba_InvestigationBoard_Controller.Default__ba_InvestigationBoard_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InvestigationBoard_Controller_C* Aba_InvestigationBoard_Controller_C::GetDefaultObj()
{
	static class Aba_InvestigationBoard_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InvestigationBoard_Controller_C*>(Aba_InvestigationBoard_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetFractalLevelToOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ToOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetFractalWorldLevelName_LevelName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFractalWorldLevelName_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::GetFractalLevelToOpen(class FName* ToOpen, bool Temp_bool_Variable, class FName CallFunc_GetFractalWorldLevelName_LevelName, bool CallFunc_GetFractalWorldLevelName_Result, bool CallFunc_NotEqual_NameName_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetFractalLevelToOpen");

	Params::Aba_InvestigationBoard_Controller_C_GetFractalLevelToOpen_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetFractalWorldLevelName_LevelName = CallFunc_GetFractalWorldLevelName_LevelName;
	Parms.CallFunc_GetFractalWorldLevelName_Result = CallFunc_GetFractalWorldLevelName_Result;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ToOpen != nullptr)
		*ToOpen = Parms.ToOpen;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetAllNotesInDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HeistNoteDirection Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*StartingNote                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IncludeSelf                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Notes1                                                           (Parm, OutParm)
// struct FDataTableRowHandle         NewLocalVar_3                                                    (Edit, BlueprintVisible, NoDestructor)
// TArray<class FName>                Notes                                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*Note                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HeistNoteDirection Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::GetAllNotesInDirection(enum class Enum_HeistNoteDirection Direction, class Aba_NoteSpawnerComponentForInvestigationBoard_C* StartingNote, bool IncludeSelf, TArray<class FName>* Notes1, const struct FDataTableRowHandle& NewLocalVar_3, const TArray<class FName>& Notes, class Aba_NoteSpawnerComponentForInvestigationBoard_C* Note, const struct FDataTableRowHandle& NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, enum class Enum_HeistNoteDirection Temp_byte_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetAllNotesInDirection");

	Params::Aba_InvestigationBoard_Controller_C_GetAllNotesInDirection_Params Parms{};

	Parms.Direction = Direction;
	Parms.StartingNote = StartingNote;
	Parms.IncludeSelf = IncludeSelf;
	Parms.NewLocalVar_3 = NewLocalVar_3;
	Parms.Notes = Notes;
	Parms.Note = Note;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetNote_Note = CallFunc_GetNote_Note;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Notes1 != nullptr)
		*Notes1 = std::move(Parms.Notes1);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.SelectNext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HeistNoteDirection Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Prev                                                             (Edit, BlueprintVisible, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetNextNote_Note                                        (NoDestructor)
// bool                               CallFunc_GetNextNote_Found                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_InvestigationBoard_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (UObjectWrapper, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CanSelectNote_CanBeSelected                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::SelectNext(enum class Enum_HeistNoteDirection Direction, const struct FDataTableRowHandle& Prev, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_GetNextNote_Note, bool CallFunc_GetNextNote_Found, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_InvestigationBoard_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class FName K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, bool CallFunc_CanSelectNote_CanBeSelected, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "SelectNext");

	Params::Aba_InvestigationBoard_Controller_C_SelectNext_Params Parms{};

	Parms.Direction = Direction;
	Parms.Prev = Prev;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNextNote_Note = CallFunc_GetNextNote_Note;
	Parms.CallFunc_GetNextNote_Found = CallFunc_GetNextNote_Found;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;
	Parms.CallFunc_CanSelectNote_CanBeSelected = CallFunc_CanSelectNote_CanBeSelected;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetNextNote
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HeistNoteDirection Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Note                                                             (Parm, OutParm, NoDestructor)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                NewLocalVar_2                                                    (Edit, BlueprintVisible)
// TArray<class FName>                NewLocalVar_1                                                    (Edit, BlueprintVisible)
// TArray<class FName>                DirUpDown                                                        (Edit, BlueprintVisible)
// TArray<class FName>                DirectionalNotes                                                 (Edit, BlueprintVisible)
// struct FDataTableRowHandle         NewNote                                                          (Edit, BlueprintVisible, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetAllNotesInDirection_Notes1                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllNotesInDirection_Notes1_1                         (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetNextNoteInternal_NextNoteId                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSelectNote_CanBeSelected                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetNextNoteInternal_NextNoteId_1                        (NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetAllNotesInDirection_Notes1_2                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetAllNotesInDirection_Notes1_3                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::GetNextNote(enum class Enum_HeistNoteDirection Direction, struct FDataTableRowHandle* Note, bool* Found, const TArray<class FName>& NewLocalVar_2, const TArray<class FName>& NewLocalVar_1, const TArray<class FName>& DirUpDown, const TArray<class FName>& DirectionalNotes, const struct FDataTableRowHandle& NewNote, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note_1, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetAllNotesInDirection_Notes1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& CallFunc_GetAllNotesInDirection_Notes1_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Array_Get_Item_2, const struct FDataTableRowHandle& CallFunc_GetNextNoteInternal_NextNoteId, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_3, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note_2, bool CallFunc_CanSelectNote_CanBeSelected, const struct FDataTableRowHandle& CallFunc_GetNextNoteInternal_NextNoteId_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue_1, TArray<class FName>& CallFunc_GetAllNotesInDirection_Notes1_2, TArray<class FName>& CallFunc_GetAllNotesInDirection_Notes1_3, class FName CallFunc_Array_Get_Item_4, int32 CallFunc_Array_AddUnique_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_5, bool CallFunc_Array_IsValidIndex_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Array_IsValidIndex_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetNextNote");

	Params::Aba_InvestigationBoard_Controller_C_GetNextNote_Params Parms{};

	Parms.Direction = Direction;
	Parms.NewLocalVar_2 = NewLocalVar_2;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.DirUpDown = DirUpDown;
	Parms.DirectionalNotes = DirectionalNotes;
	Parms.NewNote = NewNote;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNote_Note = CallFunc_GetNote_Note;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNote_Note_1 = CallFunc_GetNote_Note_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllNotesInDirection_Notes1 = CallFunc_GetAllNotesInDirection_Notes1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllNotesInDirection_Notes1_1 = CallFunc_GetAllNotesInDirection_Notes1_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetNextNoteInternal_NextNoteId = CallFunc_GetNextNoteInternal_NextNoteId;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetNote_Note_2 = CallFunc_GetNote_Note_2;
	Parms.CallFunc_CanSelectNote_CanBeSelected = CallFunc_CanSelectNote_CanBeSelected;
	Parms.CallFunc_GetNextNoteInternal_NextNoteId_1 = CallFunc_GetNextNoteInternal_NextNoteId_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetAllNotesInDirection_Notes1_2 = CallFunc_GetAllNotesInDirection_Notes1_2;
	Parms.CallFunc_GetAllNotesInDirection_Notes1_3 = CallFunc_GetAllNotesInDirection_Notes1_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_5 = CallFunc_Array_AddUnique_ReturnValue_5;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Note != nullptr)
		*Note = std::move(Parms.Note);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetNextNoteInternal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NoteID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HeistNoteDirection Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         NextNoteId                                                       (Parm, OutParm, NoDestructor)
// struct FDataTableRowHandle         NewNote                                                          (Edit, BlueprintVisible, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSelectNote_CanBeSelected                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetNextNoteInternal_NextNoteId                          (NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::GetNextNoteInternal(class FName NoteID, enum class Enum_HeistNoteDirection Direction, struct FDataTableRowHandle* NextNoteId, const struct FDataTableRowHandle& NewNote, int32 Temp_int_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanSelectNote_CanBeSelected, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetNextNoteInternal_NextNoteId, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetNextNoteInternal");

	Params::Aba_InvestigationBoard_Controller_C_GetNextNoteInternal_Params Parms{};

	Parms.NoteID = NoteID;
	Parms.Direction = Direction;
	Parms.NewNote = NewNote;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetNote_Note = CallFunc_GetNote_Note;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CanSelectNote_CanBeSelected = CallFunc_CanSelectNote_CanBeSelected;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetNextNoteInternal_NextNoteId = CallFunc_GetNextNoteInternal_NextNoteId;
	Parms.CallFunc_GetNote_Note_1 = CallFunc_GetNote_Note_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NextNoteId != nullptr)
		*NextNoteId = std::move(Parms.NextNoteId);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CanSelectNote
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         Note                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CanBeSelected                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*LocalNote                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetNote_Note                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::CanSelectNote(const struct FDataTableRowHandle& Note, bool* CanBeSelected, class Aba_NoteSpawnerComponentForInvestigationBoard_C* LocalNote, bool CallFunc_IsValid_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetNote_Note)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CanSelectNote");

	Params::Aba_InvestigationBoard_Controller_C_CanSelectNote_Params Parms{};

	Parms.Note = Note;
	Parms.LocalNote = LocalNote;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNote_Note = CallFunc_GetNote_Note;

	UObject::ProcessEvent(Func, &Parms);

	if (CanBeSelected != nullptr)
		*CanBeSelected = Parms.CanBeSelected;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetNote
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NoteID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*Note                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::GetNote(class FName NoteID, class Aba_NoteSpawnerComponentForInvestigationBoard_C** Note, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetNote");

	Params::Aba_InvestigationBoard_Controller_C_GetNote_Params Parms{};

	Parms.NoteID = NoteID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Note != nullptr)
		*Note = Parms.Note;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetFractalWorldLevelName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        LevelName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_ShadowWorldLevels       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelNameFromAsset_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::GetFractalWorldLevelName(class FName* LevelName, bool* Result, const struct FSt_ShadowWorldLevels& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_GetLevelNameFromAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetFractalWorldLevelName");

	Params::Aba_InvestigationBoard_Controller_C_GetFractalWorldLevelName_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetLevelNameFromAsset_ReturnValue = CallFunc_GetLevelNameFromAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = Parms.LevelName;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.RebuildTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void Aba_InvestigationBoard_Controller_C::RebuildTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "RebuildTabs");

	Params::Aba_InvestigationBoard_Controller_C_RebuildTabs_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.RemoveLostBoards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_InvestigationBoard_Parent_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InvestigationBoard_Parent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::RemoveLostBoards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class Aba_InvestigationBoard_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class Aba_InvestigationBoard_Parent_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "RemoveLostBoards");

	Params::Aba_InvestigationBoard_Controller_C_RemoveLostBoards_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CheckIsCompleted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCompleted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Completed                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfRequirementsAreMet_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::CheckIsCompleted(bool* IsCompleted, bool Completed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckIfRequirementsAreMet_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CheckIsCompleted");

	Params::Aba_InvestigationBoard_Controller_C_CheckIsCompleted_Params Parms{};

	Parms.Completed = Completed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board = K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckIfRequirementsAreMet_ReturnValue = CallFunc_CheckIfRequirementsAreMet_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCompleted != nullptr)
		*IsCompleted = Parms.IsCompleted;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.BlendToBoardcamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::BlendToBoardcamera(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "BlendToBoardcamera");

	Params::Aba_InvestigationBoard_Controller_C_BlendToBoardcamera_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetKnownBoardClasses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownInvestigationBoards_Return                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_InvestigationBoard_Parent_C>K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::GetKnownBoardClasses(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_InvestigationBoard_Parent_C> K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetKnownBoardClasses");

	Params::Aba_InvestigationBoard_Controller_C_GetKnownBoardClasses_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetKnownInvestigationBoards_Return = CallFunc_GetKnownInvestigationBoards_Return;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent = K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetWasSpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               WasSpawned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::GetWasSpawned(struct FDataTableRowHandle& DataTableRowHandle, bool* WasSpawned, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetWasSpawned");

	Params::Aba_InvestigationBoard_Controller_C_GetWasSpawned_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (WasSpawned != nullptr)
		*WasSpawned = Parms.WasSpawned;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.SelectNewItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Movement                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_col_ViewObjectRoom_01_C* ViewRoom                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_InvestigationBoard_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (UObjectWrapper, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (UObjectWrapper, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::SelectNewItem(struct FDataTableRowHandle& DataTableRowHandle, bool Movement, class Aba_col_ViewObjectRoom_01_C* ViewRoom, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_InvestigationBoard_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class FName K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "SelectNewItem");

	Params::Aba_InvestigationBoard_Controller_C_SelectNewItem_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.Movement = Movement;
	Parms.ViewRoom = ViewRoom;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.SetBoardInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetDescKey_Row_Name                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void Aba_InvestigationBoard_Controller_C::SetBoardInfo(uint8 Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, class FName CallFunc_GetDescKey_Row_Name, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "SetBoardInfo");

	Params::Aba_InvestigationBoard_Controller_C_SetBoardInfo_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_GetDescKey_Row_Name = CallFunc_GetDescKey_Row_Name;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.UnZoomNote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// TArray<class Aba_col_ViewObjectRoom_01_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::UnZoomNote(FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, TArray<class Aba_col_ViewObjectRoom_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "UnZoomNote");

	Params::Aba_InvestigationBoard_Controller_C_UnZoomNote_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ZoomNote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_col_ViewObjectRoom_01_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::ZoomNote(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, FDelegateProperty_ Temp_delegate_Variable, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, int32 CallFunc_PostEvent_ReturnValue, TArray<class Aba_col_ViewObjectRoom_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ZoomNote");

	Params::Aba_InvestigationBoard_Controller_C_ZoomNote_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.SetNewBoard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_InvestigationBoard_Parent_C*NewBoard                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_InvestigationBoard_Entry_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_1                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo_2                  (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1            (UObjectWrapper, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::SetNewBoard(class Aba_InvestigationBoard_Parent_C* NewBoard, bool Temp_bool_Variable, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_Select_Default, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWid_InvestigationBoard_Entry_C* CallFunc_Array_Get_Item_2, bool CallFunc_BooleanOR_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable_1, class FName K2Node_Select_Default_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "SetNewBoard");

	Params::Aba_InvestigationBoard_Controller_C_SetNewBoard_Params Parms{};

	Parms.NewBoard = NewBoard;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board = K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo_2 = K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1 = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetChild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::GetChild(class FName& ItemToFind, class Aba_NoteSpawnerComponentForInvestigationBoard_C** Output, TArray<class FName>& CallFunc_Map_Keys_Keys, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Find_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetChild");

	Params::Aba_InvestigationBoard_Controller_C_GetChild_Params Parms{};

	Parms.ItemToFind = ItemToFind;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CreateChildsMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::CreateChildsMap(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CreateChildsMap");

	Params::Aba_InvestigationBoard_Controller_C_CreateChildsMap_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board = K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_InvestigationBoard_Controller_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "GetObjectsToSave");

	Params::Aba_InvestigationBoard_Controller_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InvestigationBoard_Controller_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "HasObjectsToSave");

	Params::Aba_InvestigationBoard_Controller_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_InvestigationBoard_Controller_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_InvestigationBoard_Controller_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_10E6DD3C440313B5A53534BA3FB79493
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveScreenshotData         ScreenshotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Aba_InvestigationBoard_Controller_C::Completed_10E6DD3C440313B5A53534BA3FB79493(const struct FSaveScreenshotData& ScreenshotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_10E6DD3C440313B5A53534BA3FB79493");

	Params::Aba_InvestigationBoard_Controller_C_Completed_10E6DD3C440313B5A53534BA3FB79493_Params Parms{};

	Parms.ScreenshotData = ScreenshotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_D74D6033408DDED6BA1159B4EF4A4170
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::Completed_D74D6033408DDED6BA1159B4EF4A4170(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_D74D6033408DDED6BA1159B4EF4A4170");

	Params::Aba_InvestigationBoard_Controller_C_Completed_D74D6033408DDED6BA1159B4EF4A4170_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_83A9D72844A2E46730AD2C8033DADA17
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Completed_83A9D72844A2E46730AD2C8033DADA17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_83A9D72844A2E46730AD2C8033DADA17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_EBDAC3CE477FECE3DCD5D5ADB6792698
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::Completed_EBDAC3CE477FECE3DCD5D5ADB6792698(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_EBDAC3CE477FECE3DCD5D5ADB6792698");

	Params::Aba_InvestigationBoard_Controller_C_Completed_EBDAC3CE477FECE3DCD5D5ADB6792698_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_C97BA4ED45953AADED369AB36B5FF282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::Completed_C97BA4ED45953AADED369AB36B5FF282(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_C97BA4ED45953AADED369AB36B5FF282");

	Params::Aba_InvestigationBoard_Controller_C_Completed_C97BA4ED45953AADED369AB36B5FF282_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_40E19BC54EB4B7D5D18CE3847B2725DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::Completed_40E19BC54EB4B7D5D18CE3847B2725DA(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_40E19BC54EB4B7D5D18CE3847B2725DA");

	Params::Aba_InvestigationBoard_Controller_C_Completed_40E19BC54EB4B7D5D18CE3847B2725DA_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Completed_716313BF4FCB653B1ED82F8C519A59AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Completed_716313BF4FCB653B1ED82F8C519A59AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Completed_716313BF4FCB653B1ED82F8C519A59AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0");

	Params::Aba_InvestigationBoard_Controller_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputAccept
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputAcceptReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputAcceptReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputAcceptReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputDPadLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputDPadRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputFaceUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputR2Release
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputR2Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputR2Release");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputRightStick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "OnInteractionPressedComponent");

	Params::Aba_InvestigationBoard_Controller_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.OnPlayerFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "OnPlayerFocusGainedComponent");

	Params::Aba_InvestigationBoard_Controller_C_OnPlayerFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.OnPlayerFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "OnPlayerFocusLostComponent");

	Params::Aba_InvestigationBoard_Controller_C_OnPlayerFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputNewboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_InvestigationBoard_Parent_C*NewBoard                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           BoardMarker                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WaitForMovement                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Animate                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::InputNewboard(class Aba_InvestigationBoard_Parent_C* NewBoard, class Aba_BoardMarker_C* BoardMarker, bool WaitForMovement, bool Animate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputNewboard");

	Params::Aba_InvestigationBoard_Controller_C_InputNewboard_Params Parms{};

	Parms.NewBoard = NewBoard;
	Parms.BoardMarker = BoardMarker;
	Parms.WaitForMovement = WaitForMovement;
	Parms.Animate = Animate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.UpdateBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::UpdateBoard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "UpdateBoard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.hack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Hack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "hack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Prepareboards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Prepareboards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Prepareboards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputL1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputL1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputL1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputR1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputR1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputR1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputFaceDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputR2
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.LoadFractal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::LoadFractal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "LoadFractal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputBack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InternalShowNearInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::InternalShowNearInteractIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InternalShowNearInteractIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.CustomEvent_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::CustomEvent_03()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "CustomEvent_03");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ForceBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentBoardIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::ForceBoard(int32 CurrentBoardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ForceBoard");

	Params::Aba_InvestigationBoard_Controller_C_ForceBoard_Params Parms{};

	Parms.CurrentBoardIndex = CurrentBoardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Bind Button Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Bind_Button_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Bind Button Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Internal_SelectNote
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Internal_SelectNote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Internal_SelectNote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Internal_RunSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Internal_RunSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Internal_RunSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Internal_GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Internal_GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Internal_GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputLeftRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::InputLeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputLeftRight");

	Params::Aba_InvestigationBoard_Controller_C_InputLeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.InputUpDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::InputUpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "InputUpDown");

	Params::Aba_InvestigationBoard_Controller_C_InputUpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.HideActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::HideActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "HideActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ShowActiveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::ShowActiveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ShowActiveItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ExecuteUbergraph_ba_InvestigationBoard_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HACkGetCurrentDayAdjustedForEvening_Day                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery                                    (NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToFile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_InvestigationBoard_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGame_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable              (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable_1            (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_NoteSpawnerComponentForInvestigationBoard_C*CallFunc_GetChild_Output_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncScreenshot*CallFunc_AsyncMakeScreenshotData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveScreenshotData         Temp_struct_Variable                                             (None)
// class UChernobylGameAsyncScreenshotSave*CallFunc_ChernobylGameAsyncScreenshot_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Inventory_ButtonInfoK2Node_MakeStruct_struct_Inventory_ButtonInfo                    (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Inventory_ButtonModifyInfoK2Node_MakeStruct_struct_Inventory_ButtonModifyInfo              (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InvestigationBoard_Parent_C*K2Node_CustomEvent_NewBoard                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           K2Node_CustomEvent_BoardMarker                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WaitForMovement                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Animate                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_col_ViewObjectRoom_01_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FPermanentLevelInfo         CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_MotherInvestigationBoard_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_MotherInvestigationBoard_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownInvestigationBoards_Return                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveScreenshotData         K2Node_CustomEvent_ScreenshotData                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentBoardIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class UChernobylGameAsyncSave*     CallFunc_ChernobylGameAsyncSave_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Axis_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Axis                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery_1                                  (NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QueryActivity_OutQueryResult                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue                             (ReferenceParm)
// bool                               CallFunc_QueryActivity_OutQueryResult_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue_1                           (ReferenceParm)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetFractalWorldLevelName_LevelName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFractalWorldLevelName_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetFractalLevelToOpen_ToOpen                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDemoVersion_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InvestigationBoard_Controller_C::ExecuteUbergraph_ba_InvestigationBoard_Controller(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_HACkGetCurrentDayAdjustedForEvening_Day, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FKey& K2Node_InputActionEvent_Key, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SaveGameToFile_ReturnValue, bool CallFunc_SaveGame_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FMax_ReturnValue, class UWid_InvestigationBoard_C* CallFunc_Create_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_SaveGame_ReturnValue_1, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_13, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_14, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_15, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable, bool Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool K2Node_CustomEvent_Success_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_GetChild_Output_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Has_Been_Initd_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, float CallFunc_GetWorldDeltaSeconds_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class UChernobylGameAsyncScreenshot* CallFunc_AsyncMakeScreenshotData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FSaveScreenshotData& Temp_struct_Variable, class UChernobylGameAsyncScreenshotSave* CallFunc_ChernobylGameAsyncScreenshot_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, int32 CallFunc_Array_Length_ReturnValue_2, class Aba_InvestigationBoard_Parent_C* K2Node_CustomEvent_NewBoard, class Aba_BoardMarker_C* K2Node_CustomEvent_BoardMarker, bool K2Node_CustomEvent_WaitForMovement, bool K2Node_CustomEvent_Animate, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool K2Node_CustomEvent_Success, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, TArray<class Aba_col_ViewObjectRoom_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_16, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_17, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25, int32 Temp_int_Array_Index_Variable_3, enum class EEventMap CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FPermanentLevelInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26, int32 CallFunc_Array_Length_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27, float CallFunc_GetWorldDeltaSeconds_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28, bool CallFunc_BooleanOR_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, TArray<class Aba_MotherInvestigationBoard_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_19, class Aba_MotherInvestigationBoard_C* CallFunc_Array_Get_Item_4, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UClass* CallFunc_Array_Get_Item_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_20, bool CallFunc_PermanentDataGetValue_ReturnValue, int32 Temp_int_Array_Index_Variable_4, class UClass* CallFunc_Array_Get_Item_6, bool CallFunc_IsValidClass_ReturnValue, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_7, class UClass* CallFunc_Array_Get_Item_8, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FSaveScreenshotData& K2Node_CustomEvent_ScreenshotData, bool CallFunc_BooleanAND_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33, int32 K2Node_CustomEvent_CurrentBoardIndex, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_7, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_9, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_5, int32 K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_12, bool Temp_bool_Variable_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool K2Node_CustomEvent_Success_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_9, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_21, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UChernobylGameAsyncSave* CallFunc_ChernobylGameAsyncSave_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsValid_ReturnValue_7, bool Temp_bool_Variable_4, float K2Node_Event_Axis_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_22, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Success_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, float K2Node_Event_Axis, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, bool CallFunc_QueryActivity_OutQueryResult_1, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_10, class FName CallFunc_GetFractalWorldLevelName_LevelName, bool CallFunc_GetFractalWorldLevelName_Result, class FName CallFunc_GetFractalLevelToOpen_ToOpen, bool CallFunc_IsDemoVersion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ExecuteUbergraph_ba_InvestigationBoard_Controller");

	Params::Aba_InvestigationBoard_Controller_C_ExecuteUbergraph_ba_InvestigationBoard_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_HACkGetCurrentDayAdjustedForEvening_Day = CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_MakeStruct_FPAnimQuery = K2Node_MakeStruct_FPAnimQuery;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue = CallFunc_WaitForAsyncSaveGame_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SaveGameToFile_ReturnValue = CallFunc_SaveGameToFile_ReturnValue;
	Parms.CallFunc_SaveGame_ReturnValue = CallFunc_SaveGame_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_SaveGame_ReturnValue_1 = CallFunc_SaveGame_ReturnValue_1;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_1 = CallFunc_WaitForAsyncSaveGame_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue = CallFunc_GetIsGateOfMadnessMode_ReturnValue;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_11 = CallFunc_GetCGGameInstance_AsCGGame_Instance_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_12 = CallFunc_GetCGGameInstance_AsCGGame_Instance_12;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_1 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_13 = CallFunc_GetCGGameInstance_AsCGGame_Instance_13;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_14 = CallFunc_GetCGGameInstance_AsCGGame_Instance_14;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_15 = CallFunc_GetCGGameInstance_AsCGGame_Instance_15;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable = Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable;
	Parms.Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable_1 = Temp_bool_2BABFA91418178DED8D5E584FE34D06E_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetChild_Output = CallFunc_GetChild_Output;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetChild_Output_1 = CallFunc_GetChild_Output_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.K2Node_Event_PlayerPawn_2 = K2Node_Event_PlayerPawn_2;
	Parms.K2Node_Event_ComponentHit_2 = K2Node_Event_ComponentHit_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_4 = CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_5 = CallFunc_GetWorldDeltaSeconds_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_ComponentHit_1 = K2Node_Event_ComponentHit_1;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_AsyncMakeScreenshotData_ReturnValue = CallFunc_AsyncMakeScreenshotData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ChernobylGameAsyncScreenshot_ReturnValue = CallFunc_ChernobylGameAsyncScreenshot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonInfo = K2Node_MakeStruct_struct_Inventory_ButtonInfo;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo = K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CustomEvent_NewBoard = K2Node_CustomEvent_NewBoard;
	Parms.K2Node_CustomEvent_BoardMarker = K2Node_CustomEvent_BoardMarker;
	Parms.K2Node_CustomEvent_WaitForMovement = K2Node_CustomEvent_WaitForMovement;
	Parms.K2Node_CustomEvent_Animate = K2Node_CustomEvent_Animate;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_16 = CallFunc_GetCGGameInstance_AsCGGame_Instance_16;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_SetNewMovementState_ReturnValue_2 = CallFunc_SetNewMovementState_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21;
	Parms.CallFunc_SetNewMovementState_ReturnValue_3 = CallFunc_SetNewMovementState_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_17 = CallFunc_GetCGGameInstance_AsCGGame_Instance_17;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_18 = CallFunc_GetCGGameInstance_AsCGGame_Instance_18;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24;
	Parms.CallFunc_SetNewMovementState_ReturnValue_4 = CallFunc_SetNewMovementState_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_6 = CallFunc_GetWorldDeltaSeconds_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_7 = CallFunc_GetWorldDeltaSeconds_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_19 = CallFunc_GetCGGameInstance_AsCGGame_Instance_19;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetKnownInvestigationBoards_Return = CallFunc_GetKnownInvestigationBoards_Return;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29;
	Parms.CallFunc_SetNewMovementState_ReturnValue_5 = CallFunc_SetNewMovementState_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31;
	Parms.CallFunc_SetNewMovementState_ReturnValue_6 = CallFunc_SetNewMovementState_ReturnValue_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_20 = CallFunc_GetCGGameInstance_AsCGGame_Instance_20;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_CustomEvent_ScreenshotData = K2Node_CustomEvent_ScreenshotData;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33;
	Parms.K2Node_CustomEvent_CurrentBoardIndex = K2Node_CustomEvent_CurrentBoardIndex;
	Parms.CallFunc_SetNewMovementState_ReturnValue_7 = CallFunc_SetNewMovementState_ReturnValue_7;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_12 = CallFunc_GetPlayerController_ReturnValue_12;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_8 = CallFunc_GetWorldDeltaSeconds_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_9 = CallFunc_GetWorldDeltaSeconds_ReturnValue_9;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_21 = CallFunc_GetCGGameInstance_AsCGGame_Instance_21;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_ChernobylGameAsyncSave_ReturnValue = CallFunc_ChernobylGameAsyncSave_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Event_Axis_1 = K2Node_Event_Axis_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_22 = CallFunc_GetCGGameInstance_AsCGGame_Instance_22;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_Event_Axis = K2Node_Event_Axis;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36;
	Parms.K2Node_MakeStruct_FPAnimQuery_1 = K2Node_MakeStruct_FPAnimQuery_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_QueryActivity_OutQueryResult = CallFunc_QueryActivity_OutQueryResult;
	Parms.CallFunc_QueryActivity_OutQueryQueue = CallFunc_QueryActivity_OutQueryQueue;
	Parms.CallFunc_QueryActivity_OutQueryResult_1 = CallFunc_QueryActivity_OutQueryResult_1;
	Parms.CallFunc_QueryActivity_OutQueryQueue_1 = CallFunc_QueryActivity_OutQueryQueue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_10 = CallFunc_GetWorldDeltaSeconds_ReturnValue_10;
	Parms.CallFunc_GetFractalWorldLevelName_LevelName = CallFunc_GetFractalWorldLevelName_LevelName;
	Parms.CallFunc_GetFractalWorldLevelName_Result = CallFunc_GetFractalWorldLevelName_Result;
	Parms.CallFunc_GetFractalLevelToOpen_ToOpen = CallFunc_GetFractalLevelToOpen_ToOpen;
	Parms.CallFunc_IsDemoVersion_ReturnValue = CallFunc_IsDemoVersion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.BoardClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::BoardClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "BoardClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.StartWormholeAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::StartWormholeAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "StartWormholeAnimation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.RequestBoard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      RequesteBoardClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::RequestBoard__DelegateSignature(class UClass* RequesteBoardClass, int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "RequestBoard__DelegateSignature");

	Params::Aba_InvestigationBoard_Controller_C_RequestBoard__DelegateSignature_Params Parms{};

	Parms.RequesteBoardClass = RequesteBoardClass;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.Initialised__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::Initialised__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "Initialised__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.EnterWormhole__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoardIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::EnterWormhole__DelegateSignature(int32 BoardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "EnterWormhole__DelegateSignature");

	Params::Aba_InvestigationBoard_Controller_C_EnterWormhole__DelegateSignature_Params Parms{};

	Parms.BoardIndex = BoardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.ChangeBoard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoardIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InvestigationBoard_Controller_C::ChangeBoard__DelegateSignature(int32 BoardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "ChangeBoard__DelegateSignature");

	Params::Aba_InvestigationBoard_Controller_C_ChangeBoard__DelegateSignature_Params Parms{};

	Parms.BoardIndex = BoardIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InvestigationBoard_Controller.ba_InvestigationBoard_Controller_C.BoardEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InvestigationBoard_Controller_C::BoardEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InvestigationBoard_Controller_C", "BoardEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


