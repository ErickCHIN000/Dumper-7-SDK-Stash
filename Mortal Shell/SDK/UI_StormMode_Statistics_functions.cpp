#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Statistics.UI_StormMode_Statistics_C
// (None)

class UClass* UUI_StormMode_Statistics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Statistics_C");

	return Clss;
}


// UI_StormMode_Statistics_C UI_StormMode_Statistics.Default__UI_StormMode_Statistics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Statistics_C* UUI_StormMode_Statistics_C::GetDefaultObj()
{
	static class UUI_StormMode_Statistics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Statistics_C*>(UUI_StormMode_Statistics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "GetSelectedCharacter");

	Params::UUI_StormMode_Statistics_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "GetVerticalIndex");

	Params::UUI_StormMode_Statistics_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SaveStormModeToDisk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Statistics_C::SaveStormModeToDisk(const class FString& String, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "SaveStormModeToDisk");

	Params::UUI_StormMode_Statistics_C_SaveStormModeToDisk_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.ResetRunData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveStormModeToDisk_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_StormModeRun_Data>Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Statistics_C::ResetRunData(bool* Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SaveStormModeToDisk_ReturnValue, TArray<struct FStruct_StormModeRun_Data>& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "ResetRunData");

	Params::UUI_StormMode_Statistics_C_ResetRunData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SaveStormModeToDisk_ReturnValue = CallFunc_SaveStormModeToDisk_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.AddTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_Statistics_PageButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Statistics_C::AddTabs(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_StormMode_Statistics_PageButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "AddTabs");

	Params::UUI_StormMode_Statistics_C_AddTabs_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PopulateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_Statistics_PageButton_C*Local_PageButton                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_StormModeRun_Data   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_SelectButton_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_SelectButton_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_StatisticsButton_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_Statistics_PageButton_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SetNumber_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::PopulateData(int32 Local_Index, class UUI_StormMode_Statistics_PageButton_C* Local_PageButton, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FStruct_StormModeRun_Data& CallFunc_Array_Get_Item, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StormMode_StatisticsButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_StormMode_Statistics_PageButton_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SetNumber_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "PopulateData");

	Params::UUI_StormMode_Statistics_C_PopulateData_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_PageButton = Local_PageButton;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectButton_self_CastInput = CallFunc_SelectButton_self_CastInput;
	Parms.CallFunc_SelectButton_self_CastInput_1 = CallFunc_SelectButton_self_CastInput_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetNumber_Index = CallFunc_SetNumber_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetRunData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::GetRunData(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "GetRunData");

	Params::UUI_StormMode_Statistics_C_GetRunData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PlayFadeOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 OnAnimEnd                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::PlayFadeOutAnim(FDelegateProperty_ OnAnimEnd, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "PlayFadeOutAnim");

	Params::UUI_StormMode_Statistics_C_PlayFadeOutAnim_Params Parms{};

	Parms.OnAnimEnd = OnAnimEnd;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.PlayFadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 OnAnimEnd                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::PlayFadeInAnim(FDelegateProperty_ OnAnimEnd, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "PlayFadeInAnim");

	Params::UUI_StormMode_Statistics_C_PlayFadeInAnim_Params Parms{};

	Parms.OnAnimEnd = OnAnimEnd;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.GetButtonsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_StatisticsButton_C*K2Node_DynamicCast_AsUI_Storm_Mode_Statistics_Button             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::GetButtonsArray(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_StormMode_StatisticsButton_C* K2Node_DynamicCast_AsUI_Storm_Mode_Statistics_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "GetButtonsArray");

	Params::UUI_StormMode_Statistics_C_GetButtonsArray_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Storm_Mode_Statistics_Button = K2Node_DynamicCast_AsUI_Storm_Mode_Statistics_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_Statistics_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_Statistics_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "SetParentWidget");

	Params::UUI_StormMode_Statistics_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "SetSeedManager");

	Params::UUI_StormMode_Statistics_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnCharacterSelected");

	Params::UUI_StormMode_Statistics_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnSettingConfirmed");

	Params::UUI_StormMode_Statistics_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnWeaponSelected");

	Params::UUI_StormMode_Statistics_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_Statistics_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnRiposteSelected");

	Params::UUI_StormMode_Statistics_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnButtonHovered");

	Params::UUI_StormMode_Statistics_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_Statistics_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "SetSaveGameRef");

	Params::UUI_StormMode_Statistics_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Statistics_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Statistics.UI_StormMode_Statistics_C.ExecuteUbergraph_UI_StormMode_Statistics
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SeedManager_C*           K2Node_Event_SeedManager                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName                                            (ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_Event_MapStateSaveGame                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName_MapState                                   (ZeroConstructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResetRunData_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Statistics_C::ExecuteUbergraph_UI_StormMode_Statistics(int32 EntryPoint, enum class EComboTypes K2Node_Event_Weapon, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Event_Value, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class EArmorTypes K2Node_Event_Character, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, class UWidget* K2Node_Event_Widget_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, enum class EComboTypes K2Node_Event_Weapon_1, enum class EArmorTypes K2Node_Event_Character_1, bool CallFunc_ResetRunData_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Statistics_C", "ExecuteUbergraph_UI_StormMode_Statistics");

	Params::UUI_StormMode_Statistics_C_ExecuteUbergraph_UI_StormMode_Statistics_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Riposte_1 = K2Node_Event_Riposte_1;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Event_SeedManager = K2Node_Event_SeedManager;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_SlotName = K2Node_Event_SlotName;
	Parms.K2Node_Event_MapStateSaveGame = K2Node_Event_MapStateSaveGame;
	Parms.K2Node_Event_SlotName_MapState = K2Node_Event_SlotName_MapState;
	Parms.K2Node_Event_Weapon_1 = K2Node_Event_Weapon_1;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;
	Parms.CallFunc_ResetRunData_Success = CallFunc_ResetRunData_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


