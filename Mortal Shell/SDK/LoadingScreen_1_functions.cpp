#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// (None)

class UClass* ULoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreen_C");

	return Clss;
}


// LoadingScreen_C LoadingScreen.Default__LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingScreen_C* ULoadingScreen_C::GetDefaultObj()
{
	static class ULoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreen_C*>(ULoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingScreen.LoadingScreen_C.ShouldShowFirstTempleTut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked__1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked__2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ULoadingScreen_C::ShouldShowFirstTempleTut(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsTutorialUnlocked_Unlocked_, bool CallFunc_IsTutorialUnlocked_Unlocked__1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_IsTutorialUnlocked_Unlocked__2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "ShouldShowFirstTempleTut");

	Params::ULoadingScreen_C_ShouldShowFirstTempleTut_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked_ = CallFunc_IsTutorialUnlocked_Unlocked_;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked__1 = CallFunc_IsTutorialUnlocked_Unlocked__1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked__2 = CallFunc_IsTutorialUnlocked_Unlocked__2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoadingScreen.LoadingScreen_C.HandleStormModeTutorial_FirstTemple
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTutorial_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_TutToShow                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowFirstTempleTut_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::HandleStormModeTutorial_FirstTemple(bool* ShowTutorial_, class FName Local_TutToShow, bool CallFunc_ShouldShowFirstTempleTut_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HandleStormModeTutorial_FirstTemple");

	Params::ULoadingScreen_C_HandleStormModeTutorial_FirstTemple_Params Parms{};

	Parms.Local_TutToShow = Local_TutToShow;
	Parms.CallFunc_ShouldShowFirstTempleTut_ReturnValue = CallFunc_ShouldShowFirstTempleTut_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowTutorial_ != nullptr)
		*ShowTutorial_ = Parms.ShowTutorial_;

}


// Function LoadingScreen.LoadingScreen_C.HandleStormModeTutorial_FirstCycle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTutorial_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialUnlocked_Unlocked_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::HandleStormModeTutorial_FirstCycle(bool* ShowTutorial_, class FName Temp_name_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsTutorialUnlocked_Unlocked_, class ULargeTutorial_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HandleStormModeTutorial_FirstCycle");

	Params::ULoadingScreen_C_HandleStormModeTutorial_FirstCycle_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsTutorialUnlocked_Unlocked_ = CallFunc_IsTutorialUnlocked_Unlocked_;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowTutorial_ != nullptr)
		*ShowTutorial_ = Parms.ShowTutorial_;

}


// Function LoadingScreen.LoadingScreen_C.TryAddRandomWeaponUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::TryAddRandomWeaponUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "TryAddRandomWeaponUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.GetItemDataFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Familiarity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Description                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_FromSave_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateItemEffectDescription_FromSave_ReturnValue        (ZeroConstructor, HasGetValueTypeHash)

void ULoadingScreen_C::GetItemDataFromSave(struct FInventoryItem& Item, int32* Familiarity, class FString* Description, int32 CallFunc_GetItemFamiliarity_FromSave_Value, const class FString& CallFunc_CreateItemEffectDescription_FromSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "GetItemDataFromSave");

	Params::ULoadingScreen_C_GetItemDataFromSave_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItemFamiliarity_FromSave_Value = CallFunc_GetItemFamiliarity_FromSave_Value;
	Parms.CallFunc_CreateItemEffectDescription_FromSave_ReturnValue = CallFunc_CreateItemEffectDescription_FromSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Familiarity != nullptr)
		*Familiarity = Parms.Familiarity;

	if (Description != nullptr)
		*Description = std::move(Parms.Description);

}


// Function LoadingScreen.LoadingScreen_C.LoadSaveSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSlotName_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSlotName_ReturnValue_1                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::LoadSaveSlot(bool* Success, const class FString& CallFunc_GetSlotName_ReturnValue, const class FString& CallFunc_GetSlotName_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadSaveSlot");

	Params::ULoadingScreen_C_LoadSaveSlot_Params Parms{};

	Parms.CallFunc_GetSlotName_ReturnValue = CallFunc_GetSlotName_ReturnValue;
	Parms.CallFunc_GetSlotName_ReturnValue_1 = CallFunc_GetSlotName_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LoadingScreen.LoadingScreen_C.GetSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString ULoadingScreen_C::GetSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "GetSlotName");

	Params::ULoadingScreen_C_GetSlotName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoadingScreen.LoadingScreen_C.HandleStormModeItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                RowNames                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                Local_Remove                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::HandleStormModeItems(TArray<class FName>& RowNames, const TArray<class FName>& Local_Remove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TArray<class FName>& K2Node_MakeArray_Array_1, bool CallFunc_StormModeContentIsEnabled_Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HandleStormModeItems");

	Params::ULoadingScreen_C_HandleStormModeItems_Params Parms{};

	Parms.RowNames = RowNames;
	Parms.Local_Remove = Local_Remove;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.AddShadeAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::AddShadeAbility(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "AddShadeAbility");

	Params::ULoadingScreen_C_AddShadeAbility_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.Handle_StormMode_FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleStormModeTutorial_FirstTemple_ShowTutorial_       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleStormModeTutorial_FirstCycle_ShowTutorial_        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetHasJustStartedRun__Return                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::Handle_StormMode_FadeOut(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HandleStormModeTutorial_FirstTemple_ShowTutorial_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleStormModeTutorial_FirstCycle_ShowTutorial_, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_StormMode_GetHasJustStartedRun__Return, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormModeIsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "Handle_StormMode_FadeOut");

	Params::ULoadingScreen_C_Handle_StormMode_FadeOut_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HandleStormModeTutorial_FirstTemple_ShowTutorial_ = CallFunc_HandleStormModeTutorial_FirstTemple_ShowTutorial_;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HandleStormModeTutorial_FirstCycle_ShowTutorial_ = CallFunc_HandleStormModeTutorial_FirstCycle_ShowTutorial_;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_StormMode_GetHasJustStartedRun__Return = CallFunc_StormMode_GetHasJustStartedRun__Return;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.ForceReturnEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_ForceReturn_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ULoadingScreen_C::ForceReturnEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_ForceReturn_self_CastInput, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "ForceReturnEnemies");

	Params::ULoadingScreen_C_ForceReturnEnemies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_ForceReturn_self_CastInput = CallFunc_ForceReturn_self_CastInput;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.HideFamiliarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemType               ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ULoadingScreen_C::HideFamiliarity(enum class EItemType ItemType, int32 Familiarity, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HideFamiliarity");

	Params::ULoadingScreen_C_HideFamiliarity_Params Parms{};

	Parms.ItemType = ItemType;
	Parms.Familiarity = Familiarity;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoadingScreen.LoadingScreen_C.ApplyUserSelectedResolutionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::ApplyUserSelectedResolutionScale(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "ApplyUserSelectedResolutionScale");

	Params::ULoadingScreen_C_ApplyUserSelectedResolutionScale_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.SetCharacterAsInvulnerable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInvulnerable_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::SetCharacterAsInvulnerable(bool IsInvulnerable_, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetCharacterAsInvulnerable");

	Params::ULoadingScreen_C_SetCharacterAsInvulnerable_Params Parms{};

	Parms.IsInvulnerable_ = IsInvulnerable_;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.RemoveUndiscoveredKeyItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemsDiscovered                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Local_Name                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPCLoadingScreenInterface_C>K2Node_DynamicCast_AsPCLoading_Screen_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered      (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::RemoveUndiscoveredKeyItems(const TArray<class FName>& ItemsDiscovered, class FName Local_Name, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IPCLoadingScreenInterface_C> K2Node_DynamicCast_AsPCLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FName>& CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered, bool CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "RemoveUndiscoveredKeyItems");

	Params::ULoadingScreen_C_RemoveUndiscoveredKeyItems_Params Parms{};

	Parms.ItemsDiscovered = ItemsDiscovered;
	Parms.Local_Name = Local_Name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPCLoading_Screen_Interface = K2Node_DynamicCast_AsPCLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered = CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered;
	Parms.CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty = CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.SetItemType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemType               Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULoadingScreen_C::SetItemType(enum class EItemType Type, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetItemType");

	Params::ULoadingScreen_C_SetItemType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.SetItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_CheckItemName_ReturnValue                               (None)

void ULoadingScreen_C::SetItemName(class FText ItemName, class FText CallFunc_CheckItemName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetItemName");

	Params::ULoadingScreen_C_SetItemName_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.CallFunc_CheckItemName_ReturnValue = CallFunc_CheckItemName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void ULoadingScreen_C::SetIcon(class UObject* Icon, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetIcon");

	Params::ULoadingScreen_C_SetIcon_Params Parms{};

	Parms.Icon = Icon;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.FadeOutVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::FadeOutVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "FadeOutVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.FadeInVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::FadeInVolume(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "FadeInVolume");

	Params::ULoadingScreen_C_FadeInVolume_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.GetRandomItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::GetRandomItem(TArray<class FName>& Array, class FName* Output, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FName CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "GetRandomItem");

	Params::ULoadingScreen_C_GetRandomItem_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function LoadingScreen.LoadingScreen_C.RemoveUnusedItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                RowNames                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::RemoveUnusedItems(TArray<class FName>& RowNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "RemoveUnusedItems");

	Params::ULoadingScreen_C_RemoveUnusedItems_Params Parms{};

	Parms.RowNames = RowNames;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.RemoveHadernContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                RowNames                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernContentEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::RemoveHadernContent(TArray<class FName>& RowNames, bool CallFunc_IsHadernContentEnabled_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "RemoveHadernContent");

	Params::ULoadingScreen_C_RemoveHadernContent_Params Parms{};

	Parms.RowNames = RowNames;
	Parms.CallFunc_IsHadernContentEnabled_ReturnValue = CallFunc_IsHadernContentEnabled_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.GettemEffectVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectDescEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility ULoadingScreen_C::GettemEffectVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsEffectDescEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "GettemEffectVisibility");

	Params::ULoadingScreen_C_GettemEffectVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsEffectDescEmpty_ReturnValue = CallFunc_IsEffectDescEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoadingScreen.LoadingScreen_C.IsEffectDescEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ULoadingScreen_C::IsEffectDescEmpty(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "IsEffectDescEmpty");

	Params::ULoadingScreen_C_IsEffectDescEmpty_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoadingScreen.LoadingScreen_C.SetLoadingScreenItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Discovered                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_EffectDescString                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Local_TimeToUnlockFamiliarity                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_Familiarity                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_TimesUsed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_DescWithFami                                               (Edit, BlueprintVisible)
// class FText                        Local_ExtDesc                                                    (Edit, BlueprintVisible)
// class FText                        Local_EffectDesc                                                 (Edit, BlueprintVisible)
// class FText                        Local_Description                                                (Edit, BlueprintVisible)
// enum class EItemType               Local_ItemType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Name                                                       (Edit, BlueprintVisible)
// class UTexture2D*                  Local_Icon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemDiscovered_FromSave_Empty_                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetItemDiscovered_FromSave_ItemDiscovered               (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadSaveSlot_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemDataFromSave_Familiarity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemDataFromSave_Description                         (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentSaveSlot_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HideFamiliarity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPCLoadingScreenInterface_C>K2Node_DynamicCast_AsPCLoading_Screen_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered      (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_FromSave_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectDescEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPCLoadingScreenInterface_C>K2Node_DynamicCast_AsPCLoading_Screen_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAverageFamiliarity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PCLoadingScreen_GetLoadingScreenInfo_LocalFamiliarity   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_PCLoadingScreen_GetLoadingScreenInfo_ItemEffectDescription(ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateExtendedDescription_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateExtendedDescription_OutputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ItemDetailBuildString_ItemEffects                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ItemDetailBuildString_ItemDescription                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void ULoadingScreen_C::SetLoadingScreenItem(class FName RowName, bool Local_Discovered, const class FString& Local_EffectDescString, int32 Local_TimeToUnlockFamiliarity, const struct FInventoryItem& Local_Item, int32 Local_Familiarity, int32 Local_TimesUsed, class FText Local_DescWithFami, class FText Local_ExtDesc, class FText Local_EffectDesc, class FText Local_Description, enum class EItemType Local_ItemType, class FText Local_Name, class UTexture2D* Local_Icon, class FName Local_ID, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_GetItemDiscovered_FromSave_Empty_, TArray<class FName>& CallFunc_GetItemDiscovered_FromSave_ItemDiscovered, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LoadSaveSlot_Success, int32 CallFunc_GetItemDataFromSave_Familiarity, const class FString& CallFunc_GetItemDataFromSave_Description, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentSaveSlot_Slot, bool CallFunc_HideFamiliarity_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IPCLoadingScreenInterface_C> K2Node_DynamicCast_AsPCLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TArray<class FName>& CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered, bool CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_GetItemFamiliarity_FromSave_Value, bool CallFunc_IsEffectDescEmpty_ReturnValue, bool Temp_bool_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 K2Node_Select_Default, TScriptInterface<class IPCLoadingScreenInterface_C> K2Node_DynamicCast_AsPCLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetAverageFamiliarity_ReturnValue, int32 CallFunc_PCLoadingScreen_GetLoadingScreenInfo_LocalFamiliarity, const class FString& CallFunc_PCLoadingScreen_GetLoadingScreenInfo_ItemEffectDescription, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2, const class FString& CallFunc_CreateExtendedDescription_ReturnValue, bool CallFunc_CreateExtendedDescription_OutputPin, const class FString& CallFunc_ItemDetailBuildString_ItemEffects, const class FString& CallFunc_ItemDetailBuildString_ItemDescription, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetLoadingScreenItem");

	Params::ULoadingScreen_C_SetLoadingScreenItem_Params Parms{};

	Parms.RowName = RowName;
	Parms.Local_Discovered = Local_Discovered;
	Parms.Local_EffectDescString = Local_EffectDescString;
	Parms.Local_TimeToUnlockFamiliarity = Local_TimeToUnlockFamiliarity;
	Parms.Local_Item = Local_Item;
	Parms.Local_Familiarity = Local_Familiarity;
	Parms.Local_TimesUsed = Local_TimesUsed;
	Parms.Local_DescWithFami = Local_DescWithFami;
	Parms.Local_ExtDesc = Local_ExtDesc;
	Parms.Local_EffectDesc = Local_EffectDesc;
	Parms.Local_Description = Local_Description;
	Parms.Local_ItemType = Local_ItemType;
	Parms.Local_Name = Local_Name;
	Parms.Local_Icon = Local_Icon;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetItemDiscovered_FromSave_Empty_ = CallFunc_GetItemDiscovered_FromSave_Empty_;
	Parms.CallFunc_GetItemDiscovered_FromSave_ItemDiscovered = CallFunc_GetItemDiscovered_FromSave_ItemDiscovered;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LoadSaveSlot_Success = CallFunc_LoadSaveSlot_Success;
	Parms.CallFunc_GetItemDataFromSave_Familiarity = CallFunc_GetItemDataFromSave_Familiarity;
	Parms.CallFunc_GetItemDataFromSave_Description = CallFunc_GetItemDataFromSave_Description;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentSaveSlot_Slot = CallFunc_GetCurrentSaveSlot_Slot;
	Parms.CallFunc_HideFamiliarity_ReturnValue = CallFunc_HideFamiliarity_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPCLoading_Screen_Interface = K2Node_DynamicCast_AsPCLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered = CallFunc_PCLoadingScreen_GetItemsDiscovered_ItemsDiscovered;
	Parms.CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty = CallFunc_PCLoadingScreen_GetItemsDiscovered_Empty;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_GetItemFamiliarity_FromSave_Value = CallFunc_GetItemFamiliarity_FromSave_Value;
	Parms.CallFunc_IsEffectDescEmpty_ReturnValue = CallFunc_IsEffectDescEmpty_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsPCLoading_Screen_Interface_1 = K2Node_DynamicCast_AsPCLoading_Screen_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAverageFamiliarity_ReturnValue = CallFunc_GetAverageFamiliarity_ReturnValue;
	Parms.CallFunc_PCLoadingScreen_GetLoadingScreenInfo_LocalFamiliarity = CallFunc_PCLoadingScreen_GetLoadingScreenInfo_LocalFamiliarity;
	Parms.CallFunc_PCLoadingScreen_GetLoadingScreenInfo_ItemEffectDescription = CallFunc_PCLoadingScreen_GetLoadingScreenInfo_ItemEffectDescription;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreateExtendedDescription_ReturnValue = CallFunc_CreateExtendedDescription_ReturnValue;
	Parms.CallFunc_CreateExtendedDescription_OutputPin = CallFunc_CreateExtendedDescription_OutputPin;
	Parms.CallFunc_ItemDetailBuildString_ItemEffects = CallFunc_ItemDetailBuildString_ItemEffects;
	Parms.CallFunc_ItemDetailBuildString_ItemDescription = CallFunc_ItemDetailBuildString_ItemDescription;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.PreviewLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::PreviewLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "PreviewLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::FadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "FadeIn");

	Params::ULoadingScreen_C_FadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.SetLoadingScreenData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_RowName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomItem_Output                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)

void ULoadingScreen_C::SetLoadingScreenData(class FName Local_RowName, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_GetRandomItem_Output, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "SetLoadingScreenData");

	Params::ULoadingScreen_C_SetLoadingScreenData_Params Parms{};

	Parms.Local_RowName = Local_RowName;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetRandomItem_Output = CallFunc_GetRandomItem_Output;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "PreConstruct");

	Params::ULoadingScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.HandleLevelChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetTravelDestination                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        TravelDestination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MapToLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::HandleLevelChange(bool SetTravelDestination, class FName TravelDestination, class FName MapToLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HandleLevelChange");

	Params::ULoadingScreen_C_HandleLevelChange_Params Parms{};

	Parms.SetTravelDestination = SetTravelDestination;
	Parms.TravelDestination = TravelDestination;
	Parms.MapToLoad = MapToLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.OnFadeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnFadeCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnFadeCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.OnFadeOutToBlackCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnFadeOutToBlackCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnFadeOutToBlackCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::LoadingScreen_FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_FadeOutAndDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::LoadingScreen_FadeOutAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_FadeOutAndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_HandleLevelChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set_Travel_Destination                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Travel_Destination                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Map_To_Load                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::LoadingScreen_HandleLevelChange(bool Set_Travel_Destination, class FName Travel_Destination, class FName Map_To_Load)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_HandleLevelChange");

	Params::ULoadingScreen_C_LoadingScreen_HandleLevelChange_Params Parms{};

	Parms.Set_Travel_Destination = Set_Travel_Destination;
	Parms.Travel_Destination = Travel_Destination;
	Parms.Map_To_Load = Map_To_Load;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_OnBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::LoadingScreen_OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.HandleFastTravelCurrentLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::HandleFastTravelCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "HandleFastTravelCurrentLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.OnHandleFastTravelCurrentLevelStart_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnHandleFastTravelCurrentLevelStart_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnHandleFastTravelCurrentLevelStart_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.OnHandleFastTravelCurrentLevelEnd_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnHandleFastTravelCurrentLevelEnd_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnHandleFastTravelCurrentLevelEnd_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_FastTravelCurrentLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::LoadingScreen_FastTravelCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_FastTravelCurrentLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::DestroyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "DestroyWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.LoadingScreen_ShouldLoadItemFromSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Load_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreen_C::LoadingScreen_ShouldLoadItemFromSave(bool Load_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "LoadingScreen_ShouldLoadItemFromSave");

	Params::ULoadingScreen_C_LoadingScreen_ShouldLoadItemFromSave_Params Parms{};

	Parms.Load_ = Load_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.OnStormModeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::OnStormModeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "OnStormModeStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.FadeOutAndDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::FadeOutAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "FadeOutAndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SetTravelDestination                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TravelDestination                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MapToLoad                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Set_Travel_Destination                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_Travel_Destination                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Map_To_Load                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_Load_                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetCurrentSaveSlot_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreen_C::ExecuteUbergraph_LoadingScreen(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_SetTravelDestination, class FName K2Node_CustomEvent_TravelDestination, class FName K2Node_CustomEvent_MapToLoad, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_Event_Set_Travel_Destination, class FName K2Node_Event_Travel_Destination, class FName K2Node_Event_Map_To_Load, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetGamePaused_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_2, bool K2Node_DynamicCast_bSuccess_4, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_StormModeIsActive_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_Load_, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetCurrentSaveSlot_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "ExecuteUbergraph_LoadingScreen");

	Params::ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_SetTravelDestination = K2Node_CustomEvent_SetTravelDestination;
	Parms.K2Node_CustomEvent_TravelDestination = K2Node_CustomEvent_TravelDestination;
	Parms.K2Node_CustomEvent_MapToLoad = K2Node_CustomEvent_MapToLoad;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_Event_Set_Travel_Destination = K2Node_Event_Set_Travel_Destination;
	Parms.K2Node_Event_Travel_Destination = K2Node_Event_Travel_Destination;
	Parms.K2Node_Event_Map_To_Load = K2Node_Event_Map_To_Load;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_2 = K2Node_DynamicCast_AsCharacter_Util_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_Load_ = K2Node_Event_Load_;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetCurrentSaveSlot_Slot = CallFunc_GetCurrentSaveSlot_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreen.LoadingScreen_C.CallTeleportEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::CallTeleportEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "CallTeleportEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreen.LoadingScreen_C.CallTeleportPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreen_C::CallTeleportPlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreen_C", "CallTeleportPlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


