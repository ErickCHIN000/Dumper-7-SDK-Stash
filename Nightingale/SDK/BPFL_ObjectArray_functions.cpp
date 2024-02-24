#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ObjectArray.BPFL_ObjectArray_C
// (None)

class UClass* UBPFL_ObjectArray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ObjectArray_C");

	return Clss;
}


// BPFL_ObjectArray_C BPFL_ObjectArray.Default__BPFL_ObjectArray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ObjectArray_C* UBPFL_ObjectArray_C::GetDefaultObj()
{
	static class UBPFL_ObjectArray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ObjectArray_C*>(UBPFL_ObjectArray_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayAppend
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ObjectArray              OriginalObjectArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_ObjectArray              AppendedObjectArray                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_ObjectArray              CombinedObjectArray                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      LCombinedIDArray                                                 (Edit, BlueprintVisible)
// struct FS_ObjectArray              K2Node_MakeStruct_S_ObjectArray                                  (HasGetValueTypeHash)

void UBPFL_ObjectArray_C::ObjectArrayAppend(const struct FS_ObjectArray& OriginalObjectArray, struct FS_ObjectArray& AppendedObjectArray, class UObject* __WorldContext, struct FS_ObjectArray* CombinedObjectArray, const TArray<int32>& LCombinedIDArray, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ObjectArray_C", "ObjectArrayAppend");

	Params::UBPFL_ObjectArray_C_ObjectArrayAppend_Params Parms{};

	Parms.OriginalObjectArray = OriginalObjectArray;
	Parms.AppendedObjectArray = AppendedObjectArray;
	Parms.__WorldContext = __WorldContext;
	Parms.LCombinedIDArray = LCombinedIDArray;
	Parms.K2Node_MakeStruct_S_ObjectArray = K2Node_MakeStruct_S_ObjectArray;

	UObject::ProcessEvent(Func, &Parms);

	if (CombinedObjectArray != nullptr)
		*CombinedObjectArray = std::move(Parms.CombinedObjectArray);

}


// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayRemove
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ObjectArray              ObjectArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ObjectArray              UpdatedObjectArray                                               (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      StartingIDArray                                                  (Edit, BlueprintVisible)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ObjectArray              K2Node_MakeStruct_S_ObjectArray                                  (HasGetValueTypeHash)

void UBPFL_ObjectArray_C::ObjectArrayRemove(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, bool* Success, struct FS_ObjectArray* UpdatedObjectArray, const TArray<int32>& StartingIDArray, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ObjectArray_C", "ObjectArrayRemove");

	Params::UBPFL_ObjectArray_C_ObjectArrayRemove_Params Parms{};

	Parms.ObjectArray = ObjectArray;
	Parms.ItemToFind = ItemToFind;
	Parms.__WorldContext = __WorldContext;
	Parms.StartingIDArray = StartingIDArray;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_MakeStruct_S_ObjectArray = K2Node_MakeStruct_S_ObjectArray;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (UpdatedObjectArray != nullptr)
		*UpdatedObjectArray = std::move(Parms.UpdatedObjectArray);

}


// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayAdd
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ObjectArray              ObjectArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AddIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ObjectArray              UpdatedArray                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      StartingIDArray                                                  (Edit, BlueprintVisible)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ObjectArray              K2Node_MakeStruct_S_ObjectArray                                  (HasGetValueTypeHash)

void UBPFL_ObjectArray_C::ObjectArrayAdd(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, int32* AddIndex, struct FS_ObjectArray* UpdatedArray, const TArray<int32>& StartingIDArray, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, int32 CallFunc_Array_Add_ReturnValue, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ObjectArray_C", "ObjectArrayAdd");

	Params::UBPFL_ObjectArray_C_ObjectArrayAdd_Params Parms{};

	Parms.ObjectArray = ObjectArray;
	Parms.ItemToFind = ItemToFind;
	Parms.__WorldContext = __WorldContext;
	Parms.StartingIDArray = StartingIDArray;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_S_ObjectArray = K2Node_MakeStruct_S_ObjectArray;

	UObject::ProcessEvent(Func, &Parms);

	if (AddIndex != nullptr)
		*AddIndex = Parms.AddIndex;

	if (UpdatedArray != nullptr)
		*UpdatedArray = std::move(Parms.UpdatedArray);

}


// Function BPFL_ObjectArray.BPFL_ObjectArray_C.ObjectArrayContains
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_ObjectArray              ObjectArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_ObjectArray_C::ObjectArrayContains(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ObjectArray_C", "ObjectArrayContains");

	Params::UBPFL_ObjectArray_C_ObjectArrayContains_Params Parms{};

	Parms.ObjectArray = ObjectArray;
	Parms.ItemToFind = ItemToFind;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


