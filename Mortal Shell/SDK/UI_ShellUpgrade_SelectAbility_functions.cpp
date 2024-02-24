#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C
// (None)

class UClass* UUI_ShellUpgrade_SelectAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShellUpgrade_SelectAbility_C");

	return Clss;
}


// UI_ShellUpgrade_SelectAbility_C UI_ShellUpgrade_SelectAbility.Default__UI_ShellUpgrade_SelectAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShellUpgrade_SelectAbility_C* UUI_ShellUpgrade_SelectAbility_C::GetDefaultObj()
{
	static class UUI_ShellUpgrade_SelectAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShellUpgrade_SelectAbility_C*>(UUI_ShellUpgrade_SelectAbility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.UnlockHadernAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_UnlockAchievement                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Local_Values                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::UnlockHadernAchievement(bool Local_UnlockAchievement, const TArray<class FName>& Local_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "UnlockHadernAchievement");

	Params::UUI_ShellUpgrade_SelectAbility_C_UnlockHadernAchievement_Params Parms{};

	Parms.Local_UnlockAchievement = Local_UnlockAchievement;
	Parms.Local_Values = Local_Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.ShouldResetSuperStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::ShouldResetSuperStoneForm(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "ShouldResetSuperStoneForm");

	Params::UUI_ShellUpgrade_SelectAbility_C_ShouldResetSuperStoneForm_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.ShouldResetRiposteStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::ShouldResetRiposteStacks(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "ShouldResetRiposteStacks");

	Params::UUI_ShellUpgrade_SelectAbility_C_ShouldResetRiposteStacks_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.ShouldResetParryStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::ShouldResetParryStacks(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "ShouldResetParryStacks");

	Params::UUI_ShellUpgrade_SelectAbility_C_ShouldResetParryStacks_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.GetAbilityCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Glimpse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Glimpse_Out                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tar_Out                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::GetAbilityCost(int32 Glimpse, int32 Tar, int32* Glimpse_Out, int32* Tar_Out, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "GetAbilityCost");

	Params::UUI_ShellUpgrade_SelectAbility_C_GetAbilityCost_Params Parms{};

	Parms.Glimpse = Glimpse;
	Parms.Tar = Tar;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Glimpse_Out != nullptr)
		*Glimpse_Out = Parms.Glimpse_Out;

	if (Tar_Out != nullptr)
		*Tar_Out = Parms.Tar_Out;

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.RemoveGlimpses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::RemoveGlimpses(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "RemoveGlimpses");

	Params::UUI_ShellUpgrade_SelectAbility_C_RemoveGlimpses_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.RemoveTar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::RemoveTar(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "RemoveTar");

	Params::UUI_ShellUpgrade_SelectAbility_C_RemoveTar_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.AbilityCantBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::AbilityCantBuy(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "AbilityCantBuy");

	Params::UUI_ShellUpgrade_SelectAbility_C_AbilityCantBuy_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.AbilityAlreadySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::AbilityAlreadySelected(class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "AbilityAlreadySelected");

	Params::UUI_ShellUpgrade_SelectAbility_C_AbilityAlreadySelected_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.UpdateHadernAbilityDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetHadernSkillKeyFromSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::UpdateHadernAbilityDescription(class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "UpdateHadernAbilityDescription");

	Params::UUI_ShellUpgrade_SelectAbility_C_UpdateHadernAbilityDescription_Params Parms{};

	Parms.CallFunc_GetHadernSkillKeyFromSlot_ReturnValue = CallFunc_GetHadernSkillKeyFromSlot_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.UpdateHadernAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetHadernSkillKeyFromSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::UpdateHadernAbility(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetHadernSkillKeyFromSlot_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "UpdateHadernAbility");

	Params::UUI_ShellUpgrade_SelectAbility_C_UpdateHadernAbility_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHadernSkillKeyFromSlot_ReturnValue = CallFunc_GetHadernSkillKeyFromSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.SetTitleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_ShellUpgrade_SelectAbility_C::SetTitleText(enum class EArmorTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "SetTitleText");

	Params::UUI_ShellUpgrade_SelectAbility_C_SetTitleText_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.CreateAbilities
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Upgrades                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        Local_UpgradeName                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShellUpgradeData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAbilityCost_Glimpse_Out                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAbilityCost_Tar_Out                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::CreateAbilities(enum class Enum_HadernSkills HadernSlot, enum class EArmorTypes Shell, TArray<class FName>& Upgrades, class FName Local_UpgradeName, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Create_ReturnValue, const struct FShellUpgradeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_GetAbilityCost_Glimpse_Out, int32 CallFunc_GetAbilityCost_Tar_Out, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "CreateAbilities");

	Params::UUI_ShellUpgrade_SelectAbility_C_CreateAbilities_Params Parms{};

	Parms.HadernSlot = HadernSlot;
	Parms.Shell = Shell;
	Parms.Upgrades = Upgrades;
	Parms.Local_UpgradeName = Local_UpgradeName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetAbilityCost_Glimpse_Out = CallFunc_GetAbilityCost_Glimpse_Out;
	Parms.CallFunc_GetAbilityCost_Tar_Out = CallFunc_GetAbilityCost_Tar_Out;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.GetNavIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_ShellUpgrade_SelectAbility_C::GetNavIndex(int32 SelectedIndex, int32 Delta, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "GetNavIndex");

	Params::UUI_ShellUpgrade_SelectAbility_C_GetNavIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.NavSelectAbilityRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgrade_AbilityRow_C*Button                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Selected                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNavIndex_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::NavSelectAbilityRow(bool SkipSound, bool UseWidget, bool Hovering, bool CustomIndex, class UUI_ShellUpgrade_AbilityRow_C* Button, int32 Index, int32 Delta, bool Local_SkipSound, int32 Local_Delta, int32 Local_Index_Selected, bool Local_CustomIndex, bool Local_Hovering, bool Local_UseWidget, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNavIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Find_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "NavSelectAbilityRow");

	Params::UUI_ShellUpgrade_SelectAbility_C_NavSelectAbilityRow_Params Parms{};

	Parms.SkipSound = SkipSound;
	Parms.UseWidget = UseWidget;
	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_Index_Selected = Local_Index_Selected;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNavIndex_ReturnValue = CallFunc_GetNavIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.SetDataTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::SetDataTable(enum class EArmorTypes Shell, enum class EArmorTypes Temp_byte_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "SetDataTable");

	Params::UUI_ShellUpgrade_SelectAbility_C_SetDataTable_Params Parms{};

	Parms.Shell = Shell;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.OnOpen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Upgrades                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::OnOpen(enum class Enum_HadernSkills HadernSlot, enum class EArmorTypes Shell, TArray<class FName>& Upgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "OnOpen");

	Params::UUI_ShellUpgrade_SelectAbility_C_OnOpen_Params Parms{};

	Parms.HadernSlot = HadernSlot;
	Parms.Shell = Shell;
	Parms.Upgrades = Upgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.Nav_Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgrade_SelectAbility_C::Nav_Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "Nav_Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.Nav_Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgrade_SelectAbility_C::Nav_Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "Nav_Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.NavSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgrade_SelectAbility_C::NavSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "NavSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.OnRowHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellUpgrade_AbilityRow_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::OnRowHovered(class UUI_ShellUpgrade_AbilityRow_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "OnRowHovered");

	Params::UUI_ShellUpgrade_SelectAbility_C_OnRowHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.OnRowClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellUpgrade_AbilityRow_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::OnRowClicked(class UUI_ShellUpgrade_AbilityRow_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "OnRowClicked");

	Params::UUI_ShellUpgrade_SelectAbility_C_OnRowClicked_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgrade_SelectAbility_C::BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_ShellUpgrade_SelectAbility_C_BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.NavSelect_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgrade_SelectAbility_C::NavSelect_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "NavSelect_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgrade_SelectAbility.UI_ShellUpgrade_SelectAbility_C.ExecuteUbergraph_UI_ShellUpgrade_SelectAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HadernSkills       K2Node_CustomEvent_HadernSlot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_CustomEvent_Shell                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Upgrades                                      (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellUpgrade_AbilityRow_C*K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellUpgrade_AbilityRow_C*K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgrade_SelectAbility_C::ExecuteUbergraph_UI_ShellUpgrade_SelectAbility(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item, enum class Enum_HadernSkills K2Node_CustomEvent_HadernSlot, enum class EArmorTypes K2Node_CustomEvent_Shell, TArray<class FName>& K2Node_CustomEvent_Upgrades, bool CallFunc_IsValid_ReturnValue_1, class UUI_ShellUpgrade_AbilityRow_C* K2Node_CustomEvent_Widget_1, class UUI_ShellUpgrade_AbilityRow_C* CallFunc_Array_Get_Item_1, class UUI_ShellUpgrade_AbilityRow_C* K2Node_CustomEvent_Widget, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgrade_SelectAbility_C", "ExecuteUbergraph_UI_ShellUpgrade_SelectAbility");

	Params::UUI_ShellUpgrade_SelectAbility_C_ExecuteUbergraph_UI_ShellUpgrade_SelectAbility_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_HadernSlot = K2Node_CustomEvent_HadernSlot;
	Parms.K2Node_CustomEvent_Shell = K2Node_CustomEvent_Shell;
	Parms.K2Node_CustomEvent_Upgrades = K2Node_CustomEvent_Upgrades;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


