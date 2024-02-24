#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Structure.BPFL_Structure_C
// (None)

class UClass* UBPFL_Structure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Structure_C");

	return Clss;
}


// BPFL_Structure_C BPFL_Structure.Default__BPFL_Structure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Structure_C* UBPFL_Structure_C::GetDefaultObj()
{
	static class UBPFL_Structure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Structure_C*>(UBPFL_Structure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Structure.BPFL_Structure_C.DEVONLY Initialize Test Structure Proxies
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWorldPersistenceSubsystem*  CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructureBuilder*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructureBuilder*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDevEnvironment_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Structure_C::DEVONLY_Initialize_Test_Structure_Proxies(class UObject* __WorldContext, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class ANWXStructureBuilder*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class ANWXStructureBuilder* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDevEnvironment_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "DEVONLY Initialize Test Structure Proxies");

	Params::UBPFL_Structure_C_DEVONLY_Initialize_Test_Structure_Proxies_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue = CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsDevEnvironment_ReturnValue = CallFunc_IsDevEnvironment_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Structure.BPFL_Structure_C.MakeStructureDestructionData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureDestructionData   DestructionData                                                  (Parm, OutParm)
// bool                               IsDeconstruct                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyKindOfStructureObject_IsValidStructure             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeconstructTag_DeconstructTag                           (NoDestructor, HasGetValueTypeHash)
// TArray<class UMeshComponent*>      CallFunc_GetStructureMeshes_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsStateActiveForObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTagsForMeshPhysicalMaterials_ReturnValue             (None)
// TScriptInterface<class IStructureMeshInfoInterface>K2Node_DynamicCast_AsStructure_Mesh_Info_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureOriginTransform_ReturnValue                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureAssetReference_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference        (HasGetValueTypeHash)
// struct FStructureDestructionData   K2Node_MakeStruct_StructureDestructionData                       (None)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Structure_C::MakeStructureDestructionData(class UObject* Structure, class UObject* __WorldContext, struct FStructureDestructionData* DestructionData, bool IsDeconstruct, class UObject* LStructure, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, bool CallFunc_IsStateActiveForObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagsForMeshPhysicalMaterials_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetStructureOriginTransform_ReturnValue, const struct FVector& CallFunc_GetMeshBounds_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, const struct FStructureDestructionData& K2Node_MakeStruct_StructureDestructionData, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "MakeStructureDestructionData");

	Params::UBPFL_Structure_C_MakeStructureDestructionData_Params Parms{};

	Parms.Structure = Structure;
	Parms.__WorldContext = __WorldContext;
	Parms.IsDeconstruct = IsDeconstruct;
	Parms.LStructure = LStructure;
	Parms.CallFunc_IsAnyKindOfStructureObject_IsValidStructure = CallFunc_IsAnyKindOfStructureObject_IsValidStructure;
	Parms.CallFunc_DeconstructTag_DeconstructTag = CallFunc_DeconstructTag_DeconstructTag;
	Parms.CallFunc_GetStructureMeshes_ReturnValue = CallFunc_GetStructureMeshes_ReturnValue;
	Parms.CallFunc_IsStateActiveForObject_ReturnValue = CallFunc_IsStateActiveForObject_ReturnValue;
	Parms.CallFunc_GetTagsForMeshPhysicalMaterials_ReturnValue = CallFunc_GetTagsForMeshPhysicalMaterials_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Mesh_Info_Interface = K2Node_DynamicCast_AsStructure_Mesh_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureOriginTransform_ReturnValue = CallFunc_GetStructureOriginTransform_ReturnValue;
	Parms.CallFunc_GetMeshBounds_ReturnValue = CallFunc_GetMeshBounds_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureAssetReference_IsValid = CallFunc_GetStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference = CallFunc_GetStructureAssetReference_OutStructureReference;
	Parms.K2Node_MakeStruct_StructureDestructionData = K2Node_MakeStruct_StructureDestructionData;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DestructionData != nullptr)
		*DestructionData = std::move(Parms.DestructionData);

}


// Function BPFL_Structure.BPFL_Structure_C.Structure_NWXPrint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FunctionName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      StructureName                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureAssetReference_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference        (HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Structure_C::Structure_NWXPrint(class UObject* Structure, const class FString& FunctionName, const class FString& Message, enum class ENWXLogLevel NWXLogLevel, class UObject* __WorldContext, const class FString& StructureName, class UObject* LStructure, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "Structure_NWXPrint");

	Params::UBPFL_Structure_C_Structure_NWXPrint_Params Parms{};

	Parms.Structure = Structure;
	Parms.FunctionName = FunctionName;
	Parms.Message = Message;
	Parms.NWXLogLevel = NWXLogLevel;
	Parms.__WorldContext = __WorldContext;
	Parms.StructureName = StructureName;
	Parms.LStructure = LStructure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureAssetReference_IsValid = CallFunc_GetStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference = CallFunc_GetStructureAssetReference_OutStructureReference;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue = CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Structure.BPFL_Structure_C.IsAnyKindOfStructureObject
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     StructureObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsValidStructure                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structure_C::IsAnyKindOfStructureObject(class UObject* StructureObject, class UObject* __WorldContext, bool* IsValidStructure, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "IsAnyKindOfStructureObject");

	Params::UBPFL_Structure_C_IsAnyKindOfStructureObject_Params Parms{};

	Parms.StructureObject = StructureObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidStructure != nullptr)
		*IsValidStructure = Parms.IsValidStructure;

}


// Function BPFL_Structure.BPFL_Structure_C.GetStructureDebugName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     PieceObject                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUIData_IsValid                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureUIData            CallFunc_GetUIData_OutUIData                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBPFL_Structure_C::GetStructureDebugName(class UObject* PieceObject, class UObject* __WorldContext, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "GetStructureDebugName");

	Params::UBPFL_Structure_C_GetStructureDebugName_Params Parms{};

	Parms.PieceObject = PieceObject;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIData_IsValid = CallFunc_GetUIData_IsValid;
	Parms.CallFunc_GetUIData_OutUIData = CallFunc_GetUIData_OutUIData;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Structure.BPFL_Structure_C.SpawnStructureDestructionVFX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXStructure*               Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureDestructionData   StructureDestructionData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureNiagaraDestructionResponseLDefaultDestructionResponse                                      (Edit, BlueprintVisible)
// struct FTransform                  LSpawnTransform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LIsDeconstruct                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       LPhysicsMaterialsTags                                            (Edit, BlueprintVisible)
// struct FDataTableRowHandle         LRecipeHandle                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           System                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              EffectTemplate                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LStructureBounds                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureOriginatorInterface>K2Node_DynamicCast_AsStructure_Originator_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureOriginatorTypeCallFunc_GetStructureOriginatorType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structure_C::SpawnStructureDestructionVFX(class ANWXStructure* Structure, const struct FStructureDestructionData& StructureDestructionData, class UObject* __WorldContext, const struct FStructureNiagaraDestructionResponse& LDefaultDestructionResponse, const struct FTransform& LSpawnTransform, bool LIsDeconstruct, const struct FGameplayTagContainer& LPhysicsMaterialsTags, const struct FDataTableRowHandle& LRecipeHandle, class UNiagaraComponent* System, class UNiagaraSystem* EffectTemplate, const struct FVector& LStructureBounds, TScriptInterface<class IStructureOriginatorInterface> K2Node_DynamicCast_AsStructure_Originator_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureOriginatorType CallFunc_GetStructureOriginatorType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "SpawnStructureDestructionVFX");

	Params::UBPFL_Structure_C_SpawnStructureDestructionVFX_Params Parms{};

	Parms.Structure = Structure;
	Parms.StructureDestructionData = StructureDestructionData;
	Parms.__WorldContext = __WorldContext;
	Parms.LDefaultDestructionResponse = LDefaultDestructionResponse;
	Parms.LSpawnTransform = LSpawnTransform;
	Parms.LIsDeconstruct = LIsDeconstruct;
	Parms.LPhysicsMaterialsTags = LPhysicsMaterialsTags;
	Parms.LRecipeHandle = LRecipeHandle;
	Parms.System = System;
	Parms.EffectTemplate = EffectTemplate;
	Parms.LStructureBounds = LStructureBounds;
	Parms.K2Node_DynamicCast_AsStructure_Originator_Interface = K2Node_DynamicCast_AsStructure_Originator_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureOriginatorType_ReturnValue = CallFunc_GetStructureOriginatorType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Structure.BPFL_Structure_C.GetMeshMinAndMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MinWorld                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MaxWorld                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Min                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Max                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structure_C::GetMeshMinAndMax(class UStaticMeshComponent* Mesh, class UObject* __WorldContext, struct FVector* MinWorld, struct FVector* MaxWorld, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "GetMeshMinAndMax");

	Params::UBPFL_Structure_C_GetMeshMinAndMax_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalBounds_Min = CallFunc_GetLocalBounds_Min;
	Parms.CallFunc_GetLocalBounds_Max = CallFunc_GetLocalBounds_Max;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue_1 = CallFunc_TransformLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MinWorld != nullptr)
		*MinWorld = std::move(Parms.MinWorld);

	if (MaxWorld != nullptr)
		*MaxWorld = std::move(Parms.MaxWorld);

}


// Function BPFL_Structure.BPFL_Structure_C.GetMeshOrigin
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocalLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Min                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Max                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structure_C::GetMeshOrigin(class UStaticMeshComponent* Target, class UObject* __WorldContext, struct FVector* LocalLocation, struct FVector* WorldLocation, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "GetMeshOrigin");

	Params::UBPFL_Structure_C_GetMeshOrigin_Params Parms{};

	Parms.Target = Target;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalBounds_Min = CallFunc_GetLocalBounds_Min;
	Parms.CallFunc_GetLocalBounds_Max = CallFunc_GetLocalBounds_Max;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalLocation != nullptr)
		*LocalLocation = std::move(Parms.LocalLocation);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

}


// Function BPFL_Structure.BPFL_Structure_C.GetMeshBounds
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Min                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocalBounds_Max                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPFL_Structure_C::GetMeshBounds(class UStaticMeshComponent* StaticMesh, class UObject* __WorldContext, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structure_C", "GetMeshBounds");

	Params::UBPFL_Structure_C_GetMeshBounds_Params Parms{};

	Parms.StaticMesh = StaticMesh;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalBounds_Min = CallFunc_GetLocalBounds_Min;
	Parms.CallFunc_GetLocalBounds_Max = CallFunc_GetLocalBounds_Max;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


