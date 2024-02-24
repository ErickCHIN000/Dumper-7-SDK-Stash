#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C
// (Actor)

class UClass* Aba_NoteSpawnerComponentForInvestigationBoard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_NoteSpawnerComponentForInvestigationBoard_C");

	return Clss;
}


// ba_NoteSpawnerComponentForInvestigationBoard_C ba_NoteSpawnerComponentForInvestigationBoard.Default__ba_NoteSpawnerComponentForInvestigationBoard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_NoteSpawnerComponentForInvestigationBoard_C* Aba_NoteSpawnerComponentForInvestigationBoard_C::GetDefaultObj()
{
	static class Aba_NoteSpawnerComponentForInvestigationBoard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_NoteSpawnerComponentForInvestigationBoard_C*>(Aba_NoteSpawnerComponentForInvestigationBoard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_NoteSpawnerComponentForInvestigationBoard_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "GetObjectsToSave");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_NoteSpawnerComponentForInvestigationBoard_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "HasObjectsToSave");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_NoteSpawnerComponentForInvestigationBoard_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.SetNote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewNote                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_col_CollectableNote_01_C*K2Node_DynamicCast_AsBa_Col_Collectable_Note_01                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void Aba_NoteSpawnerComponentForInvestigationBoard_C::SetNote(class FName NewNote, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Aba_col_CollectableNote_01_C* K2Node_DynamicCast_AsBa_Col_Collectable_Note_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "SetNote");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_SetNote_Params Parms{};

	Parms.NewNote = NewNote;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Col_Collectable_Note_01 = K2Node_DynamicCast_AsBa_Col_Collectable_Note_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.CheckIfRequirementsAreMet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetNamesFromRowHandles_OutputNames                      (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_ArrayIntersectionFName_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Aba_NoteSpawnerComponentForInvestigationBoard_C::CheckIfRequirementsAreMet(TArray<class FName>& CallFunc_GetNamesFromRowHandles_OutputNames, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_ArrayIntersectionFName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "CheckIfRequirementsAreMet");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_CheckIfRequirementsAreMet_Params Parms{};

	Parms.CallFunc_GetNamesFromRowHandles_OutputNames = CallFunc_GetNamesFromRowHandles_OutputNames;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_ArrayIntersectionFName_ReturnValue = CallFunc_ArrayIntersectionFName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Spawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCrucial                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasSpawned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetNamesFromRowHandles_OutputNames                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_ArrayIntersectionFName_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Spawn(bool* IsCrucial, bool* WasSpawned, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetNamesFromRowHandles_OutputNames, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& CallFunc_ArrayIntersectionFName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Spawn");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_Spawn_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetNamesFromRowHandles_OutputNames = CallFunc_GetNamesFromRowHandles_OutputNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_ArrayIntersectionFName_ReturnValue = CallFunc_ArrayIntersectionFName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCrucial != nullptr)
		*IsCrucial = Parms.IsCrucial;

	if (WasSpawned != nullptr)
		*WasSpawned = Parms.WasSpawned;

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_NoteSpawnerComponentForInvestigationBoard_C::UserConstructionScript(const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "UserConstructionScript");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance = K2Node_DynamicCast_AsMaterial_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_1 = K2Node_DynamicCast_AsStatic_Mesh_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Light__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Light__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Light__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Light__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Light__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Light__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Light__StartSound__EventFunc
// (BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Light__StartSound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Light__StartSound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Light__Spawn__EventFunc
// (BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Light__Spawn__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Light__Spawn__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Introduce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Introduce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Introduce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Unpause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Unpause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Spawn_IsCrucial                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Spawn_WasSpawned                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FloatingNoteDescription_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_StoryNoteInfoStructure  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundWave*                  K2Node_DynamicCast_AsSound_Wave                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSubtitleCueBP>      CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues               (ReferenceParm)
// struct FSubtitleCueBP              CallFunc_Array_Get_Item                                          (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Play_Sound_At_Location_With_Subtitles_Duration          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_NoteSpawnerComponentForInvestigationBoard_C::ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Spawn_IsCrucial, bool CallFunc_Spawn_WasSpawned, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_FloatingNoteDescription_C* CallFunc_Create_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class USoundWave* K2Node_DynamicCast_AsSound_Wave, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FSubtitleCueBP>& CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues, const struct FSubtitleCueBP& CallFunc_Array_Get_Item, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UUserWidget* CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef, class UAudioComponent* CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef, float CallFunc_Play_Sound_At_Location_With_Subtitles_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard");

	Params::Aba_NoteSpawnerComponentForInvestigationBoard_C_ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Spawn_IsCrucial = CallFunc_Spawn_IsCrucial;
	Parms.CallFunc_Spawn_WasSpawned = CallFunc_Spawn_WasSpawned;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSound_Wave = K2Node_DynamicCast_AsSound_Wave;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues = CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef = CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef;
	Parms.CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef = CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef;
	Parms.CallFunc_Play_Sound_At_Location_With_Subtitles_Duration = CallFunc_Play_Sound_At_Location_With_Subtitles_Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Spawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Spawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Spawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C.Introduction ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_NoteSpawnerComponentForInvestigationBoard_C::Introduction_ended__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_NoteSpawnerComponentForInvestigationBoard_C", "Introduction ended__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


