#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Structures_SFX.BPFL_Structures_SFX_C
class UBPFL_Structures_SFX_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Structures_SFX_C* GetDefaultObj();

	void Get_Destruction_Properties(class UStructureCompositePiece* Structure_Composite_Piece, class UObject* __WorldContext, class UAkAudioEvent** Event_Override, class UAkSwitchValue** Material_Switch, class UAkSwitchValue* LoadedAkSwitch, class UAkAudioEvent* LoadedAkEvent, enum class EStructureFXActivationTime Temp_byte_Variable, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_1, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess_2);
	void Get_Structure_Composite_Piece_Location(class UObject* Structure, class UObject* __WorldContext, struct FVector* Location, const struct FVector& MeshOrigin, const struct FVector& MeshCentre, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UCompositePieceSnapObject* CallFunc_GetSnapObjectFromStructure_ReturnValue, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, enum class ESnapType CallFunc_GetSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Get_Completion_Properties(class UObject* Structure, class UObject* __WorldContext, class UAkAudioEvent** Event_Override, class UAkSwitchValue** Material_Switch, class UAkSwitchValue* LoadedAkSwitch, class UAkAudioEvent* LoadedAkEvent, enum class EStructureFXActivationTime Temp_byte_Variable, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_1, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess_2);
	void GetSurfaceTypesFromMultipleStructures(TArray<class UStructureCompositePiece*>& Structures, class UObject* __WorldContext, TMap<class UAkSwitchValue*, struct FS_StructureSurface>* Surface_Data, const struct FS_StructureSurface& StructureSurface, class UStructureCompositePiece* Structure_Composite_Piece, class UAkSwitchValue* Surface_Switch, TMap<class UAkSwitchValue*, struct FS_StructureSurface> Surface_Info, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStructureCompositePiece* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkAudioEvent* CallFunc_Get_Completion_Properties_Event_Override, class UAkSwitchValue* CallFunc_Get_Completion_Properties_Material_Switch, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location_1, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FS_StructureSurface& K2Node_MakeStruct_S_StructureSurface, const struct FS_StructureSurface& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


