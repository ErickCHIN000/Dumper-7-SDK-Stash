#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_LuteAbility.Rune_LuteAbility_C
// (None)

class UClass* URune_LuteAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_LuteAbility_C");

	return Clss;
}


// Rune_LuteAbility_C Rune_LuteAbility.Default__Rune_LuteAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_LuteAbility_C* URune_LuteAbility_C::GetDefaultObj()
{
	static class URune_LuteAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_LuteAbility_C*>(URune_LuteAbility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_LuteAbility.Rune_LuteAbility_C.OnReachedMaxUses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LuteAbility_C::OnReachedMaxUses(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class Enum_LuteType Temp_byte_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_LuteAbilities_Params_Active_Uses_1, int32 CallFunc_LuteAbilities_Params_Active_Minutes_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "OnReachedMaxUses");

	Params::URune_LuteAbility_C_OnReachedMaxUses_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses_1 = CallFunc_LuteAbilities_Params_Active_Uses_1;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes_1 = CallFunc_LuteAbilities_Params_Active_Minutes_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.IncreaseUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_LuteAbility_C::IncreaseUse(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "IncreaseUse");

	Params::URune_LuteAbility_C_IncreaseUse_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.AddIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_UsesLeft                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_LuteAbility_C::AddIcon(int32 Local_UsesLeft, enum class Enum_LuteType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTexture2D* Temp_object_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default, int32 CallFunc_AddStatusIcon_IconID, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "AddIcon");

	Params::URune_LuteAbility_C_AddIcon_Params Parms{};

	Parms.Local_UsesLeft = Local_UsesLeft;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.RemoveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::RemoveIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "RemoveIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.HasLute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasIt                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_LuteType           Lute                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnablePassive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_ItemName                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Local_Lute                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_StormMode_GetEquippedLute_Lute                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LuteAbility_C::HasLute(bool* HasIt, enum class Enum_LuteType* Lute, bool* EnablePassive, class FName Local_ItemName, enum class Enum_LuteType Local_Lute, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNamedPCInt_Value, class FName CallFunc_StormMode_GetEquippedLute_Lute, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_CheckPlayerInventoryForItem_Success, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "HasLute");

	Params::URune_LuteAbility_C_HasLute_Params Parms{};

	Parms.Local_ItemName = Local_ItemName;
	Parms.Local_Lute = Local_Lute;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_StormMode_GetEquippedLute_Lute = CallFunc_StormMode_GetEquippedLute_Lute;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasIt != nullptr)
		*HasIt = Parms.HasIt;

	if (Lute != nullptr)
		*Lute = Parms.Lute;

	if (EnablePassive != nullptr)
		*EnablePassive = Parms.EnablePassive;

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.OnLuteChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::OnLuteChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "OnLuteChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.InitializeLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::InitializeLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "InitializeLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.OnLuteMusicPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::OnLuteMusicPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "OnLuteMusicPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.SimpleLute_HealTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::SimpleLute_HealTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "SimpleLute_HealTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.OnLuteMusicStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::OnLuteMusicStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "OnLuteMusicStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.LutePlay_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::LutePlay_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "LutePlay_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.LuteStop_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_LuteAbility_C::LuteStop_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "LuteStop_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_LuteAbility.Rune_LuteAbility_C.ExecuteUbergraph_Rune_LuteAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLute_HasIt                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_LuteType           CallFunc_HasLute_Lute                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLute_EnablePassive                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObjectStaggerImmunity_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune                             (HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_LuteAbility_C::ExecuteUbergraph_Rune_LuteAbility(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasLute_HasIt, enum class Enum_LuteType CallFunc_HasLute_Lute, bool CallFunc_HasLute_EnablePassive, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_SwitchEnum_CmpSuccess_1, class UBuffObjectStaggerImmunity_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GetImmediateRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_LuteAbility_C", "ExecuteUbergraph_Rune_LuteAbility");

	Params::URune_LuteAbility_C_ExecuteUbergraph_Rune_LuteAbility_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasLute_HasIt = CallFunc_HasLute_HasIt;
	Parms.CallFunc_HasLute_Lute = CallFunc_HasLute_Lute;
	Parms.CallFunc_HasLute_EnablePassive = CallFunc_HasLute_EnablePassive;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetImmediateRuneFromID_IsValid_ = CallFunc_GetImmediateRuneFromID_IsValid_;
	Parms.CallFunc_GetImmediateRuneFromID_Rune = CallFunc_GetImmediateRuneFromID_Rune;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


