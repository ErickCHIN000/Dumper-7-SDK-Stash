#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiationComponent.RadiationComponent_C
// (None)

class UClass* URadiationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiationComponent_C");

	return Clss;
}


// RadiationComponent_C RadiationComponent.Default__RadiationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadiationComponent_C* URadiationComponent_C::GetDefaultObj()
{
	static class URadiationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadiationComponent_C*>(URadiationComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadiationComponent.RadiationComponent_C.UseFilter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MinusDur                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewDur                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Successful_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        JigRef                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerSlots            Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_GetPlayerRef_Player                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetItemByUID_Item                                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_InMainContainer_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContainerItemByInContainerIndex_Found_               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetContainerItemByInContainerIndex_FoundItem            (ContainsInstancedReference, HasGetValueTypeHash)
// double                             CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::UseFilter(double MinusDur, double* NewDur, bool* Successful_, class UBP_JigMultiplayer_C* JigRef, enum class EPlayerSlots Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "UseFilter");

	Params::URadiationComponent_C_UseFilter_Params Parms{};

	Parms.MinusDur = MinusDur;
	Parms.JigRef = JigRef;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPlayerRef_Player = CallFunc_GetPlayerRef_Player;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetItemByUID_Item = CallFunc_GetItemByUID_Item;
	Parms.CallFunc_GetItemByUID_Found = CallFunc_GetItemByUID_Found;
	Parms.CallFunc_GetItemByUID_InMainContainer_ = CallFunc_GetItemByUID_InMainContainer_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_Found_ = CallFunc_GetContainerItemByInContainerIndex_Found_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_FoundItem = CallFunc_GetContainerItemByInContainerIndex_FoundItem;
	Parms.CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur = CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDur != nullptr)
		*NewDur = Parms.NewDur;

	if (Successful_ != nullptr)
		*Successful_ = Parms.Successful_;

}


// Function RadiationComponent.RadiationComponent_C.DecreaseRadiation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ReduceAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnSound2D_VolumeMultiplier_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::DecreaseRadiation(double ReduceAmount, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue, float CallFunc_SpawnSound2D_VolumeMultiplier_ImplicitCast, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "DecreaseRadiation");

	Params::URadiationComponent_C_DecreaseRadiation_Params Parms{};

	Parms.ReduceAmount = ReduceAmount;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SpawnSound2D_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSound2D_VolumeMultiplier_ImplicitCast;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiationComponent.RadiationComponent_C.IncreaseRadiation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMedicalComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Player_C>K2Node_DynamicCast_AsBPI_Player_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::IncreaseRadiation(double Amount, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, class UMedicalComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "IncreaseRadiation");

	Params::URadiationComponent_C_IncreaseRadiation_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player = K2Node_DynamicCast_AsBPI_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Player_1 = K2Node_DynamicCast_AsBPI_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiationComponent.RadiationComponent_C.ApplyRadiationDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMedicalComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::ApplyRadiationDamage(class UMedicalComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "ApplyRadiationDamage");

	Params::URadiationComponent_C_ApplyRadiationDamage_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiationComponent.RadiationComponent_C.RadiationTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_UseFilter_NewDur                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseFilter_Successful_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UseFilter_NewDur_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseFilter_Successful__1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UseFilter_NewDur_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseFilter_Successful__2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UseFilter_NewDur_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseFilter_Successful__3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MpInteractInterface_C>K2Node_DynamicCast_AsBP_Mp_Interact_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_GetItemInfo_Info                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        CallFunc_GetItemInfo_RandomStatsConfig                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::RadiationTimer(double CallFunc_UseFilter_NewDur, bool CallFunc_UseFilter_Successful_, double CallFunc_UseFilter_NewDur_1, bool CallFunc_UseFilter_Successful__1, double CallFunc_UseFilter_NewDur_2, bool CallFunc_UseFilter_Successful__2, double CallFunc_UseFilter_NewDur_3, bool CallFunc_UseFilter_Successful__3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FFItemInfo& CallFunc_GetItemInfo_Info, const struct FS_RandomStatsConfig& CallFunc_GetItemInfo_RandomStatsConfig, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "RadiationTimer");

	Params::URadiationComponent_C_RadiationTimer_Params Parms{};

	Parms.CallFunc_UseFilter_NewDur = CallFunc_UseFilter_NewDur;
	Parms.CallFunc_UseFilter_Successful_ = CallFunc_UseFilter_Successful_;
	Parms.CallFunc_UseFilter_NewDur_1 = CallFunc_UseFilter_NewDur_1;
	Parms.CallFunc_UseFilter_Successful__1 = CallFunc_UseFilter_Successful__1;
	Parms.CallFunc_UseFilter_NewDur_2 = CallFunc_UseFilter_NewDur_2;
	Parms.CallFunc_UseFilter_Successful__2 = CallFunc_UseFilter_Successful__2;
	Parms.CallFunc_UseFilter_NewDur_3 = CallFunc_UseFilter_NewDur_3;
	Parms.CallFunc_UseFilter_Successful__3 = CallFunc_UseFilter_Successful__3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mp_Interact_Interface = K2Node_DynamicCast_AsBP_Mp_Interact_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemInfo_Info = CallFunc_GetItemInfo_Info;
	Parms.CallFunc_GetItemInfo_RandomStatsConfig = CallFunc_GetItemInfo_RandomStatsConfig;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiationComponent.RadiationComponent_C.ComponentLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::ComponentLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "ComponentLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.ComponentPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::ComponentPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "ComponentPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.UpdateRadiation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RadDeduct                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SelectRadDeduct_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::UpdateRadiation(double RadDeduct, bool SelectRadDeduct_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "UpdateRadiation");

	Params::URadiationComponent_C_UpdateRadiation_Params Parms{};

	Parms.RadDeduct = RadDeduct;
	Parms.SelectRadDeduct_ = SelectRadDeduct_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadiationComponent.RadiationComponent_C.CheckStats
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::CheckStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "CheckStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.UpdateGeiger
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::UpdateGeiger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "UpdateGeiger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.UpdateFilter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::UpdateFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "UpdateFilter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.Mask_Filter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URadiationComponent_C::Mask_Filter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "Mask_Filter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadiationComponent.RadiationComponent_C.ExecuteUbergraph_RadiationComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_RadDeduct                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SelectRadDeduct_                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UseFilter_NewDur                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseFilter_Successful_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadiationComponent_C::ExecuteUbergraph_RadiationComponent(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, double K2Node_CustomEvent_RadDeduct, bool K2Node_CustomEvent_SelectRadDeduct_, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, double CallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_UseFilter_NewDur, bool CallFunc_UseFilter_Successful_, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiationComponent_C", "ExecuteUbergraph_RadiationComponent");

	Params::URadiationComponent_C_ExecuteUbergraph_RadiationComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_RadDeduct = K2Node_CustomEvent_RadDeduct;
	Parms.K2Node_CustomEvent_SelectRadDeduct_ = K2Node_CustomEvent_SelectRadDeduct_;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_UseFilter_NewDur = CallFunc_UseFilter_NewDur;
	Parms.CallFunc_UseFilter_Successful_ = CallFunc_UseFilter_Successful_;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


