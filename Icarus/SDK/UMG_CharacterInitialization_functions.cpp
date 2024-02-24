#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterInitialization.UMG_CharacterInitialization_C
// (None)

class UClass* UUMG_CharacterInitialization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterInitialization_C");

	return Clss;
}


// UMG_CharacterInitialization_C UMG_CharacterInitialization.Default__UMG_CharacterInitialization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterInitialization_C* UUMG_CharacterInitialization_C::GetDefaultObj()
{
	static class UUMG_CharacterInitialization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterInitialization_C*>(UUMG_CharacterInitialization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.DeletePlayerTrackerSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AfterCreate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      SaveName                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetIcarusPlayerId_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerTrackerSaveFormat_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::DeletePlayerTrackerSave(int32 Slot, bool AfterCreate, const class FString& SaveName, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue, const class FString& CallFunc_GetPlayerTrackerSaveFormat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "DeletePlayerTrackerSave");

	Params::UUMG_CharacterInitialization_C_DeletePlayerTrackerSave_Params Parms{};

	Parms.Slot = Slot;
	Parms.AfterCreate = AfterCreate;
	Parms.SaveName = SaveName;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerId_ReturnValue = CallFunc_GetIcarusPlayerId_ReturnValue;
	Parms.CallFunc_GetPlayerTrackerSaveFormat_ReturnValue = CallFunc_GetPlayerTrackerSaveFormat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ResumeCurrentActiveProspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectInfo               ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::ResumeCurrentActiveProspect(const struct FProspectInfo& ProspectInfo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "ResumeCurrentActiveProspect");

	Params::UUMG_CharacterInitialization_C_ResumeCurrentActiveProspect_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCosmeticsUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     UpdatedCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterInitialization_C::CharacterCosmeticsUpdate(bool Success, const struct FOnlineProfileCharacter& UpdatedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "CharacterCosmeticsUpdate");

	Params::UUMG_CharacterInitialization_C_CharacterCosmeticsUpdate_Params Parms{};

	Parms.Success = Success;
	Parms.UpdatedCharacter = UpdatedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCreationResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::CharacterCreationResult(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "CharacterCreationResult");

	Params::UUMG_CharacterInitialization_C_CharacterCreationResult_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetChacterSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      ChrSlots                                                         (Parm, OutParm)
// bool                               HasCharacter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      Slots                                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::GetChacterSlots(TArray<int32>* ChrSlots, bool* HasCharacter, const TArray<int32>& Slots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "GetChacterSlots");

	Params::UUMG_CharacterInitialization_C_GetChacterSlots_Params Parms{};

	Parms.Slots = Slots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChrSlots != nullptr)
		*ChrSlots = std::move(Parms.ChrSlots);

	if (HasCharacter != nullptr)
		*HasCharacter = Parms.HasCharacter;

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetDioramaForCurrentCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UWorld>       ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProspectLocation       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UWorld>       K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UWorld>       K2Node_Select_Default_1                                          (UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UWorld> UUMG_CharacterInitialization_C::GetDioramaForCurrentCharacter(bool Temp_bool_Variable, enum class EProspectLocation Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UWorld> K2Node_Select_Default, TSoftObjectPtr<class UWorld> K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "GetDioramaForCurrentCharacter");

	Params::UUMG_CharacterInitialization_C_GetDioramaForCurrentCharacter_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::OnCharacterSelected(const struct FOnlineProfileCharacter& Character, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnCharacterSelected");

	Params::UUMG_CharacterInitialization_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SelectCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     SelectedCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::SelectCharacter(const struct FOnlineProfileCharacter& SelectedCharacter, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "SelectCharacter");

	Params::UUMG_CharacterInitialization_C_SelectCharacter_Params Parms{};

	Parms.SelectedCharacter = SelectedCharacter;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.UpdateCharacterPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TSoftObjectPtr<class UWorld>       CallFunc_GetDioramaForCurrentCharacter_ReturnValue               (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICustomisationWidgetInterface_C>K2Node_DynamicCast_AsCustomisation_Widget_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewCameraSettingsEnum  CallFunc_GetCameraFocus_CameraFocus                              (HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::UpdateCharacterPreview(const struct FCharacterCosmetics& CosmeticData, TSoftObjectPtr<class UWorld> CallFunc_GetDioramaForCurrentCharacter_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const struct FPreviewCameraSettingsEnum& CallFunc_GetCameraFocus_CameraFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "UpdateCharacterPreview");

	Params::UUMG_CharacterInitialization_C_UpdateCharacterPreview_Params Parms{};

	Parms.CosmeticData = CosmeticData;
	Parms.CallFunc_GetDioramaForCurrentCharacter_ReturnValue = CallFunc_GetDioramaForCurrentCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustomisation_Widget_Interface = K2Node_DynamicCast_AsCustomisation_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCameraFocus_CameraFocus = CallFunc_GetCameraFocus_CameraFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.NewCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     SelectedCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::NewCharacterSelected(const struct FOnlineProfileCharacter& SelectedCharacter, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "NewCharacterSelected");

	Params::UUMG_CharacterInitialization_C_NewCharacterSelected_Params Parms{};

	Parms.SelectedCharacter = SelectedCharacter;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.HideSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::HideSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "HideSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ShowSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::ShowSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "ShowSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::BackButtonPressed(bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "BackButtonPressed");

	Params::UUMG_CharacterInitialization_C_BackButtonPressed_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GenerateCharacterSelectList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CreateCharacterIfEmpty                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::GenerateCharacterSelectList(bool CreateCharacterIfEmpty, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "GenerateCharacterSelectList");

	Params::UUMG_CharacterInitialization_C_GenerateCharacterSelectList_Params Parms{};

	Parms.CreateCharacterIfEmpty = CreateCharacterIfEmpty;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ResetContentState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::ResetContentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "ResetContentState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SetContentState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterCreationMenus State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterCreationMenus PreviousSettings                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICustomisationWidgetInterface_C>K2Node_DynamicCast_AsCustomisation_Widget_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCosmetics         CallFunc_GetCosmeticData_CosmeticData                            (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::SetContentState(enum class ECharacterCreationMenus State, enum class ECharacterCreationMenus PreviousSettings, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface, bool K2Node_DynamicCast_bSuccess, const struct FCharacterCosmetics& CallFunc_GetCosmeticData_CosmeticData, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "SetContentState");

	Params::UUMG_CharacterInitialization_C_SetContentState_Params Parms{};

	Parms.State = State;
	Parms.PreviousSettings = PreviousSettings;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustomisation_Widget_Interface = K2Node_DynamicCast_AsCustomisation_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCosmeticData_CosmeticData = CallFunc_GetCosmeticData_CosmeticData;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_AA2196B04AC3B92C0431BDB2754010AC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetCharacters           Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_AA2196B04AC3B92C0431BDB2754010AC");

	Params::UUMG_CharacterInitialization_C_OnFail_AA2196B04AC3B92C0431BDB2754010AC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_AA2196B04AC3B92C0431BDB2754010AC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetCharacters           Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_AA2196B04AC3B92C0431BDB2754010AC");

	Params::UUMG_CharacterInitialization_C_OnSuccess_AA2196B04AC3B92C0431BDB2754010AC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_16D5FF39449681E05656E5AEB0E4B6EC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResCreateCharacter         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_16D5FF39449681E05656E5AEB0E4B6EC");

	Params::UUMG_CharacterInitialization_C_OnFail_16D5FF39449681E05656E5AEB0E4B6EC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResCreateCharacter         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC");

	Params::UUMG_CharacterInitialization_C_OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_8DEB61DF48DB1B1A9300A098DF26F53D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResDeleteCharacter         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUMG_CharacterInitialization_C::OnFail_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_8DEB61DF48DB1B1A9300A098DF26F53D");

	Params::UUMG_CharacterInitialization_C_OnFail_8DEB61DF48DB1B1A9300A098DF26F53D_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResDeleteCharacter         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUMG_CharacterInitialization_C::OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D");

	Params::UUMG_CharacterInitialization_C_OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_49458CA04D20AEFC814952AE4F767256
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetCharacters           Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_49458CA04D20AEFC814952AE4F767256");

	Params::UUMG_CharacterInitialization_C_OnFail_49458CA04D20AEFC814952AE4F767256_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_49458CA04D20AEFC814952AE4F767256
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetCharacters           Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_49458CA04D20AEFC814952AE4F767256");

	Params::UUMG_CharacterInitialization_C_OnSuccess_49458CA04D20AEFC814952AE4F767256_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetAllProspects         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898");

	Params::UUMG_CharacterInitialization_C_OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetAllProspects         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898");

	Params::UUMG_CharacterInitialization_C_OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_F77B8CB74F4AF05825B964AC18481892
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResUpdateCosmetics         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_F77B8CB74F4AF05825B964AC18481892");

	Params::UUMG_CharacterInitialization_C_OnFail_F77B8CB74F4AF05825B964AC18481892_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_F77B8CB74F4AF05825B964AC18481892
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResUpdateCosmetics         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_F77B8CB74F4AF05825B964AC18481892");

	Params::UUMG_CharacterInitialization_C_OnSuccess_F77B8CB74F4AF05825B964AC18481892_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_BEC856464A75D4A166FC988B8C7226EC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnFail_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_BEC856464A75D4A166FC988B8C7226EC");

	Params::UUMG_CharacterInitialization_C_OnFail_BEC856464A75D4A166FC988B8C7226EC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_BEC856464A75D4A166FC988B8C7226EC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CharacterInitialization_C::OnSuccess_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_BEC856464A75D4A166FC988B8C7226EC");

	Params::UUMG_CharacterInitialization_C_OnSuccess_BEC856464A75D4A166FC988B8C7226EC_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_5EFAF01E48E09C992CF2528296819869
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResAbandonProspect         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUMG_CharacterInitialization_C::OnFail_5EFAF01E48E09C992CF2528296819869(struct FResAbandonProspect& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnFail_5EFAF01E48E09C992CF2528296819869");

	Params::UUMG_CharacterInitialization_C_OnFail_5EFAF01E48E09C992CF2528296819869_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_5EFAF01E48E09C992CF2528296819869
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResAbandonProspect         Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUMG_CharacterInitialization_C::OnSuccess_5EFAF01E48E09C992CF2528296819869(struct FResAbandonProspect& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnSuccess_5EFAF01E48E09C992CF2528296819869");

	Params::UUMG_CharacterInitialization_C_OnSuccess_5EFAF01E48E09C992CF2528296819869_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::BackSettings(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "BackSettings");

	Params::UUMG_CharacterInitialization_C_BackSettings_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_CharacterInitialization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.QuitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::QuitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "QuitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveUserProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::RetrieveUserProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "RetrieveUserProfile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveCharacters
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::RetrieveCharacters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "RetrieveCharacters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCreateCharacterRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqCreateCharacter         CharacterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              NumRetries                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SelectNewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::OnCreateCharacterRequest(const struct FReqCreateCharacter& CharacterName, int32 NumRetries, bool SelectNewCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnCreateCharacterRequest");

	Params::UUMG_CharacterInitialization_C_OnCreateCharacterRequest_Params Parms{};

	Parms.CharacterName = CharacterName;
	Parms.NumRetries = NumRetries;
	Parms.SelectNewCharacter = SelectNewCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_CharacterInitialization_C_BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterDeletionRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterInitialization_C::OnCharacterDeletionRequest(const struct FOnlineProfileCharacter& Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnCharacterDeletionRequest");

	Params::UUMG_CharacterInitialization_C_OnCharacterDeletionRequest_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RefreshCharacterList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::RefreshCharacterList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "RefreshCharacterList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CheckIfAccountRetrieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::CheckIfAccountRetrieved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "CheckIfAccountRetrieved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_CharacterInitialization_C_BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveActiveProspects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::RetrieveActiveProspects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "RetrieveActiveProspects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.MoveToHAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::MoveToHAB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "MoveToHAB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SwapToCharacterCreate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::SwapToCharacterCreate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "SwapToCharacterCreate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.UpdateConnectingProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::UpdateConnectingProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "UpdateConnectingProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCosmeticUpdateRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReqUpdateCosmetics         Request                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Retries                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterInitialization_C::OnCosmeticUpdateRequest(const struct FReqUpdateCosmetics& Request, int32 Retries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnCosmeticUpdateRequest");

	Params::UUMG_CharacterInitialization_C_OnCosmeticUpdateRequest_Params Parms{};

	Parms.Request = Request;
	Parms.Retries = Retries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.QuitToDesktopCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::QuitToDesktopCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "QuitToDesktopCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnConnectMessageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::OnConnectMessageEvent(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnConnectMessageEvent");

	Params::UUMG_CharacterInitialization_C_OnConnectMessageEvent_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ConnectionTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::ConnectionTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "ConnectionTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnAbandonProspectRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      ProspectID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               WillDelete                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterInitialization_C::OnAbandonProspectRequest(const struct FOnlineProfileCharacter& Character, const class FString& ProspectID, bool WillDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnAbandonProspectRequest");

	Params::UUMG_CharacterInitialization_C_OnAbandonProspectRequest_Params Parms{};

	Parms.Character = Character;
	Parms.ProspectID = ProspectID;
	Parms.WillDelete = WillDelete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ExecuteUbergraph_UMG_CharacterInitialization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FResDeleteCharacter         Temp_struct_Variable                                             (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FResGetCharacters           K2Node_CustomEvent_Response_9                                    (ConstParm)
// struct FResGetCharacters           K2Node_CustomEvent_Response_8                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FResGetCharacters           Temp_struct_Variable_1                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FResGetAllProspects         K2Node_CustomEvent_Response_7                                    (ConstParm)
// struct FResGetAllProspects         K2Node_CustomEvent_Response_6                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FResGetAllProspects         Temp_struct_Variable_2                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FResUpdateCosmetics         K2Node_CustomEvent_Response_5                                    (ConstParm)
// struct FResUpdateCosmetics         K2Node_CustomEvent_Response_4                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FResUpdateCosmetics         Temp_struct_Variable_3                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          K2Node_CustomEvent_Response_3                                    (ConstParm)
// struct FResGetUserProfile          K2Node_CustomEvent_Response_2                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          Temp_struct_Variable_4                                           (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FIcarusProfile              K2Node_MakeStruct_IcarusProfile                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FResAbandonProspect         K2Node_CustomEvent_Response_1                                    (ConstParm, NoDestructor)
// struct FResAbandonProspect         K2Node_CustomEvent_Response                                      (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FResAbandonProspect         Temp_struct_Variable_5                                           (NoDestructor)
// class USentrySubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USentrySubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPreviewManager_C*  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResGetCharacters           K2Node_CustomEvent_Response_15                                   (ConstParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPreviewManager_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResDeleteCharacter         K2Node_CustomEvent_Response_10                                   (ConstParm, NoDestructor)
// struct FReqGetCharacters           K2Node_MakeStruct_ReqGetCharacters                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class UGetCharactersCallbackProxyGen*CallFunc_GetCharacters_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqCreateCharacter         K2Node_CustomEvent_CharacterName                                 (None)
// int32                              K2Node_CustomEvent_NumRetries                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SelectNewCharacter                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreateCharacterCallbackProxyGen*CallFunc_CreateCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     K2Node_CustomEvent_Character_1                                   (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FReqDeleteCharacter         K2Node_MakeStruct_ReqDeleteCharacter                             (NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class UDeleteCharacterCallbackProxyGen*CallFunc_DeleteCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString> K2Node_MakeMap_Map                                               (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqGetCharacters           K2Node_MakeStruct_ReqGetCharacters_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGetCharactersCallbackProxyGen*CallFunc_GetCharacters_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResDeleteCharacter         K2Node_CustomEvent_Response_11                                   (ConstParm, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetChacterSlots_ChrSlots                                (ReferenceParm)
// bool                               CallFunc_GetChacterSlots_HasCharacter                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// struct FReqGetAllProspects         K2Node_MakeStruct_ReqGetAllProspects                             (None)
// class UGetAllProspectsCallbackProxyGen*CallFunc_GetAllProspects_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResCreateCharacter         Temp_struct_Variable_6                                           (None)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString> K2Node_MakeMap_Map_1                                             (ConstParm)
// struct FResCreateCharacter         K2Node_CustomEvent_Response_12                                   (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FResCreateCharacter         K2Node_CustomEvent_Response_13                                   (ConstParm)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// struct FReqUpdateCosmetics         K2Node_CustomEvent_Request                                       (None)
// int32                              K2Node_CustomEvent_Retries                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpdateCosmeticsCallbackProxyGen*CallFunc_UpdateCosmetics_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerPreviewManager_C*  Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusMessageListeners*     CallFunc_GetIcarusMessageListeners_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetIcarusPlayerId_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReqGetUserProfile          K2Node_MakeStruct_ReqGetUserProfile                              (None)
// class ABP_IcarusPlayerControllerSpace_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGetUserProfileCallbackProxyGen*CallFunc_GetUserProfile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// struct FOnlineProfileCharacter     K2Node_CustomEvent_Character                                     (None)
// class FString                      K2Node_CustomEvent_ProspectId                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WillDelete                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReqAbandonProspect         K2Node_MakeStruct_ReqAbandonProspect                             (None)
// class UAbandonProspectCallbackProxyGen*CallFunc_AbandonProspect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGetCharacters           Temp_struct_Variable_7                                           (None)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResGetCharacters           K2Node_CustomEvent_Response_14                                   (ConstParm)

void UUMG_CharacterInitialization_C::ExecuteUbergraph_UMG_CharacterInitialization(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResDeleteCharacter& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const struct FResGetCharacters& K2Node_CustomEvent_Response_9, const struct FResGetCharacters& K2Node_CustomEvent_Response_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FResGetCharacters& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FResGetAllProspects& K2Node_CustomEvent_Response_7, const struct FResGetAllProspects& K2Node_CustomEvent_Response_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FResGetAllProspects& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response_5, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FResUpdateCosmetics& Temp_struct_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FResGetUserProfile& K2Node_CustomEvent_Response_3, const struct FResGetUserProfile& K2Node_CustomEvent_Response_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FResGetUserProfile& Temp_struct_Variable_4, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FIcarusProfile& K2Node_MakeStruct_IcarusProfile, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FResAbandonProspect& K2Node_CustomEvent_Response_1, const struct FResAbandonProspect& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FResAbandonProspect& Temp_struct_Variable_5, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class ABP_PlayerPreviewManager_C* CallFunc_GetActorOfClass_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FResGetCharacters& K2Node_CustomEvent_Response_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerPreviewManager_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FResDeleteCharacter& K2Node_CustomEvent_Response_10, const struct FReqGetCharacters& K2Node_MakeStruct_ReqGetCharacters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UGetCharactersCallbackProxyGen* CallFunc_GetCharacters_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FReqCreateCharacter& K2Node_CustomEvent_CharacterName, int32 K2Node_CustomEvent_NumRetries, bool K2Node_CustomEvent_SelectNewCharacter, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCreateCharacterCallbackProxyGen* CallFunc_CreateCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FText CallFunc_Format_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FOnlineProfileCharacter& K2Node_CustomEvent_Character_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const struct FReqDeleteCharacter& K2Node_MakeStruct_ReqDeleteCharacter, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, class UDeleteCharacterCallbackProxyGen* CallFunc_DeleteCharacter_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, TMap<class FString, class FString> K2Node_MakeMap_Map, bool CallFunc_IsValid_ReturnValue_4, const struct FReqGetCharacters& K2Node_MakeStruct_ReqGetCharacters_1, class UGetCharactersCallbackProxyGen* CallFunc_GetCharacters_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FResDeleteCharacter& K2Node_CustomEvent_Response_11, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<int32>& CallFunc_GetChacterSlots_ChrSlots, bool CallFunc_GetChacterSlots_HasCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, const struct FReqGetAllProspects& K2Node_MakeStruct_ReqGetAllProspects, class UGetAllProspectsCallbackProxyGen* CallFunc_GetAllProspects_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue_6, const struct FResCreateCharacter& Temp_struct_Variable_6, bool CallFunc_IsValid_ReturnValue_7, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_5, TMap<class FString, class FString> K2Node_MakeMap_Map_1, const struct FResCreateCharacter& K2Node_CustomEvent_Response_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FResCreateCharacter& K2Node_CustomEvent_Response_13, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const struct FReqUpdateCosmetics& K2Node_CustomEvent_Request, int32 K2Node_CustomEvent_Retries, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUpdateCosmeticsCallbackProxyGen* CallFunc_UpdateCosmetics_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_8, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool K2Node_CustomEvent_Success, class ABP_PlayerPreviewManager_C* Temp_wildcard_Variable, class UIcarusMessageListeners* CallFunc_GetIcarusMessageListeners_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FReqGetUserProfile& K2Node_MakeStruct_ReqGetUserProfile, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1, class UGetUserProfileCallbackProxyGen* CallFunc_GetUserProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, const struct FOnlineProfileCharacter& K2Node_CustomEvent_Character, const class FString& K2Node_CustomEvent_ProspectId, bool K2Node_CustomEvent_WillDelete, const struct FReqAbandonProspect& K2Node_MakeStruct_ReqAbandonProspect, class UAbandonProspectCallbackProxyGen* CallFunc_AbandonProspect_ReturnValue, const struct FResGetCharacters& Temp_struct_Variable_7, bool CallFunc_IsValid_ReturnValue_11, const struct FResGetCharacters& K2Node_CustomEvent_Response_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "ExecuteUbergraph_UMG_CharacterInitialization");

	Params::UUMG_CharacterInitialization_C_ExecuteUbergraph_UMG_CharacterInitialization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_CustomEvent_Response_9 = K2Node_CustomEvent_Response_9;
	Parms.K2Node_CustomEvent_Response_8 = K2Node_CustomEvent_Response_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Response_7 = K2Node_CustomEvent_Response_7;
	Parms.K2Node_CustomEvent_Response_6 = K2Node_CustomEvent_Response_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_Response_5 = K2Node_CustomEvent_Response_5;
	Parms.K2Node_CustomEvent_Response_4 = K2Node_CustomEvent_Response_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_Response_3 = K2Node_CustomEvent_Response_3;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_MakeStruct_IcarusProfile = K2Node_MakeStruct_IcarusProfile;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Response_15 = K2Node_CustomEvent_Response_15;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_CustomEvent_Response_10 = K2Node_CustomEvent_Response_10;
	Parms.K2Node_MakeStruct_ReqGetCharacters = K2Node_MakeStruct_ReqGetCharacters;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_GetCharacters_ReturnValue = CallFunc_GetCharacters_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_CharacterName = K2Node_CustomEvent_CharacterName;
	Parms.K2Node_CustomEvent_NumRetries = K2Node_CustomEvent_NumRetries;
	Parms.K2Node_CustomEvent_SelectNewCharacter = K2Node_CustomEvent_SelectNewCharacter;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CreateCharacter_ReturnValue = CallFunc_CreateCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_ReqDeleteCharacter = K2Node_MakeStruct_ReqDeleteCharacter;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_DeleteCharacter_ReturnValue = CallFunc_DeleteCharacter_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_MakeStruct_ReqGetCharacters_1 = K2Node_MakeStruct_ReqGetCharacters_1;
	Parms.CallFunc_GetCharacters_ReturnValue_1 = CallFunc_GetCharacters_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_Response_11 = K2Node_CustomEvent_Response_11;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetChacterSlots_ChrSlots = CallFunc_GetChacterSlots_ChrSlots;
	Parms.CallFunc_GetChacterSlots_HasCharacter = CallFunc_GetChacterSlots_HasCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_MakeStruct_ReqGetAllProspects = K2Node_MakeStruct_ReqGetAllProspects;
	Parms.CallFunc_GetAllProspects_ReturnValue = CallFunc_GetAllProspects_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_3 = CallFunc_Conv_BoolToString_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_4 = CallFunc_Conv_BoolToString_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_5 = CallFunc_Conv_BoolToString_ReturnValue_5;
	Parms.K2Node_MakeMap_Map_1 = K2Node_MakeMap_Map_1;
	Parms.K2Node_CustomEvent_Response_12 = K2Node_CustomEvent_Response_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_Response_13 = K2Node_CustomEvent_Response_13;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_Request = K2Node_CustomEvent_Request;
	Parms.K2Node_CustomEvent_Retries = K2Node_CustomEvent_Retries;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_UpdateCosmetics_ReturnValue = CallFunc_UpdateCosmetics_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetIcarusMessageListeners_ReturnValue = CallFunc_GetIcarusMessageListeners_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerId_ReturnValue = CallFunc_GetIcarusPlayerId_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_MakeStruct_ReqGetUserProfile = K2Node_MakeStruct_ReqGetUserProfile;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUserProfile_ReturnValue = CallFunc_GetUserProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_ProspectId = K2Node_CustomEvent_ProspectId;
	Parms.K2Node_CustomEvent_WillDelete = K2Node_CustomEvent_WillDelete;
	Parms.K2Node_MakeStruct_ReqAbandonProspect = K2Node_MakeStruct_ReqAbandonProspect;
	Parms.CallFunc_AbandonProspect_ReturnValue = CallFunc_AbandonProspect_ReturnValue;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_Response_14 = K2Node_CustomEvent_Response_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterInitialization_C::OnCharacterChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterInitialization_C", "OnCharacterChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


