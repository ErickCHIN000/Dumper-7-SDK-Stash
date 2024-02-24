#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ObjectArray.BPFL_ObjectArray_C
class UBPFL_ObjectArray_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ObjectArray_C* GetDefaultObj();

	void ObjectArrayAppend(const struct FS_ObjectArray& OriginalObjectArray, struct FS_ObjectArray& AppendedObjectArray, class UObject* __WorldContext, struct FS_ObjectArray* CombinedObjectArray, const TArray<int32>& LCombinedIDArray, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray);
	void ObjectArrayRemove(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, bool* Success, struct FS_ObjectArray* UpdatedObjectArray, const TArray<int32>& StartingIDArray, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray);
	void ObjectArrayAdd(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, int32* AddIndex, struct FS_ObjectArray* UpdatedArray, const TArray<int32>& StartingIDArray, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, int32 CallFunc_Array_Add_ReturnValue, const struct FS_ObjectArray& K2Node_MakeStruct_S_ObjectArray);
	bool ObjectArrayContains(const struct FS_ObjectArray& ObjectArray, class UObject*& ItemToFind, class UObject* __WorldContext, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_Array_Contains_ReturnValue);
};

}


