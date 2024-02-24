#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C
// (Actor)

class UClass* Aba_MotherInvestigationBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_MotherInvestigationBoard_C");

	return Clss;
}


// ba_MotherInvestigationBoard_C ba_MotherInvestigationBoard.Default__ba_MotherInvestigationBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_MotherInvestigationBoard_C* Aba_MotherInvestigationBoard_C::GetDefaultObj()
{
	static class Aba_MotherInvestigationBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_MotherInvestigationBoard_C*>(Aba_MotherInvestigationBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.GetObjectsToSave
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<class UObject*> Aba_MotherInvestigationBoard_C::GetObjectsToSave(TArray<class UObject*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "GetObjectsToSave");

	Params::Aba_MotherInvestigationBoard_C_GetObjectsToSave_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_MotherInvestigationBoard_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "HasObjectsToSave");

	Params::Aba_MotherInvestigationBoard_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_MotherInvestigationBoard_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_MotherInvestigationBoard_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.IsAnyFractalWorldAvailable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCompleted                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetKnownBoardClasses_BoardClasses1                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_MotherInvestigationBoard_C::IsAnyFractalWorldAvailable(bool* Result, bool IsCompleted, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class UClass*>& CallFunc_GetKnownBoardClasses_BoardClasses1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "IsAnyFractalWorldAvailable");

	Params::Aba_MotherInvestigationBoard_C_IsAnyFractalWorldAvailable_Params Parms{};

	Parms.IsCompleted = IsCompleted;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetKnownBoardClasses_BoardClasses1 = CallFunc_GetKnownBoardClasses_BoardClasses1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue_1 = CallFunc_PermanentDataGetValue_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.GetKnownBoardClasses
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              BoardClasses1                                                    (Parm, OutParm)
// TArray<class UClass*>              BoardClasses                                                     (Edit, BlueprintVisible)
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

void Aba_MotherInvestigationBoard_C::GetKnownBoardClasses(TArray<class UClass*>* BoardClasses1, const TArray<class UClass*>& BoardClasses, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_InvestigationBoard_Parent_C> K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "GetKnownBoardClasses");

	Params::Aba_MotherInvestigationBoard_C_GetKnownBoardClasses_Params Parms{};

	Parms.BoardClasses = BoardClasses;
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

	if (BoardClasses1 != nullptr)
		*BoardClasses1 = std::move(Parms.BoardClasses1);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.GetBoardForIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_InvestigationBoardDesc  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_InvestigationBoard_Parent_C>K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_MotherInvestigationBoard_C::GetBoardForIndex(int32 Index, class UClass** Return, class FName CallFunc_Array_Get_Item, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_InvestigationBoard_Parent_C> K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent, bool K2Node_ClassDynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "GetBoardForIndex");

	Params::Aba_MotherInvestigationBoard_C_GetBoardForIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent = K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ChangeCurrentBoardContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetBoardForIndex_Return                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::ChangeCurrentBoardContent(int32 Direction, bool Temp_bool_Variable, class UClass* CallFunc_GetBoardForIndex_Return, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ChangeCurrentBoardContent");

	Params::Aba_MotherInvestigationBoard_C_ChangeCurrentBoardContent_Params Parms{};

	Parms.Direction = Direction;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBoardForIndex_Return = CallFunc_GetBoardForIndex_Return;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ChangeBoard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           ReturnBoard                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           ActiveBoard                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_BoardMarker_C*>   InactiveBoards                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_ChangeBoardIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::ChangeBoard(int32 Direction, class Aba_BoardMarker_C** ReturnBoard, class Aba_BoardMarker_C* ActiveBoard, const TArray<class Aba_BoardMarker_C*>& InactiveBoards, int32 CallFunc_ChangeBoardIndex_ReturnValue, class Aba_BoardMarker_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ChangeBoard");

	Params::Aba_MotherInvestigationBoard_C_ChangeBoard_Params Parms{};

	Parms.Direction = Direction;
	Parms.ActiveBoard = ActiveBoard;
	Parms.InactiveBoards = InactiveBoards;
	Parms.CallFunc_ChangeBoardIndex_ReturnValue = CallFunc_ChangeBoardIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnBoard != nullptr)
		*ReturnBoard = Parms.ReturnBoard;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ChangeBoardIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 Aba_MotherInvestigationBoard_C::ChangeBoardIndex(int32 Direction, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ChangeBoardIndex");

	Params::Aba_MotherInvestigationBoard_C_ChangeBoardIndex_Params Parms{};

	Parms.Direction = Direction;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.AsBoardMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UChildActorComponent*        ChildActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           AsBa_Board_Marker                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           K2Node_DynamicCast_AsBa_Board_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::AsBoardMarker(class UChildActorComponent* ChildActor, class Aba_BoardMarker_C** AsBa_Board_Marker, class Aba_BoardMarker_C* K2Node_DynamicCast_AsBa_Board_Marker, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "AsBoardMarker");

	Params::Aba_MotherInvestigationBoard_C_AsBoardMarker_Params Parms{};

	Parms.ChildActor = ChildActor;
	Parms.K2Node_DynamicCast_AsBa_Board_Marker = K2Node_DynamicCast_AsBa_Board_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBa_Board_Marker != nullptr)
		*AsBa_Board_Marker = Parms.AsBa_Board_Marker;

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.OutputBoardRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      RequesteBoardClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::OutputBoardRequest(class UClass* RequesteBoardClass, int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "OutputBoardRequest");

	Params::Aba_MotherInvestigationBoard_C_OutputBoardRequest_Params Parms{};

	Parms.RequesteBoardClass = RequesteBoardClass;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.NewNote
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::NewNote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "NewNote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.Prepareboards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::Prepareboards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "Prepareboards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.Load FractalWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::Load_FractalWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "Load FractalWorld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.StartWormholeAnimation_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::StartWormholeAnimation_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "StartWormholeAnimation_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.InteractionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_ia_BaseInteractableObject_01_C*Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::InteractionStarted(class Aba_ia_BaseInteractableObject_01_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "InteractionStarted");

	Params::Aba_MotherInvestigationBoard_C_InteractionStarted_Params Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.UpdateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::UpdateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "UpdateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.BoardClosed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::BoardClosed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "BoardClosed_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.TurnOffBoardIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::TurnOffBoardIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "TurnOffBoardIndicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.TurnOnBoardIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::TurnOnBoardIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "TurnOnBoardIndicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.ExecuteUbergraph_ba_MotherInvestigationBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownInvestigationBoards_Return                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SpawnBoard_Class                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnBoard_IsCompleted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetKnownBoardClasses_BoardClasses1                      (ReferenceParm)
// class UClass*                      K2Node_CustomEvent_RequesteBoardClass                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_BoardMarker_C*           CallFunc_ChangeBoard_ReturnBoard                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_BoardMarker_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetBoardForIndex_Return                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SpawnBoard_Class_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnBoard_IsCompleted_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_ia_BaseInteractableObject_01_C*K2Node_CustomEvent_Sender                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractable>CallFunc_UnlockInteraction_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>CallFunc_LockInteraction_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UChildActorComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UChildActorComponent*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_BoardMarker_C*           K2Node_DynamicCast_AsBa_Board_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_MotherInvestigationBoard_C::ExecuteUbergraph_ba_MotherInvestigationBoard(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_SpawnBoard_Class, bool CallFunc_SpawnBoard_IsCompleted, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UClass*>& CallFunc_GetKnownBoardClasses_BoardClasses1, class UClass* K2Node_CustomEvent_RequesteBoardClass, int32 K2Node_CustomEvent_Direction, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class Aba_BoardMarker_C* CallFunc_ChangeBoard_ReturnBoard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UClass* CallFunc_Array_Get_Item, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_2, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_BoardMarker_C* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetBoardForIndex_Return, class UClass* CallFunc_SpawnBoard_Class_1, bool CallFunc_SpawnBoard_IsCompleted_1, class Aba_ia_BaseInteractableObject_01_C* K2Node_CustomEvent_Sender, TScriptInterface<class IInteractable> CallFunc_UnlockInteraction_self_CastInput, TScriptInterface<class IInteractable> CallFunc_LockInteraction_self_CastInput, TArray<class UChildActorComponent*>& K2Node_MakeArray_Array, class UChildActorComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, class Aba_BoardMarker_C* K2Node_DynamicCast_AsBa_Board_Marker, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UClass* K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "ExecuteUbergraph_ba_MotherInvestigationBoard");

	Params::Aba_MotherInvestigationBoard_C_ExecuteUbergraph_ba_MotherInvestigationBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetKnownInvestigationBoards_Return = CallFunc_GetKnownInvestigationBoards_Return;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SpawnBoard_Class = CallFunc_SpawnBoard_Class;
	Parms.CallFunc_SpawnBoard_IsCompleted = CallFunc_SpawnBoard_IsCompleted;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetKnownBoardClasses_BoardClasses1 = CallFunc_GetKnownBoardClasses_BoardClasses1;
	Parms.K2Node_CustomEvent_RequesteBoardClass = K2Node_CustomEvent_RequesteBoardClass;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_ChangeBoard_ReturnBoard = CallFunc_ChangeBoard_ReturnBoard;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag = K2Node_DynamicCast_AsBp_Minimap_Tag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag_1 = K2Node_DynamicCast_AsBp_Minimap_Tag_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBoardForIndex_Return = CallFunc_GetBoardForIndex_Return;
	Parms.CallFunc_SpawnBoard_Class_1 = CallFunc_SpawnBoard_Class_1;
	Parms.CallFunc_SpawnBoard_IsCompleted_1 = CallFunc_SpawnBoard_IsCompleted_1;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.CallFunc_UnlockInteraction_self_CastInput = CallFunc_UnlockInteraction_self_CastInput;
	Parms.CallFunc_LockInteraction_self_CastInput = CallFunc_LockInteraction_self_CastInput;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBa_Board_Marker = K2Node_DynamicCast_AsBa_Board_Marker;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.IntreractionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::IntreractionFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "IntreractionFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.Interaction Started__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::Interaction_Started__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "Interaction Started__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C.StartAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_MotherInvestigationBoard_C::StartAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_MotherInvestigationBoard_C", "StartAnimation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


