#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C
// (Actor)

class UClass* ABP_PlayerPreview_HAB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerPreview_HAB_C");

	return Clss;
}


// BP_PlayerPreview_HAB_C BP_PlayerPreview_HAB.Default__BP_PlayerPreview_HAB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerPreview_HAB_C* ABP_PlayerPreview_HAB_C::GetDefaultObj()
{
	static class ABP_PlayerPreview_HAB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerPreview_HAB_C*>(ABP_PlayerPreview_HAB_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPreview_HAB_C::CharacterUpdated(const struct FOnlineProfileCharacter& Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "CharacterUpdated");

	Params::ABP_PlayerPreview_HAB_C_CharacterUpdated_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.GetLightComponents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ULightComponent*>     SceneCaptureLights                                               (Parm, OutParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     CameraComponentLights                                            (Parm, OutParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULightComponent*>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UChildActorComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UChildActorComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ULightComponent*>     CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     CallFunc_GetLightComponents_SceneCaptureLights                   (ReferenceParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     CallFunc_GetLightComponents_CameraComponentLights                (ReferenceParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm, ContainsInstancedReference)

void ABP_PlayerPreview_HAB_C::GetLightComponents(TArray<class ULightComponent*>* SceneCaptureLights, TArray<class ULightComponent*>* CameraComponentLights, int32 Temp_int_Array_Index_Variable, TArray<class ULightComponent*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UChildActorComponent*>& K2Node_MakeArray_Array_1, class UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ULightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<class ULightComponent*>& CallFunc_GetLightComponents_SceneCaptureLights, TArray<class ULightComponent*>& CallFunc_GetLightComponents_CameraComponentLights, TArray<class ULightComponent*>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "GetLightComponents");

	Params::ABP_PlayerPreview_HAB_C_GetLightComponents_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_GetLightComponents_SceneCaptureLights = CallFunc_GetLightComponents_SceneCaptureLights;
	Parms.CallFunc_GetLightComponents_CameraComponentLights = CallFunc_GetLightComponents_CameraComponentLights;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

	if (SceneCaptureLights != nullptr)
		*SceneCaptureLights = std::move(Parms.SceneCaptureLights);

	if (CameraComponentLights != nullptr)
		*CameraComponentLights = std::move(Parms.CameraComponentLights);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.UpdateCaptureMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseSceneCapture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseCameraComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ULightComponent*>     CallFunc_GetLightComponents_SceneCaptureLights                   (ReferenceParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     CallFunc_GetLightComponents_CameraComponentLights                (ReferenceParm, ContainsInstancedReference)
// class ULightComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULightComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreview_HAB_C::UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ULightComponent*>& CallFunc_GetLightComponents_SceneCaptureLights, TArray<class ULightComponent*>& CallFunc_GetLightComponents_CameraComponentLights, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "UpdateCaptureMode");

	Params::ABP_PlayerPreview_HAB_C_UpdateCaptureMode_Params Parms{};

	Parms.UseSceneCapture = UseSceneCapture;
	Parms.UseCameraComponent = UseCameraComponent;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetLightComponents_SceneCaptureLights = CallFunc_GetLightComponents_SceneCaptureLights;
	Parms.CallFunc_GetLightComponents_CameraComponentLights = CallFunc_GetLightComponents_CameraComponentLights;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ClearCurrentMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPreview_HAB_C::ClearCurrentMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "ClearCurrentMeshes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ConstructPlayerMeshArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMesh*>       MeshArray                                                        (Parm, OutParm)
// TArray<TSoftClassPtr<class UAnimInstance>>MeshAnimBPs                                                      (Parm, OutParm)
// class USkeletalMesh*               BodyMesh                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMale                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UAnimInstance>>AnimBPs                                                          (Edit, BlueprintVisible)
// class USkeletalMesh*               Body                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       Meshes                                                           (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECharacterBodyType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_1                 (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_2                 (NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterCreationDataRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourData                 CallFunc_GetArmourData_ArmourData                                (None)
// enum class EDataValid              CallFunc_GetArmourData_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class USkeletalMesh>K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_1                                          (ConstParm, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>K2Node_Select_Default_2                                          (UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_3                                          (ConstParm, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_HAB_C::ConstructPlayerMeshArray(TArray<class USkeletalMesh*>* MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>* MeshAnimBPs, class USkeletalMesh** BodyMesh, bool IsMale, const TArray<TSoftClassPtr<class UAnimInstance>>& AnimBPs, class USkeletalMesh* Body, const TArray<class USkeletalMesh*>& Meshes, bool Temp_bool_Variable, enum class ECharacterBodyType Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue, class FName CallFunc_HashToName_ReturnValue_1, class FName CallFunc_HashToName_ReturnValue_2, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_1, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_2, TArray<struct FCharacterCreationDataRowHandle>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FArmourData& CallFunc_GetArmourData_ArmourData, enum class EDataValid CallFunc_GetArmourData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default, TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_1, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default_2, TSoftClassPtr<class UAnimInstance> K2Node_Select_Default_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "ConstructPlayerMeshArray");

	Params::ABP_PlayerPreview_HAB_C_ConstructPlayerMeshArray_Params Parms{};

	Parms.IsMale = IsMale;
	Parms.AnimBPs = AnimBPs;
	Parms.Body = Body;
	Parms.Meshes = Meshes;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue = CallFunc_MakeCharacterCreationData_ReturnValue;
	Parms.CallFunc_HashToName_ReturnValue_1 = CallFunc_HashToName_ReturnValue_1;
	Parms.CallFunc_HashToName_ReturnValue_2 = CallFunc_HashToName_ReturnValue_2;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_1 = CallFunc_MakeCharacterCreationData_ReturnValue_1;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_2 = CallFunc_MakeCharacterCreationData_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetArmourData_ArmourData = CallFunc_GetArmourData_ArmourData;
	Parms.CallFunc_GetArmourData_Paths = CallFunc_GetArmourData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshArray != nullptr)
		*MeshArray = std::move(Parms.MeshArray);

	if (MeshAnimBPs != nullptr)
		*MeshAnimBPs = std::move(Parms.MeshAnimBPs);

	if (BodyMesh != nullptr)
		*BodyMesh = Parms.BodyMesh;

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterDataUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CharacterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_PlayerPreview_HAB_C::CharacterDataUpdated(const struct FCharacterCosmetics& CharacterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "CharacterDataUpdated");

	Params::ABP_PlayerPreview_HAB_C_CharacterDataUpdated_Params Parms{};

	Parms.CharacterData = CharacterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerPreview_HAB_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.Intensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPreview_HAB_C::Intensity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "Intensity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreview_HAB_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "ReceiveTick");

	Params::ABP_PlayerPreview_HAB_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ExecuteUbergraph_BP_PlayerPreview_HAB
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_HAB_C::ExecuteUbergraph_BP_PlayerPreview_HAB(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_C", "ExecuteUbergraph_BP_PlayerPreview_HAB");

	Params::ABP_PlayerPreview_HAB_C_ExecuteUbergraph_BP_PlayerPreview_HAB_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


