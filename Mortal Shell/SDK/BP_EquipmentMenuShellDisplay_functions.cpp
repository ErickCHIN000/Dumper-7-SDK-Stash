#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C
// (Actor)

class UClass* ABP_EquipmentMenuShellDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentMenuShellDisplay_C");

	return Clss;
}


// BP_EquipmentMenuShellDisplay_C BP_EquipmentMenuShellDisplay.Default__BP_EquipmentMenuShellDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentMenuShellDisplay_C* ABP_EquipmentMenuShellDisplay_C::GetDefaultObj()
{
	static class ABP_EquipmentMenuShellDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentMenuShellDisplay_C*>(ABP_EquipmentMenuShellDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetWeapon_Unarmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::SetWeapon_Unarmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetWeapon_Unarmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.UpdateDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ShellDye           CustomDyeValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::UpdateDye(enum class Enum_ShellDye CustomDyeValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "UpdateDye");

	Params::ABP_EquipmentMenuShellDisplay_C_UpdateDye_Params Parms{};

	Parms.CustomDyeValue = CustomDyeValue;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetWeaponSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_EquipmentMenuShellDisplay_C::GetWeaponSocket(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "GetWeaponSocket");

	Params::ABP_EquipmentMenuShellDisplay_C_GetWeaponSocket_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetCorrectAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlendSpaceBase*             CallFunc_GetWeaponAnimation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::SetCorrectAnimation(class UBlendSpaceBase* CallFunc_GetWeaponAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetCorrectAnimation");

	Params::ABP_EquipmentMenuShellDisplay_C_SetCorrectAnimation_Params Parms{};

	Parms.CallFunc_GetWeaponAnimation_ReturnValue = CallFunc_GetWeaponAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetWeaponAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlendSpaceBase*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBlendSpaceBase* ABP_EquipmentMenuShellDisplay_C::GetWeaponAnimation(enum class EComboTypes Temp_byte_Variable, class UBlendSpaceBase* Temp_object_Variable, class UBlendSpaceBase* Temp_object_Variable_1, class UBlendSpaceBase* Temp_object_Variable_2, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class UBlendSpaceBase* Temp_object_Variable_5, class UBlendSpaceBase* Temp_object_Variable_6, class UBlendSpaceBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "GetWeaponAnimation");

	Params::ABP_EquipmentMenuShellDisplay_C_GetWeaponAnimation_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetWaponMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::SetWaponMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetWaponMaterials");

	Params::ABP_EquipmentMenuShellDisplay_C_SetWaponMaterials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.HadernCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsHadernContentEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::HadernCheck(bool CallFunc_IsHadernContentEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "HadernCheck");

	Params::ABP_EquipmentMenuShellDisplay_C_HadernCheck_Params Parms{};

	Parms.CallFunc_IsHadernContentEnabled_ReturnValue = CallFunc_IsHadernContentEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_DeselectShell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::Set_DeselectShell(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Set_DeselectShell");

	Params::ABP_EquipmentMenuShellDisplay_C_Set_DeselectShell_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetWeaponSocket_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShellHasBeenFound_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::SetWeapon(class FName CallFunc_GetWeaponSocket_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetWeaponSocket_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetWeaponSocket_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName CallFunc_GetWeaponSocket_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_5, class FName CallFunc_GetWeaponSocket_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_6, class FName CallFunc_GetWeaponSocket_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShellHasBeenFound_ReturnValue, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetWeapon");

	Params::ABP_EquipmentMenuShellDisplay_C_SetWeapon_Params Parms{};

	Parms.CallFunc_GetWeaponSocket_ReturnValue = CallFunc_GetWeaponSocket_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_1 = CallFunc_GetWeaponSocket_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_2 = CallFunc_GetWeaponSocket_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_3 = CallFunc_GetWeaponSocket_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_5 = CallFunc_K2_AttachToComponent_ReturnValue_5;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_4 = CallFunc_GetWeaponSocket_ReturnValue_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_6 = CallFunc_K2_AttachToComponent_ReturnValue_6;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_5 = CallFunc_GetWeaponSocket_ReturnValue_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_7 = CallFunc_K2_AttachToComponent_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShellHasBeenFound_ReturnValue = CallFunc_ShellHasBeenFound_ReturnValue;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ShowDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetShellName_ReturnValue                                (None)
// class FText                        CallFunc_GetShellTagline_ShellTagline                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_EquipmentMenuShellDisplay_C::ShowDetails(class FText CallFunc_GetShellName_ReturnValue, class FText CallFunc_GetShellTagline_ShellTagline, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ShowDetails");

	Params::ABP_EquipmentMenuShellDisplay_C_ShowDetails_Params Parms{};

	Parms.CallFunc_GetShellName_ReturnValue = CallFunc_GetShellName_ReturnValue;
	Parms.CallFunc_GetShellTagline_ShellTagline = CallFunc_GetShellTagline_ShellTagline;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Mouse_Click
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::Mouse_Click()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Mouse_Click");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Show_ShellName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetShellName_ReturnValue                                (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellName_C*                K2Node_DynamicCast_AsShell_Name                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::Show_ShellName(class FText CallFunc_GetShellName_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UShellName_C* K2Node_DynamicCast_AsShell_Name, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Show_ShellName");

	Params::ABP_EquipmentMenuShellDisplay_C_Show_ShellName_Params Parms{};

	Parms.CallFunc_GetShellName_ReturnValue = CallFunc_GetShellName_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsShell_Name = K2Node_DynamicCast_AsShell_Name;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Hide_ShellName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellName_C*                K2Node_DynamicCast_AsShell_Name                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::Hide_ShellName(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UShellName_C* K2Node_DynamicCast_AsShell_Name, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Hide_ShellName");

	Params::ABP_EquipmentMenuShellDisplay_C_Hide_ShellName_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsShell_Name = K2Node_DynamicCast_AsShell_Name;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Mouse_Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::Mouse_Unhover(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Mouse_Unhover");

	Params::ABP_EquipmentMenuShellDisplay_C_Mouse_Unhover_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Mouse_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::Mouse_Hover(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Mouse_Hover");

	Params::ABP_EquipmentMenuShellDisplay_C_Mouse_Hover_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_SelectShell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::Set_SelectShell(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Set_SelectShell");

	Params::ABP_EquipmentMenuShellDisplay_C_Set_SelectShell_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::Set_Unhover(bool SkipSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Set_Unhover");

	Params::ABP_EquipmentMenuShellDisplay_C_Set_Unhover_Params Parms{};

	Parms.SkipSound = SkipSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::Set_Hover(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "Set_Hover");

	Params::ABP_EquipmentMenuShellDisplay_C_Set_Hover_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetShellMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bReinitPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShellHasBeenFound_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::SetShellMaterials(bool bReinitPose, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ShellHasBeenFound_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetShellMaterials");

	Params::ABP_EquipmentMenuShellDisplay_C_SetShellMaterials_Params Parms{};

	Parms.bReinitPose = bReinitPose;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ShellHasBeenFound_ReturnValue = CallFunc_ShellHasBeenFound_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ShellHasBeenFound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_EquipmentMenuShellDisplay_C::ShellHasBeenFound(bool Local_Unlocked, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetShellUnlockID_ShellUnlockID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ShellHasBeenFound");

	Params::ABP_EquipmentMenuShellDisplay_C_ShellHasBeenFound_Params Parms{};

	Parms.Local_Unlocked = Local_Unlocked;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetShellName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_ShellHasBeenFound_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText ABP_EquipmentMenuShellDisplay_C::GetShellName(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_ShellHasBeenFound_ReturnValue, class FText CallFunc_GetShellName_ShellName, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "GetShellName");

	Params::ABP_EquipmentMenuShellDisplay_C_GetShellName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_ShellHasBeenFound_ReturnValue = CallFunc_ShellHasBeenFound_ReturnValue;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEquipmentMenuShellTabStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Visibility                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::SetState(enum class EEquipmentMenuShellTabState State, bool Visibility, bool Local_Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "SetState");

	Params::ABP_EquipmentMenuShellDisplay_C_SetState_Params Parms{};

	Parms.State = State;
	Parms.Visibility = Visibility;
	Parms.Local_Visibility = Local_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.HandleParallax
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NormalizedMousePos                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePosFromCenterOfScreen_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EquipmentMenuShellDisplay_C::HandleParallax(const struct FVector2D& NormalizedMousePos, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "HandleParallax");

	Params::ABP_EquipmentMenuShellDisplay_C_HandleParallax_Params Parms{};

	Parms.NormalizedMousePos = NormalizedMousePos;
	Parms.CallFunc_GetMousePosFromCenterOfScreen_Position = CallFunc_GetMousePosFromCenterOfScreen_Position;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ReceiveTick");

	Params::ABP_EquipmentMenuShellDisplay_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.HideNameWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::HideNameWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "HideNameWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ShowNameWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::ShowNameWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ShowNameWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature");

	Params::ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature");

	Params::ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature");

	Params::ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ExecuteUbergraph_BP_EquipmentMenuShellDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsMouseMoving_IsMoving                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed                         (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuShellDisplay_C::ExecuteUbergraph_BP_EquipmentMenuShellDisplay(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_GetIsMouseMoving_IsMoving, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "ExecuteUbergraph_BP_EquipmentMenuShellDisplay");

	Params::ABP_EquipmentMenuShellDisplay_C_ExecuteUbergraph_BP_EquipmentMenuShellDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetIsMouseMoving_IsMoving = CallFunc_GetIsMouseMoving_IsMoving;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_2 = K2Node_ComponentBoundEvent_TouchedComponent_2;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_1 = K2Node_ComponentBoundEvent_TouchedComponent_1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent = K2Node_ComponentBoundEvent_TouchedComponent;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed = K2Node_ComponentBoundEvent_ButtonPressed;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.OnShellDisplayUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuShellDisplay_C::OnShellDisplayUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "OnShellDisplayUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.OnShellDisplayHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HoveredShell                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuShellDisplay_C::OnShellDisplayHovered__DelegateSignature(class AActor* HoveredShell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuShellDisplay_C", "OnShellDisplayHovered__DelegateSignature");

	Params::ABP_EquipmentMenuShellDisplay_C_OnShellDisplayHovered__DelegateSignature_Params Parms{};

	Parms.HoveredShell = HoveredShell;

	UObject::ProcessEvent(Func, &Parms);

}

}


