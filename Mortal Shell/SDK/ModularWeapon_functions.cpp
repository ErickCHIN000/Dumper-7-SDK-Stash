#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ModularWeapon.ModularWeapon_C
// (Actor)

class UClass* AModularWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularWeapon_C");

	return Clss;
}


// ModularWeapon_C ModularWeapon.Default__ModularWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AModularWeapon_C* AModularWeapon_C::GetDefaultObj()
{
	static class AModularWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AModularWeapon_C*>(AModularWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModularWeapon.ModularWeapon_C.OnRep_WeaponCode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Initialize_Success                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AModularWeapon_C::OnRep_WeaponCode(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Initialize_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "OnRep_WeaponCode");

	Params::AModularWeapon_C_OnRep_WeaponCode_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Initialize_Success = CallFunc_Initialize_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModularWeapon.ModularWeapon_C.UpdateMaterials
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMaterialParameterNames>Local_Material_Slot_Parameter_Names                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Local_DMIs                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponType>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// struct FMaterialParameterNames     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponType                 CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialSet                CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AModularWeapon_C::UpdateMaterials(bool* Return, const TArray<struct FMaterialParameterNames>& Local_Material_Slot_Parameter_Names, const TArray<class UMaterialInstanceDynamic*>& Local_DMIs, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FWeaponType>& Temp_struct_Variable, const struct FMaterialParameterNames& CallFunc_Array_Get_Item, const struct FWeaponType& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FMaterialSet& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "UpdateMaterials");

	Params::AModularWeapon_C_UpdateMaterials_Params Parms{};

	Parms.Local_Material_Slot_Parameter_Names = Local_Material_Slot_Parameter_Names;
	Parms.Local_DMIs = Local_DMIs;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ModularWeapon.ModularWeapon_C.Randomize WeaponCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Random_WeaponCode__Advanced__WeaponCode                 (ZeroConstructor, HasGetValueTypeHash)

void AModularWeapon_C::Randomize_WeaponCode(bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Random_WeaponCode__Advanced__WeaponCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "Randomize WeaponCode");

	Params::AModularWeapon_C_Randomize_WeaponCode_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Random_WeaponCode__Advanced__WeaponCode = CallFunc_Random_WeaponCode__Advanced__WeaponCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModularWeapon.ModularWeapon_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Parse_WeaponCode_and_Create_Weapon_Success              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AModularWeapon_C::Initialize(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Parse_WeaponCode_and_Create_Weapon_Success, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "Initialize");

	Params::AModularWeapon_C_Initialize_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Parse_WeaponCode_and_Create_Weapon_Success = CallFunc_Parse_WeaponCode_and_Create_Weapon_Success;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ModularWeapon.ModularWeapon_C.Parse WeaponCode and Create Weapon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FWeaponType>         Local_WeaponTypes                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_WeaponParts                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        Local_MaterialSets                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Material_found                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMaterialParameterNames>Material_Slot_Parameter_Names                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   Material_Slot_Types                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      Local_Current_MatSet                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        MaterialsTemp                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Filtered_Weapon_Parts                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Materials                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Type_found                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Part_found                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoErrors                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Weapon_Type                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Parts                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponType>         K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponType                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FMaterialSet                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Num_MaterialSlots_of_WeaponType_Slots               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Number_of_Part_Categories_for_Weapon_Type_Amount    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMaterials_Return                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMaterialSlot           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EMaterialSlot>   CallFunc_Get_MaterialSlots_of_WeaponType_Slots                   (ReferenceParm, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         CallFunc_Filter_Weapon_Parts_by_Type_Parts                       (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        Temp_struct_Variable_1                                           (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_5                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponType>         Temp_struct_Variable_2                                           (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_23                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Decompile_WeaponCode_Weapon_Type                        (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Decompile_WeaponCode_Weapon_Parts                       (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Decompile_WeaponCode_Weapon_Materials                   (ReferenceParm, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AModularWeapon_C::Parse_WeaponCode_and_Create_Weapon(bool* Success, const TArray<struct FWeaponType>& Local_WeaponTypes, const TArray<struct FWeaponPart>& Local_WeaponParts, const TArray<struct FMaterialSet>& Local_MaterialSets, bool Material_found, const TArray<struct FMaterialParameterNames>& Material_Slot_Parameter_Names, const TArray<enum class EMaterialSlot>& Material_Slot_Types, const class FString& Local_Current_MatSet, const TArray<struct FMaterialSet>& MaterialsTemp, const TArray<struct FWeaponPart>& Filtered_Weapon_Parts, const TArray<class FString>& Weapon_Materials, bool Type_found, bool Part_found, bool NoErrors, const class FString& Weapon_Type, const TArray<class FString>& Weapon_Parts, TArray<struct FWeaponType>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FWeaponPart>& K2Node_MakeArray_Array_1, TArray<struct FMaterialSet>& K2Node_MakeArray_Array_2, TArray<enum class EMaterialSlot>& K2Node_MakeArray_Array_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FWeaponType& CallFunc_Array_Get_Item, const struct FMaterialSet& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Get_Num_MaterialSlots_of_WeaponType_Slots, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Get_Number_of_Part_Categories_for_Weapon_Type_Amount, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_UpdateMaterials_Return, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 Temp_int_Array_Index_Variable_4, enum class EMaterialSlot CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, const struct FWeaponPart& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_6, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, TArray<struct FWeaponPart>& Temp_struct_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, TArray<struct FMaterialSet>& Temp_struct_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_GetDisplayName_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, TArray<struct FWeaponType>& Temp_struct_Variable_2, const class FString& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, bool CallFunc_StartsWith_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item_6, const struct FTransform& CallFunc_GetTransform_ReturnValue, const class FString& CallFunc_Decompile_WeaponCode_Weapon_Type, TArray<class FString>& CallFunc_Decompile_WeaponCode_Weapon_Parts, TArray<class FString>& CallFunc_Decompile_WeaponCode_Weapon_Materials, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "Parse WeaponCode and Create Weapon");

	Params::AModularWeapon_C_Parse_WeaponCode_and_Create_Weapon_Params Parms{};

	Parms.Local_WeaponTypes = Local_WeaponTypes;
	Parms.Local_WeaponParts = Local_WeaponParts;
	Parms.Local_MaterialSets = Local_MaterialSets;
	Parms.Material_found = Material_found;
	Parms.Material_Slot_Parameter_Names = Material_Slot_Parameter_Names;
	Parms.Material_Slot_Types = Material_Slot_Types;
	Parms.Local_Current_MatSet = Local_Current_MatSet;
	Parms.MaterialsTemp = MaterialsTemp;
	Parms.Filtered_Weapon_Parts = Filtered_Weapon_Parts;
	Parms.Weapon_Materials = Weapon_Materials;
	Parms.Type_found = Type_found;
	Parms.Part_found = Part_found;
	Parms.NoErrors = NoErrors;
	Parms.Weapon_Type = Weapon_Type;
	Parms.Weapon_Parts = Weapon_Parts;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Get_Num_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_Num_MaterialSlots_of_WeaponType_Slots;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Get_Number_of_Part_Categories_for_Weapon_Type_Amount = CallFunc_Get_Number_of_Part_Categories_for_Weapon_Type_Amount;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_UpdateMaterials_Return = CallFunc_UpdateMaterials_Return;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Get_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_MaterialSlots_of_WeaponType_Slots;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Filter_Weapon_Parts_by_Type_Parts = CallFunc_Filter_Weapon_Parts_by_Type_Parts;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_GetDisplayName_ReturnValue_4 = CallFunc_GetDisplayName_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_GetDisplayName_ReturnValue_5 = CallFunc_GetDisplayName_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_23 = CallFunc_Concat_StrStr_ReturnValue_23;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Decompile_WeaponCode_Weapon_Type = CallFunc_Decompile_WeaponCode_Weapon_Type;
	Parms.CallFunc_Decompile_WeaponCode_Weapon_Parts = CallFunc_Decompile_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Decompile_WeaponCode_Weapon_Materials = CallFunc_Decompile_WeaponCode_Weapon_Materials;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ModularWeapon.ModularWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponData_C*               Local_WeaponData                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Initialize_Success                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void AModularWeapon_C::UserConstructionScript(class AWeaponData_C* Local_WeaponData, bool CallFunc_Initialize_Success, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "UserConstructionScript");

	Params::AModularWeapon_C_UserConstructionScript_Params Parms{};

	Parms.Local_WeaponData = Local_WeaponData;
	Parms.CallFunc_Initialize_Success = CallFunc_Initialize_Success;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModularWeapon.ModularWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AModularWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModularWeapon.ModularWeapon_C.Randomize
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AModularWeapon_C::Randomize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "Randomize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModularWeapon.ModularWeapon_C.ExecuteUbergraph_ModularWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Initialize_Success                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Initialize_Success_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AModularWeapon_C::ExecuteUbergraph_ModularWeapon(int32 EntryPoint, bool CallFunc_Initialize_Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Initialize_Success_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeapon_C", "ExecuteUbergraph_ModularWeapon");

	Params::AModularWeapon_C_ExecuteUbergraph_ModularWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Initialize_Success = CallFunc_Initialize_Success;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Initialize_Success_1 = CallFunc_Initialize_Success_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


