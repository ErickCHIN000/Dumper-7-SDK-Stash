#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C
// (Actor)

class UClass* ABP_Foliage_ConvertToInstances_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Foliage_ConvertToInstances_C");

	return Clss;
}


// BP_Foliage_ConvertToInstances_C BP_Foliage_ConvertToInstances.Default__BP_Foliage_ConvertToInstances_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Foliage_ConvertToInstances_C* ABP_Foliage_ConvertToInstances_C::GetDefaultObj()
{
	static class ABP_Foliage_ConvertToInstances_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Foliage_ConvertToInstances_C*>(ABP_Foliage_ConvertToInstances_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.GetFoliageInLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      FoliageClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              FoliageArray                                                     (Parm, OutParm)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Foliage_ConvertToInstances_C::GetFoliageInLevel(class UClass* FoliageClass, TArray<class AActor*>* FoliageArray, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class FName CallFunc_GetLevelFromActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_GetLevelFromActor_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "GetFoliageInLevel");

	Params::ABP_Foliage_ConvertToInstances_C_GetFoliageInLevel_Params Parms{};

	Parms.FoliageClass = FoliageClass;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLevelFromActor_ReturnValue = CallFunc_GetLevelFromActor_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_1 = CallFunc_GetLevelFromActor_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoliageArray != nullptr)
		*FoliageArray = std::move(Parms.FoliageArray);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ConvertFoliageToBlueprint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_FoliageInstancedActor_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Foliage_ConvertToInstances_C::ConvertFoliageToBlueprint(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class ABP_FoliageInstancedActor_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ConvertFoliageToBlueprint");

	Params::ABP_Foliage_ConvertToInstances_C_ConvertFoliageToBlueprint_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor = K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ConvertFoliageToInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      FoliageClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CullStart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CullEnd                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSoftClassPtr<class AActor>, TSoftClassPtr<class ABP_FoliageInstancedActor_C>>FoliageTypeMap                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftClassPtr<class AActor>        CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetFoliageInLevel_FoliageArray                          (ReferenceParm)
// TSoftClassPtr<class ABP_FoliageInstancedActor_C>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FoliageInstancedActor_C* Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChildActorComponent*        K2Node_DynamicCast_AsChild_Actor_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddInstanceWorldSpace_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Foliage_ConvertToInstances_C::ConvertFoliageToInstance(class UClass* FoliageClass, int32 CullStart, int32 CullEnd, TMap<TSoftClassPtr<class AActor>, TSoftClassPtr<class ABP_FoliageInstancedActor_C>> FoliageTypeMap, TSoftClassPtr<class AActor> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, TArray<class AActor*>& CallFunc_GetFoliageInLevel_FoliageArray, TSoftClassPtr<class ABP_FoliageInstancedActor_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_FoliageInstancedActor_C* Temp_object_Variable, class AActor* CallFunc_Array_Get_Item_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class USceneComponent* CallFunc_Array_Get_Item_2, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class Aba_visibilityModifierVolume_00_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_AddInstanceWorldSpace_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ConvertFoliageToInstance");

	Params::ABP_Foliage_ConvertToInstances_C_ConvertFoliageToInstance_Params Parms{};

	Parms.FoliageClass = FoliageClass;
	Parms.CullStart = CullStart;
	Parms.CullEnd = CullEnd;
	Parms.FoliageTypeMap = FoliageTypeMap;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_GetFoliageInLevel_FoliageArray = CallFunc_GetFoliageInLevel_FoliageArray;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsChild_Actor_Component = K2Node_DynamicCast_AsChild_Actor_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor = K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_AddInstanceWorldSpace_ReturnValue = CallFunc_AddInstanceWorldSpace_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ConvertFoliageToInstances
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::ConvertFoliageToInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ConvertFoliageToInstances");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.GetFoliageTypesOnLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::GetFoliageTypesOnLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "GetFoliageTypesOnLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ConvertFoliageToBlueprints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::ConvertFoliageToBlueprints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ConvertFoliageToBlueprints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.GetInstancedFoliageActorsOnLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::GetInstancedFoliageActorsOnLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "GetInstancedFoliageActorsOnLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.DeleteVisibilityModifierVolumesOnLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::DeleteVisibilityModifierVolumesOnLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "DeleteVisibilityModifierVolumesOnLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.AddVisibilityVolumesOnLevelToIgnoredList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::AddVisibilityVolumesOnLevelToIgnoredList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "AddVisibilityVolumesOnLevelToIgnoredList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ClearIgnoredVolumesList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Foliage_ConvertToInstances_C::ClearIgnoredVolumesList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ClearIgnoredVolumesList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Foliage_ConvertToInstances.BP_Foliage_ConvertToInstances_C.ExecuteUbergraph_BP_Foliage_ConvertToInstances
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class AActor>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsFromLevel_ReturnValue                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FoliageInstancedActor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class AActor>>CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// TSoftClassPtr<class AActor>        CallFunc_Array_Get_Item_4                                        (HasGetValueTypeHash)
// TArray<TSoftClassPtr<class AActor>>CallFunc_Map_Keys_Keys_2                                         (ReferenceParm)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        CallFunc_Array_Get_Item_5                                        (HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsFromLevel_ReturnValue_1                     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class ABP_FoliageInstancedActor_C>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class AActor>>CallFunc_Map_Keys_Keys_3                                         (ReferenceParm)
// TSoftClassPtr<class AActor>        CallFunc_Array_Get_Item_6                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          K2Node_ClassDynamicCast_AsActor_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class ABP_FoliageInstancedActor_C>CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_visibilityModifierVolume_00_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChildActor_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_visibilityModifierVolume_00_C*CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_visibilityModifierVolume_00_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Foliage_ConvertToInstances_C::ExecuteUbergraph_BP_Foliage_ConvertToInstances(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_7, int32 Temp_int_Loop_Counter_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_8, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<TSoftClassPtr<class AActor>>& CallFunc_Map_Keys_Keys, class FName CallFunc_GetLevelFromActor_ReturnValue, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetAllActorsFromLevel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class FName CallFunc_GetLevelFromActor_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_7, TArray<class ABP_FoliageInstancedActor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class FName CallFunc_GetLevelFromActor_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, class ABP_FoliageInstancedActor_C* K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetLevelFromActor_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable_9, class UClass* CallFunc_Array_Get_Item_3, TArray<TSoftClassPtr<class AActor>>& CallFunc_Map_Keys_Keys_1, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item_4, TArray<TSoftClassPtr<class AActor>>& CallFunc_Map_Keys_Keys_2, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item_5, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor_2, bool K2Node_ClassDynamicCast_bSuccess_2, TArray<class AActor*>& CallFunc_GetAllActorsFromLevel_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, TSoftClassPtr<class ABP_FoliageInstancedActor_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<TSoftClassPtr<class AActor>>& CallFunc_Map_Keys_Keys_3, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_8, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor_3, bool K2Node_ClassDynamicCast_bSuccess_3, bool CallFunc_BooleanAND_ReturnValue_1, TSoftClassPtr<class ABP_FoliageInstancedActor_C> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_8, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_8, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_IsChildActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_2, class FName CallFunc_GetLevelFromActor_ReturnValue_4, TArray<class Aba_visibilityModifierVolume_00_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class FName CallFunc_GetLevelFromActor_ReturnValue_5, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_7, class AActor* CallFunc_Array_Get_Item_9, bool CallFunc_IsChildActor_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, class FName CallFunc_GetLevelFromActor_ReturnValue_6, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item_10, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_9, TArray<class Aba_visibilityModifierVolume_00_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Add_ReturnValue_2, class FName CallFunc_GetLevelFromActor_ReturnValue_7, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Foliage_ConvertToInstances_C", "ExecuteUbergraph_BP_Foliage_ConvertToInstances");

	Params::ABP_Foliage_ConvertToInstances_C_ExecuteUbergraph_BP_Foliage_ConvertToInstances_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetLevelFromActor_ReturnValue = CallFunc_GetLevelFromActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetAllActorsFromLevel_ReturnValue = CallFunc_GetAllActorsFromLevel_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_1 = CallFunc_GetLevelFromActor_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_2 = CallFunc_GetLevelFromActor_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor = K2Node_DynamicCast_AsBP_Foliage_Instanced_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_3 = CallFunc_GetLevelFromActor_ReturnValue_3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Map_Keys_Keys_2 = CallFunc_Map_Keys_Keys_2;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_ClassDynamicCast_AsActor_1 = K2Node_ClassDynamicCast_AsActor_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsActor_2 = K2Node_ClassDynamicCast_AsActor_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_GetAllActorsFromLevel_ReturnValue_1 = CallFunc_GetAllActorsFromLevel_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue_1 = CallFunc_LoadClassAsset_Blocking_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Keys_Keys_3 = CallFunc_Map_Keys_Keys_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue_2 = CallFunc_LoadClassAsset_Blocking_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_ClassDynamicCast_AsActor_3 = K2Node_ClassDynamicCast_AsActor_3;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue_3 = CallFunc_LoadClassAsset_Blocking_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_IsChildActor_ReturnValue = CallFunc_IsChildActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_4 = CallFunc_GetLevelFromActor_ReturnValue_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_5 = CallFunc_GetLevelFromActor_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_IsChildActor_ReturnValue_1 = CallFunc_IsChildActor_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_6 = CallFunc_GetLevelFromActor_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetLevelFromActor_ReturnValue_7 = CallFunc_GetLevelFromActor_ReturnValue_7;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


