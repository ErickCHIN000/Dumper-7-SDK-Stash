#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Structures_SFX.BPFL_Structures_SFX_C
// (None)

class UClass* UBPFL_Structures_SFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Structures_SFX_C");

	return Clss;
}


// BPFL_Structures_SFX_C BPFL_Structures_SFX.Default__BPFL_Structures_SFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Structures_SFX_C* UBPFL_Structures_SFX_C::GetDefaultObj()
{
	static class UBPFL_Structures_SFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Structures_SFX_C*>(UBPFL_Structures_SFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Structures_SFX.BPFL_Structures_SFX_C.Get Destruction Properties
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStructureCompositePiece*    Structure_Composite_Piece                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Event_Override                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Material_Switch                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              LoadedAkSwitch                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               LoadedAkEvent                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureData_OutStructureData                       (ContainsInstancedReference)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_DynamicCast_AsAk_Switch_Value                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureFXAudioDefinitionArrayCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_SFX_C::Get_Destruction_Properties(class UStructureCompositePiece* Structure_Composite_Piece, class UObject* __WorldContext, class UAkAudioEvent** Event_Override, class UAkSwitchValue** Material_Switch, class UAkSwitchValue* LoadedAkSwitch, class UAkAudioEvent* LoadedAkEvent, enum class EStructureFXActivationTime Temp_byte_Variable, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_1, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_SFX_C", "Get Destruction Properties");

	Params::UBPFL_Structures_SFX_C_Get_Destruction_Properties_Params Parms{};

	Parms.Structure_Composite_Piece = Structure_Composite_Piece;
	Parms.__WorldContext = __WorldContext;
	Parms.LoadedAkSwitch = LoadedAkSwitch;
	Parms.LoadedAkEvent = LoadedAkEvent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureData_IsValid = CallFunc_GetStructureData_IsValid;
	Parms.CallFunc_GetStructureData_OutStructureData = CallFunc_GetStructureData_OutStructureData;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Switch_Value = K2Node_DynamicCast_AsAk_Switch_Value;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Event_Override != nullptr)
		*Event_Override = Parms.Event_Override;

	if (Material_Switch != nullptr)
		*Material_Switch = Parms.Material_Switch;

}


// Function BPFL_Structures_SFX.BPFL_Structures_SFX_C.Get Structure Composite Piece Location
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MeshOrigin                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MeshCentre                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureMeshInfoInterface>K2Node_DynamicCast_AsStructure_Mesh_Info_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapObjectFromStructure_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_LocalLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshOrigin_WorldLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureMeshInfoInterface>K2Node_DynamicCast_AsStructure_Mesh_Info_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_SFX_C::Get_Structure_Composite_Piece_Location(class UObject* Structure, class UObject* __WorldContext, struct FVector* Location, const struct FVector& MeshOrigin, const struct FVector& MeshCentre, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UCompositePieceSnapObject* CallFunc_GetSnapObjectFromStructure_ReturnValue, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, enum class ESnapType CallFunc_GetSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_SFX_C", "Get Structure Composite Piece Location");

	Params::UBPFL_Structures_SFX_C_Get_Structure_Composite_Piece_Location_Params Parms{};

	Parms.Structure = Structure;
	Parms.__WorldContext = __WorldContext;
	Parms.MeshOrigin = MeshOrigin;
	Parms.MeshCentre = MeshCentre;
	Parms.K2Node_DynamicCast_AsStructure_Mesh_Info_Interface = K2Node_DynamicCast_AsStructure_Mesh_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapObjectFromStructure_ReturnValue = CallFunc_GetSnapObjectFromStructure_ReturnValue;
	Parms.CallFunc_GetMeshOrigin_LocalLocation = CallFunc_GetMeshOrigin_LocalLocation;
	Parms.CallFunc_GetMeshOrigin_WorldLocation = CallFunc_GetMeshOrigin_WorldLocation;
	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_DynamicCast_AsStructure_Mesh_Info_Interface_1 = K2Node_DynamicCast_AsStructure_Mesh_Info_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMeshMinAndMax_MinLocal = CallFunc_GetMeshMinAndMax_MinLocal;
	Parms.CallFunc_GetMeshMinAndMax_MaxLocal = CallFunc_GetMeshMinAndMax_MaxLocal;
	Parms.CallFunc_GetMeshMinAndMax_MinWorld = CallFunc_GetMeshMinAndMax_MinWorld;
	Parms.CallFunc_GetMeshMinAndMax_MaxWorld = CallFunc_GetMeshMinAndMax_MaxWorld;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BPFL_Structures_SFX.BPFL_Structures_SFX_C.Get Completion Properties
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Event_Override                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Material_Switch                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              LoadedAkSwitch                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               LoadedAkEvent                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureData_OutStructureData                       (ContainsInstancedReference)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_DynamicCast_AsAk_Switch_Value                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureFXAudioDefinitionArrayCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_SFX_C::Get_Completion_Properties(class UObject* Structure, class UObject* __WorldContext, class UAkAudioEvent** Event_Override, class UAkSwitchValue** Material_Switch, class UAkSwitchValue* LoadedAkSwitch, class UAkAudioEvent* LoadedAkEvent, enum class EStructureFXActivationTime Temp_byte_Variable, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkSwitchValue* K2Node_DynamicCast_AsAk_Switch_Value, bool K2Node_DynamicCast_bSuccess_1, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_SFX_C", "Get Completion Properties");

	Params::UBPFL_Structures_SFX_C_Get_Completion_Properties_Params Parms{};

	Parms.Structure = Structure;
	Parms.__WorldContext = __WorldContext;
	Parms.LoadedAkSwitch = LoadedAkSwitch;
	Parms.LoadedAkEvent = LoadedAkEvent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureData_IsValid = CallFunc_GetStructureData_IsValid;
	Parms.CallFunc_GetStructureData_OutStructureData = CallFunc_GetStructureData_OutStructureData;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Switch_Value = K2Node_DynamicCast_AsAk_Switch_Value;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Event_Override != nullptr)
		*Event_Override = Parms.Event_Override;

	if (Material_Switch != nullptr)
		*Material_Switch = Parms.Material_Switch;

}


// Function BPFL_Structures_SFX.BPFL_Structures_SFX_C.GetSurfaceTypesFromMultipleStructures
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStructureCompositePiece*>Structures                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkSwitchValue*, struct FS_StructureSurface>Surface_Data                                                     (Parm, OutParm)
// struct FS_StructureSurface         StructureSurface                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UStructureCompositePiece*    Structure_Composite_Piece                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Surface_Switch                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkSwitchValue*, struct FS_StructureSurface>Surface_Info                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Get_Completion_Properties_Event_Override                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_Get_Completion_Properties_Material_Switch               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Structure_Composite_Piece_Location_Location         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Structure_Composite_Piece_Location_Location_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_StructureSurface         K2Node_MakeStruct_S_StructureSurface                             (HasGetValueTypeHash)
// struct FS_StructureSurface         CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_SFX_C::GetSurfaceTypesFromMultipleStructures(TArray<class UStructureCompositePiece*>& Structures, class UObject* __WorldContext, TMap<class UAkSwitchValue*, struct FS_StructureSurface>* Surface_Data, const struct FS_StructureSurface& StructureSurface, class UStructureCompositePiece* Structure_Composite_Piece, class UAkSwitchValue* Surface_Switch, TMap<class UAkSwitchValue*, struct FS_StructureSurface> Surface_Info, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStructureCompositePiece* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkAudioEvent* CallFunc_Get_Completion_Properties_Event_Override, class UAkSwitchValue* CallFunc_Get_Completion_Properties_Material_Switch, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Get_Structure_Composite_Piece_Location_Location_1, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FS_StructureSurface& K2Node_MakeStruct_S_StructureSurface, const struct FS_StructureSurface& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_SFX_C", "GetSurfaceTypesFromMultipleStructures");

	Params::UBPFL_Structures_SFX_C_GetSurfaceTypesFromMultipleStructures_Params Parms{};

	Parms.Structures = Structures;
	Parms.__WorldContext = __WorldContext;
	Parms.StructureSurface = StructureSurface;
	Parms.Structure_Composite_Piece = Structure_Composite_Piece;
	Parms.Surface_Switch = Surface_Switch;
	Parms.Surface_Info = Surface_Info;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Completion_Properties_Event_Override = CallFunc_Get_Completion_Properties_Event_Override;
	Parms.CallFunc_Get_Completion_Properties_Material_Switch = CallFunc_Get_Completion_Properties_Material_Switch;
	Parms.CallFunc_Get_Structure_Composite_Piece_Location_Location = CallFunc_Get_Structure_Composite_Piece_Location_Location;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Get_Structure_Composite_Piece_Location_Location_1 = CallFunc_Get_Structure_Composite_Piece_Location_Location_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_S_StructureSurface = K2Node_MakeStruct_S_StructureSurface;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Surface_Data != nullptr)
		*Surface_Data = Parms.Surface_Data;

}

}


