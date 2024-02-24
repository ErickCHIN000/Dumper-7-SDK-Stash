#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C
// (None)

class UClass* UBP_CollectedVisualMeshData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CollectedVisualMeshData_C");

	return Clss;
}


// BP_CollectedVisualMeshData_C BP_CollectedVisualMeshData.Default__BP_CollectedVisualMeshData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CollectedVisualMeshData_C* UBP_CollectedVisualMeshData_C::GetDefaultObj()
{
	static class UBP_CollectedVisualMeshData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CollectedVisualMeshData_C*>(UBP_CollectedVisualMeshData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasRegionHiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bHasRegionHiding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::HasRegionHiding(bool* bHasRegionHiding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "HasRegionHiding");

	Params::UBP_CollectedVisualMeshData_C_HasRegionHiding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasRegionHiding != nullptr)
		*bHasRegionHiding = Parms.bHasRegionHiding;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetRandomSeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutRandomSeed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetRandomSeed(int32* OutRandomSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetRandomSeed");

	Params::UBP_CollectedVisualMeshData_C_GetRandomSeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutRandomSeed != nullptr)
		*OutRandomSeed = Parms.OutRandomSeed;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetGemOverrides
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<enum class EGemRegions, double>OutGemOverrides                                                  (Parm, OutParm)

void UBP_CollectedVisualMeshData_C::GetGemOverrides(TMap<enum class EGemRegions, double>* OutGemOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetGemOverrides");

	Params::UBP_CollectedVisualMeshData_C_GetGemOverrides_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutGemOverrides != nullptr)
		*OutGemOverrides = Parms.OutGemOverrides;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.TryGetHatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasHatType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHatType                OutHatType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::TryGetHatType(bool* bHasHatType, enum class EHatType* OutHatType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "TryGetHatType");

	Params::UBP_CollectedVisualMeshData_C_TryGetHatType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasHatType != nullptr)
		*bHasHatType = Parms.bHasHatType;

	if (OutHatType != nullptr)
		*OutHatType = Parms.OutHatType;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeRegionHiding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_RegionHiding      CallFunc_TryGetItemDataRegionHiding_OutData                      (None)
// enum class EGetResult              CallFunc_TryGetItemDataRegionHiding_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::InitializeRegionHiding(const struct FItemData& ItemData, const struct FItemData_RegionHiding& CallFunc_TryGetItemDataRegionHiding_OutData, enum class EGetResult CallFunc_TryGetItemDataRegionHiding_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "InitializeRegionHiding");

	Params::UBP_CollectedVisualMeshData_C_InitializeRegionHiding_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_TryGetItemDataRegionHiding_OutData = CallFunc_TryGetItemDataRegionHiding_OutData;
	Parms.CallFunc_TryGetItemDataRegionHiding_Branches = CallFunc_TryGetItemDataRegionHiding_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetMaterialOverrides
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<enum class ECostumeRegions, struct FResourceCustomizationData_Loaded>MaterialOverridesLoaded                                          (Parm, OutParm)

void UBP_CollectedVisualMeshData_C::GetMaterialOverrides(TMap<enum class ECostumeRegions, struct FResourceCustomizationData_Loaded>* MaterialOverridesLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetMaterialOverrides");

	Params::UBP_CollectedVisualMeshData_C_GetMaterialOverrides_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaterialOverridesLoaded != nullptr)
		*MaterialOverridesLoaded = Parms.MaterialOverridesLoaded;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetMetalOverrides
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TMap<enum class EMetalRegions, double>MetalOverrides                                                   (Parm, OutParm)

void UBP_CollectedVisualMeshData_C::GetMetalOverrides(TMap<enum class EMetalRegions, double>* MetalOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetMetalOverrides");

	Params::UBP_CollectedVisualMeshData_C_GetMetalOverrides_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MetalOverrides != nullptr)
		*MetalOverrides = Parms.MetalOverrides;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeEquippableData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_Equippable        CallFunc_TryGetItemDataEquippable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataEquippable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipSlotType         CallFunc_GetEquipmentSlotTypeForTag_SlotType                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::InitializeEquippableData(const struct FItemData& ItemData, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, enum class E_EquipSlotType CallFunc_GetEquipmentSlotTypeForTag_SlotType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "InitializeEquippableData");

	Params::UBP_CollectedVisualMeshData_C_InitializeEquippableData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_TryGetItemDataEquippable_OutData = CallFunc_TryGetItemDataEquippable_OutData;
	Parms.CallFunc_TryGetItemDataEquippable_Branches = CallFunc_TryGetItemDataEquippable_Branches;
	Parms.CallFunc_GetEquipmentSlotTypeForTag_SlotType = CallFunc_GetEquipmentSlotTypeForTag_SlotType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetItemDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ItemName                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDefaultItemName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetItemDisplayName(class FString* ItemName, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const class FString& CallFunc_GetDefaultItemName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetItemDisplayName");

	Params::UBP_CollectedVisualMeshData_C_GetItemDisplayName_Params Parms{};

	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetDefaultItemName_ReturnValue = CallFunc_GetDefaultItemName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemName != nullptr)
		*ItemName = std::move(Parms.ItemName);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AddVisualMesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_VisualMesh        VisualMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCharacterCustomization_UnprocessedMeshDataCurrentUnprocessedData                                           (Edit, BlueprintVisible)

void UBP_CollectedVisualMeshData_C::AddVisualMesh(const struct FItemData_VisualMesh& VisualMesh, const struct FCharacterCustomization_UnprocessedMeshData& CurrentUnprocessedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "AddVisualMesh");

	Params::UBP_CollectedVisualMeshData_C_AddVisualMesh_Params Parms{};

	Parms.VisualMesh = VisualMesh;
	Parms.CurrentUnprocessedData = CurrentUnprocessedData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasFirstPersonAppearanceMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::HasFirstPersonAppearanceMesh(bool* Result, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "HasFirstPersonAppearanceMesh");

	Params::UBP_CollectedVisualMeshData_C_HasFirstPersonAppearanceMesh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.HasThirdPersonAppearanceMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::HasThirdPersonAppearanceMesh(bool* Result, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "HasThirdPersonAppearanceMesh");

	Params::UBP_CollectedVisualMeshData_C_HasThirdPersonAppearanceMesh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetLoadedMeshData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCharacterCustomization_LoadedMeshDataLoadedMeshData                                                   (Parm, OutParm, NoDestructor)

void UBP_CollectedVisualMeshData_C::GetLoadedMeshData(struct FCharacterCustomization_LoadedMeshData* LoadedMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetLoadedMeshData");

	Params::UBP_CollectedVisualMeshData_C_GetLoadedMeshData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LoadedMeshData != nullptr)
		*LoadedMeshData = std::move(Parms.LoadedMeshData);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignRegionMaterialParameters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ECostumeRegions> CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceCustomizationData  CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceCustomizationData_LoadedK2Node_MakeStruct_ResourceCustomizationData_Loaded               (NoDestructor)

void UBP_CollectedVisualMeshData_C::AssignRegionMaterialParameters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class ECostumeRegions>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ECostumeRegions CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FResourceCustomizationData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FResourceCustomizationData_Loaded& K2Node_MakeStruct_ResourceCustomizationData_Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "AssignRegionMaterialParameters");

	Params::UBP_CollectedVisualMeshData_C_AssignRegionMaterialParameters_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_ResourceCustomizationData_Loaded = K2Node_MakeStruct_ResourceCustomizationData_Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignMeshAndAnimData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCustomization_LoadedMeshDataLoadedData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FCharacterCustomization_UnloadedMeshDataUnloadedData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::AssignMeshAndAnimData(struct FCharacterCustomization_LoadedMeshData& LoadedData, const struct FCharacterCustomization_UnloadedMeshData& UnloadedData, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "AssignMeshAndAnimData");

	Params::UBP_CollectedVisualMeshData_C_AssignMeshAndAnimData_Params Parms{};

	Parms.LoadedData = LoadedData;
	Parms.UnloadedData = UnloadedData;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetUnloadedMeshAnimationBlueprint
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSoftClassPtr<class UAnimInstance> MeshAnimationBlueprint                                           (Parm, OutParm, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetUnloadedMeshAnimationBlueprint(TSoftClassPtr<class UAnimInstance>* MeshAnimationBlueprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetUnloadedMeshAnimationBlueprint");

	Params::UBP_CollectedVisualMeshData_C_GetUnloadedMeshAnimationBlueprint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MeshAnimationBlueprint != nullptr)
		*MeshAnimationBlueprint = Parms.MeshAnimationBlueprint;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetUnloadedAppearanceMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class USkeletalMesh>AppearanceMesh                                                   (Parm, OutParm, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetUnloadedAppearanceMesh(TSoftObjectPtr<class USkeletalMesh>* AppearanceMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetUnloadedAppearanceMesh");

	Params::UBP_CollectedVisualMeshData_C_GetUnloadedAppearanceMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AppearanceMesh != nullptr)
		*AppearanceMesh = Parms.AppearanceMesh;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ClassesToLoad
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TSoftClassPtr<class UObject>>Classes                                                          (Parm, OutParm)
// TArray<TSoftClassPtr<class UObject>>K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_CollectedVisualMeshData_C::ClassesToLoad(TArray<TSoftClassPtr<class UObject>>* Classes, TArray<TSoftClassPtr<class UObject>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "ClassesToLoad");

	Params::UBP_CollectedVisualMeshData_C_ClassesToLoad_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Classes != nullptr)
		*Classes = std::move(Parms.Classes);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssetsToLoad
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>>Assets                                                           (Parm, OutParm)
// TArray<TSoftObjectPtr<class UObject>>AllAssets                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FResourceCustomizationData>CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FResourceCustomizationData  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UObject>>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::AssetsToLoad(TArray<TSoftObjectPtr<class UObject>>* Assets, const TArray<TSoftObjectPtr<class UObject>>& AllAssets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FResourceCustomizationData>& CallFunc_Map_Values_Values, const struct FResourceCustomizationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<TSoftObjectPtr<class UObject>>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "AssetsToLoad");

	Params::UBP_CollectedVisualMeshData_C_AssetsToLoad_Params Parms{};

	Parms.AllAssets = AllAssets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Assets != nullptr)
		*Assets = std::move(Parms.Assets);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.AssignLoadedData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCustomization_LoadedMeshDataCurrentLoadedEntry                                               (Edit, BlueprintVisible, NoDestructor)
// struct FCharacterCustomization_UnloadedMeshDataCurrentUnloadedEntry                                             (Edit, BlueprintVisible)

void UBP_CollectedVisualMeshData_C::AssignLoadedData(int32 CurrentIndex, const struct FCharacterCustomization_LoadedMeshData& CurrentLoadedEntry, const struct FCharacterCustomization_UnloadedMeshData& CurrentUnloadedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "AssignLoadedData");

	Params::UBP_CollectedVisualMeshData_C_AssignLoadedData_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentLoadedEntry = CurrentLoadedEntry;
	Parms.CurrentUnloadedEntry = CurrentUnloadedEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetOwnerName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerOrNPCName_Name                                 (ZeroConstructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetOwnerName(class FString* Name, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerOrNPCName_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetOwnerName");

	Params::UBP_CollectedVisualMeshData_C_GetOwnerName_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerOrNPCName_Name = CallFunc_GetPlayerOrNPCName_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetDebugInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      DebugInfo                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInterface*          LoadedMaterial                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              InstancedSlotStrings                                             (Edit, BlueprintVisible)
// TArray<class FString>              FPMaterialNames                                                  (Edit, BlueprintVisible)
// class FString                      FPMeshName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TPMeshName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        BaseData                                                         (Edit, BlueprintVisible)
// class FText                        ItemName                                                         (Edit, BlueprintVisible)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh                (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetAppearanceMesh_AppearanceMesh                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetJoinedStringsOrNone_Joined                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FormatSoftRefName_Name                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_IndentString_OutString                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetItemDisplayName_ItemName                             (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FString                      CallFunc_GetJoinedStringsOrNone_Joined_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_IndentString_OutString_1                                (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetDebugInfo(class FString* DebugInfo, class UMaterialInterface* LoadedMaterial, const TArray<class FString>& InstancedSlotStrings, const TArray<class FString>& FPMaterialNames, const class FString& FPMeshName, const class FString& TPMeshName, class FText BaseData, class FText ItemName, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class USkeletalMesh* CallFunc_GetAppearanceMesh_AppearanceMesh, const class FString& CallFunc_GetJoinedStringsOrNone_Joined, const class FString& CallFunc_FormatSoftRefName_Name, const class FString& CallFunc_IndentString_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetItemDisplayName_ItemName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const class FString& CallFunc_GetJoinedStringsOrNone_Joined_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_IndentString_OutString_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_4, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetDebugInfo");

	Params::UBP_CollectedVisualMeshData_C_GetDebugInfo_Params Parms{};

	Parms.LoadedMaterial = LoadedMaterial;
	Parms.InstancedSlotStrings = InstancedSlotStrings;
	Parms.FPMaterialNames = FPMaterialNames;
	Parms.FPMeshName = FPMeshName;
	Parms.TPMeshName = TPMeshName;
	Parms.BaseData = BaseData;
	Parms.ItemName = ItemName;
	Parms.CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh = CallFunc_GetUnloadedAppearanceMesh_AppearanceMesh;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAppearanceMesh_AppearanceMesh = CallFunc_GetAppearanceMesh_AppearanceMesh;
	Parms.CallFunc_GetJoinedStringsOrNone_Joined = CallFunc_GetJoinedStringsOrNone_Joined;
	Parms.CallFunc_FormatSoftRefName_Name = CallFunc_FormatSoftRefName_Name;
	Parms.CallFunc_IndentString_OutString = CallFunc_IndentString_OutString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetItemDisplayName_ItemName = CallFunc_GetItemDisplayName_ItemName;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetJoinedStringsOrNone_Joined_1 = CallFunc_GetJoinedStringsOrNone_Joined_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_IndentString_OutString_1 = CallFunc_IndentString_OutString_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugInfo != nullptr)
		*DebugInfo = std::move(Parms.DebugInfo);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ApplyInstancedData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEquippedInstanceData       InstancedData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMetalRegions           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMetalRegions           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGemRegions             Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialRegionInstanceData CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECostumeRegions         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_GemSwatchCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_MetalSwatchCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMetalRegions           K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast_1                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::ApplyInstancedData(const struct FEquippedInstanceData& InstancedData, int32 CurrentIndex, enum class EMetalRegions Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EMetalRegions Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EGemRegions Temp_byte_Variable_2, const struct FMaterialRegionInstanceData& CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, enum class ECostumeRegions Temp_byte_Variable_3, enum class ECostumeRegions Temp_byte_Variable_4, enum class ECostumeRegions Temp_byte_Variable_5, enum class ECostumeRegions Temp_byte_Variable_6, enum class ECostumeRegions Temp_byte_Variable_7, enum class ECostumeRegions Temp_byte_Variable_8, int32 Temp_int_Variable_1, enum class ECostumeRegions K2Node_Select_Default, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCharacterAppearance_GemSwatch& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FCharacterAppearance_MetalSwatch& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class EMetalRegions K2Node_Select_Default_1, double CallFunc_Map_Add_Value_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "ApplyInstancedData");

	Params::UBP_CollectedVisualMeshData_C_ApplyInstancedData_Params Parms{};

	Parms.InstancedData = InstancedData;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Map_Add_Value_ImplicitCast = CallFunc_Map_Add_Value_ImplicitCast;
	Parms.CallFunc_Map_Add_Value_ImplicitCast_1 = CallFunc_Map_Add_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetRegionHiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FItemData_RegionHiding      RegionHiding                                                     (Parm, OutParm)

void UBP_CollectedVisualMeshData_C::GetRegionHiding(struct FItemData_RegionHiding* RegionHiding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetRegionHiding");

	Params::UBP_CollectedVisualMeshData_C_GetRegionHiding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RegionHiding != nullptr)
		*RegionHiding = std::move(Parms.RegionHiding);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeVisualMeshData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData_VisualMesh        CallFunc_TryGetItemDataVisualMesh_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataVisualMesh_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCustomization_UnprocessedMeshDataK2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData     (None)

void UBP_CollectedVisualMeshData_C::InitializeVisualMeshData(const struct FItemData& ItemData, const struct FItemData_VisualMesh& CallFunc_TryGetItemDataVisualMesh_OutData, enum class EGetResult CallFunc_TryGetItemDataVisualMesh_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCustomization_UnprocessedMeshData& K2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "InitializeVisualMeshData");

	Params::UBP_CollectedVisualMeshData_C_InitializeVisualMeshData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_TryGetItemDataVisualMesh_OutData = CallFunc_TryGetItemDataVisualMesh_OutData;
	Parms.CallFunc_TryGetItemDataVisualMesh_Branches = CallFunc_TryGetItemDataVisualMesh_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData = K2Node_MakeStruct_CharacterCustomization_UnprocessedMeshData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.SetInstancedData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEquippedInstanceData       InstancedData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CollectedVisualMeshData_C::SetInstancedData(const struct FEquippedInstanceData& InstancedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "SetInstancedData");

	Params::UBP_CollectedVisualMeshData_C_SetInstancedData_Params Parms{};

	Parms.InstancedData = InstancedData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.SelectAppearanceMeshes
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>>FirstPersonMeshMap                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>>ThirdPersonMeshMap                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               HasFirstPersonMaterialOverrides                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>FirstPersonMesh                                                  (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>ThirdPersonMesh                                                  (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>ThirdPerson                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>FirstPerson                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// enum class EBodyType               OwnerBodyType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemDisplayName_ItemName                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwnerName_Name                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EBodyType               CallFunc_GetBodyType_BodyType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::SelectAppearanceMeshes(TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> FirstPersonMeshMap, TMap<enum class EBodyType, TSoftObjectPtr<class USkeletalMesh>> ThirdPersonMeshMap, bool HasFirstPersonMaterialOverrides, TSoftObjectPtr<class USkeletalMesh>* FirstPersonMesh, TSoftObjectPtr<class USkeletalMesh>* ThirdPersonMesh, TSoftObjectPtr<class USkeletalMesh> ThirdPerson, TSoftObjectPtr<class USkeletalMesh> FirstPerson, enum class EBodyType OwnerBodyType, const class FString& CallFunc_GetItemDisplayName_ItemName, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetOwnerName_Name, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, enum class EBodyType CallFunc_GetBodyType_BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "SelectAppearanceMeshes");

	Params::UBP_CollectedVisualMeshData_C_SelectAppearanceMeshes_Params Parms{};

	Parms.FirstPersonMeshMap = FirstPersonMeshMap;
	Parms.ThirdPersonMeshMap = ThirdPersonMeshMap;
	Parms.HasFirstPersonMaterialOverrides = HasFirstPersonMaterialOverrides;
	Parms.ThirdPerson = ThirdPerson;
	Parms.FirstPerson = FirstPerson;
	Parms.OwnerBodyType = OwnerBodyType;
	Parms.CallFunc_GetItemDisplayName_ItemName = CallFunc_GetItemDisplayName_ItemName;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetOwnerName_Name = CallFunc_GetOwnerName_Name;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetBodyType_BodyType = CallFunc_GetBodyType_BodyType;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstPersonMesh != nullptr)
		*FirstPersonMesh = Parms.FirstPersonMesh;

	if (ThirdPersonMesh != nullptr)
		*ThirdPersonMesh = Parms.ThirdPersonMesh;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ProcessMeshData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class USkeletalMesh>SelectedMesh                                                     (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCustomization_UnprocessedMeshDataCurrentUnprocessedData                                           (Edit, BlueprintVisible)
// enum class EBodyType               CallFunc_GetBodyType_BodyType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCustomization_UnloadedMeshDataK2Node_MakeStruct_CharacterCustomization_UnloadedMeshData        (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Map_Find_Value                                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::ProcessMeshData(TSoftObjectPtr<class USkeletalMesh> SelectedMesh, int32 CurrentIndex, const struct FCharacterCustomization_UnprocessedMeshData& CurrentUnprocessedData, enum class EBodyType CallFunc_GetBodyType_BodyType, const struct FCharacterCustomization_UnloadedMeshData& K2Node_MakeStruct_CharacterCustomization_UnloadedMeshData, TSoftObjectPtr<class USkeletalMesh> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "ProcessMeshData");

	Params::UBP_CollectedVisualMeshData_C_ProcessMeshData_Params Parms{};

	Parms.SelectedMesh = SelectedMesh;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentUnprocessedData = CurrentUnprocessedData;
	Parms.CallFunc_GetBodyType_BodyType = CallFunc_GetBodyType_BodyType;
	Parms.K2Node_MakeStruct_CharacterCustomization_UnloadedMeshData = K2Node_MakeStruct_CharacterCustomization_UnloadedMeshData;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.CheckForMissingData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValidData                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemDisplayName_ItemName                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemDisplayName_ItemName_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::CheckForMissingData(bool* bValidData, const class FString& CallFunc_GetItemDisplayName_ItemName, const class FString& CallFunc_GetItemDisplayName_ItemName_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "CheckForMissingData");

	Params::UBP_CollectedVisualMeshData_C_CheckForMissingData_Params Parms{};

	Parms.CallFunc_GetItemDisplayName_ItemName = CallFunc_GetItemDisplayName_ItemName;
	Parms.CallFunc_GetItemDisplayName_ItemName_1 = CallFunc_GetItemDisplayName_ItemName_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (bValidData != nullptr)
		*bValidData = Parms.bValidData;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.LoadAppearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UObject>>CallFunc_ClassesToLoad_Classes                                   (ReferenceParm)
// TArray<TSoftObjectPtr<class UObject>>CallFunc_AssetsToLoad_Assets                                     (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForMissingData_bValidData                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::LoadAppearance(TArray<TSoftClassPtr<class UObject>>& CallFunc_ClassesToLoad_Classes, TArray<TSoftObjectPtr<class UObject>>& CallFunc_AssetsToLoad_Assets, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckForMissingData_bValidData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "LoadAppearance");

	Params::UBP_CollectedVisualMeshData_C_LoadAppearance_Params Parms{};

	Parms.CallFunc_ClassesToLoad_Classes = CallFunc_ClassesToLoad_Classes;
	Parms.CallFunc_AssetsToLoad_Assets = CallFunc_AssetsToLoad_Assets;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CheckForMissingData_bValidData = CallFunc_CheckForMissingData_bValidData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.IsLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsLoaded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::IsLoaded(bool* bIsLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "IsLoaded");

	Params::UBP_CollectedVisualMeshData_C_IsLoaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsLoaded != nullptr)
		*bIsLoaded = Parms.bIsLoaded;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetAppearanceMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMesh*               AppearanceMesh                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetAppearanceMesh(class USkeletalMesh** AppearanceMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetAppearanceMesh");

	Params::UBP_CollectedVisualMeshData_C_GetAppearanceMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AppearanceMesh != nullptr)
		*AppearanceMesh = Parms.AppearanceMesh;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetEquipmentSlotTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetEquipmentSlotTag(struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetEquipmentSlotTag");

	Params::UBP_CollectedVisualMeshData_C_GetEquipmentSlotTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.GetEquipSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class E_EquipSlotType         EquipSlot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::GetEquipSlot(enum class E_EquipSlotType* EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "GetEquipSlot");

	Params::UBP_CollectedVisualMeshData_C_GetEquipSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EquipSlot != nullptr)
		*EquipSlot = Parms.EquipSlot;

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.InitializeFromTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_CharacterCustomization_Component_C*Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AsyncAssetLoader_C*      AsyncLoader                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_HatType           CallFunc_TryGetItemDataHatType_OutData                           (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemDataHatType_Branches                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::InitializeFromTable(const struct FItemDataReference& ItemReference, class UBP_CharacterCustomization_Component_C* Owner, class UBP_AsyncAssetLoader_C* AsyncLoader, const struct FItemData& ItemData, bool CallFunc_IsValid_ReturnValue, const struct FItemData_HatType& CallFunc_TryGetItemDataHatType_OutData, enum class EGetResult CallFunc_TryGetItemDataHatType_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "InitializeFromTable");

	Params::UBP_CollectedVisualMeshData_C_InitializeFromTable_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.Owner = Owner;
	Parms.AsyncLoader = AsyncLoader;
	Parms.ItemData = ItemData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemDataHatType_OutData = CallFunc_TryGetItemDataHatType_OutData;
	Parms.CallFunc_TryGetItemDataHatType_Branches = CallFunc_TryGetItemDataHatType_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CollectedVisualMeshData_C::OnLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "OnLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.ExecuteUbergraph_BP_CollectedVisualMeshData
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::ExecuteUbergraph_BP_CollectedVisualMeshData(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "ExecuteUbergraph_BP_CollectedVisualMeshData");

	Params::UBP_CollectedVisualMeshData_C_ExecuteUbergraph_BP_CollectedVisualMeshData_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CollectedVisualMeshData.BP_CollectedVisualMeshData_C.DataChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CollectedVisualMeshData_C*CollectedData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CollectedVisualMeshData_C::DataChanged__DelegateSignature(class UBP_CollectedVisualMeshData_C* CollectedData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CollectedVisualMeshData_C", "DataChanged__DelegateSignature");

	Params::UBP_CollectedVisualMeshData_C_DataChanged__DelegateSignature_Params Parms{};

	Parms.CollectedData = CollectedData;

	UObject::ProcessEvent(Func, &Parms);

}

}


