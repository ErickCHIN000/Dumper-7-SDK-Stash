#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C
// (None)

class UClass* UBP_PlayerCosmeticsFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerCosmeticsFunctionLibrary_C");

	return Clss;
}


// BP_PlayerCosmeticsFunctionLibrary_C BP_PlayerCosmeticsFunctionLibrary.Default__BP_PlayerCosmeticsFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerCosmeticsFunctionLibrary_C* UBP_PlayerCosmeticsFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_PlayerCosmeticsFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerCosmeticsFunctionLibrary_C*>(UBP_PlayerCosmeticsFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ClearCosmeticMaterialOverride
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         InPrimitive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerCosmeticsFunctionLibrary_C::ClearCosmeticMaterialOverride(class UPrimitiveComponent* InPrimitive, class UObject* __WorldContext, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCosmeticsFunctionLibrary_C", "ClearCosmeticMaterialOverride");

	Params::UBP_PlayerCosmeticsFunctionLibrary_C_ClearCosmeticMaterialOverride_Params Parms{};

	Parms.InPrimitive = InPrimitive;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.MakeCharacterCreationDataArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharacterCosmetics         CharacterCosmetics                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterCreationDataRowHandle>OutData                                                          (Parm, OutParm)
// TArray<struct FCharacterCreationDataRowHandle>Out                                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerCosmeticsFunctionLibrary_C::MakeCharacterCreationDataArray(const struct FCharacterCosmetics& CharacterCosmetics, class UObject* __WorldContext, TArray<struct FCharacterCreationDataRowHandle>* OutData, const TArray<struct FCharacterCreationDataRowHandle>& Out, int32 Temp_int_Array_Index_Variable, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_HashToName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCosmeticsFunctionLibrary_C", "MakeCharacterCreationDataArray");

	Params::UBP_PlayerCosmeticsFunctionLibrary_C_MakeCharacterCreationDataArray_Params Parms{};

	Parms.CharacterCosmetics = CharacterCosmetics;
	Parms.__WorldContext = __WorldContext;
	Parms.Out = Out;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue = CallFunc_MakeCharacterCreationData_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.GetMasterMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   Parent                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   K2Node_DynamicCast_AsMaterial                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterial*                   CallFunc_GetMasterMaterial_Parent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerCosmeticsFunctionLibrary_C::GetMasterMaterial(class UMaterialInterface* Material, class UObject* __WorldContext, class UMaterial** Parent, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, class UMaterial* CallFunc_GetMasterMaterial_Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCosmeticsFunctionLibrary_C", "GetMasterMaterial");

	Params::UBP_PlayerCosmeticsFunctionLibrary_C_GetMasterMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsMaterial = K2Node_DynamicCast_AsMaterial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMaterial_Instance = K2Node_DynamicCast_AsMaterial_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMasterMaterial_Parent = CallFunc_GetMasterMaterial_Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (Parent != nullptr)
		*Parent = Parms.Parent;

}


// Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ApplyCosmeticsToPrimitive
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         PrimitiveComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCosmetics         CosmeticData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MaterialPathName                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterial>    CharEyeSoftRef                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterial>    CharDLSCapSoftRef                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterial>    CharSkinHandsSoftRef                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterial>    CharSkinSoftRef                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FCharacterCreationDataRowHandle>CosmeticsRowHandles                                              (Edit, BlueprintVisible)
// class UMaterialInterface*          DefaultSlotMaterial                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          ParentMaterial                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    DynamicInstance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_1          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_2          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_3          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_1  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftObjectPtr<class UMaterialInterface>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCharacterCreationDataRowHandle>CallFunc_MakeCharacterCreationDataArray_OutData                  (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_Map_Find_Value                                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_1                 (NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_2  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStaticMaterial>     CallFunc_GetStaticMaterials_ReturnValue                          (ConstParm, ReferenceParm)
// struct FStaticMaterial             CallFunc_Array_Get_Item_3                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSkeletalMaterial>   CallFunc_GetMaterials_ReturnValue                                (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_2                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_3  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkeletalMaterial           CallFunc_Array_Get_Item_4                                        (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterial*                   CallFunc_GetMasterMaterial_Parent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPathName_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_3                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_4                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_4  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_5  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_HashToName_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_5                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_6                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_6  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_7  (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerCosmeticsFunctionLibrary_C::ApplyCosmeticsToPrimitive(class UPrimitiveComponent* PrimitiveComponent, const struct FCharacterCosmetics& CosmeticData, class UObject* __WorldContext, const class FString& MaterialPathName, TSoftObjectPtr<class UMaterial> CharEyeSoftRef, TSoftObjectPtr<class UMaterial> CharDLSCapSoftRef, TSoftObjectPtr<class UMaterial> CharSkinHandsSoftRef, TSoftObjectPtr<class UMaterial> CharSkinSoftRef, const TArray<struct FCharacterCreationDataRowHandle>& CosmeticsRowHandles, class UMaterialInterface* DefaultSlotMaterial, class UMaterialInterface* ParentMaterial, class UMaterialInterface* Material, int32 CurrentIndex, class UMaterialInstanceDynamic* DynamicInstance, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* Temp_wildcard_Variable, int32 Temp_int_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_2, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_Array_Get_Item, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_1, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<TSoftObjectPtr<class UMaterialInterface>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FCharacterCreationDataRowHandle>& CallFunc_MakeCharacterCreationDataArray_OutData, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class UMaterialInterface> CallFunc_Array_Get_Item_1, class FName CallFunc_HashToName_ReturnValue_1, TSoftObjectPtr<class UMaterialInterface> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_2, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_2, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FColor& CallFunc_Array_Get_Item_2, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FStaticMaterial>& CallFunc_GetStaticMaterials_ReturnValue, const struct FStaticMaterial& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* Temp_wildcard_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, class FName CallFunc_HashToName_ReturnValue_2, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_2, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_3, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_3, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Array_Index_Variable_3, const struct FSkeletalMaterial& CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_3, class UMaterial* CallFunc_GetMasterMaterial_Parent, const class FString& CallFunc_GetPathName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class FName CallFunc_HashToName_ReturnValue_3, class FName CallFunc_HashToName_ReturnValue_4, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_3, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_4, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_4, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_4, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_5, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_5, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, class FName CallFunc_HashToName_ReturnValue_5, class FName CallFunc_HashToName_ReturnValue_6, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_5, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_6, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_6, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_6, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_7, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths_7, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_3, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCosmeticsFunctionLibrary_C", "ApplyCosmeticsToPrimitive");

	Params::UBP_PlayerCosmeticsFunctionLibrary_C_ApplyCosmeticsToPrimitive_Params Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.CosmeticData = CosmeticData;
	Parms.__WorldContext = __WorldContext;
	Parms.MaterialPathName = MaterialPathName;
	Parms.CharEyeSoftRef = CharEyeSoftRef;
	Parms.CharDLSCapSoftRef = CharDLSCapSoftRef;
	Parms.CharSkinHandsSoftRef = CharSkinHandsSoftRef;
	Parms.CharSkinSoftRef = CharSkinSoftRef;
	Parms.CosmeticsRowHandles = CosmeticsRowHandles;
	Parms.DefaultSlotMaterial = DefaultSlotMaterial;
	Parms.ParentMaterial = ParentMaterial;
	Parms.Material = Material;
	Parms.CurrentIndex = CurrentIndex;
	Parms.DynamicInstance = DynamicInstance;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToString_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue = CallFunc_MakeCharacterCreationData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_1 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_1;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_1 = CallFunc_GetCharacterCreationDataStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeCharacterCreationDataArray_OutData = CallFunc_MakeCharacterCreationDataArray_OutData;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_HashToName_ReturnValue_1 = CallFunc_HashToName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_1 = CallFunc_MakeCharacterCreationData_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_2 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_2;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_2 = CallFunc_GetCharacterCreationDataStruct_Paths_2;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsMaterial_Interface_1 = K2Node_DynamicCast_AsMaterial_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetStaticMaterials_ReturnValue = CallFunc_GetStaticMaterials_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_HashToName_ReturnValue_2 = CallFunc_HashToName_ReturnValue_2;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_2 = CallFunc_MakeCharacterCreationData_ReturnValue_2;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_3 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_3;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_3 = CallFunc_GetCharacterCreationDataStruct_Paths_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_2 = CallFunc_LoadAsset_Blocking_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetMasterMaterial_Parent = CallFunc_GetMasterMaterial_Parent;
	Parms.CallFunc_GetPathName_ReturnValue = CallFunc_GetPathName_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_HashToName_ReturnValue_3 = CallFunc_HashToName_ReturnValue_3;
	Parms.CallFunc_HashToName_ReturnValue_4 = CallFunc_HashToName_ReturnValue_4;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_3 = CallFunc_MakeCharacterCreationData_ReturnValue_3;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_4 = CallFunc_MakeCharacterCreationData_ReturnValue_4;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_4 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_4;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_4 = CallFunc_GetCharacterCreationDataStruct_Paths_4;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_5 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_5;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_5 = CallFunc_GetCharacterCreationDataStruct_Paths_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_HashToName_ReturnValue_5 = CallFunc_HashToName_ReturnValue_5;
	Parms.CallFunc_HashToName_ReturnValue_6 = CallFunc_HashToName_ReturnValue_6;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_5 = CallFunc_MakeCharacterCreationData_ReturnValue_5;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_6 = CallFunc_MakeCharacterCreationData_ReturnValue_6;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_6 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_6;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_6 = CallFunc_GetCharacterCreationDataStruct_Paths_6;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_7 = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData_7;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths_7 = CallFunc_GetCharacterCreationDataStruct_Paths_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_3 = CallFunc_LoadAsset_Blocking_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


