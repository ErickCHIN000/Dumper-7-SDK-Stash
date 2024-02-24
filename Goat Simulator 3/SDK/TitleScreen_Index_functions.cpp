#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleScreen_Index.TitleScreen_Index_C
// (None)

class UClass* UTitleScreen_Index_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreen_Index_C");

	return Clss;
}


// TitleScreen_Index_C TitleScreen_Index.Default__TitleScreen_Index_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleScreen_Index_C* UTitleScreen_Index_C::GetDefaultObj()
{
	static class UTitleScreen_Index_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreen_Index_C*>(UTitleScreen_Index_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleScreen_Index.TitleScreen_Index_C.GetGearInfoPanelContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::GetGearInfoPanelContainer(class UPanelWidget** Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "GetGearInfoPanelContainer");

	Params::UTitleScreen_Index_C_GetGearInfoPanelContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Panel != nullptr)
		*Panel = Parms.Panel;

}


// Function TitleScreen_Index.TitleScreen_Index_C.LoadButton_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyWorldCollections_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UTitleScreen_Index_C::LoadButton_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_HasMultipleLevels_Return, bool CallFunc_HasAnyWorldCollections_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "LoadButton_Visibility");

	Params::UTitleScreen_Index_C_LoadButton_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.CallFunc_HasAnyWorldCollections_ReturnValue = CallFunc_HasAnyWorldCollections_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButton_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UTitleScreen_Index_C::NewGameButton_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasMultipleLevels_Return, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "NewGameButton_Visibility");

	Params::UTitleScreen_Index_C_NewGameButton_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButton_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLastLoadedLevel_SlotIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastLoadedLevel_LevelDataID                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastLoadedLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UTitleScreen_Index_C::ContinueButton_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, int32 CallFunc_GetLastLoadedLevel_SlotIndex, const class FString& CallFunc_GetLastLoadedLevel_LevelDataID, bool CallFunc_GetLastLoadedLevel_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "ContinueButton_Visibility");

	Params::UTitleScreen_Index_C_ContinueButton_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetLastLoadedLevel_SlotIndex = CallFunc_GetLastLoadedLevel_SlotIndex;
	Parms.CallFunc_GetLastLoadedLevel_LevelDataID = CallFunc_GetLastLoadedLevel_LevelDataID;
	Parms.CallFunc_GetLastLoadedLevel_ReturnValue = CallFunc_GetLastLoadedLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.HasMultipleLevels
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDLCLevelData>       CallFunc_GetDLCLevelData_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::HasMultipleLevels(bool* Return, class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, TArray<struct FDLCLevelData>& CallFunc_GetDLCLevelData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "HasMultipleLevels");

	Params::UTitleScreen_Index_C_HasMultipleLevels_Params Parms{};

	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_GetDLCLevelData_ReturnValue = CallFunc_GetDLCLevelData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function TitleScreen_Index.TitleScreen_Index_C.UpdateVersionAndNatLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CachedNatType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetVersionString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetVersionString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UTitleScreen_Index_C::UpdateVersionAndNatLabel(const class FString& CachedNatType, const class FString& CallFunc_GetVersionString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetVersionString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "UpdateVersionAndNatLabel");

	Params::UTitleScreen_Index_C_UpdateVersionAndNatLabel_Params Parms{};

	Parms.CachedNatType = CachedNatType;
	Parms.CallFunc_GetVersionString_ReturnValue = CallFunc_GetVersionString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetVersionString_ReturnValue_1 = CallFunc_GetVersionString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.LoadButton_IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyWorldCollections_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayButton_IsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTitleScreen_Index_C::LoadButton_IsEnabled(bool CallFunc_HasMultipleLevels_Return, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_HasAnyWorldCollections_ReturnValue, bool CallFunc_PlayButton_IsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "LoadButton_IsEnabled");

	Params::UTitleScreen_Index_C_LoadButton_IsEnabled_Params Parms{};

	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_HasAnyWorldCollections_ReturnValue = CallFunc_HasAnyWorldCollections_ReturnValue;
	Parms.CallFunc_PlayButton_IsEnabled_ReturnValue = CallFunc_PlayButton_IsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButton_IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayButton_IsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTitleScreen_Index_C::NewGameButton_IsEnabled(bool CallFunc_HasMultipleLevels_Return, bool CallFunc_PlayButton_IsEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "NewGameButton_IsEnabled");

	Params::UTitleScreen_Index_C_NewGameButton_IsEnabled_Params Parms{};

	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.CallFunc_PlayButton_IsEnabled_ReturnValue = CallFunc_PlayButton_IsEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.SetLastOpenedMenuTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MenuTab                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetTopMenu_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TitleScreen_C*          K2Node_DynamicCast_AsUMG_Title_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::SetLastOpenedMenuTab(const struct FGameplayTag& MenuTab, class UGGMenuUserWidget* CallFunc_GetTopMenu_ReturnValue, class UUMG_TitleScreen_C* K2Node_DynamicCast_AsUMG_Title_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "SetLastOpenedMenuTab");

	Params::UTitleScreen_Index_C_SetLastOpenedMenuTab_Params Parms{};

	Parms.MenuTab = MenuTab;
	Parms.CallFunc_GetTopMenu_ReturnValue = CallFunc_GetTopMenu_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Title_Screen = K2Node_DynamicCast_AsUMG_Title_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.GetLastOpenedMenuTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                MenuTab                                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetTopMenu_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TitleScreen_C*          K2Node_DynamicCast_AsUMG_Title_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::GetLastOpenedMenuTab(struct FGameplayTag* MenuTab, class UGGMenuUserWidget* CallFunc_GetTopMenu_ReturnValue, class UUMG_TitleScreen_C* K2Node_DynamicCast_AsUMG_Title_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "GetLastOpenedMenuTab");

	Params::UTitleScreen_Index_C_GetLastOpenedMenuTab_Params Parms{};

	Parms.CallFunc_GetTopMenu_ReturnValue = CallFunc_GetTopMenu_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Title_Screen = K2Node_DynamicCast_AsUMG_Title_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuTab != nullptr)
		*MenuTab = std::move(Parms.MenuTab);

}


// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButton_IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayButton_IsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLastLoadedLevel_SlotIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastLoadedLevel_LevelDataID                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastLoadedLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTitleScreen_Index_C::ContinueButton_IsEnabled(class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_PlayButton_IsEnabled_ReturnValue, int32 CallFunc_GetLastLoadedLevel_SlotIndex, const class FString& CallFunc_GetLastLoadedLevel_LevelDataID, bool CallFunc_GetLastLoadedLevel_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "ContinueButton_IsEnabled");

	Params::UTitleScreen_Index_C_ContinueButton_IsEnabled_Params Parms{};

	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_PlayButton_IsEnabled_ReturnValue = CallFunc_PlayButton_IsEnabled_ReturnValue;
	Parms.CallFunc_GetLastLoadedLevel_SlotIndex = CallFunc_GetLastLoadedLevel_SlotIndex;
	Parms.CallFunc_GetLastLoadedLevel_LevelDataID = CallFunc_GetLastLoadedLevel_LevelDataID;
	Parms.CallFunc_GetLastLoadedLevel_ReturnValue = CallFunc_GetLastLoadedLevel_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButtonAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetOwningMenu_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TitleScreen_C*          K2Node_DynamicCast_AsUMG_Title_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedWorldCollectionSlot_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLastLoadedLevel_SlotIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastLoadedLevel_LevelDataID                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastLoadedLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLastLoadedLevel_SlotIndex_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastLoadedLevel_LevelDataID_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastLoadedLevel_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCLevelData               CallFunc_GetDLCLevelDataFromID_ReturnValue                       (None)
// bool                               CallFunc_SelectNewWorldCollection_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::ContinueButtonAction(class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, class UGGMenuUserWidget* CallFunc_GetOwningMenu_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UUMG_TitleScreen_C* K2Node_DynamicCast_AsUMG_Title_Screen, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedWorldCollectionSlot_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_1, int32 CallFunc_GetLastLoadedLevel_SlotIndex, const class FString& CallFunc_GetLastLoadedLevel_LevelDataID, bool CallFunc_GetLastLoadedLevel_ReturnValue, int32 CallFunc_GetLastLoadedLevel_SlotIndex_1, const class FString& CallFunc_GetLastLoadedLevel_LevelDataID_1, bool CallFunc_GetLastLoadedLevel_ReturnValue_1, const struct FDLCLevelData& CallFunc_GetDLCLevelDataFromID_ReturnValue, bool CallFunc_SelectNewWorldCollection_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "ContinueButtonAction");

	Params::UTitleScreen_Index_C_ContinueButtonAction_Params Parms{};

	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_GetOwningMenu_ReturnValue = CallFunc_GetOwningMenu_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Title_Screen = K2Node_DynamicCast_AsUMG_Title_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSelectedWorldCollectionSlot_ReturnValue = CallFunc_GetSelectedWorldCollectionSlot_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_1 = CallFunc_GetPlayerProgression_ReturnValue_1;
	Parms.CallFunc_GetLastLoadedLevel_SlotIndex = CallFunc_GetLastLoadedLevel_SlotIndex;
	Parms.CallFunc_GetLastLoadedLevel_LevelDataID = CallFunc_GetLastLoadedLevel_LevelDataID;
	Parms.CallFunc_GetLastLoadedLevel_ReturnValue = CallFunc_GetLastLoadedLevel_ReturnValue;
	Parms.CallFunc_GetLastLoadedLevel_SlotIndex_1 = CallFunc_GetLastLoadedLevel_SlotIndex_1;
	Parms.CallFunc_GetLastLoadedLevel_LevelDataID_1 = CallFunc_GetLastLoadedLevel_LevelDataID_1;
	Parms.CallFunc_GetLastLoadedLevel_ReturnValue_1 = CallFunc_GetLastLoadedLevel_ReturnValue_1;
	Parms.CallFunc_GetDLCLevelDataFromID_ReturnValue = CallFunc_GetDLCLevelDataFromID_ReturnValue;
	Parms.CallFunc_SelectNewWorldCollection_ReturnValue = CallFunc_SelectNewWorldCollection_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.InitGoOnlineButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUserOnline_IsCreatingLobby                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserOnline_IsInSplitScreen                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserOnline_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::InitGoOnlineButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUserOnline_IsCreatingLobby, bool CallFunc_IsUserOnline_IsInSplitScreen, bool CallFunc_IsUserOnline_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "InitGoOnlineButton");

	Params::UTitleScreen_Index_C_InitGoOnlineButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsUserOnline_IsCreatingLobby = CallFunc_IsUserOnline_IsCreatingLobby;
	Parms.CallFunc_IsUserOnline_IsInSplitScreen = CallFunc_IsUserOnline_IsInSplitScreen;
	Parms.CallFunc_IsUserOnline_ReturnValue = CallFunc_IsUserOnline_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.InitLoadButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UTitleScreen_Index_C::InitLoadButton(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_HasMultipleLevels_Return, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "InitLoadButton");

	Params::UTitleScreen_Index_C_InitLoadButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButtonAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetOwningMenu_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCLevelData               CallFunc_GetDLCLevelDataFromID_ReturnValue                       (None)
// class UUMG_TitleScreen_C*          K2Node_DynamicCast_AsUMG_Title_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMenuNavigationContext      CallFunc_MakeMenuNavigationContextStruct_ReturnValue             (None)
// bool                               CallFunc_RequestTabNavigation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFirstEmptyWorldCollectionSlot_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddAndSelectNewWorldCollection_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCreateAdditionalWorldCollection_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::NewGameButtonAction(class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, class UGGMenuUserWidget* CallFunc_GetOwningMenu_ReturnValue, const struct FDLCLevelData& CallFunc_GetDLCLevelDataFromID_ReturnValue, class UUMG_TitleScreen_C* K2Node_DynamicCast_AsUMG_Title_Screen, bool K2Node_DynamicCast_bSuccess, const struct FMenuNavigationContext& CallFunc_MakeMenuNavigationContextStruct_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, int32 CallFunc_GetFirstEmptyWorldCollectionSlot_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_1, bool CallFunc_AddAndSelectNewWorldCollection_ReturnValue, bool CallFunc_CanCreateAdditionalWorldCollection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "NewGameButtonAction");

	Params::UTitleScreen_Index_C_NewGameButtonAction_Params Parms{};

	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_GetOwningMenu_ReturnValue = CallFunc_GetOwningMenu_ReturnValue;
	Parms.CallFunc_GetDLCLevelDataFromID_ReturnValue = CallFunc_GetDLCLevelDataFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Title_Screen = K2Node_DynamicCast_AsUMG_Title_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeMenuNavigationContextStruct_ReturnValue = CallFunc_MakeMenuNavigationContextStruct_ReturnValue;
	Parms.CallFunc_RequestTabNavigation_ReturnValue = CallFunc_RequestTabNavigation_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetFirstEmptyWorldCollectionSlot_ReturnValue = CallFunc_GetFirstEmptyWorldCollectionSlot_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_1 = CallFunc_GetPlayerProgression_ReturnValue_1;
	Parms.CallFunc_AddAndSelectNewWorldCollection_ReturnValue = CallFunc_AddAndSelectNewWorldCollection_ReturnValue;
	Parms.CallFunc_CanCreateAdditionalWorldCollection_ReturnValue = CallFunc_CanCreateAdditionalWorldCollection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.Load Button Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RequestTabNavigation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMultipleLevels_Return                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestTabNavigation_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyWorldCollections_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::Load_Button_Action(bool CallFunc_RequestTabNavigation_ReturnValue, bool CallFunc_HasMultipleLevels_Return, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue_1, bool CallFunc_HasAnyWorldCollections_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Load Button Action");

	Params::UTitleScreen_Index_C_Load_Button_Action_Params Parms{};

	Parms.CallFunc_RequestTabNavigation_ReturnValue = CallFunc_RequestTabNavigation_ReturnValue;
	Parms.CallFunc_HasMultipleLevels_Return = CallFunc_HasMultipleLevels_Return;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_RequestTabNavigation_ReturnValue_1 = CallFunc_RequestTabNavigation_ReturnValue_1;
	Parms.CallFunc_HasAnyWorldCollections_ReturnValue = CallFunc_HasAnyWorldCollections_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.IsSocialMediaEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::IsSocialMediaEnabled(bool* Enabled, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "IsSocialMediaEnabled");

	Params::UTitleScreen_Index_C_IsSocialMediaEnabled_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function TitleScreen_Index.TitleScreen_Index_C.IsNewsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::IsNewsEnabled(bool* NewParam, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "IsNewsEnabled");

	Params::UTitleScreen_Index_C_IsNewsEnabled_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function TitleScreen_Index.TitleScreen_Index_C.UpdateGoOnlineButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUserOnline_IsCreatingLobby                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserOnline_IsInSplitScreen                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUserOnline_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::UpdateGoOnlineButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUserOnline_IsCreatingLobby, bool CallFunc_IsUserOnline_IsInSplitScreen, bool CallFunc_IsUserOnline_ReturnValue, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "UpdateGoOnlineButton");

	Params::UTitleScreen_Index_C_UpdateGoOnlineButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsUserOnline_IsCreatingLobby = CallFunc_IsUserOnline_IsCreatingLobby;
	Parms.CallFunc_IsUserOnline_IsInSplitScreen = CallFunc_IsUserOnline_IsInSplitScreen;
	Parms.CallFunc_IsUserOnline_ReturnValue = CallFunc_IsUserOnline_ReturnValue;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.SetHintBarVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::SetHintBarVisible(bool Visible, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "SetHintBarVisible");

	Params::UTitleScreen_Index_C_SetHintBarVisible_Params Parms{};

	Parms.Visible = Visible;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UTitleScreen_Index_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UWidget* K2Node_Select_Default, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnFocusReceived");

	Params::UTitleScreen_Index_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.HandleListNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSocialMediaEnabled_Enabled                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_NavigateList_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTitleScreen_Index_C::HandleListNavigation(enum class EUINavigation Navigation, bool CallFunc_IsSocialMediaEnabled_Enabled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UWidget* CallFunc_NavigateList_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "HandleListNavigation");

	Params::UTitleScreen_Index_C_HandleListNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsSocialMediaEnabled_Enabled = CallFunc_IsSocialMediaEnabled_Enabled;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.CallFunc_NavigateList_ReturnValue = CallFunc_NavigateList_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.Quit Button Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UTitleScreen_Index_C::Quit_Button_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Quit Button Visibility");

	Params::UTitleScreen_Index_C_Quit_Button_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnPlaytestAgreementAccepted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ButtonID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPopupResponse          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyValueBase               CallFunc_KeyValue_BoolToKeyValue_ReturnValue                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateKeyValueData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::OnPlaytestAgreementAccepted(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response, const struct FKeyValueBase& CallFunc_KeyValue_BoolToKeyValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_UpdateKeyValueData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnPlaytestAgreementAccepted");

	Params::UTitleScreen_Index_C_OnPlaytestAgreementAccepted_Params Parms{};

	Parms.ID = ID;
	Parms.Object = Object;
	Parms.ButtonID = ButtonID;
	Parms.Response = Response;
	Parms.CallFunc_KeyValue_BoolToKeyValue_ReturnValue = CallFunc_KeyValue_BoolToKeyValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_UpdateKeyValueData_ReturnValue = CallFunc_UpdateKeyValueData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.CreatePlaytestAgreement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPopupButton                K2Node_MakeStruct_PopupButton                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FPopupButton>        K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsPlayTestingBuild_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPopupDataRow               CallFunc_MakePopupDataRow_ReturnValue                            (None)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPopupUserWidget*          CallFunc_CreatePopupCustom_OutWidget                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatePopupCustom_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetKeyValueData_Found                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeyValueBase               CallFunc_GetKeyValueData_ReturnValue                             (None)
// bool                               CallFunc_KeyValue_KeyValueToBool_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::CreatePlaytestAgreement(const struct FPopupButton& K2Node_MakeStruct_PopupButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FPopupButton>& K2Node_MakeArray_Array, bool CallFunc_IsPlayTestingBuild_ReturnValue, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget, bool CallFunc_CreatePopupCustom_ReturnValue, bool CallFunc_GetKeyValueData_Found, const struct FKeyValueBase& CallFunc_GetKeyValueData_ReturnValue, bool CallFunc_KeyValue_KeyValueToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "CreatePlaytestAgreement");

	Params::UTitleScreen_Index_C_CreatePlaytestAgreement_Params Parms{};

	Parms.K2Node_MakeStruct_PopupButton = K2Node_MakeStruct_PopupButton;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsPlayTestingBuild_ReturnValue = CallFunc_IsPlayTestingBuild_ReturnValue;
	Parms.CallFunc_MakePopupDataRow_ReturnValue = CallFunc_MakePopupDataRow_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_CreatePopupCustom_OutWidget = CallFunc_CreatePopupCustom_OutWidget;
	Parms.CallFunc_CreatePopupCustom_ReturnValue = CallFunc_CreatePopupCustom_ReturnValue;
	Parms.CallFunc_GetKeyValueData_Found = CallFunc_GetKeyValueData_Found;
	Parms.CallFunc_GetKeyValueData_ReturnValue = CallFunc_GetKeyValueData_ReturnValue;
	Parms.CallFunc_KeyValue_KeyValueToBool_ReturnValue = CallFunc_KeyValue_KeyValueToBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.NavigationNewsWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSocialMediaEnabled_Enabled                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTitleScreen_Index_C::NavigationNewsWidget(enum class EUINavigation Navigation, bool CallFunc_IsSocialMediaEnabled_Enabled, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "NavigationNewsWidget");

	Params::UTitleScreen_Index_C_NavigationNewsWidget_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsSocialMediaEnabled_Enabled = CallFunc_IsSocialMediaEnabled_Enabled;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_1 = CallFunc_GetInitialWidgetFocus_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.NavigationSocialMediaWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UTitleScreen_Index_C::NavigationSocialMediaWidget(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "NavigationSocialMediaWidget");

	Params::UTitleScreen_Index_C_NavigationSocialMediaWidget_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.DetermineWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MenuTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::DetermineWidgetVisibility(const struct FGameplayTag& MenuTag, bool Temp_bool_Variable, bool CallFunc_MatchesTag_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "DetermineWidgetVisibility");

	Params::UTitleScreen_Index_C_DetermineWidgetVisibility_Params Parms{};

	Parms.MenuTag = MenuTag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.PlayButton_IsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsForcedAlwaysOnline_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTitleScreen_Index_C::PlayButton_IsEnabled(bool CallFunc_IsForcedAlwaysOnline_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "PlayButton_IsEnabled");

	Params::UTitleScreen_Index_C_PlayButton_IsEnabled_Params Parms{};

	Parms.CallFunc_IsForcedAlwaysOnline_ReturnValue = CallFunc_IsForcedAlwaysOnline_ReturnValue;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.InLobby_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UTitleScreen_Index_C::InLobby_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "InLobby_Visibility");

	Params::UTitleScreen_Index_C_InLobby_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnTabNavigation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGMenuComponent*            CallFunc_GetGGMenuComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnTabNavigation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActivePopup_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UTitleScreen_Index_C::OnTabNavigation(const struct FGameplayTag& InTag, const struct FMenuNavigationContext& Context, class UGGMenuComponent* CallFunc_GetGGMenuComponent_ReturnValue, bool CallFunc_OnTabNavigation_ReturnValue, bool CallFunc_HasActivePopup_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnTabNavigation");

	Params::UTitleScreen_Index_C_OnTabNavigation_Params Parms{};

	Parms.InTag = InTag;
	Parms.Context = Context;
	Parms.CallFunc_GetGGMenuComponent_ReturnValue = CallFunc_GetGGMenuComponent_ReturnValue;
	Parms.CallFunc_OnTabNavigation_ReturnValue = CallFunc_OnTabNavigation_ReturnValue;
	Parms.CallFunc_HasActivePopup_ReturnValue = CallFunc_HasActivePopup_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetLastOpenedMenuTab_MenuTab                            (NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadButton_IsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetLastOpenedMenuTab_MenuTab_1                          (NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetLastOpenedMenuTab_MenuTab_2                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetLastOpenedMenuTab_MenuTab_3                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContinueButton_IsEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NewGameButton_IsEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_5                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_6                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayButton_IsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_7                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTitleScreen_Index_C::GetInitialWidgetFocus(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FGameplayTag& CallFunc_GetLastOpenedMenuTab_MenuTab, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_LoadButton_IsEnabled_ReturnValue, const struct FGameplayTag& CallFunc_GetLastOpenedMenuTab_MenuTab_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_GetLastOpenedMenuTab_MenuTab_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_GetLastOpenedMenuTab_MenuTab_3, bool CallFunc_ContinueButton_IsEnabled_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_3, bool CallFunc_NewGameButton_IsEnabled_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_2, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_3, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_4, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_5, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_6, bool CallFunc_PlayButton_IsEnabled_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_7, class UWidget* K2Node_Select_Default_2, class UWidget* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "GetInitialWidgetFocus");

	Params::UTitleScreen_Index_C_GetInitialWidgetFocus_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetLastOpenedMenuTab_MenuTab = CallFunc_GetLastOpenedMenuTab_MenuTab;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_LoadButton_IsEnabled_ReturnValue = CallFunc_LoadButton_IsEnabled_ReturnValue;
	Parms.CallFunc_GetLastOpenedMenuTab_MenuTab_1 = CallFunc_GetLastOpenedMenuTab_MenuTab_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_1 = CallFunc_GetInitialWidgetFocus_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_GetLastOpenedMenuTab_MenuTab_2 = CallFunc_GetLastOpenedMenuTab_MenuTab_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_2 = CallFunc_EqualEqual_GameplayTag_ReturnValue_2;
	Parms.CallFunc_GetLastOpenedMenuTab_MenuTab_3 = CallFunc_GetLastOpenedMenuTab_MenuTab_3;
	Parms.CallFunc_ContinueButton_IsEnabled_ReturnValue = CallFunc_ContinueButton_IsEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_3 = CallFunc_EqualEqual_GameplayTag_ReturnValue_3;
	Parms.CallFunc_NewGameButton_IsEnabled_ReturnValue = CallFunc_NewGameButton_IsEnabled_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_2 = CallFunc_GetInitialWidgetFocus_ReturnValue_2;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_3 = CallFunc_GetInitialWidgetFocus_ReturnValue_3;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_4 = CallFunc_GetInitialWidgetFocus_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_5 = CallFunc_GetInitialWidgetFocus_ReturnValue_5;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_6 = CallFunc_GetInitialWidgetFocus_ReturnValue_6;
	Parms.CallFunc_PlayButton_IsEnabled_ReturnValue = CallFunc_PlayButton_IsEnabled_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_7 = CallFunc_GetInitialWidgetFocus_ReturnValue_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnActionMappingPressed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActionMappingPressed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNewsEnabled_NewParam                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTitleScreen_Index_C::OnActionMappingPressed(class FName ActionName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_OnActionMappingPressed_ReturnValue, bool CallFunc_IsNewsEnabled_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnActionMappingPressed");

	Params::UTitleScreen_Index_C_OnActionMappingPressed_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_OnActionMappingPressed_ReturnValue = CallFunc_OnActionMappingPressed_ReturnValue;
	Parms.CallFunc_IsNewsEnabled_NewParam = CallFunc_IsNewsEnabled_NewParam;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_25E8D8384799F047F57536B275DFDFBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::OnLoaded_25E8D8384799F047F57536B275DFDFBB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnLoaded_25E8D8384799F047F57536B275DFDFBB");

	Params::UTitleScreen_Index_C_OnLoaded_25E8D8384799F047F57536B275DFDFBB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_9B4745484F9C3CA1779A29B11A2457C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::OnLoaded_9B4745484F9C3CA1779A29B11A2457C7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnLoaded_9B4745484F9C3CA1779A29B11A2457C7");

	Params::UTitleScreen_Index_C_OnLoaded_9B4745484F9C3CA1779A29B11A2457C7_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_3A8D1984482A1E9F034C538B23E76D64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::OnLoaded_3A8D1984482A1E9F034C538B23E76D64(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnLoaded_3A8D1984482A1E9F034C538B23E76D64");

	Params::UTitleScreen_Index_C_OnLoaded_3A8D1984482A1E9F034C538B23E76D64_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "PreConstruct");

	Params::UTitleScreen_Index_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.ShowTitleScreenWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::ShowTitleScreenWidget(const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "ShowTitleScreenWidget");

	Params::UTitleScreen_Index_C_ShowTitleScreenWidget_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnMenuEntered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::OnMenuEntered(const struct FGameplayTag& InTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnMenuEntered");

	Params::UTitleScreen_Index_C_OnMenuEntered_Params Parms{};

	Parms.InTag = InTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.PlayStartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreen_Index_C::PlayStartAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "PlayStartAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnMenuExited
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::OnMenuExited(const struct FGameplayTag& InTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnMenuExited");

	Params::UTitleScreen_Index_C_OnMenuExited_Params Parms{};

	Parms.InTag = InTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Tick");

	Params::UTitleScreen_Index_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleScreen_Index_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen_Index.TitleScreen_Index_C.Preparation Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccess                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::Preparation_Complete(bool bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Preparation Complete");

	Params::UTitleScreen_Index_C_Preparation_Complete_Params Parms{};

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleScreen_Index_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen_Index.TitleScreen_Index_C.SetPlayerGameData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGPlayerGameDataAsset*      PlayerGameData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::SetPlayerGameData(class UGGPlayerGameDataAsset* PlayerGameData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "SetPlayerGameData");

	Params::UTitleScreen_Index_C_SetPlayerGameData_Params Parms{};

	Parms.PlayerGameData = PlayerGameData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreen_Index_C::BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature");

	Params::UTitleScreen_Index_C_BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnActivityIntentReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreen_Index_C::OnActivityIntentReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnActivityIntentReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnNatTypeUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGGCachedNATType        NATType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::OnNatTypeUpdated(enum class EGGCachedNATType NATType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnNatTypeUpdated");

	Params::UTitleScreen_Index_C_OnNatTypeUpdated_Params Parms{};

	Parms.NATType = NATType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.OnLobbyJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreen_Index_C::OnLobbyJoined(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "OnLobbyJoined");

	Params::UTitleScreen_Index_C_OnLobbyJoined_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.ExecuteUbergraph_TitleScreen_Index
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_7                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_7                            (None)
// struct FMenuNavigationContext      K2Node_CustomEvent_Context                                       (None)
// struct FGameplayTag                K2Node_Event_InTag_1                                             (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_Event_Context_1                                           (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_6                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_6                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_5                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_5                            (None)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_4                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_4                            (None)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_3                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_3                            (None)
// bool                               CallFunc_RequestTabNavigation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestTabNavigation_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_ComponentBoundEvent_InVisibility                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_InTag                                               (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_Event_Context                                             (None)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_2                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_2                            (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGameUserSettings*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent_1                        (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent_1                            (None)
// class UGGPlayerGameDataAsset*      K2Node_Event_PlayerGameData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_ComponentBoundEvent_PointerEvent                          (None)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent                              (None)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGGCachedNATType        K2Node_CustomEvent_NATType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CachedNATTypeString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      CallFunc_MakeMenuNavigationContextStruct_ReturnValue             (None)
// bool                               CallFunc_RequestTabNavigation_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CachedNATTypeString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class UGGDLCHandler*               CallFunc_GetDLCHandler_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDLCLevelData>       CallFunc_GetDLCLevelData_ReturnValue                             (ReferenceParm)
// struct FDLCLevelData               CallFunc_Array_Get_Item                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_MakeSoftObjectPath_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue                (UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGPlayerWorldAreaDataAsset* K2Node_DynamicCast_AsGGPlayer_World_Area_Data_Asset              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetSlotsClaimedByProvider_ReturnValue                   (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldStats                 CallFunc_GetWorldStatsForWorld_ReturnValue                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetMostRelevantArea_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetThumbnailForArea_ReturnValue                         (UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleScreen_Index_C::ExecuteUbergraph_TitleScreen_Index(int32 EntryPoint, class UObject* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_7, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_7, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_7, const struct FMenuNavigationContext& K2Node_CustomEvent_Context, const struct FGameplayTag& K2Node_Event_InTag_1, const struct FMenuNavigationContext& K2Node_Event_Context_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UObject* Temp_object_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_6, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_6, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_6, int32 CallFunc_Add_IntInt_ReturnValue, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_5, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_5, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_5, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_4, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_4, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_4, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_3, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_3, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_3, bool CallFunc_RequestTabNavigation_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue_1, enum class ESlateVisibility K2Node_ComponentBoundEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTag& K2Node_Event_InTag, const struct FMenuNavigationContext& K2Node_Event_Context, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_2, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_2, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGGGameUserSettings* CallFunc_Get_ReturnValue, bool K2Node_CustomEvent_bWasSuccess, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget_1, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent_1, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent_1, class UGGPlayerGameDataAsset* K2Node_Event_PlayerGameData, class UGGUserWidget* K2Node_ComponentBoundEvent_Widget, const struct FPointerEvent& K2Node_ComponentBoundEvent_PointerEvent, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_Not_PreBool_ReturnValue, enum class EGGCachedNATType K2Node_CustomEvent_NATType, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_CachedNATTypeString_ReturnValue, const struct FMenuNavigationContext& CallFunc_MakeMenuNavigationContextStruct_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue_2, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_2, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_CachedNATTypeString_ReturnValue_1, class UGGDLCHandler* CallFunc_GetDLCHandler_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, TArray<struct FDLCLevelData>& CallFunc_GetDLCLevelData_ReturnValue, const struct FDLCLevelData& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue, const struct FSoftObjectPath& CallFunc_MakeSoftObjectPath_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_2, class UGGPlayerWorldAreaDataAsset* K2Node_DynamicCast_AsGGPlayer_World_Area_Data_Asset, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_1, TArray<int32>& CallFunc_GetSlotsClaimedByProvider_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Get_Item_1, const struct FWorldStats& CallFunc_GetWorldStatsForWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& CallFunc_GetMostRelevantArea_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetThumbnailForArea_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_4, bool K2Node_CustomEvent_bSuccess, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "ExecuteUbergraph_TitleScreen_Index");

	Params::UTitleScreen_Index_C_ExecuteUbergraph_TitleScreen_Index_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsButton_Slot = K2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_7 = K2Node_ComponentBoundEvent_PointerEvent_7;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_7 = K2Node_ComponentBoundEvent_KeyEvent_7;
	Parms.K2Node_CustomEvent_Context = K2Node_CustomEvent_Context;
	Parms.K2Node_Event_InTag_1 = K2Node_Event_InTag_1;
	Parms.K2Node_Event_Context_1 = K2Node_Event_Context_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_6 = K2Node_ComponentBoundEvent_PointerEvent_6;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_6 = K2Node_ComponentBoundEvent_KeyEvent_6;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_5 = K2Node_ComponentBoundEvent_PointerEvent_5;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_5 = K2Node_ComponentBoundEvent_KeyEvent_5;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_4 = K2Node_ComponentBoundEvent_PointerEvent_4;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_4 = K2Node_ComponentBoundEvent_KeyEvent_4;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_3 = K2Node_ComponentBoundEvent_PointerEvent_3;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_3 = K2Node_ComponentBoundEvent_KeyEvent_3;
	Parms.CallFunc_RequestTabNavigation_ReturnValue = CallFunc_RequestTabNavigation_ReturnValue;
	Parms.CallFunc_RequestTabNavigation_ReturnValue_1 = CallFunc_RequestTabNavigation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_InVisibility = K2Node_ComponentBoundEvent_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_InTag = K2Node_Event_InTag;
	Parms.K2Node_Event_Context = K2Node_Event_Context;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_2 = K2Node_ComponentBoundEvent_PointerEvent_2;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_2 = K2Node_ComponentBoundEvent_KeyEvent_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.K2Node_CustomEvent_bWasSuccess = K2Node_CustomEvent_bWasSuccess;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_PointerEvent_1 = K2Node_ComponentBoundEvent_PointerEvent_1;
	Parms.K2Node_ComponentBoundEvent_KeyEvent_1 = K2Node_ComponentBoundEvent_KeyEvent_1;
	Parms.K2Node_Event_PlayerGameData = K2Node_Event_PlayerGameData;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_ComponentBoundEvent_PointerEvent = K2Node_ComponentBoundEvent_PointerEvent;
	Parms.K2Node_ComponentBoundEvent_KeyEvent = K2Node_ComponentBoundEvent_KeyEvent;
	Parms.CallFunc_GetOnlineManager_ReturnValue = CallFunc_GetOnlineManager_ReturnValue;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NATType = K2Node_CustomEvent_NATType;
	Parms.CallFunc_GetOnlineManager_ReturnValue_1 = CallFunc_GetOnlineManager_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_CachedNATTypeString_ReturnValue = CallFunc_CachedNATTypeString_ReturnValue;
	Parms.CallFunc_MakeMenuNavigationContextStruct_ReturnValue = CallFunc_MakeMenuNavigationContextStruct_ReturnValue;
	Parms.CallFunc_RequestTabNavigation_ReturnValue_2 = CallFunc_RequestTabNavigation_ReturnValue_2;
	Parms.CallFunc_GetOnlineManager_ReturnValue_2 = CallFunc_GetOnlineManager_ReturnValue_2;
	Parms.CallFunc_GetOnlineManager_ReturnValue_3 = CallFunc_GetOnlineManager_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_CachedNATTypeString_ReturnValue_1 = CallFunc_CachedNATTypeString_ReturnValue_1;
	Parms.CallFunc_GetDLCHandler_ReturnValue = CallFunc_GetDLCHandler_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetDLCLevelData_ReturnValue = CallFunc_GetDLCLevelData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeSoftObjectPath_ReturnValue = CallFunc_MakeSoftObjectPath_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue = CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.K2Node_DynamicCast_AsGGPlayer_World_Area_Data_Asset = K2Node_DynamicCast_AsGGPlayer_World_Area_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_1 = CallFunc_GetPlayerProgression_ReturnValue_1;
	Parms.CallFunc_GetSlotsClaimedByProvider_ReturnValue = CallFunc_GetSlotsClaimedByProvider_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetWorldStatsForWorld_ReturnValue = CallFunc_GetWorldStatsForWorld_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetMostRelevantArea_ReturnValue = CallFunc_GetMostRelevantArea_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetThumbnailForArea_ReturnValue = CallFunc_GetThumbnailForArea_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOnlineManager_ReturnValue_4 = CallFunc_GetOnlineManager_ReturnValue_4;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_1 = CallFunc_GetInitialWidgetFocus_ReturnValue_1;
	Parms.CallFunc_GetPlatformForUI_ReturnValue_1 = CallFunc_GetPlatformForUI_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetOnlineManager_ReturnValue_5 = CallFunc_GetOnlineManager_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreen_Index.TitleScreen_Index_C.TakeATourDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreen_Index_C::TakeATourDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreen_Index_C", "TakeATourDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


