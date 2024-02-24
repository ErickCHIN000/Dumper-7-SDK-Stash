#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LargeTutorial.LargeTutorial_C
// (None)

class UClass* ULargeTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LargeTutorial_C");

	return Clss;
}


// LargeTutorial_C LargeTutorial.Default__LargeTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULargeTutorial_C* ULargeTutorial_C::GetDefaultObj()
{
	static class ULargeTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULargeTutorial_C*>(ULargeTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LargeTutorial.LargeTutorial_C.SetTutorialUpgradeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::SetTutorialUpgradeImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetTutorialUpgradeImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.SetTutorialIllustration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::SetTutorialIllustration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetTutorialIllustration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.SetTutorialTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::SetTutorialTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetTutorialTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.SetTutorialDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_CreateResolveDescription_ReturnValue                    (None)

void ULargeTutorial_C::SetTutorialDescription(class FText CallFunc_CreateResolveDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetTutorialDescription");

	Params::ULargeTutorial_C_SetTutorialDescription_Params Parms{};

	Parms.CallFunc_CreateResolveDescription_ReturnValue = CallFunc_CreateResolveDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.UpgradeImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::UpgradeImageVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "UpgradeImageVisibility");

	Params::ULargeTutorial_C_UpgradeImageVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::HandleScale(enum class Enum_HUD_Size Selection, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "HandleScale");

	Params::ULargeTutorial_C_HandleScale_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.HardenTut
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue_Right                                                (Parm, OutParm)
// class FText                        ReturnValue_Left                                                 (Parm, OutParm)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Left                                                       (Edit, BlueprintVisible)
// class FText                        Local_Right                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::HardenTut(class FText Right, class FText Left, int32 Index, class FText* ReturnValue_Right, class FText* ReturnValue_Left, int32 Local_Index, class FText Local_Left, class FText Local_Right, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "HardenTut");

	Params::ULargeTutorial_C_HardenTut_Params Parms{};

	Parms.Right = Right;
	Parms.Left = Left;
	Parms.Index = Index;
	Parms.Local_Index = Local_Index;
	Parms.Local_Left = Local_Left;
	Parms.Local_Right = Local_Right;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue_Right != nullptr)
		*ReturnValue_Right = Parms.ReturnValue_Right;

	if (ReturnValue_Left != nullptr)
		*ReturnValue_Left = Parms.ReturnValue_Left;

}


// Function LargeTutorial.LargeTutorial_C.CreateResolveDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText ULargeTutorial_C::CreateResolveDescription(const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "CreateResolveDescription");

	Params::ULargeTutorial_C_CreateResolveDescription_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Split_LeftS_1 = CallFunc_Split_LeftS_1;
	Parms.CallFunc_Split_RightS_1 = CallFunc_Split_RightS_1;
	Parms.CallFunc_Split_ReturnValue_1 = CallFunc_Split_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LargeTutorial.LargeTutorial_C.GetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::GetHoldToDismiss(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "GetHoldToDismiss");

	Params::ULargeTutorial_C_GetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OpenDiscord
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::OpenDiscord(bool CallFunc_TryToLaunchURL_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OpenDiscord");

	Params::ULargeTutorial_C_OpenDiscord_Params Parms{};

	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::QuitGame(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "QuitGame");

	Params::ULargeTutorial_C_QuitGame_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.ToMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::ToMainMenu(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "ToMainMenu");

	Params::ULargeTutorial_C_ToMainMenu_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.RestartPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::RestartPressPreview(class FName Temp_name_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_Remove_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "RestartPressPreview");

	Params::ULargeTutorial_C_RestartPressPreview_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.HandleButtonsInPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::HandleButtonsInPressPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "HandleButtonsInPressPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.HidePromptsInPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::HidePromptsInPressPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "HidePromptsInPressPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.SetTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UpgradeName                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Upgrade                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Local_DataTable                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::SetTutorial(class UDataTable* DataTable, class FName& UpgradeName, class FName Local_Upgrade, class UDataTable* Local_DataTable, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetTutorial");

	Params::ULargeTutorial_C_SetTutorial_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.UpgradeName = UpgradeName;
	Parms.Local_Upgrade = Local_Upgrade;
	Parms.Local_DataTable = Local_DataTable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.UnlockBalistazookaItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeName                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::UnlockBalistazookaItem(class FName UpgradeName, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "UnlockBalistazookaItem");

	Params::ULargeTutorial_C_UnlockBalistazookaItem_Params Parms{};

	Parms.UpgradeName = UpgradeName;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.HandleStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::HandleStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "HandleStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.SetRetainerEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::SetRetainerEffect(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetRetainerEffect");

	Params::ULargeTutorial_C_SetRetainerEffect_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.SetGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::SetGameState(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetGameState");

	Params::ULargeTutorial_C_SetGameState_Params Parms{};

	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::OnClose(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_SetGamePaused_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnClose");

	Params::ULargeTutorial_C_OnClose_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::PlayFadeOut(FDelegateProperty_ Delegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PlayFadeOut");

	Params::ULargeTutorial_C_PlayFadeOut_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.PreviewTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUpgradeDisplayInfo         CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::PreviewTutorial(const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PreviewTutorial");

	Params::ULargeTutorial_C_PreviewTutorial_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.SetGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "SetGameplayPC");

	Params::ULargeTutorial_C_SetGameplayPC_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PlayFadeIn");

	Params::ULargeTutorial_C_PlayFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.PopulateTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_UpgradeImage                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_Image                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ControllerButton    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_HardenTut_ReturnValue_Right                             (None)
// class FText                        CallFunc_HardenTut_ReturnValue_Left                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUpgradeDisplayInfo         CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::PopulateTutorial(class UDataTable* DataTable, class FName Upgrade, class UTexture2D* NewLocalVar_0, class UTexture2D* Local_UpgradeImage, class UTexture2D* Local_Image, int32 Local_Index, class UUI_ControllerButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FStruct_ControllerButton& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_HardenTut_ReturnValue_Right, class FText CallFunc_HardenTut_ReturnValue_Left, bool Temp_bool_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, float Temp_float_Variable, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PopulateTutorial");

	Params::ULargeTutorial_C_PopulateTutorial_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Upgrade = Upgrade;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Local_UpgradeImage = Local_UpgradeImage;
	Parms.Local_Image = Local_Image;
	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HardenTut_ReturnValue_Right = CallFunc_HardenTut_ReturnValue_Right;
	Parms.CallFunc_HardenTut_ReturnValue_Left = CallFunc_HardenTut_ReturnValue_Left;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PreConstruct");

	Params::ULargeTutorial_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.DisplayUpgradeUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::DisplayUpgradeUnlocked(class UDataTable* DataTable, class FName Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "DisplayUpgradeUnlocked");

	Params::ULargeTutorial_C_DisplayUpgradeUnlocked_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OnDismiss_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnDismiss_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnDismiss_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnDismiss_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnDismiss_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnDismiss_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.CloseTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::CloseTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "CloseTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnInputModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bKeyboardMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTutorial_C::OnInputModeChanged_Set(bool bKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnInputModeChanged_Set");

	Params::ULargeTutorial_C_OnInputModeChanged_Set_Params Parms{};

	Parms.bKeyboardMode = bKeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OnInputModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnInputModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnInputModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.PressPreview_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::PressPreview_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "PressPreview_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.Restart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "Restart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.Discord
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::Discord()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "Discord");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.MainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::MainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "MainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.Quit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::Quit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "Quit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.BndEvt__UI_Controller_Restart_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::BndEvt__UI_Controller_Restart_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "BndEvt__UI_Controller_Restart_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::ULargeTutorial_C_BndEvt__UI_Controller_Restart_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::ULargeTutorial_C_BndEvt__UI_Controller_OpenDiscord_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.BndEvt__UI_Controller_ReturnToMainMenu_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::BndEvt__UI_Controller_ReturnToMainMenu_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "BndEvt__UI_Controller_ReturnToMainMenu_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	Params::ULargeTutorial_C_BndEvt__UI_Controller_ReturnToMainMenu_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.BndEvt__UI_Controller_Quit_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::BndEvt__UI_Controller_Quit_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "BndEvt__UI_Controller_Quit_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	Params::ULargeTutorial_C_BndEvt__UI_Controller_Quit_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.BndEvt__UI_Controller_Dismiss_K2Node_ComponentBoundEvent_4_OnPressStart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULargeTutorial_C::BndEvt__UI_Controller_Dismiss_K2Node_ComponentBoundEvent_4_OnPressStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "BndEvt__UI_Controller_Dismiss_K2Node_ComponentBoundEvent_4_OnPressStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.OnHUDSizeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::OnHUDSizeChanged(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnHUDSizeChanged");

	Params::ULargeTutorial_C_OnHUDSizeChanged_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OnHUDSizeChanged_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnHUDSizeChanged_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnHUDSizeChanged_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeTutorial.LargeTutorial_C.ExecuteUbergraph_LargeTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_CustomEvent_DataTable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Upgrade                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bKeyboardMode                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// enum class Enum_HUD_Size           K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTutorial_C::ExecuteUbergraph_LargeTutorial(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetGamePaused_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, class UDataTable* K2Node_CustomEvent_DataTable, class FName K2Node_CustomEvent_Upgrade, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_bKeyboardMode, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_3, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_2, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class Enum_HUD_Size K2Node_CustomEvent_Size, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "ExecuteUbergraph_LargeTutorial");

	Params::ULargeTutorial_C_ExecuteUbergraph_LargeTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_DataTable = K2Node_CustomEvent_DataTable;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_bKeyboardMode = K2Node_CustomEvent_bKeyboardMode;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_3 = K2Node_ComponentBoundEvent_ControllerButton_3;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_2 = K2Node_ComponentBoundEvent_ControllerButton_2;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_1 = K2Node_ComponentBoundEvent_ControllerButton_1;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTutorial.LargeTutorial_C.OnDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeTutorial_C::OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeTutorial_C", "OnDismissed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


