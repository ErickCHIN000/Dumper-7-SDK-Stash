#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerCapture.BP_PlayerCapture_C
// (Actor)

class UClass* ABP_PlayerCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerCapture_C");

	return Clss;
}


// BP_PlayerCapture_C BP_PlayerCapture.Default__BP_PlayerCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerCapture_C* ABP_PlayerCapture_C::GetDefaultObj()
{
	static class ABP_PlayerCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerCapture_C*>(ABP_PlayerCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Clear AdditionalEffect from Stat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::Clear_AdditionalEffect_from_Stat(enum class E_StatCategory Stat, enum class E_StatCategory Temp_byte_Variable, enum class E_AdditionalEffect K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Clear AdditionalEffect from Stat");

	Params::ABP_PlayerCapture_C_Clear_AdditionalEffect_from_Stat_Params Parms{};

	Parms.Stat = Stat;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Assign Additional Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      AdditionalEffect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::Assign_Additional_Effect(enum class E_StatCategory Stat, enum class E_AdditionalEffect AdditionalEffect, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Assign Additional Effect");

	Params::ABP_PlayerCapture_C_Assign_Additional_Effect_Params Parms{};

	Parms.Stat = Stat;
	Parms.AdditionalEffect = AdditionalEffect;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Is assigned to other stat?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_StatCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::Is_assigned_to_other_stat_(enum class E_StatCategory Stat, bool* Is_, enum class E_StatCategory Temp_byte_Variable, enum class E_AdditionalEffect K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Is assigned to other stat?");

	Params::ABP_PlayerCapture_C_Is_assigned_to_other_stat__Params Parms{};

	Parms.Stat = Stat;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_ != nullptr)
		*Is_ = Parms.Is_;

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Detach Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_4                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_5                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_6                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_7                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_8                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_9                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_10                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ItemSlot              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::Detach_Item(const struct FS_ItemData& Item_Data, class USkeletalMeshComponent* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* Temp_object_Variable_1, class USkeletalMeshComponent* Temp_object_Variable_2, class USkeletalMeshComponent* Temp_object_Variable_3, class USkeletalMeshComponent* Temp_object_Variable_4, class USkeletalMeshComponent* Temp_object_Variable_5, class USkeletalMeshComponent* Temp_object_Variable_6, class USkeletalMeshComponent* Temp_object_Variable_7, class USkeletalMeshComponent* Temp_object_Variable_8, class USkeletalMeshComponent* Temp_object_Variable_9, class USkeletalMeshComponent* Temp_object_Variable_10, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, enum class E_ItemSlot Temp_byte_Variable, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, bool CallFunc_SetStaticMesh_ReturnValue_4, class USkeletalMeshComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Detach Item");

	Params::ABP_PlayerCapture_C_Detach_Item_Params Parms{};

	Parms.Item_Data = Item_Data;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Attach Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_4                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_5                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_6                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_7                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_8                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ARMOR_C*            K2Node_DynamicCast_AsBP_BASE_ARMOR                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      Temp_object_Variable_9                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_SHIELD_C*           K2Node_DynamicCast_AsBP_BASE_SHIELD                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_10                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_Get_Materials_ReturnValue                               (ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ItemSlot              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_2                              (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_Get_Materials_ReturnValue_1                             (ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_3                              (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_4                              (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BASE_ARMOR_C*            K2Node_DynamicCast_AsBP_BASE_ARMOR_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_5                              (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BASE_ITEM_C*             CallFunc_FinishSpawningActor_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::Attach_Item(const struct FS_ItemData& Item_Data, class USkeletalMeshComponent* Temp_object_Variable, class USkeletalMeshComponent* Temp_object_Variable_1, bool CallFunc_IsValidClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* Temp_object_Variable_2, class USkeletalMeshComponent* Temp_object_Variable_3, class USkeletalMeshComponent* Temp_object_Variable_4, class USkeletalMeshComponent* Temp_object_Variable_5, class USkeletalMeshComponent* Temp_object_Variable_6, class USkeletalMeshComponent* Temp_object_Variable_7, class USkeletalMeshComponent* Temp_object_Variable_8, class ABP_BASE_ARMOR_C* K2Node_DynamicCast_AsBP_BASE_ARMOR, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class USkeletalMeshComponent* Temp_object_Variable_9, int32 Temp_int_Array_Index_Variable, class ABP_BASE_SHIELD_C* K2Node_DynamicCast_AsBP_BASE_SHIELD, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class USkeletalMeshComponent* Temp_object_Variable_10, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_Get_Materials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class E_ItemSlot Temp_byte_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_Get_Materials_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, class ABP_BASE_ARMOR_C* K2Node_DynamicCast_AsBP_BASE_ARMOR_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FTransform& CallFunc_GetTransform_ReturnValue_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class ABP_BASE_ITEM_C* CallFunc_FinishSpawningActor_ReturnValue_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Attach Item");

	Params::ABP_PlayerCapture_C_Attach_Item_Params Parms{};

	Parms.Item_Data = Item_Data;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_DynamicCast_AsBP_BASE_ARMOR = K2Node_DynamicCast_AsBP_BASE_ARMOR;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBP_BASE_SHIELD = K2Node_DynamicCast_AsBP_BASE_SHIELD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Get_Materials_ReturnValue = CallFunc_Get_Materials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetTransform_ReturnValue_2 = CallFunc_GetTransform_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_Get_Materials_ReturnValue_1 = CallFunc_Get_Materials_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue_3 = CallFunc_GetTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_4 = CallFunc_GetTransform_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_BASE_ARMOR_1 = K2Node_DynamicCast_AsBP_BASE_ARMOR_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_GetTransform_ReturnValue_5 = CallFunc_GetTransform_ReturnValue_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_5 = CallFunc_FinishSpawningActor_ReturnValue_5;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.CameraShakeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::CameraShakeTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "CameraShakeTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.CameraShakeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::CameraShakeTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "CameraShakeTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.HealthTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::HealthTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "HealthTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.HealthTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::HealthTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "HealthTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.MaxHealthTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::MaxHealthTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "MaxHealthTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.MaxHealthTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::MaxHealthTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "MaxHealthTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.StaminaTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::StaminaTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "StaminaTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.StaminaTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::StaminaTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "StaminaTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.MaxStaminaTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::MaxStaminaTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "MaxStaminaTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.MaxStaminaTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::MaxStaminaTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "MaxStaminaTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.ArmorTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::ArmorTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "ArmorTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.ArmorTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::ArmorTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "ArmorTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.DamageTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::DamageTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "DamageTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.DamageTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::DamageTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "DamageTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.AttackSpeedTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::AttackSpeedTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "AttackSpeedTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.AttackSpeedTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::AttackSpeedTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "AttackSpeedTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Play Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::Play_Timeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Play Timeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Stop Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::Stop_Timeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Stop Timeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Play Additional Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AdditionalEffect      Additional_Effect                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCapture_C::Play_Additional_Effect(enum class E_AdditionalEffect Additional_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Play Additional Effect");

	Params::ABP_PlayerCapture_C_Play_Additional_Effect_Params Parms{};

	Parms.Additional_Effect = Additional_Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Remove Additional Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AdditionalEffect      Additional_Effect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCapture_C::Remove_Additional_Effect(enum class E_AdditionalEffect Additional_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Remove Additional Effect");

	Params::ABP_PlayerCapture_C_Remove_Additional_Effect_Params Parms{};

	Parms.Additional_Effect = Additional_Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Event Initialize Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      Additional_Effect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCapture_C::Event_Initialize_Timeline(float Duration, enum class E_StatCategory Stat, enum class E_AdditionalEffect Additional_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Event Initialize Timeline");

	Params::ABP_PlayerCapture_C_Event_Initialize_Timeline_Params Parms{};

	Parms.Duration = Duration;
	Parms.Stat = Stat;
	Parms.Additional_Effect = Additional_Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Detach from Player Capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_PlayerCapture_C::Detach_from_Player_Capture(const struct FS_ItemData& Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Detach from Player Capture");

	Params::ABP_PlayerCapture_C_Detach_from_Player_Capture_Params Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Attach to Player Capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_PlayerCapture_C::Attach_to_Player_Capture(const struct FS_ItemData& Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Attach to Player Capture");

	Params::ABP_PlayerCapture_C_Attach_to_Player_Capture_Params Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.Initialize Player Capture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::Initialize_Player_Capture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "Initialize Player Capture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.MoveCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::MoveCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "MoveCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.PassReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCapture_C*         Capture_Reference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCapture_C::PassReference(class ABP_PlayerCapture_C* Capture_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "PassReference");

	Params::ABP_PlayerCapture_C_PassReference_Params Parms{};

	Parms.Capture_Reference = Capture_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerCapture.BP_PlayerCapture_C.ExecuteUbergraph_BP_PlayerCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      K2Node_CustomEvent_Additional_Effect_2                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      K2Node_CustomEvent_Additional_Effect_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          K2Node_CustomEvent_Stat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AdditionalEffect      K2Node_CustomEvent_Additional_Effect                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 K2Node_Event_Item_Data_1                                         (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_Event_Item_Data                                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABP_PlayerCapture_C*         K2Node_Event_Capture_Reference                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCapture_C::ExecuteUbergraph_BP_PlayerCapture(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, enum class EMoveComponentAction Temp_byte_Variable, const struct FTransform& Temp_struct_Variable_1, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue_1, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect_2, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float K2Node_CustomEvent_Duration, enum class E_StatCategory K2Node_CustomEvent_Stat, enum class E_AdditionalEffect K2Node_CustomEvent_Additional_Effect, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture, bool K2Node_DynamicCast_bSuccess, const struct FS_ItemData& K2Node_Event_Item_Data_1, const struct FS_ItemData& K2Node_Event_Item_Data, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class ABP_PlayerCapture_C* K2Node_Event_Capture_Reference, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerCapture_C", "ExecuteUbergraph_BP_PlayerCapture");

	Params::ABP_PlayerCapture_C_ExecuteUbergraph_BP_PlayerCapture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.K2Node_CustomEvent_Additional_Effect_2 = K2Node_CustomEvent_Additional_Effect_2;
	Parms.K2Node_CustomEvent_Additional_Effect_1 = K2Node_CustomEvent_Additional_Effect_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Stat = K2Node_CustomEvent_Stat;
	Parms.K2Node_CustomEvent_Additional_Effect = K2Node_CustomEvent_Additional_Effect;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture = K2Node_DynamicCast_AsBPI_Player_Capture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Item_Data_1 = K2Node_Event_Item_Data_1;
	Parms.K2Node_Event_Item_Data = K2Node_Event_Item_Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.K2Node_Event_Capture_Reference = K2Node_Event_Capture_Reference;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


