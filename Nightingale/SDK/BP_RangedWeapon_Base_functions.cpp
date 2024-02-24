#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeapon_Base.BP_RangedWeapon_Base_C
// (Actor)

class UClass* ABP_RangedWeapon_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeapon_Base_C");

	return Clss;
}


// BP_RangedWeapon_Base_C BP_RangedWeapon_Base.Default__BP_RangedWeapon_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RangedWeapon_Base_C* ABP_RangedWeapon_Base_C::GetDefaultObj()
{
	static class ABP_RangedWeapon_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RangedWeapon_Base_C*>(ABP_RangedWeapon_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetRaycastDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRaycastDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_RangedWeapon_Base_C::GetRaycastDistance(double CallFunc_GetRaycastDistance_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetRaycastDistance");

	Params::ABP_RangedWeapon_Base_C_GetRaycastDistance_Params Parms{};

	Parms.CallFunc_GetRaycastDistance_ReturnValue = CallFunc_GetRaycastDistance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.PlayAnimationsForAnimSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAbilityMontages            MontageSet                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*LightweightItem                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               bIsCharacterLocallyControlled                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AttachParent                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPChar                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPItem                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPChar                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPItem                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::PlayAnimationsForAnimSet(struct FAbilityMontages& MontageSet, double PlayRate, class ABP_LightweightAttachedItem_C* LightweightItem, bool bIsCharacterLocallyControlled, class ANWXCharacter* Character, class AActor* AttachParent, class UAnimMontage* TPChar, class UAnimMontage* TPItem, class UAnimMontage* FPChar, class UAnimMontage* FPItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "PlayAnimationsForAnimSet");

	Params::ABP_RangedWeapon_Base_C_PlayAnimationsForAnimSet_Params Parms{};

	Parms.MontageSet = MontageSet;
	Parms.PlayRate = PlayRate;
	Parms.LightweightItem = LightweightItem;
	Parms.bIsCharacterLocallyControlled = bIsCharacterLocallyControlled;
	Parms.Character = Character;
	Parms.AttachParent = AttachParent;
	Parms.TPChar = TPChar;
	Parms.TPItem = TPItem;
	Parms.FPChar = FPChar;
	Parms.FPItem = FPItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem;
	Parms.CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter = CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ResetAmmoTypeRTPCs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                TargetAKComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     MuzzleRTPCValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::ResetAmmoTypeRTPCs(class UAkComponent* TargetAKComponent, class UAkRtpc* MuzzleRTPCValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAkRtpc* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ResetAmmoTypeRTPCs");

	Params::ABP_RangedWeapon_Base_C_ResetAmmoTypeRTPCs_Params Parms{};

	Parms.TargetAKComponent = TargetAKComponent;
	Parms.MuzzleRTPCValue = MuzzleRTPCValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetLoadedAmmoAttribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_BaselineAttributeValuesCallFunc_TryGetItemDataBaselineAttributeValues_OutData           (None)
// enum class EGetResult              CallFunc_TryGetItemDataBaselineAttributeValues_Branches          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetLoadedAmmoAttribute(const struct FGameplayAttribute& Attribute, double* Value, bool* Success, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_BaselineAttributeValues& CallFunc_TryGetItemDataBaselineAttributeValues_OutData, enum class EGetResult CallFunc_TryGetItemDataBaselineAttributeValues_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetLoadedAmmoAttribute");

	Params::ABP_RangedWeapon_Base_C_GetLoadedAmmoAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataBaselineAttributeValues_OutData = CallFunc_TryGetItemDataBaselineAttributeValues_OutData;
	Parms.CallFunc_TryGetItemDataBaselineAttributeValues_Branches = CallFunc_TryGetItemDataBaselineAttributeValues_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_FunctionResult_Value_ImplicitCast = K2Node_FunctionResult_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ClientEndAimAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*            Camera                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        CallFunc_TransferRenderingData_UpdatedPostProcessSettings        (None)
// TScriptInterface<class ICameraProviderInterface>CallFunc_GetCamera_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::ClientEndAimAnim(class UCameraComponent* Camera, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, const struct FPostProcessSettings& CallFunc_TransferRenderingData_UpdatedPostProcessSettings, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ClientEndAimAnim");

	Params::ABP_RangedWeapon_Base_C_ClientEndAimAnim_Params Parms{};

	Parms.Camera = Camera;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_TransferRenderingData_UpdatedPostProcessSettings = CallFunc_TransferRenderingData_UpdatedPostProcessSettings;
	Parms.CallFunc_GetCamera_self_CastInput = CallFunc_GetCamera_self_CastInput;
	Parms.CallFunc_GetCamera_ReturnValue = CallFunc_GetCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ClientBeginAimAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*            Camera                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        CallFunc_Get_Iron_Sights_Post_Process_Settings_IronSightsPostProcess(None)
// TScriptInterface<class ICameraProviderInterface>CallFunc_GetCamera_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        CallFunc_TransferRenderingData_UpdatedPostProcessSettings        (None)

void ABP_RangedWeapon_Base_C::ClientBeginAimAnim(class UCameraComponent* Camera, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, const struct FPostProcessSettings& CallFunc_Get_Iron_Sights_Post_Process_Settings_IronSightsPostProcess, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, const struct FPostProcessSettings& CallFunc_TransferRenderingData_UpdatedPostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ClientBeginAimAnim");

	Params::ABP_RangedWeapon_Base_C_ClientBeginAimAnim_Params Parms{};

	Parms.Camera = Camera;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_Get_Iron_Sights_Post_Process_Settings_IronSightsPostProcess = CallFunc_Get_Iron_Sights_Post_Process_Settings_IronSightsPostProcess;
	Parms.CallFunc_GetCamera_self_CastInput = CallFunc_GetCamera_self_CastInput;
	Parms.CallFunc_GetCamera_ReturnValue = CallFunc_GetCamera_ReturnValue;
	Parms.CallFunc_TransferRenderingData_UpdatedPostProcessSettings = CallFunc_TransferRenderingData_UpdatedPostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetLoadedAmmoType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          LoadedAmmoType                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetLoadedAmmoType(struct FItemDataReference* LoadedAmmoType, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetLoadedAmmoType");

	Params::ABP_RangedWeapon_Base_C_GetLoadedAmmoType_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadedAmmoType != nullptr)
		*LoadedAmmoType = std::move(Parms.LoadedAmmoType);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.InitializeEquippableData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FItemData_WeaponRanged      CallFunc_TryGetItemDataWeaponRanged_OutData                      (None)
// enum class EGetResult              CallFunc_TryGetItemDataWeaponRanged_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::InitializeEquippableData(const struct FItemData& ItemData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FItemData_WeaponRanged& CallFunc_TryGetItemDataWeaponRanged_OutData, enum class EGetResult CallFunc_TryGetItemDataWeaponRanged_Branches, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "InitializeEquippableData");

	Params::ABP_RangedWeapon_Base_C_InitializeEquippableData_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TryGetItemDataWeaponRanged_OutData = CallFunc_TryGetItemDataWeaponRanged_OutData;
	Parms.CallFunc_TryGetItemDataWeaponRanged_Branches = CallFunc_TryGetItemDataWeaponRanged_Branches;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetLoadedAmmoData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_Ammo              LoadedAmmo                                                       (Parm, OutParm)
// bool                               bWasSuccessful                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Ammo              CallFunc_TryGetItemDataAmmo_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetItemDataAmmo_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetLoadedAmmoData(struct FItemData_Ammo* LoadedAmmo, bool* bWasSuccessful, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetLoadedAmmoData");

	Params::ABP_RangedWeapon_Base_C_GetLoadedAmmoData_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataAmmo_OutData = CallFunc_TryGetItemDataAmmo_OutData;
	Parms.CallFunc_TryGetItemDataAmmo_Branches = CallFunc_TryGetItemDataAmmo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadedAmmo != nullptr)
		*LoadedAmmo = std::move(Parms.LoadedAmmo);

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = Parms.bWasSuccessful;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetImpactTagsRanged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       StrikeTags                                                       (Parm, OutParm)
// struct FItemData_Ammo              CallFunc_GetLoadedAmmoData_LoadedAmmo                            (None)
// bool                               CallFunc_GetLoadedAmmoData_bWasSuccessful                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)

void ABP_RangedWeapon_Base_C::GetImpactTagsRanged(struct FGameplayTagContainer* StrikeTags, const struct FItemData_Ammo& CallFunc_GetLoadedAmmoData_LoadedAmmo, bool CallFunc_GetLoadedAmmoData_bWasSuccessful, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetImpactTagsRanged");

	Params::ABP_RangedWeapon_Base_C_GetImpactTagsRanged_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoData_LoadedAmmo = CallFunc_GetLoadedAmmoData_LoadedAmmo;
	Parms.CallFunc_GetLoadedAmmoData_bWasSuccessful = CallFunc_GetLoadedAmmoData_bWasSuccessful;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StrikeTags != nullptr)
		*StrikeTags = std::move(Parms.StrikeTags);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.Get Element Tags Ranged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Elemental_Tags                                                   (Parm, OutParm)
// struct FItemData_Ammo              CallFunc_GetLoadedAmmoData_LoadedAmmo                            (None)
// bool                               CallFunc_GetLoadedAmmoData_bWasSuccessful                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)

void ABP_RangedWeapon_Base_C::Get_Element_Tags_Ranged(struct FGameplayTagContainer* Elemental_Tags, const struct FItemData_Ammo& CallFunc_GetLoadedAmmoData_LoadedAmmo, bool CallFunc_GetLoadedAmmoData_bWasSuccessful, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "Get Element Tags Ranged");

	Params::ABP_RangedWeapon_Base_C_Get_Element_Tags_Ranged_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoData_LoadedAmmo = CallFunc_GetLoadedAmmoData_LoadedAmmo;
	Parms.CallFunc_GetLoadedAmmoData_bWasSuccessful = CallFunc_GetLoadedAmmoData_bWasSuccessful;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Elemental_Tags != nullptr)
		*Elemental_Tags = std::move(Parms.Elemental_Tags);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetAmmoRemaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RemainingAmmo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetAmmoRemaining(int32* RemainingAmmo, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetAmmoRemaining");

	Params::ABP_RangedWeapon_Base_C_GetAmmoRemaining_Params Parms{};

	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingAmmo != nullptr)
		*RemainingAmmo = Parms.RemainingAmmo;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.CalculateDamageFalloff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InputDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CalculatedDamage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalculateFalloffDamage_CalculatedDamage                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::CalculateDamageFalloff(double Distance, double InputDamage, double* CalculatedDamage, double CallFunc_CalculateFalloffDamage_CalculatedDamage, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "CalculateDamageFalloff");

	Params::ABP_RangedWeapon_Base_C_CalculateDamageFalloff_Params Parms{};

	Parms.Distance = Distance;
	Parms.InputDamage = InputDamage;
	Parms.CallFunc_CalculateFalloffDamage_CalculatedDamage = CallFunc_CalculateFalloffDamage_CalculatedDamage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedDamage != nullptr)
		*CalculatedDamage = Parms.CalculatedDamage;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.SetSwitchOnLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::SetSwitchOnLocalPlayer(class UAkSwitchValue* SwitchValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "SetSwitchOnLocalPlayer");

	Params::ABP_RangedWeapon_Base_C_SetSwitchOnLocalPlayer_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.Get Appropriate Ak Component
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScopedAkComponent*          TargetComponent                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayFirstPersonAudio_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::Get_Appropriate_Ak_Component(class UScopedAkComponent** TargetComponent, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_ShouldPlayFirstPersonAudio_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "Get Appropriate Ak Component");

	Params::ABP_RangedWeapon_Base_C_Get_Appropriate_Ak_Component_Params Parms{};

	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_ShouldPlayFirstPersonAudio_ReturnValue = CallFunc_ShouldPlayFirstPersonAudio_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetComponent != nullptr)
		*TargetComponent = Parms.TargetComponent;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.Play Weapon Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              MuzzleSwitchValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     MuzzleRTPCValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CanyonValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsWeaponFireEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          SpawnedDuplicate                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          TargetAKComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_Get_Appropriate_Ak_Component_TargetComponent            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::Play_Weapon_Sound(class UAkAudioEvent* AkEvent, class UAkSwitchValue* MuzzleSwitchValue, class UAkRtpc* MuzzleRTPCValue, double CanyonValue, bool IsWeaponFireEvent, class UScopedAkComponent* SpawnedDuplicate, class UScopedAkComponent* TargetAKComponent, bool CallFunc_PostAkEventScoped_ReturnValue, class UScopedAkComponent* CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, int32 CallFunc_GetAmmoRemaining_Count, double CallFunc_Conv_IntToDouble_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class UScopedAkComponent* CallFunc_Get_Appropriate_Ak_Component_TargetComponent, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "Play Weapon Sound");

	Params::ABP_RangedWeapon_Base_C_Play_Weapon_Sound_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.MuzzleSwitchValue = MuzzleSwitchValue;
	Parms.MuzzleRTPCValue = MuzzleRTPCValue;
	Parms.CanyonValue = CanyonValue;
	Parms.IsWeaponFireEvent = IsWeaponFireEvent;
	Parms.SpawnedDuplicate = SpawnedDuplicate;
	Parms.TargetAKComponent = TargetAKComponent;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component = CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Appropriate_Ak_Component_TargetComponent = CallFunc_Get_Appropriate_Ak_Component_TargetComponent;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = CallFunc_SetRTPCValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.SetNextSectionToExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CharAnimInstance                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         ParentChar                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::SetNextSectionToExit(class UAnimInstance* CharAnimInstance, class ABP_AnimCharacter_C* ParentChar, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_Montage_GetCurrentSection_ReturnValue_1, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue_2, class FName CallFunc_Montage_GetCurrentSection_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "SetNextSectionToExit");

	Params::ABP_RangedWeapon_Base_C_SetNextSectionToExit_Params Parms{};

	Parms.CharAnimInstance = CharAnimInstance;
	Parms.ParentChar = ParentChar;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue_1 = CallFunc_GetCurrentActiveMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue_1 = CallFunc_Montage_GetCurrentSection_ReturnValue_1;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue_2 = CallFunc_GetCurrentActiveMontage_ReturnValue_2;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue_2 = CallFunc_Montage_GetCurrentSection_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.IronSightsExitSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::IronSightsExitSFX(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "IronSightsExitSFX");

	Params::ABP_RangedWeapon_Base_C_IronSightsExitSFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.IronSightsEnterSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::IronSightsEnterSFX(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "IronSightsEnterSFX");

	Params::ABP_RangedWeapon_Base_C_IronSightsEnterSFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.RemoteSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::RemoteSwitch(class UScopedAkComponent* AkComponent, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "RemoteSwitch");

	Params::ABP_RangedWeapon_Base_C_RemoteSwitch_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.AttachAkToMuzzle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::AttachAkToMuzzle(bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "AttachAkToMuzzle");

	Params::ABP_RangedWeapon_Base_C_AttachAkToMuzzle_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetCooldownForSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionTypes       Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cooldown                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechniqueDataAsset*         CallFunc_GetTechniqueForSlot_Technique                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTechniqueDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// double                             CallFunc_GetCooldownForSlot_Cooldown                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCooldownForSlot_Duration                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPrimaryFireCooldown_CooldownTotal                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRemainingCooldown_CooldownRemaining                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetCooldownForSlot(enum class EInputActionTypes Slot, double* Cooldown, double* Duration, class UTechniqueDataAsset* CallFunc_GetTechniqueForSlot_Technique, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, double CallFunc_GetCooldownForSlot_Cooldown, double CallFunc_GetCooldownForSlot_Duration, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetPrimaryFireCooldown_CooldownTotal, double CallFunc_GetRemainingCooldown_CooldownRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetCooldownForSlot");

	Params::ABP_RangedWeapon_Base_C_GetCooldownForSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetTechniqueForSlot_Technique = CallFunc_GetTechniqueForSlot_Technique;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetCooldownForSlot_Cooldown = CallFunc_GetCooldownForSlot_Cooldown;
	Parms.CallFunc_GetCooldownForSlot_Duration = CallFunc_GetCooldownForSlot_Duration;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryFireCooldown_CooldownTotal = CallFunc_GetPrimaryFireCooldown_CooldownTotal;
	Parms.CallFunc_GetRemainingCooldown_CooldownRemaining = CallFunc_GetRemainingCooldown_CooldownRemaining;

	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetCurrentReloadAnimTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               Aiming                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemMontage_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetItemMontage_Montage                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsAiming_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag ABP_RangedWeapon_Base_C::GetCurrentReloadAnimTag(bool Aiming, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, int32 CallFunc_GetAmmoRemaining_Count, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_GetItemMontage_Success, class UAnimMontage* CallFunc_GetItemMontage_Montage, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_GetIsAiming_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetCurrentReloadAnimTag");

	Params::ABP_RangedWeapon_Base_C_GetCurrentReloadAnimTag_Params Parms{};

	Parms.Aiming = Aiming;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetItemMontage_Success = CallFunc_GetItemMontage_Success;
	Parms.CallFunc_GetItemMontage_Montage = CallFunc_GetItemMontage_Montage;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_GetIsAiming_ReturnValue = CallFunc_GetIsAiming_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetReloadType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ERangedWeaponReloadType ReloadType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERangedWeaponReloadType CallFunc_GetReloadType_GetReloadType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetReloadType(enum class ERangedWeaponReloadType* ReloadType, enum class ERangedWeaponReloadType CallFunc_GetReloadType_GetReloadType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetReloadType");

	Params::ABP_RangedWeapon_Base_C_GetReloadType_Params Parms{};

	Parms.CallFunc_GetReloadType_GetReloadType = CallFunc_GetReloadType_GetReloadType;

	UObject::ProcessEvent(Func, &Parms);

	if (ReloadType != nullptr)
		*ReloadType = Parms.ReloadType;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.AddEffects
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     ParentAbilitySystem                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetBaseSpread_BaseSpread                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USpreadComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpreadBonus_SpreadBonusIn_ImplicitCast               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::AddEffects(class UAbilitySystemComponent* ParentAbilitySystem, bool CallFunc_IsServer_ReturnValue, double CallFunc_GetBaseSpread_BaseSpread, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class USpreadComponent* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetAttachParentActor_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_SetSpreadBonus_SpreadBonusIn_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "AddEffects");

	Params::ABP_RangedWeapon_Base_C_AddEffects_Params Parms{};

	Parms.ParentAbilitySystem = ParentAbilitySystem;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetBaseSpread_BaseSpread = CallFunc_GetBaseSpread_BaseSpread;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue_1 = CallFunc_GetAttachParentActor_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetAttachParentActor_ReturnValue_2 = CallFunc_GetAttachParentActor_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SetSpreadBonus_SpreadBonusIn_ImplicitCast = CallFunc_SetSpreadBonus_SpreadBonusIn_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FinishLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::FinishLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FinishLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FailedToFireSFXCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::FailedToFireSFXCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FailedToFireSFXCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FailedToFireSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::FailedToFireSFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FailedToFireSFX");

	Params::ABP_RangedWeapon_Base_C_FailedToFireSFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.Cancel Anims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MontageTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               HardCancel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HardCancelBlend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            MontageSet                                                       (Edit, BlueprintVisible)
// class ABP_AnimCharacter_C*         ParentCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPCharMontage                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                TPItemMontage                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPCharMontage                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FPItemMontage                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference_1                            (HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSetForAction_bFoundMontageSet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetMontageSetForAction_MontageSetForAction              (None)

void ABP_RangedWeapon_Base_C::Cancel_Anims(const struct FGameplayTag& MontageTag, bool HardCancel, bool HardCancelBlend, const struct FAbilityMontages& MontageSet, class ABP_AnimCharacter_C* ParentCharacter, class UAnimMontage* TPCharMontage, class UAnimMontage* TPItemMontage, class UAnimMontage* FPCharMontage, class UAnimMontage* FPItemMontage, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, class UAnimMontage* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsNotEmpty_ReturnValue_2, class UAnimMontage* CallFunc_Array_Get_Item_3, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "Cancel Anims");

	Params::ABP_RangedWeapon_Base_C_Cancel_Anims_Params Parms{};

	Parms.MontageTag = MontageTag;
	Parms.HardCancel = HardCancel;
	Parms.HardCancelBlend = HardCancelBlend;
	Parms.MontageSet = MontageSet;
	Parms.ParentCharacter = ParentCharacter;
	Parms.TPCharMontage = TPCharMontage;
	Parms.TPItemMontage = TPItemMontage;
	Parms.FPCharMontage = FPCharMontage;
	Parms.FPItemMontage = FPItemMontage;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue_1 = CallFunc_Array_IsNotEmpty_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue_2 = CallFunc_Array_IsNotEmpty_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue_3 = CallFunc_Array_IsNotEmpty_ReturnValue_3;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetItemID_OutItemReference_1 = CallFunc_GetItemID_OutItemReference_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetMontageSetForAction_bFoundMontageSet = CallFunc_GetMontageSetForAction_bFoundMontageSet;
	Parms.CallFunc_GetMontageSetForAction_MontageSetForAction = CallFunc_GetMontageSetForAction_MontageSetForAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetFiringSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               AlternateFire                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               FireSound                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               SelectedFireSFX                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetFiringSound(bool AlternateFire, class UAkAudioEvent** FireSound, class UAkAudioEvent* SelectedFireSFX, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetFiringSound");

	Params::ABP_RangedWeapon_Base_C_GetFiringSound_Params Parms{};

	Parms.AlternateFire = AlternateFire;
	Parms.SelectedFireSFX = SelectedFireSFX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FireSound != nullptr)
		*FireSound = Parms.FireSound;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.Cancel Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HardCancel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HardCancelBlend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultBlendOutTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::Cancel_Anim(bool HardCancel, class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, bool HardCancelBlend, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "Cancel Anim");

	Params::ABP_RangedWeapon_Base_C_Cancel_Anim_Params Parms{};

	Parms.HardCancel = HardCancel;
	Parms.Mesh = Mesh;
	Parms.Montage = Montage;
	Parms.HardCancelBlend = HardCancelBlend;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDefaultBlendOutTime_ReturnValue = CallFunc_GetDefaultBlendOutTime_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.SpawnBeamEmitter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SourcePoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses (HasGetValueTypeHash)
// struct FS_MuzzleSwitchNames        CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch           (HasGetValueTypeHash)
// struct FS_BeamTracer               CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer             (HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::SpawnBeamEmitter(const struct FVector& SourcePoint, const struct FVector& EndPoint, bool CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success, const struct FS_RangedAbilityResponses& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses, const struct FS_MuzzleSwitchNames& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch, const struct FS_BeamTracer& CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "SpawnBeamEmitter");

	Params::ABP_RangedWeapon_Base_C_SpawnBeamEmitter_Params Parms{};

	Parms.SourcePoint = SourcePoint;
	Parms.EndPoint = EndPoint;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_Success;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_RangedAbilityResponses;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_MuzzleSwitch;
	Parms.CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer = CallFunc_NVFX_Query_AT_Ranged_Weapon_Fire_BeamTracer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.HasBulletsMissing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClipSize_ClipSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_Count                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_RangedWeapon_Base_C::HasBulletsMissing(int32 CallFunc_GetClipSize_ClipSize, int32 CallFunc_GetAmmoRemaining_Count, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "HasBulletsMissing");

	Params::ABP_RangedWeapon_Base_C_HasBulletsMissing_Params Parms{};

	Parms.CallFunc_GetClipSize_ClipSize = CallFunc_GetClipSize_ClipSize;
	Parms.CallFunc_GetAmmoRemaining_Count = CallFunc_GetAmmoRemaining_Count;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.CancelReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HardCancel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::CancelReload(bool HardCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "CancelReload");

	Params::ABP_RangedWeapon_Base_C_CancelReload_Params Parms{};

	Parms.HardCancel = HardCancel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FailToFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFire_CanFire                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::FailToFire(class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanFire_CanFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FailToFire");

	Params::ABP_RangedWeapon_Base_C_FailToFire_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanFire_CanFire = CallFunc_CanFire_CanFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetRecoilData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   RecoilYawRange                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   RecoilPitchRange                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 RecoilCurve                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 RecoveryCurve                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRecoilValues_RecoilYawRange                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRecoilValues_RecoilPitchRange                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_GetRecoilValues_RecoilCurve                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 CallFunc_GetRecoilValues_RecoveryCurve                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetRecoilData(struct FVector2D* RecoilYawRange, struct FVector2D* RecoilPitchRange, class UCurveFloat** RecoilCurve, class UCurveFloat** RecoveryCurve, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetRecoilValues_RecoilYawRange, const struct FVector2D& CallFunc_GetRecoilValues_RecoilPitchRange, class UCurveFloat* CallFunc_GetRecoilValues_RecoilCurve, class UCurveFloat* CallFunc_GetRecoilValues_RecoveryCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetRecoilData");

	Params::ABP_RangedWeapon_Base_C_GetRecoilData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRecoilValues_RecoilYawRange = CallFunc_GetRecoilValues_RecoilYawRange;
	Parms.CallFunc_GetRecoilValues_RecoilPitchRange = CallFunc_GetRecoilValues_RecoilPitchRange;
	Parms.CallFunc_GetRecoilValues_RecoilCurve = CallFunc_GetRecoilValues_RecoilCurve;
	Parms.CallFunc_GetRecoilValues_RecoveryCurve = CallFunc_GetRecoilValues_RecoveryCurve;

	UObject::ProcessEvent(Func, &Parms);

	if (RecoilYawRange != nullptr)
		*RecoilYawRange = std::move(Parms.RecoilYawRange);

	if (RecoilPitchRange != nullptr)
		*RecoilPitchRange = std::move(Parms.RecoilPitchRange);

	if (RecoilCurve != nullptr)
		*RecoilCurve = Parms.RecoilCurve;

	if (RecoveryCurve != nullptr)
		*RecoveryCurve = Parms.RecoveryCurve;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.CanFire
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoNeeded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanFire                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFire_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFire_CanFire                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::CanFire(int32 AmmoNeeded, bool* CanFire, bool CallFunc_CanFire_ReturnValue, bool CallFunc_CanFire_CanFire, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "CanFire");

	Params::ABP_RangedWeapon_Base_C_CanFire_Params Parms{};

	Parms.AmmoNeeded = AmmoNeeded;
	Parms.CallFunc_CanFire_ReturnValue = CallFunc_CanFire_ReturnValue;
	Parms.CallFunc_CanFire_CanFire = CallFunc_CanFire_CanFire;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanFire != nullptr)
		*CanFire = Parms.CanFire;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetRemainingCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CooldownRemaining                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRemainingCooldown_TimeRemaining                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetRemainingCooldown(double* CooldownRemaining, double CallFunc_GetRemainingCooldown_TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetRemainingCooldown");

	Params::ABP_RangedWeapon_Base_C_GetRemainingCooldown_Params Parms{};

	Parms.CallFunc_GetRemainingCooldown_TimeRemaining = CallFunc_GetRemainingCooldown_TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

	if (CooldownRemaining != nullptr)
		*CooldownRemaining = Parms.CooldownRemaining;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetPrimaryFireCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CooldownTotal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPrimaryFireCooldown_CooldownTotal                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetPrimaryFireCooldown(double* CooldownTotal, class AActor* CallFunc_GetAttachParentActor_ReturnValue, double CallFunc_GetPrimaryFireCooldown_CooldownTotal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetPrimaryFireCooldown");

	Params::ABP_RangedWeapon_Base_C_GetPrimaryFireCooldown_Params Parms{};

	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_GetPrimaryFireCooldown_CooldownTotal = CallFunc_GetPrimaryFireCooldown_CooldownTotal;

	UObject::ProcessEvent(Func, &Parms);

	if (CooldownTotal != nullptr)
		*CooldownTotal = Parms.CooldownTotal;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetCurrentClipAmmo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          AmmoReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetCurrentClipAmmo(struct FItemDataReference* AmmoReference, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetCurrentClipAmmo");

	Params::ABP_RangedWeapon_Base_C_GetCurrentClipAmmo_Params Parms{};

	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoReference != nullptr)
		*AmmoReference = std::move(Parms.AmmoReference);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FireRangedWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WeaponOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoToConsume                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFire_CanFire                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_UseAmmo_DidConsumeBullet                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDefaultItemTraitsArray_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetDefaultItemTraitsArray_ReturnValue                   (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::FireRangedWeapon(class AActor* WeaponOwner, int32 AmmoToConsume, bool CallFunc_CanFire_CanFire, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_UseAmmo_DidConsumeBullet, bool CallFunc_GetDefaultItemTraitsArray_Success, const struct FGameplayTagContainer& CallFunc_GetDefaultItemTraitsArray_ReturnValue, bool CallFunc_HasTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FireRangedWeapon");

	Params::ABP_RangedWeapon_Base_C_FireRangedWeapon_Params Parms{};

	Parms.WeaponOwner = WeaponOwner;
	Parms.AmmoToConsume = AmmoToConsume;
	Parms.CallFunc_CanFire_CanFire = CallFunc_CanFire_CanFire;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_UseAmmo_DidConsumeBullet = CallFunc_UseAmmo_DidConsumeBullet;
	Parms.CallFunc_GetDefaultItemTraitsArray_Success = CallFunc_GetDefaultItemTraitsArray_Success;
	Parms.CallFunc_GetDefaultItemTraitsArray_ReturnValue = CallFunc_GetDefaultItemTraitsArray_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.GetProjectileSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetProjectileSpeed_ProjectileSpeed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::GetProjectileSpeed(double* Speed, double CallFunc_GetProjectileSpeed_ProjectileSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "GetProjectileSpeed");

	Params::ABP_RangedWeapon_Base_C_GetProjectileSpeed_Params Parms{};

	Parms.CallFunc_GetProjectileSpeed_ProjectileSpeed = CallFunc_GetProjectileSpeed_ProjectileSpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (Speed != nullptr)
		*Speed = Parms.Speed;

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnNotifyEnd_7C84743042C4EDD827B2D3A35A33C28E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnNotifyEnd_7C84743042C4EDD827B2D3A35A33C28E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnNotifyEnd_7C84743042C4EDD827B2D3A35A33C28E");

	Params::ABP_RangedWeapon_Base_C_OnNotifyEnd_7C84743042C4EDD827B2D3A35A33C28E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnNotifyBegin_7C84743042C4EDD827B2D3A35A33C28E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnNotifyBegin_7C84743042C4EDD827B2D3A35A33C28E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnNotifyBegin_7C84743042C4EDD827B2D3A35A33C28E");

	Params::ABP_RangedWeapon_Base_C_OnNotifyBegin_7C84743042C4EDD827B2D3A35A33C28E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnInterrupted_7C84743042C4EDD827B2D3A35A33C28E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnInterrupted_7C84743042C4EDD827B2D3A35A33C28E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnInterrupted_7C84743042C4EDD827B2D3A35A33C28E");

	Params::ABP_RangedWeapon_Base_C_OnInterrupted_7C84743042C4EDD827B2D3A35A33C28E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnBlendOut_7C84743042C4EDD827B2D3A35A33C28E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnBlendOut_7C84743042C4EDD827B2D3A35A33C28E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnBlendOut_7C84743042C4EDD827B2D3A35A33C28E");

	Params::ABP_RangedWeapon_Base_C_OnBlendOut_7C84743042C4EDD827B2D3A35A33C28E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnCompleted_7C84743042C4EDD827B2D3A35A33C28E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnCompleted_7C84743042C4EDD827B2D3A35A33C28E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnCompleted_7C84743042C4EDD827B2D3A35A33C28E");

	Params::ABP_RangedWeapon_Base_C_OnCompleted_7C84743042C4EDD827B2D3A35A33C28E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnNotifyEnd_F3D0A4AD4047BC9DAA021A835E0F07D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnNotifyEnd_F3D0A4AD4047BC9DAA021A835E0F07D5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnNotifyEnd_F3D0A4AD4047BC9DAA021A835E0F07D5");

	Params::ABP_RangedWeapon_Base_C_OnNotifyEnd_F3D0A4AD4047BC9DAA021A835E0F07D5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnNotifyBegin_F3D0A4AD4047BC9DAA021A835E0F07D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnNotifyBegin_F3D0A4AD4047BC9DAA021A835E0F07D5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnNotifyBegin_F3D0A4AD4047BC9DAA021A835E0F07D5");

	Params::ABP_RangedWeapon_Base_C_OnNotifyBegin_F3D0A4AD4047BC9DAA021A835E0F07D5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnInterrupted_F3D0A4AD4047BC9DAA021A835E0F07D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnInterrupted_F3D0A4AD4047BC9DAA021A835E0F07D5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnInterrupted_F3D0A4AD4047BC9DAA021A835E0F07D5");

	Params::ABP_RangedWeapon_Base_C_OnInterrupted_F3D0A4AD4047BC9DAA021A835E0F07D5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnBlendOut_F3D0A4AD4047BC9DAA021A835E0F07D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnBlendOut_F3D0A4AD4047BC9DAA021A835E0F07D5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnBlendOut_F3D0A4AD4047BC9DAA021A835E0F07D5");

	Params::ABP_RangedWeapon_Base_C_OnBlendOut_F3D0A4AD4047BC9DAA021A835E0F07D5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.OnCompleted_F3D0A4AD4047BC9DAA021A835E0F07D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::OnCompleted_F3D0A4AD4047BC9DAA021A835E0F07D5(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "OnCompleted_F3D0A4AD4047BC9DAA021A835E0F07D5");

	Params::ABP_RangedWeapon_Base_C_OnCompleted_F3D0A4AD4047BC9DAA021A835E0F07D5_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FailedToFireFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::FailedToFireFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FailedToFireFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.BeamFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EndPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::BeamFeedback(const struct FVector& EndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "BeamFeedback");

	Params::ABP_RangedWeapon_Base_C_BeamFeedback_Params Parms{};

	Parms.EndPoint = EndPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.BeamFeedbackMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EndPoint                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::BeamFeedbackMulticast(const struct FVector& EndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "BeamFeedbackMulticast");

	Params::ABP_RangedWeapon_Base_C_BeamFeedbackMulticast_Params Parms{};

	Parms.EndPoint = EndPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.EndMontagesNonLocalMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MontageTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               HardCancel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HardCancelBlend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::EndMontagesNonLocalMulticast(const struct FGameplayTag& MontageTag, bool HardCancel, bool HardCancelBlend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "EndMontagesNonLocalMulticast");

	Params::ABP_RangedWeapon_Base_C_EndMontagesNonLocalMulticast_Params Parms{};

	Parms.MontageTag = MontageTag;
	Parms.HardCancel = HardCancel;
	Parms.HardCancelBlend = HardCancelBlend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.PlayMontagesNonLocalMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MontageTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::PlayMontagesNonLocalMulticast(const struct FGameplayTag& MontageTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "PlayMontagesNonLocalMulticast");

	Params::ABP_RangedWeapon_Base_C_PlayMontagesNonLocalMulticast_Params Parms{};

	Parms.MontageTag = MontageTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.PlayFPMontageWithNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::PlayFPMontageWithNotify(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage, double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "PlayFPMontageWithNotify");

	Params::ABP_RangedWeapon_Base_C_PlayFPMontageWithNotify_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.PlayMontageOnRoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::PlayMontageOnRoot(class UAnimMontage* Montage, double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "PlayMontageOnRoot");

	Params::ABP_RangedWeapon_Base_C_PlayMontageOnRoot_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.StartContinuousFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::StartContinuousFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "StartContinuousFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.StopContinuousFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::StopContinuousFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "StopContinuousFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::MeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "MeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ClearItemEffectsFromActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::ClearItemEffectsFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ClearItemEffectsFromActor");

	Params::ABP_RangedWeapon_Base_C_ClearItemEffectsFromActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ExecuteUbergraph_BP_RangedWeapon_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_EndPoint_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_EndPoint                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UsingAThirdPersonCamera_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_MontageTag_1                                  (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HardCancel                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HardCancelBlend                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_MontageTag                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMontageSetForAction_bFoundMontageSet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAbilityMontages            CallFunc_GetMontageSetForAction_MontageSetForAction              (None)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_CustomEvent_SkeletalMesh                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpreadComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::ExecuteUbergraph_BP_RangedWeapon_Base(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& K2Node_CustomEvent_EndPoint_1, const struct FVector& K2Node_CustomEvent_EndPoint, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class FName Temp_name_Variable_1, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_MontageTag_1, bool K2Node_CustomEvent_HardCancel, bool K2Node_CustomEvent_HardCancelBlend, bool CallFunc_GetAttachParentChar_bSuccess_1, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_MontageTag, bool CallFunc_GetAttachParentChar_bSuccess_2, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent_2, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_IsLocallyControlled_ReturnValue_2, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, class FName K2Node_CustomEvent_NotifyName_5, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class USkeletalMeshComponent* K2Node_CustomEvent_SkeletalMesh, class UAnimMontage* K2Node_CustomEvent_Montage_1, double K2Node_CustomEvent_PlayRate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAnimMontage* K2Node_CustomEvent_Montage, double K2Node_CustomEvent_PlayRate, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AActor* K2Node_Event_Actor, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class USpreadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ExecuteUbergraph_BP_RangedWeapon_Base");

	Params::ABP_RangedWeapon_Base_C_ExecuteUbergraph_BP_RangedWeapon_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CustomEvent_EndPoint_1 = K2Node_CustomEvent_EndPoint_1;
	Parms.K2Node_CustomEvent_EndPoint = K2Node_CustomEvent_EndPoint;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UsingAThirdPersonCamera_ReturnValue = CallFunc_UsingAThirdPersonCamera_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue_1 = CallFunc_GetSkeletalMeshAsset_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.K2Node_CustomEvent_MontageTag_1 = K2Node_CustomEvent_MontageTag_1;
	Parms.K2Node_CustomEvent_HardCancel = K2Node_CustomEvent_HardCancel;
	Parms.K2Node_CustomEvent_HardCancelBlend = K2Node_CustomEvent_HardCancelBlend;
	Parms.CallFunc_GetAttachParentChar_bSuccess_1 = CallFunc_GetAttachParentChar_bSuccess_1;
	Parms.CallFunc_GetAttachParentChar_Parent_1 = CallFunc_GetAttachParentChar_Parent_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.K2Node_CustomEvent_MontageTag = K2Node_CustomEvent_MontageTag;
	Parms.CallFunc_GetAttachParentChar_bSuccess_2 = CallFunc_GetAttachParentChar_bSuccess_2;
	Parms.CallFunc_GetAttachParentChar_Parent_2 = CallFunc_GetAttachParentChar_Parent_2;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.CallFunc_GetMontageSetForAction_bFoundMontageSet = CallFunc_GetMontageSetForAction_bFoundMontageSet;
	Parms.CallFunc_GetMontageSetForAction_MontageSetForAction = CallFunc_GetMontageSetForAction_MontageSetForAction;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_SkeletalMesh = K2Node_CustomEvent_SkeletalMesh;
	Parms.K2Node_CustomEvent_Montage_1 = K2Node_CustomEvent_Montage_1;
	Parms.K2Node_CustomEvent_PlayRate_1 = K2Node_CustomEvent_PlayRate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetAttachParentActor_ReturnValue_1 = CallFunc_GetAttachParentActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast_1 = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.ReloadCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HardCancel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::ReloadCancelled__DelegateSignature(bool HardCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "ReloadCancelled__DelegateSignature");

	Params::ABP_RangedWeapon_Base_C_ReloadCancelled__DelegateSignature_Params Parms{};

	Parms.HardCancel = HardCancel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FPAnimNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::FPAnimNotify__DelegateSignature(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FPAnimNotify__DelegateSignature");

	Params::ABP_RangedWeapon_Base_C_FPAnimNotify__DelegateSignature_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FPAnimBlendOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_RangedWeapon_Base_C::FPAnimBlendOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FPAnimBlendOut__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RangedWeapon_Base.BP_RangedWeapon_Base_C.FPAnimEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RangedWeapon_Base_C::FPAnimEnded__DelegateSignature(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RangedWeapon_Base_C", "FPAnimEnded__DelegateSignature");

	Params::ABP_RangedWeapon_Base_C_FPAnimEnded__DelegateSignature_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}

}


