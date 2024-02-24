#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C
// (None)

class UClass* UUI_ShellUpgradeMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShellUpgradeMenu_C");

	return Clss;
}


// UI_ShellUpgradeMenu_C UI_ShellUpgradeMenu.Default__UI_ShellUpgradeMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShellUpgradeMenu_C* UUI_ShellUpgradeMenu_C::GetDefaultObj()
{
	static class UUI_ShellUpgradeMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShellUpgradeMenu_C*>(UUI_ShellUpgradeMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseMenu_OpenTrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::CloseMenu_OpenTrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseMenu_OpenTrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.IsHadernShellMaxedOut
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Maxed_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Maxed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::IsHadernShellMaxedOut(bool* Maxed_, bool Local_Maxed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "IsHadernShellMaxedOut");

	Params::UUI_ShellUpgradeMenu_C_IsHadernShellMaxedOut_Params Parms{};

	Parms.Local_Maxed = Local_Maxed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Maxed_ != nullptr)
		*Maxed_ = Parms.Maxed_;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetHadernAbilityEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_ShellUpgradeMenu_C::GetHadernAbilityEffect(const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetHadernAbilityEffect");

	Params::UUI_ShellUpgradeMenu_C_GetHadernAbilityEffect_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetDualSenseAudioSpawnLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::GetDualSenseAudioSpawnLoc(struct FVector* Location, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetDualSenseAudioSpawnLoc");

	Params::UUI_ShellUpgradeMenu_C_GetDualSenseAudioSpawnLoc_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "HandleScale");

	Params::UUI_ShellUpgradeMenu_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ResetHadernPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ResetHadernPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ResetHadernPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetAbilityDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsShellNameKnown_bUnlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::SetAbilityDescription(bool CallFunc_IsShellNameKnown_bUnlocked, bool CallFunc_IsShellNameKnown_bUnlocked_1, bool CallFunc_IsShellNameKnown_bUnlocked_2, bool CallFunc_IsShellNameKnown_bUnlocked_3, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetAbilityDescription");

	Params::UUI_ShellUpgradeMenu_C_SetAbilityDescription_Params Parms{};

	Parms.CallFunc_IsShellNameKnown_bUnlocked = CallFunc_IsShellNameKnown_bUnlocked;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_1 = CallFunc_IsShellNameKnown_bUnlocked_1;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_2 = CallFunc_IsShellNameKnown_bUnlocked_2;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_3 = CallFunc_IsShellNameKnown_bUnlocked_3;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UpdateHadernAbilityDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CanAssign                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Local_NoAbilityText                                              (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetHadernAbilityTextFromSlot_Text                       (None)
// class FText                        CallFunc_GetHadernAbilityEffect_ReturnValue                      (None)
// class FText                        CallFunc_GetHadernAbilityEffect_ReturnValue_1                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class Enum_HadernSkills       CallFunc_CanAssignAbilityToHadernSlot_HadernSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAssignAbilityToHadernSlot_CanAssign                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_CanAssignAbilityToHadernSlot_Shell                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanAssignAbilityToHadernSlot_Upgrades                   (ReferenceParm, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_IsHadernShellSlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShell_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::UpdateHadernAbilityDesc(enum class Enum_HadernSkills Local_Slot, class FName Local_Ability, bool Local_CanAssign, class FText Local_NoAbilityText, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID, class FText CallFunc_GetHadernAbilityTextFromSlot_Text, class FText CallFunc_GetHadernAbilityEffect_ReturnValue, class FText CallFunc_GetHadernAbilityEffect_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class Enum_HadernSkills CallFunc_CanAssignAbilityToHadernSlot_HadernSlot, bool CallFunc_CanAssignAbilityToHadernSlot_CanAssign, enum class EArmorTypes CallFunc_CanAssignAbilityToHadernSlot_Shell, TArray<class FName>& CallFunc_CanAssignAbilityToHadernSlot_Upgrades, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_IsHadernShellSlot_ReturnValue, bool CallFunc_IsHadernShell_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UpdateHadernAbilityDesc");

	Params::UUI_ShellUpgradeMenu_C_UpdateHadernAbilityDesc_Params Parms{};

	Parms.Local_Slot = Local_Slot;
	Parms.Local_Ability = Local_Ability;
	Parms.Local_CanAssign = Local_CanAssign;
	Parms.Local_NoAbilityText = Local_NoAbilityText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;
	Parms.CallFunc_GetHadernAbilityTextFromSlot_Text = CallFunc_GetHadernAbilityTextFromSlot_Text;
	Parms.CallFunc_GetHadernAbilityEffect_ReturnValue = CallFunc_GetHadernAbilityEffect_ReturnValue;
	Parms.CallFunc_GetHadernAbilityEffect_ReturnValue_1 = CallFunc_GetHadernAbilityEffect_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_HadernSlot = CallFunc_CanAssignAbilityToHadernSlot_HadernSlot;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_CanAssign = CallFunc_CanAssignAbilityToHadernSlot_CanAssign;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_Shell = CallFunc_CanAssignAbilityToHadernSlot_Shell;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_Upgrades = CallFunc_CanAssignAbilityToHadernSlot_Upgrades;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_IsHadernShellSlot_ReturnValue = CallFunc_IsHadernShellSlot_ReturnValue;
	Parms.CallFunc_IsHadernShell_ReturnValue = CallFunc_IsHadernShell_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_UI_Controller_OpenAbilitiesMenu_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernShellMaxedOut_Maxed_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_UI_Controller_OpenAbilitiesMenu_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsHadernShellMaxedOut_Maxed_, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_UI_Controller_OpenAbilitiesMenu_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_UI_Controller_OpenAbilitiesMenu_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsHadernShellMaxedOut_Maxed_ = CallFunc_IsHadernShellMaxedOut_Maxed_;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_VerticalBox_HadernContent_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernShellSlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShell_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_VerticalBox_HadernContent_Visibility(bool CallFunc_IsHadernShellSlot_ReturnValue, bool CallFunc_IsHadernShell_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_VerticalBox_HadernContent_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_VerticalBox_HadernContent_Visibility_Params Parms{};

	Parms.CallFunc_IsHadernShellSlot_ReturnValue = CallFunc_IsHadernShellSlot_ReturnValue;
	Parms.CallFunc_IsHadernShell_ReturnValue = CallFunc_IsHadernShell_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_HorizontalBox_MainPrompts_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_HorizontalBox_MainPrompts_Visibility(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_HorizontalBox_MainPrompts_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_HorizontalBox_MainPrompts_Visibility_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CanAssignAbilityToHadernSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanAssign                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Upgrades                                                         (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_TopLeftAbilities                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_TopRightAbilities                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_TopCenterAbilities                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_LastChanceAbilities                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_StoneStompAbilities                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_KickAbilities                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_CanAssign                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Local_TielAbilities                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_EredrimAbilities                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_SolomonAbilities                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_HarrosAbilities                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bUnlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_9                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::CanAssignAbilityToHadernSlot(enum class Enum_HadernSkills* HadernSlot, bool* CanAssign, enum class EArmorTypes* Shell, TArray<class FName>* Upgrades, const TArray<class FName>& Local_TopLeftAbilities, const TArray<class FName>& Local_TopRightAbilities, const TArray<class FName>& Local_TopCenterAbilities, const TArray<class FName>& Local_LastChanceAbilities, const TArray<class FName>& Local_StoneStompAbilities, const TArray<class FName>& Local_KickAbilities, bool Local_CanAssign, const TArray<class FName>& Local_TielAbilities, const TArray<class FName>& Local_EredrimAbilities, const TArray<class FName>& Local_SolomonAbilities, const TArray<class FName>& Local_HarrosAbilities, TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1, TArray<class FName>& K2Node_MakeArray_Array_2, TArray<class FName>& K2Node_MakeArray_Array_3, TArray<class FName>& K2Node_MakeArray_Array_4, TArray<class FName>& K2Node_MakeArray_Array_5, TArray<class FName>& K2Node_MakeArray_Array_6, TArray<class FName>& K2Node_MakeArray_Array_7, TArray<class FName>& K2Node_MakeArray_Array_8, bool CallFunc_IsShellNameKnown_bUnlocked, bool CallFunc_IsShellNameKnown_bUnlocked_1, bool CallFunc_IsShellNameKnown_bUnlocked_2, TArray<class FName>& K2Node_MakeArray_Array_9, bool CallFunc_IsShellNameKnown_bUnlocked_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CanAssignAbilityToHadernSlot");

	Params::UUI_ShellUpgradeMenu_C_CanAssignAbilityToHadernSlot_Params Parms{};

	Parms.Local_TopLeftAbilities = Local_TopLeftAbilities;
	Parms.Local_TopRightAbilities = Local_TopRightAbilities;
	Parms.Local_TopCenterAbilities = Local_TopCenterAbilities;
	Parms.Local_LastChanceAbilities = Local_LastChanceAbilities;
	Parms.Local_StoneStompAbilities = Local_StoneStompAbilities;
	Parms.Local_KickAbilities = Local_KickAbilities;
	Parms.Local_CanAssign = Local_CanAssign;
	Parms.Local_TielAbilities = Local_TielAbilities;
	Parms.Local_EredrimAbilities = Local_EredrimAbilities;
	Parms.Local_SolomonAbilities = Local_SolomonAbilities;
	Parms.Local_HarrosAbilities = Local_HarrosAbilities;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_IsShellNameKnown_bUnlocked = CallFunc_IsShellNameKnown_bUnlocked;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_1 = CallFunc_IsShellNameKnown_bUnlocked_1;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_2 = CallFunc_IsShellNameKnown_bUnlocked_2;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_3 = CallFunc_IsShellNameKnown_bUnlocked_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (HadernSlot != nullptr)
		*HadernSlot = Parms.HadernSlot;

	if (CanAssign != nullptr)
		*CanAssign = Parms.CanAssign;

	if (Shell != nullptr)
		*Shell = Parms.Shell;

	if (Upgrades != nullptr)
		*Upgrades = std::move(Parms.Upgrades);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Debug_NotEnoughCurrency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Debug_NotEnoughCurrency(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Debug_NotEnoughCurrency");

	Params::UUI_ShellUpgradeMenu_C_Debug_NotEnoughCurrency_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Debug_BuyingInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Debug_BuyingInProgress(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Debug_BuyingInProgress");

	Params::UUI_ShellUpgradeMenu_C_Debug_BuyingInProgress_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.IsHadernShellSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_ShellUpgradeMenu_C::IsHadernShellSlot(TArray<class UUI_ShellUpgradeButton_C*>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "IsHadernShellSlot");

	Params::UUI_ShellUpgradeMenu_C_IsHadernShellSlot_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UpdateSelectedAbilityWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::UpdateSelectedAbilityWidget(TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UpdateSelectedAbilityWidget");

	Params::UUI_ShellUpgradeMenu_C_UpdateSelectedAbilityWidget_Params Parms{};

	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.IsHadernShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_ShellUpgradeMenu_C::IsHadernShell(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "IsHadernShell");

	Params::UUI_ShellUpgradeMenu_C_IsHadernShell_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Debug_CanBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Debug_CanBuy(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Debug_CanBuy");

	Params::UUI_ShellUpgradeMenu_C_Debug_CanBuy_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Debug_AlreadyUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Debug_AlreadyUnlocked(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Debug_AlreadyUnlocked");

	Params::UUI_ShellUpgradeMenu_C_Debug_AlreadyUnlocked_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.HideAbilitiesDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::HideAbilitiesDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "HideAbilitiesDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Prompt_Close_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_Prompt_Close_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Prompt_Close_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_Prompt_Close_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Prompt_Navigate_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_Prompt_Navigate_Visibility(bool CallFunc_IsShellNameKnown_bKnown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Prompt_Navigate_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_Prompt_Navigate_Visibility_Params Parms{};

	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Prompt_Select_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernShellSlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShell_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_Prompt_Select_Visibility(bool CallFunc_IsHadernShellSlot_ReturnValue, bool CallFunc_IsHadernShell_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Prompt_Select_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_Prompt_Select_Visibility_Params Parms{};

	Parms.CallFunc_IsHadernShellSlot_ReturnValue = CallFunc_IsHadernShellSlot_ReturnValue;
	Parms.CallFunc_IsHadernShell_ReturnValue = CallFunc_IsHadernShell_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Prompt_Obtain_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_ShellUpgradeMenu_C::Get_Prompt_Obtain_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Prompt_Obtain_Visibility");

	Params::UUI_ShellUpgradeMenu_C_Get_Prompt_Obtain_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PauseAbilityMenuMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               K2Node_DynamicCast_AsAmbient_Sound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::PauseAbilityMenuMusic(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AAmbientSound* K2Node_DynamicCast_AsAmbient_Sound, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PauseAbilityMenuMusic");

	Params::UUI_ShellUpgradeMenu_C_PauseAbilityMenuMusic_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAmbient_Sound = K2Node_DynamicCast_AsAmbient_Sound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ResetMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::ResetMousePosition(bool KeyboardMode, bool CallFunc_IsInViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ResetMousePosition");

	Params::UUI_ShellUpgradeMenu_C_ResetMousePosition_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PlayCantBuyAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::PlayCantBuyAnim(TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PlayCantBuyAnim");

	Params::UUI_ShellUpgradeMenu_C_PlayCantBuyAnim_Params Parms{};

	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetGlyphDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Name                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShellUpgradeData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::SetGlyphDetails(class FName Local_Name, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetGlyphDetails");

	Params::UUI_ShellUpgradeMenu_C_SetGlyphDetails_Params Parms{};

	Parms.Local_Name = Local_Name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UpdateGlyphState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomShellKnown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShellKnown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUpgradeName_Upgrade                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCost_Tar                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCost_Glimpses                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::UpdateGlyphState(bool CustomShellKnown, bool ShellKnown, int32 Local_Index, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsShellNameKnown_bKnown, int32 CallFunc_GetShellBondingPoints_Points, bool K2Node_Select_Default, int32 CallFunc_GetNamedPCInt_Value, bool K2Node_Select_Default_1, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetUpgradeName_Upgrade, int32 CallFunc_GetCost_Tar, int32 CallFunc_GetCost_Glimpses, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UpdateGlyphState");

	Params::UUI_ShellUpgradeMenu_C_UpdateGlyphState_Params Parms{};

	Parms.CustomShellKnown = CustomShellKnown;
	Parms.ShellKnown = ShellKnown;
	Parms.Local_Index = Local_Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetUpgradeName_Upgrade = CallFunc_GetUpgradeName_Upgrade;
	Parms.CallFunc_GetCost_Tar = CallFunc_GetCost_Tar;
	Parms.CallFunc_GetCost_Glimpses = CallFunc_GetCost_Glimpses;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.HandleGameMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pause_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::HandleGameMusic(bool Pause_, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "HandleGameMusic");

	Params::UUI_ShellUpgradeMenu_C_HandleGameMusic_Params Parms{};

	Parms.Pause_ = Pause_;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UI_ShellUpgradeMenu_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               K2Node_DynamicCast_AsAmbient_Sound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::UI_ShellUpgradeMenu_AutoGenFunc(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AAmbientSound* K2Node_DynamicCast_AsAmbient_Sound, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UI_ShellUpgradeMenu_AutoGenFunc");

	Params::UUI_ShellUpgradeMenu_C_UI_ShellUpgradeMenu_AutoGenFunc_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAmbient_Sound = K2Node_DynamicCast_AsAmbient_Sound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PlayAbilityDescriptionFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::PlayAbilityDescriptionFadeIn(FDelegateProperty_ Event, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PlayAbilityDescriptionFadeIn");

	Params::UUI_ShellUpgradeMenu_C_PlayAbilityDescriptionFadeIn_Params Parms{};

	Parms.Event = Event;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.FadeInVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetDualSenseAudioSpawnLoc_Location                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::FadeInVO(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetDualSenseAudioSpawnLoc_Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "FadeInVO");

	Params::UUI_ShellUpgradeMenu_C_FadeInVO_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDualSenseAudioSpawnLoc_Location = CallFunc_GetDualSenseAudioSpawnLoc_Location;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ResetLorePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ResetLorePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ResetLorePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.StopActiveVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::StopActiveVO(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "StopActiveVO");

	Params::UUI_ShellUpgradeMenu_C_StopActiveVO_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavTop_Click
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavTop_Click(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavTop_Click");

	Params::UUI_ShellUpgradeMenu_C_NavTop_Click_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavTop_Right_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavTop_Right_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavTop_Right_Listen");

	Params::UUI_ShellUpgradeMenu_C_NavTop_Right_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavTop_Left_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavTop_Left_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavTop_Left_Listen");

	Params::UUI_ShellUpgradeMenu_C_NavTop_Left_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavTop_Unhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavTop_Unhover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavTop_Unhover");

	Params::UUI_ShellUpgradeMenu_C_NavTop_Unhover_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavTop_Hover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavTop_Hover(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavTop_Hover");

	Params::UUI_ShellUpgradeMenu_C_NavTop_Hover_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.FadeOutVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::FadeOutVO(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "FadeOutVO");

	Params::UUI_ShellUpgradeMenu_C_FadeOutVO_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PlayAbilityVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FShellUpgradeData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::PlayAbilityVO(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PlayAbilityVO");

	Params::UUI_ShellUpgradeMenu_C_PlayAbilityVO_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetDescriptionColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPressPreview                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLockedInPressPreview                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_ShellUpgradeMenu_C::GetDescriptionColor(bool IsPressPreview, bool IsLockedInPressPreview, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetDescriptionColor");

	Params::UUI_ShellUpgradeMenu_C_GetDescriptionColor_Params Parms{};

	Parms.IsPressPreview = IsPressPreview;
	Parms.IsLockedInPressPreview = IsLockedInPressPreview;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetGameInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::SetGameInstance(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetGameInstance");

	Params::UUI_ShellUpgradeMenu_C_SetGameInstance_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GiveEffigyOnNameUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::GiveEffigyOnNameUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GiveEffigyOnNameUnlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CheckForOrnateMask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::CheckForOrnateMask(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CheckForOrnateMask");

	Params::UUI_ShellUpgradeMenu_C_CheckForOrnateMask_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PlayFadeInMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::PlayFadeInMenu(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PlayFadeInMenu");

	Params::UUI_ShellUpgradeMenu_C_PlayFadeInMenu_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpper_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::NavUpper_Right(int32 Local_Index_Temp, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpper_Right");

	Params::UUI_ShellUpgradeMenu_C_NavUpper_Right_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UI_SoundChangeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::UI_SoundChangeTab(bool PlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UI_SoundChangeTab");

	Params::UUI_ShellUpgradeMenu_C_UI_SoundChangeTab_Params Parms{};

	Parms.PlaySound = PlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UpdateTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index_Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::UpdateTab(int32 Index_Tab, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UpdateTab");

	Params::UUI_ShellUpgradeMenu_C_UpdateTab_Params Parms{};

	Parms.Index_Tab = Index_Tab;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpper_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::NavUpper_Left(int32 Local_Index_Temp, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpper_Left");

	Params::UUI_ShellUpgradeMenu_C_NavUpper_Left_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FastTravel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::OnOpen(bool FastTravel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnOpen");

	Params::UUI_ShellUpgradeMenu_C_OnOpen_Params Parms{};

	Parms.FastTravel = FastTravel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetGameplayPC");

	Params::UUI_ShellUpgradeMenu_C_SetGameplayPC_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetShellName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)

class FText UUI_ShellUpgradeMenu_C::GetShellName(class FText CallFunc_GetShellName_ShellName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetShellName");

	Params::UUI_ShellUpgradeMenu_C_GetShellName_Params Parms{};

	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.UnlockNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        CallFunc_GetShellName_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class ABP_FancyNotification_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUI_ShellUpgradeMenu_C::UnlockNotify(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText CallFunc_GetShellName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FText K2Node_Select_Default, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "UnlockNotify");

	Params::UUI_ShellUpgradeMenu_C_UnlockNotify_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetShellName_ReturnValue = CallFunc_GetShellName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetUpgradeTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellName_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUI_ShellUpgradeMenu_C::SetUpgradeTitle(class FText Text, bool Unlocked, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText CallFunc_GetShellName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetUpgradeTitle");

	Params::UUI_ShellUpgradeMenu_C_SetUpgradeTitle_Params Parms{};

	Parms.Text = Text;
	Parms.Unlocked = Unlocked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetShellName_ReturnValue = CallFunc_GetShellName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetRunesLines
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgradeProgressLine_C*Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeProgressLine_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeProgressLine_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_ShellUpgradeMenu_C::GetRunesLines(int32 Index, class UUI_ShellUpgradeProgressLine_C** Output, TArray<class UUI_ShellUpgradeProgressLine_C*>& K2Node_MakeArray_Array, class UUI_ShellUpgradeProgressLine_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetRunesLines");

	Params::UUI_ShellUpgradeMenu_C_GetRunesLines_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Prompt_Obtain_SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Prompt_Obtain_SetOpacity(bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Prompt_Obtain_SetOpacity");

	Params::UUI_ShellUpgradeMenu_C_Prompt_Obtain_SetOpacity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::CloseMenu(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseMenu");

	Params::UUI_ShellUpgradeMenu_C_CloseMenu_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Prompt_Navigate_SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Prompt_Navigate_SetOpacity(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsShellNameKnown_bKnown, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Prompt_Navigate_SetOpacity");

	Params::UUI_ShellUpgradeMenu_C_Prompt_Navigate_SetOpacity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Sound_UI_BuyInProgress_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::Sound_UI_BuyInProgress_Stop(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Sound_UI_BuyInProgress_Stop");

	Params::UUI_ShellUpgradeMenu_C_Sound_UI_BuyInProgress_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Sound_UI_BuyInProgress_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_Spawn2DControllerSound_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::Sound_UI_BuyInProgress_Play(class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Sound_UI_BuyInProgress_Play");

	Params::UUI_ShellUpgradeMenu_C_Sound_UI_BuyInProgress_Play_Params Parms{};

	Parms.CallFunc_Spawn2DControllerSound_ReturnValue = CallFunc_Spawn2DControllerSound_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.StopHoldingEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipRunes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRunesLines_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgradeProgressLine_C*CallFunc_GetRunesLines_Output                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::StopHoldingEffect(bool SkipRunes, bool CallFunc_GetRunesLines_ReturnValue, class UUI_ShellUpgradeProgressLine_C* CallFunc_GetRunesLines_Output, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "StopHoldingEffect");

	Params::UUI_ShellUpgradeMenu_C_StopHoldingEffect_Params Parms{};

	Parms.SkipRunes = SkipRunes;
	Parms.CallFunc_GetRunesLines_ReturnValue = CallFunc_GetRunesLines_ReturnValue;
	Parms.CallFunc_GetRunesLines_Output = CallFunc_GetRunesLines_Output;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Sound_UI_BuyAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::Sound_UI_BuyAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Sound_UI_BuyAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Sound_UI_Nav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::Sound_UI_Nav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Sound_UI_Nav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Text_Glimpses_Current_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_ShellUpgradeMenu_C::Get_Text_Glimpses_Current_Text(int32 CallFunc_GetShellBondingPoints_Points, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Text_Glimpses_Current_Text");

	Params::UUI_ShellUpgradeMenu_C_Get_Text_Glimpses_Current_Text_Params Parms{};

	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Get_Text_Tar_Current_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_ShellUpgradeMenu_C::Get_Text_Tar_Current_Text(int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Get_Text_Tar_Current_Text");

	Params::UUI_ShellUpgradeMenu_C_Get_Text_Tar_Current_Text_Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetCurrentCurrencies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::SetCurrentCurrencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetCurrentCurrencies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavMouseReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NavIndex_Current                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavMouseReleased(int32 NavIndex_Current, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavMouseReleased");

	Params::UUI_ShellUpgradeMenu_C_NavMouseReleased_Params Parms{};

	Parms.NavIndex_Current = NavIndex_Current;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavMousePressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NavIndex_Current                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavMousePressed(int32 NavIndex_Current, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsShellNameKnown_bKnown, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavMousePressed");

	Params::UUI_ShellUpgradeMenu_C_NavMousePressed_Params Parms{};

	Parms.NavIndex_Current = NavIndex_Current;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavMouseHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NavIndex_Current                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavMouseHover(int32 NavIndex_Current, bool CallFunc_IsShellNameKnown_bKnown, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavMouseHover");

	Params::UUI_ShellUpgradeMenu_C_NavMouseHover_Params Parms{};

	Parms.NavIndex_Current = NavIndex_Current;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavRight(int32 Local_Index, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavRight");

	Params::UUI_ShellUpgradeMenu_C_NavRight_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavLeft(int32 Local_Index, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavLeft");

	Params::UUI_ShellUpgradeMenu_C_NavLeft_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavRightListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavRightListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavRightListen");

	Params::UUI_ShellUpgradeMenu_C_NavRightListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavLeftListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavLeftListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavLeftListen");

	Params::UUI_ShellUpgradeMenu_C_NavLeftListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavDown(int32 Local_Index, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavDown");

	Params::UUI_ShellUpgradeMenu_C_NavDown_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavUp(int32 Local_Index, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUp");

	Params::UUI_ShellUpgradeMenu_C_NavUp_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavDownListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 EventPressed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 EventReleased                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavDownListen(FDelegateProperty_ EventPressed, FDelegateProperty_ EventReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavDownListen");

	Params::UUI_ShellUpgradeMenu_C_NavDownListen_Params Parms{};

	Parms.EventPressed = EventPressed;
	Parms.EventReleased = EventReleased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 EventPressed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 EventReleased                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::NavUpListen(FDelegateProperty_ EventPressed, FDelegateProperty_ EventReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpListen");

	Params::UUI_ShellUpgradeMenu_C_NavUpListen_Params Parms{};

	Parms.EventPressed = EventPressed;
	Parms.EventReleased = EventReleased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.RemoveGlimpses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::RemoveGlimpses(bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "RemoveGlimpses");

	Params::UUI_ShellUpgradeMenu_C_RemoveGlimpses_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.RemoveTar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::RemoveTar(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Multiply_IntInt_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "RemoveTar");

	Params::UUI_ShellUpgradeMenu_C_RemoveTar_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmReleased_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::ConfirmReleased_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmReleased_Listen");

	Params::UUI_ShellUpgradeMenu_C_ConfirmReleased_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ClosePressed_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::ClosePressed_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ClosePressed_Listen");

	Params::UUI_ShellUpgradeMenu_C_ClosePressed_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmPressed_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::ConfirmPressed_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmPressed_Listen");

	Params::UUI_ShellUpgradeMenu_C_ConfirmPressed_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetCostColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_ShellUpgradeMenu_C::GetCostColor(bool Condition, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetCostColor");

	Params::UUI_ShellUpgradeMenu_C_GetCostColor_Params Parms{};

	Parms.Condition = Condition;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetCanBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Glimpses                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::SetCanBuy(int32 Glimpses, int32 Tar, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetShellBondingPoints_Points, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetCanBuy");

	Params::UUI_ShellUpgradeMenu_C_SetCanBuy_Params Parms{};

	Parms.Glimpses = Glimpses;
	Parms.Tar = Tar;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.StopBuyAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::StopBuyAnim(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "StopBuyAnim");

	Params::UUI_ShellUpgradeMenu_C_StopBuyAnim_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.PlayBuyAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 OnAnimFinished                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetRunesLines_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgradeProgressLine_C*CallFunc_GetRunesLines_Output                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::PlayBuyAnim(FDelegateProperty_ OnAnimFinished, bool CallFunc_GetRunesLines_ReturnValue, class UUI_ShellUpgradeProgressLine_C* CallFunc_GetRunesLines_Output, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "PlayBuyAnim");

	Params::UUI_ShellUpgradeMenu_C_PlayBuyAnim_Params Parms{};

	Parms.OnAnimFinished = OnAnimFinished;
	Parms.CallFunc_GetRunesLines_ReturnValue = CallFunc_GetRunesLines_ReturnValue;
	Parms.CallFunc_GetRunesLines_Output = CallFunc_GetRunesLines_Output;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ResetIconHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::ResetIconHighlight(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ResetIconHighlight");

	Params::UUI_ShellUpgradeMenu_C_ResetIconHighlight_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CircleOrder                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::GetButtons(bool CircleOrder, TArray<class UUI_ShellUpgradeButton_C*>* Array, bool Temp_bool_Variable, TArray<class UUI_ShellUpgradeButton_C*>& K2Node_MakeArray_Array, TArray<class UUI_ShellUpgradeButton_C*>& K2Node_MakeArray_Array_1, TArray<class UUI_ShellUpgradeButton_C*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetButtons");

	Params::UUI_ShellUpgradeMenu_C_GetButtons_Params Parms{};

	Parms.CircleOrder = CircleOrder;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetTableRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_DescPPTime                                                 (Edit, BlueprintVisible)
// bool                               Local_IsPPTime_                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_Upgrade                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UpgradeUnlocked                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_LockedInPP_                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Local_Lore                                                       (Edit, BlueprintVisible)
// class FText                        Local_Description                                                (Edit, BlueprintVisible)
// class FText                        Local_Title                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetDescriptionColor_SlateColor                          (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FShellUpgradeData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::GetTableRow(int32 Index, class FText Local_DescPPTime, bool Local_IsPPTime_, class FName Local_Upgrade, bool Local_UpgradeUnlocked, bool Local_LockedInPP_, class FText Local_Lore, class FText Local_Description, class FText Local_Title, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetDescriptionColor_SlateColor, class FText K2Node_Select_Default, bool Temp_bool_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetTableRow");

	Params::UUI_ShellUpgradeMenu_C_GetTableRow_Params Parms{};

	Parms.Index = Index;
	Parms.Local_DescPPTime = Local_DescPPTime;
	Parms.Local_IsPPTime_ = Local_IsPPTime_;
	Parms.Local_Upgrade = Local_Upgrade;
	Parms.Local_UpgradeUnlocked = Local_UpgradeUnlocked;
	Parms.Local_LockedInPP_ = Local_LockedInPP_;
	Parms.Local_Lore = Local_Lore;
	Parms.Local_Description = Local_Description;
	Parms.Local_Title = Local_Title;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDescriptionColor_SlateColor = CallFunc_GetDescriptionColor_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Lore                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Glimpses                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 DescriptionColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LockedInPressPreview                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_LockedPP                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 Local_Color                                                      (Edit, BlueprintVisible)
// int32                              Local_Tar                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Glimpses                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetCostColor_SlateColor                                 (None)
// struct FSlateColor                 CallFunc_GetCostColor_SlateColor_1                               (None)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::SetTexts(class FText Title, class FText Description, class FText Lore, int32 Glimpses, int32 Tar, bool Unlocked, const struct FSlateColor& DescriptionColor, bool LockedInPressPreview, bool Local_LockedPP, const struct FSlateColor& Local_Color, int32 Local_Tar, int32 Local_Glimpses, bool Local_Unlocked, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& CallFunc_GetCostColor_SlateColor, const struct FSlateColor& CallFunc_GetCostColor_SlateColor_1, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetTexts");

	Params::UUI_ShellUpgradeMenu_C_SetTexts_Params Parms{};

	Parms.Title = Title;
	Parms.Description = Description;
	Parms.Lore = Lore;
	Parms.Glimpses = Glimpses;
	Parms.Tar = Tar;
	Parms.Unlocked = Unlocked;
	Parms.DescriptionColor = DescriptionColor;
	Parms.LockedInPressPreview = LockedInPressPreview;
	Parms.Local_LockedPP = Local_LockedPP;
	Parms.Local_Color = Local_Color;
	Parms.Local_Tar = Local_Tar;
	Parms.Local_Glimpses = Local_Glimpses;
	Parms.Local_Unlocked = Local_Unlocked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCostColor_SlateColor = CallFunc_GetCostColor_SlateColor;
	Parms.CallFunc_GetCostColor_SlateColor_1 = CallFunc_GetCostColor_SlateColor_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.GetDataTableDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::GetDataTableDetails(bool Temp_bool_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, enum class EArmorTypes Temp_byte_Variable, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, class UDataTable* Temp_object_Variable_7, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, class UDataTable* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "GetDataTableDetails");

	Params::UUI_ShellUpgradeMenu_C_GetDataTableDetails_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetSelectedAbilityDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::SetSelectedAbilityDetails(TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetSelectedAbilityDetails");

	Params::UUI_ShellUpgradeMenu_C_SetSelectedAbilityDetails_Params Parms{};

	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.SetSkillTreeIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipOuterIconOpacity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipOuterIconOpacity                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_RowName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRunesLines_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgradeProgressLine_C*CallFunc_GetRunesLines_Output                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetUpgradesIcons_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::SetSkillTreeIcons(bool SkipOuterIconOpacity, bool Local_SkipOuterIconOpacity, bool Local_Unlocked, int32 Local_Index, class FName Local_RowName, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetRunesLines_ReturnValue, class UUI_ShellUpgradeProgressLine_C* CallFunc_GetRunesLines_Output, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsShellNameKnown_bKnown, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class FName CallFunc_Array_Get_Item, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UTexture2D* CallFunc_GetUpgradesIcons_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "SetSkillTreeIcons");

	Params::UUI_ShellUpgradeMenu_C_SetSkillTreeIcons_Params Parms{};

	Parms.SkipOuterIconOpacity = SkipOuterIconOpacity;
	Parms.Local_SkipOuterIconOpacity = Local_SkipOuterIconOpacity;
	Parms.Local_Unlocked = Local_Unlocked;
	Parms.Local_Index = Local_Index;
	Parms.Local_RowName = Local_RowName;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetRunesLines_ReturnValue = CallFunc_GetRunesLines_ReturnValue;
	Parms.CallFunc_GetRunesLines_Output = CallFunc_GetRunesLines_Output;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUpgradesIcons_ReturnValue = CallFunc_GetUpgradesIcons_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ClosePressedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ClosePressedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ClosePressedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FastTravelMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::OnOpenEvent(bool FastTravelMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnOpenEvent");

	Params::UUI_ShellUpgradeMenu_C_OnOpenEvent_Params Parms{};

	Parms.FastTravelMenu = FastTravelMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmPressedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ConfirmPressedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmPressedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BuyConfirmedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BuyConfirmedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BuyConfirmedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmReleasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ConfirmReleasedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmReleasedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmPressedListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ConfirmPressedListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmPressedListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ClosePressedListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ClosePressedListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ClosePressedListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ConfirmReleasedListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ConfirmReleasedListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ConfirmReleasedListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavDownListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavDownListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavDownListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavDownEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavDownEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavDownEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavLeftListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavLeftListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavLeftListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavLeftEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavLeftEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavLeftEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavRightListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavRightListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavRightListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavRightEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavRightEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavRightEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ResetShellNameAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::ResetShellNameAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ResetShellNameAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.StartListenInputs_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::StartListenInputs_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "StartListenInputs_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_C_BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnCloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpperLeft_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpperLeft_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpperLeft_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpperRight_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpperRight_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpperRight_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpperLeft_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpperLeft_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpperLeft_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpperRight_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpperRight_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpperRight_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavUpReleasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavUpReleasedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavUpReleasedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.NavDownReleasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::NavDownReleasedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "NavDownReleasedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BuyAbilityEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BuyAbilityEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BuyAbilityEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::OnButtonClicked(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnButtonClicked");

	Params::UUI_ShellUpgradeMenu_C_OnButtonClicked_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnButtonReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::OnButtonReleased(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnButtonReleased");

	Params::UUI_ShellUpgradeMenu_C_OnButtonReleased_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::OnButtonHovered(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnButtonHovered");

	Params::UUI_ShellUpgradeMenu_C_OnButtonHovered_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonPressed__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonPressed__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_C_BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonPressed__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonHovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_C_BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_3_OnTopNavButtonUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_3_OnTopNavButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeMenu_TopNav_K2Node_ComponentBoundEvent_3_OnTopNavButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.LorePanel_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::LorePanel_Open(class FText Text, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "LorePanel_Open");

	Params::UUI_ShellUpgradeMenu_C_LorePanel_Open_Params Parms{};

	Parms.Text = Text;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.LorePanel_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::LorePanel_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "LorePanel_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_4_OnFadeOutEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_4_OnFadeOutEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_4_OnFadeOutEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnAbilityDetailsAnimEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnAbilityDetailsAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnAbilityDetailsAnimEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_5_OnLorePanelClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_5_OnLorePanelClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_5_OnLorePanelClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_6_OnFadeInEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_6_OnFadeInEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "BndEvt__UI_ShellUpgradeLorePanel_K2Node_ComponentBoundEvent_6_OnFadeInEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnLorePanelDelayEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnLorePanelDelayEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnLorePanelDelayEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnKeyboardModeChanged_Set");

	Params::UUI_ShellUpgradeMenu_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OpenSelectAbility_Bind
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Upgrades                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_C::OpenSelectAbility_Bind(enum class Enum_HadernSkills HadernSlot, enum class EArmorTypes Shell, TArray<class FName>& Upgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OpenSelectAbility_Bind");

	Params::UUI_ShellUpgradeMenu_C_OpenSelectAbility_Bind_Params Parms{};

	Parms.HadernSlot = HadernSlot;
	Parms.Shell = Shell;
	Parms.Upgrades = Upgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OpenSelectAbility_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OpenSelectAbility_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OpenSelectAbility_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseSelectAbility_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::CloseSelectAbility_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseSelectAbility_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseSelectAbility_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::CloseSelectAbility_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseSelectAbility_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseSelectAbility_Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::CloseSelectAbility_Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseSelectAbility_Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.CloseSelectAbility_ConfirmEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::CloseSelectAbility_ConfirmEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "CloseSelectAbility_ConfirmEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OpenTrade_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OpenTrade_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OpenTrade_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.OpenTrade_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::OpenTrade_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "OpenTrade_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.ExecuteUbergraph_UI_ShellUpgradeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FastTravelMenu                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// enum class Enum_HadernSkills       CallFunc_CanAssignAbilityToHadernSlot_HadernSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAssignAbilityToHadernSlot_CanAssign                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_CanAssignAbilityToHadernSlot_Shell                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanAssignAbilityToHadernSlot_Upgrades                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array_1                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Index_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellUpgradeButton_C*>CallFunc_GetButtons_Array_2                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernShellSlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgradeButton_C*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShell_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// enum class Enum_HadernSkills       K2Node_CustomEvent_HadernSlot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_CustomEvent_Shell                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Upgrades                                      (ReferenceParm, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHadernShellMaxedOut_Maxed_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FShellUpgradeData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)

void UUI_ShellUpgradeMenu_C::ExecuteUbergraph_UI_ShellUpgradeMenu(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_SwitchEnum_CmpSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_CustomEvent_FastTravelMenu, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class Enum_HadernSkills CallFunc_CanAssignAbilityToHadernSlot_HadernSlot, bool CallFunc_CanAssignAbilityToHadernSlot_CanAssign, enum class EArmorTypes CallFunc_CanAssignAbilityToHadernSlot_Shell, TArray<class FName>& CallFunc_CanAssignAbilityToHadernSlot_Upgrades, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, int32 K2Node_CustomEvent_Index_2, int32 K2Node_CustomEvent_Index_1, TArray<class UUI_ShellUpgradeButton_C*>& CallFunc_GetButtons_Array_2, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_IsHadernShellSlot_ReturnValue, class FText K2Node_CustomEvent_Text, float K2Node_CustomEvent_Duration, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUI_ShellUpgradeButton_C* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_SwitchInteger_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_SwitchInteger_CmpSuccess_3, bool CallFunc_IsHadernShell_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, enum class Enum_HadernSkills K2Node_CustomEvent_HadernSlot, enum class EArmorTypes K2Node_CustomEvent_Shell, TArray<class FName>& K2Node_CustomEvent_Upgrades, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_IsHadernShellMaxedOut_Maxed_, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "ExecuteUbergraph_UI_ShellUpgradeMenu");

	Params::UUI_ShellUpgradeMenu_C_ExecuteUbergraph_UI_ShellUpgradeMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_FastTravelMenu = K2Node_CustomEvent_FastTravelMenu;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_HadernSlot = CallFunc_CanAssignAbilityToHadernSlot_HadernSlot;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_CanAssign = CallFunc_CanAssignAbilityToHadernSlot_CanAssign;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_Shell = CallFunc_CanAssignAbilityToHadernSlot_Shell;
	Parms.CallFunc_CanAssignAbilityToHadernSlot_Upgrades = CallFunc_CanAssignAbilityToHadernSlot_Upgrades;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array_1 = CallFunc_GetButtons_Array_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_Index_2 = K2Node_CustomEvent_Index_2;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.CallFunc_GetButtons_Array_2 = CallFunc_GetButtons_Array_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_IsHadernShellSlot_ReturnValue = CallFunc_IsHadernShellSlot_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_IsHadernShell_ReturnValue = CallFunc_IsHadernShell_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_HadernSlot = K2Node_CustomEvent_HadernSlot;
	Parms.K2Node_CustomEvent_Shell = K2Node_CustomEvent_Shell;
	Parms.K2Node_CustomEvent_Upgrades = K2Node_CustomEvent_Upgrades;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_IsHadernShellMaxedOut_Maxed_ = CallFunc_IsHadernShellMaxedOut_Maxed_;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu.UI_ShellUpgradeMenu_C.JustUnlockedName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_C::JustUnlockedName__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_C", "JustUnlockedName__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


