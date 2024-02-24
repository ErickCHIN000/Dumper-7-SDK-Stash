#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Dialogue.UI_Dialogue_C
// (None)

class UClass* UUI_Dialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Dialogue_C");

	return Clss;
}


// UI_Dialogue_C UI_Dialogue.Default__UI_Dialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Dialogue_C* UUI_Dialogue_C::GetDefaultObj()
{
	static class UUI_Dialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Dialogue_C*>(UUI_Dialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Dialogue.UI_Dialogue_C.IsLastAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUI_Dialogue_C::IsLastAudio(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "IsLastAudio");

	Params::UUI_Dialogue_C_IsLastAudio_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.CallStartTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::CallStartTalking(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "CallStartTalking");

	Params::UUI_Dialogue_C_CallStartTalking_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.CallFinishTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::CallFinishTalking(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "CallFinishTalking");

	Params::UUI_Dialogue_C_CallFinishTalking_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.HandleShowHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::HandleShowHUD(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HandleShowHUD");

	Params::UUI_Dialogue_C_HandleShowHUD_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.HandleHideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::HandleHideHUD(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HandleHideHUD");

	Params::UUI_Dialogue_C_HandleHideHUD_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.UpdateMultiBranchQuestion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BranchText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Dialogue_C::UpdateMultiBranchQuestion(class FText BranchText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "UpdateMultiBranchQuestion");

	Params::UUI_Dialogue_C_UpdateMultiBranchQuestion_Params Parms{};

	Parms.BranchText = BranchText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.HideDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::HideDialogue(TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HideDialogue");

	Params::UUI_Dialogue_C_HideDialogue_Params Parms{};

	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.DisableInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCutscene_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::DisableInputs(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInCutscene_ReturnValue, bool CallFunc_GetIsInPhotoMode_PhotoMode_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisableInputs");

	Params::UUI_Dialogue_C_DisableInputs_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsInCutscene_ReturnValue = CallFunc_GetIsInCutscene_ReturnValue;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.EnableInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCutscene_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::EnableInputs(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInCutscene_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "EnableInputs");

	Params::UUI_Dialogue_C_EnableInputs_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsInCutscene_ReturnValue = CallFunc_GetIsInCutscene_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.UpdateAnswers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Answers                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                AnswersID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_Dialogue_C::UpdateAnswers(TArray<class FText>& Answers, TArray<class FName>& AnswersID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "UpdateAnswers");

	Params::UUI_Dialogue_C_UpdateAnswers_Params Parms{};

	Parms.Answers = Answers;
	Parms.AnswersID = AnswersID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.CallAnswerSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Dialogue_Answer_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::CallAnswerSelected(class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "CallAnswerSelected");

	Params::UUI_Dialogue_C_CallAnswerSelected_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.Sound_NavAnswer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::Sound_NavAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Sound_NavAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.GetNavAnswerIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_Dialogue_C::GetNavAnswerIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "GetNavAnswerIndex");

	Params::UUI_Dialogue_C_GetNavAnswerIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.MaxIndex = MaxIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue.UI_Dialogue_C.NavSelectAnswer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNavAnswerIndex_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Dialogue_Answer_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNavAnswerIndex_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_Answer_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::NavSelectAnswer(bool CustomIndex, bool SkipSound, int32 Delta, int32 Index, int32 Local_SelectedIndex, bool Local_SkipSound, int32 Local_Delta, bool Local_CustomIndex, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_GetNavAnswerIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNavAnswerIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UUI_Dialogue_Answer_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "NavSelectAnswer");

	Params::UUI_Dialogue_C_NavSelectAnswer_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Index = Index;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetNavAnswerIndex_ReturnValue = CallFunc_GetNavAnswerIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetNavAnswerIndex_ReturnValue_1 = CallFunc_GetNavAnswerIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.ClearAnswers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::ClearAnswers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "ClearAnswers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.CreateAnswers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_Answer_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::CreateAnswers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_Dialogue_Answer_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "CreateAnswers");

	Params::UUI_Dialogue_C_CreateAnswers_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.Get_Text_No_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

class FText UUI_Dialogue_C::Get_Text_No_Text(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Get_Text_No_Text");

	Params::UUI_Dialogue_C_Get_Text_No_Text_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_Text_Yes_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

class FText UUI_Dialogue_C::Get_Text_Yes_Text(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Get_Text_Yes_Text");

	Params::UUI_Dialogue_C_Get_Text_Yes_Text_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue.UI_Dialogue_C.StopVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StopVO                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::StopVO(bool StopVO, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "StopVO");

	Params::UUI_Dialogue_C_StopVO_Params Parms{};

	Parms.StopVO = StopVO;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.GetProceedDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Delay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Dialogue_C::GetProceedDelay(float Local_Delay, bool Temp_bool_Variable, float Temp_float_Variable, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "GetProceedDelay");

	Params::UUI_Dialogue_C_GetProceedDelay_Params Parms{};

	Parms.Local_Delay = Local_Delay;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue.UI_Dialogue_C.GetSoundCueDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Dialogue_C::GetSoundCueDelay(bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "GetSoundCueDelay");

	Params::UUI_Dialogue_C_GetSoundCueDelay_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Dialogue.UI_Dialogue_C.ClearProceedTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::ClearProceedTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "ClearProceedTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.SelectChoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::SelectChoice(const class FString& Direction, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "SelectChoice");

	Params::UUI_Dialogue_C_SelectChoice_Params Parms{};

	Parms.Direction = Direction;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.GetUpgradeForThisNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Upgrade                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUIDialogueUpgradeEntry     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::GetUpgradeForThisNode(class FName* Upgrade, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FUIDialogueUpgradeEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "GetUpgradeForThisNode");

	Params::UUI_Dialogue_C_GetUpgradeForThisNode_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = Parms.Upgrade;

}


// Function UI_Dialogue.UI_Dialogue_C.HasUpgradeForThisNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHas                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUIDialogueUpgradeEntry     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::HasUpgradeForThisNode(bool* bHas, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FUIDialogueUpgradeEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HasUpgradeForThisNode");

	Params::UUI_Dialogue_C_HasUpgradeForThisNode_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHas != nullptr)
		*bHas = Parms.bHas;

}


// Function UI_Dialogue.UI_Dialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySequenceWithBranch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        UpgradeToUnlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UpgradeDisplayInfoTableID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BranchText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bDampenAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::DisplaySequenceWithBranch(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, class FText BranchText, bool bDampenAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySequenceWithBranch");

	Params::UUI_Dialogue_C_DisplaySequenceWithBranch_Params Parms{};

	Parms.CurrentSequence = CurrentSequence;
	Parms.UpgradeToUnlock = UpgradeToUnlock;
	Parms.UpgradeDisplayInfoTableID = UpgradeDisplayInfoTableID;
	Parms.BranchText = BranchText;
	Parms.bDampenAudio = bDampenAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.HideUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::HideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HideUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DlgLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::DlgLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DlgLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DlgRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::DlgRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DlgRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySequenceAfterBranch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bBranchAgain                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::DisplaySequenceAfterBranch(TArray<struct FDHDialogueLine>& CurrentSequence, bool bBranchAgain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySequenceAfterBranch");

	Params::UUI_Dialogue_C_DisplaySequenceAfterBranch_Params Parms{};

	Parms.CurrentSequence = CurrentSequence;
	Parms.bBranchAgain = bBranchAgain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplayBranchOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BranchText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Dialogue_C::DisplayBranchOnly(class FText BranchText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplayBranchOnly");

	Params::UUI_Dialogue_C_DisplayBranchOnly_Params Parms{};

	Parms.BranchText = BranchText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplayNewLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::DisplayNewLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplayNewLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySimpleSequence
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bDampenAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::DisplaySimpleSequence(TArray<struct FDHDialogueLine>& CurrentSequence, bool bDampenAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySimpleSequence");

	Params::UUI_Dialogue_C_DisplaySimpleSequence_Params Parms{};

	Parms.CurrentSequence = CurrentSequence;
	Parms.bDampenAudio = bDampenAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.HideUIAfterBranch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::HideUIAfterBranch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "HideUIAfterBranch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.StopListeningForInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::StopListeningForInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "StopListeningForInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.UnlockFancyNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::UnlockFancyNotification(class FName UnlockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "UnlockFancyNotification");

	Params::UUI_Dialogue_C_UnlockFancyNotification_Params Parms{};

	Parms.UnlockName = UnlockName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.WidgetClosed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::WidgetClosed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "WidgetClosed_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.SetupInDialogueUpgrades
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUIDialogueUpgradeEntry>UpgradeEntries                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_Dialogue_C::SetupInDialogueUpgrades(TArray<struct FUIDialogueUpgradeEntry>& UpgradeEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "SetupInDialogueUpgrades");

	Params::UUI_Dialogue_C_SetupInDialogueUpgrades_Params Parms{};

	Parms.UpgradeEntries = UpgradeEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnScaleChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnScaleChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnScaleChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnScaleChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::OnScaleChanged_Set(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnScaleChanged_Set");

	Params::UUI_Dialogue_C_OnScaleChanged_Set_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnDamageTaken_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnDamageTaken_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnDamageTaken_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DlgProceedPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::DlgProceedPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DlgProceedPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DamageTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::DamageTaken(class UClass* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DamageTaken");

	Params::UUI_Dialogue_C_DamageTaken_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.Dialogue_Interrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StopVO                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::Dialogue_Interrupt(bool StopVO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Dialogue_Interrupt");

	Params::UUI_Dialogue_C_Dialogue_Interrupt_Params Parms{};

	Parms.StopVO = StopVO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnPlayerDeath_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnPlayerDeath_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnPlayerDeath_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnPlayerDeath_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnPlayerDeath_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnPlayerDeath_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnDamageTaken_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnDamageTaken_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnDamageTaken_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnPlayerDeath_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnPlayerDeath_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnPlayerDeath_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySequenceWithMultipleBranch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        UpgradeToUnlock                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UpgradeDisplayInfoTableID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BranchText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               DampenAudio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                Answers                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                AnswersIDs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_Dialogue_C::DisplaySequenceWithMultipleBranch(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, class FText BranchText, bool DampenAudio, TArray<class FText>& Answers, TArray<class FName>& AnswersIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySequenceWithMultipleBranch");

	Params::UUI_Dialogue_C_DisplaySequenceWithMultipleBranch_Params Parms{};

	Parms.CurrentSequence = CurrentSequence;
	Parms.UpgradeToUnlock = UpgradeToUnlock;
	Parms.UpgradeDisplayInfoTableID = UpgradeDisplayInfoTableID;
	Parms.BranchText = BranchText;
	Parms.DampenAudio = DampenAudio;
	Parms.Answers = Answers;
	Parms.AnswersIDs = AnswersIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.ShowBranch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::ShowBranch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "ShowBranch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.CompleteSequenceNoBranch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::CompleteSequenceNoBranch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "CompleteSequenceNoBranch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.UnlockUpgradeAtSequenceEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::UnlockUpgradeAtSequenceEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "UnlockUpgradeAtSequenceEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.Proceed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::Proceed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Proceed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySequence
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        UpgradeToUnlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UpgradeDisplayInfoTableID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDampenAudio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::DisplaySequence(TArray<struct FDHDialogueLine>& CurrentSequence, class FName UpgradeToUnlock, class FName UpgradeDisplayInfoTableID, bool bDampenAudio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySequence");

	Params::UUI_Dialogue_C_DisplaySequence_Params Parms{};

	Parms.CurrentSequence = CurrentSequence;
	Parms.UpgradeToUnlock = UpgradeToUnlock;
	Parms.UpgradeDisplayInfoTableID = UpgradeDisplayInfoTableID;
	Parms.bDampenAudio = bDampenAudio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplayMultiBranchOnly
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BranchText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                AnswersArray                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                AnswersIDArray                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bDoNotLeaveMultiBranch                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::DisplayMultiBranchOnly(class FText BranchText, TArray<class FText>& AnswersArray, TArray<class FName>& AnswersIDArray, bool bDoNotLeaveMultiBranch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplayMultiBranchOnly");

	Params::UUI_Dialogue_C_DisplayMultiBranchOnly_Params Parms{};

	Parms.BranchText = BranchText;
	Parms.AnswersArray = AnswersArray;
	Parms.AnswersIDArray = AnswersIDArray;
	Parms.bDoNotLeaveMultiBranch = bDoNotLeaveMultiBranch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "Tick");

	Params::UUI_Dialogue_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnShowAnim_Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnShowAnim_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnShowAnim_Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.DisplaySequenceAfterMultiBranch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     NewSequence                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               BranchAgain_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        NewBranchText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                NewAnswers                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                NewIDs                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_Dialogue_C::DisplaySequenceAfterMultiBranch(TArray<struct FDHDialogueLine>& NewSequence, bool BranchAgain_, class FText NewBranchText, TArray<class FText>& NewAnswers, TArray<class FName>& NewIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "DisplaySequenceAfterMultiBranch");

	Params::UUI_Dialogue_C_DisplaySequenceAfterMultiBranch_Params Parms{};

	Parms.NewSequence = NewSequence;
	Parms.BranchAgain_ = BranchAgain_;
	Parms.NewBranchText = NewBranchText;
	Parms.NewAnswers = NewAnswers;
	Parms.NewIDs = NewIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.ExecuteUbergraph_UI_Dialogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_CurrentSequence_4                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeToUnlock_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeDisplayInfoTableID_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_BranchText_3                                  (None)
// bool                               K2Node_CustomEvent_bDampenAudio_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_CurrentSequence_3                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bBranchAgain                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_BranchText_2                                  (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHDialogueLine             K2Node_MakeStruct_DHDialogueLine                                 (None)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_CurrentSequence_2                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDampenAudio_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FName                        K2Node_CustomEvent_UnlockName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUpgradeForThisNode_bHas                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_UpgradeUnlocked_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FUIDialogueUpgradeEntry>K2Node_CustomEvent_UpgradeEntries                                (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeForThisNode_Upgrade                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_StopVO                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_UpgradeUnlocked_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSoundCueDelay_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProceedDelay_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_CurrentSequence_1                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeToUnlock_1                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeDisplayInfoTableID_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_BranchText_1                                  (None)
// bool                               K2Node_CustomEvent_DampenAudio                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_CustomEvent_Answers                                       (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_AnswersIDs                                    (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_CurrentSequence                               (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeToUnlock                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeDisplayInfoTableID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDampenAudio                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_BranchText                                    (None)
// TArray<class FText>                K2Node_CustomEvent_AnswersArray                                  (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_AnswersIDArray                                (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDoNotLeaveMultiBranch                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHDialogueLine             K2Node_MakeStruct_DHDialogueLine_1                               (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_CustomEvent_NewSequence                                   (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_BranchAgain_                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_NewBranchText                                 (ConstParm)
// TArray<class FText>                K2Node_CustomEvent_NewAnswers                                    (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_NewIDs                                        (ConstParm, ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::ExecuteUbergraph_UI_Dialogue(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_4, class FName K2Node_CustomEvent_UpgradeToUnlock_2, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID_2, class FText K2Node_CustomEvent_BranchText_3, bool K2Node_CustomEvent_bDampenAudio_2, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_3, bool K2Node_CustomEvent_bBranchAgain, class FText K2Node_CustomEvent_BranchText_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_2, bool K2Node_CustomEvent_bDampenAudio_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FName K2Node_CustomEvent_UnlockName, bool CallFunc_HasUpgradeForThisNode_bHas, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FUIDialogueUpgradeEntry>& K2Node_CustomEvent_UpgradeEntries, class FName CallFunc_GetUpgradeForThisNode_Upgrade, float K2Node_CustomEvent_Scale, int32 CallFunc_Array_LastIndex_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UClass* K2Node_CustomEvent_DamageType, bool K2Node_CustomEvent_StopVO, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue, float CallFunc_GetSoundCueDelay_ReturnValue, float CallFunc_GetProceedDelay_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float Temp_float_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, float Temp_float_Variable_1, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence_1, class FName K2Node_CustomEvent_UpgradeToUnlock_1, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID_1, class FText K2Node_CustomEvent_BranchText_1, bool K2Node_CustomEvent_DampenAudio, TArray<class FText>& K2Node_CustomEvent_Answers, TArray<class FName>& K2Node_CustomEvent_AnswersIDs, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_CurrentSequence, class FName K2Node_CustomEvent_UpgradeToUnlock, class FName K2Node_CustomEvent_UpgradeDisplayInfoTableID, bool K2Node_CustomEvent_bDampenAudio, class FText K2Node_CustomEvent_BranchText, TArray<class FText>& K2Node_CustomEvent_AnswersArray, TArray<class FName>& K2Node_CustomEvent_AnswersIDArray, bool K2Node_CustomEvent_bDoNotLeaveMultiBranch, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine_1, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FDHDialogueLine>& K2Node_CustomEvent_NewSequence, bool K2Node_CustomEvent_BranchAgain_, class FText K2Node_CustomEvent_NewBranchText, TArray<class FText>& K2Node_CustomEvent_NewAnswers, TArray<class FName>& K2Node_CustomEvent_NewIDs, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UWidgetAnimation* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_Select_Default_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "ExecuteUbergraph_UI_Dialogue");

	Params::UUI_Dialogue_C_ExecuteUbergraph_UI_Dialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CurrentSequence_4 = K2Node_CustomEvent_CurrentSequence_4;
	Parms.K2Node_CustomEvent_UpgradeToUnlock_2 = K2Node_CustomEvent_UpgradeToUnlock_2;
	Parms.K2Node_CustomEvent_UpgradeDisplayInfoTableID_2 = K2Node_CustomEvent_UpgradeDisplayInfoTableID_2;
	Parms.K2Node_CustomEvent_BranchText_3 = K2Node_CustomEvent_BranchText_3;
	Parms.K2Node_CustomEvent_bDampenAudio_2 = K2Node_CustomEvent_bDampenAudio_2;
	Parms.K2Node_CustomEvent_CurrentSequence_3 = K2Node_CustomEvent_CurrentSequence_3;
	Parms.K2Node_CustomEvent_bBranchAgain = K2Node_CustomEvent_bBranchAgain;
	Parms.K2Node_CustomEvent_BranchText_2 = K2Node_CustomEvent_BranchText_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_DHDialogueLine = K2Node_MakeStruct_DHDialogueLine;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.K2Node_CustomEvent_CurrentSequence_2 = K2Node_CustomEvent_CurrentSequence_2;
	Parms.K2Node_CustomEvent_bDampenAudio_1 = K2Node_CustomEvent_bDampenAudio_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_CustomEvent_UnlockName = K2Node_CustomEvent_UnlockName;
	Parms.CallFunc_HasUpgradeForThisNode_bHas = CallFunc_HasUpgradeForThisNode_bHas;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_UpgradeEntries = K2Node_CustomEvent_UpgradeEntries;
	Parms.CallFunc_GetUpgradeForThisNode_Upgrade = CallFunc_GetUpgradeForThisNode_Upgrade;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_StopVO = K2Node_CustomEvent_StopVO;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetSoundCueDelay_ReturnValue = CallFunc_GetSoundCueDelay_ReturnValue;
	Parms.CallFunc_GetProceedDelay_ReturnValue = CallFunc_GetProceedDelay_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.K2Node_CustomEvent_CurrentSequence_1 = K2Node_CustomEvent_CurrentSequence_1;
	Parms.K2Node_CustomEvent_UpgradeToUnlock_1 = K2Node_CustomEvent_UpgradeToUnlock_1;
	Parms.K2Node_CustomEvent_UpgradeDisplayInfoTableID_1 = K2Node_CustomEvent_UpgradeDisplayInfoTableID_1;
	Parms.K2Node_CustomEvent_BranchText_1 = K2Node_CustomEvent_BranchText_1;
	Parms.K2Node_CustomEvent_DampenAudio = K2Node_CustomEvent_DampenAudio;
	Parms.K2Node_CustomEvent_Answers = K2Node_CustomEvent_Answers;
	Parms.K2Node_CustomEvent_AnswersIDs = K2Node_CustomEvent_AnswersIDs;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentSequence = K2Node_CustomEvent_CurrentSequence;
	Parms.K2Node_CustomEvent_UpgradeToUnlock = K2Node_CustomEvent_UpgradeToUnlock;
	Parms.K2Node_CustomEvent_UpgradeDisplayInfoTableID = K2Node_CustomEvent_UpgradeDisplayInfoTableID;
	Parms.K2Node_CustomEvent_bDampenAudio = K2Node_CustomEvent_bDampenAudio;
	Parms.K2Node_CustomEvent_BranchText = K2Node_CustomEvent_BranchText;
	Parms.K2Node_CustomEvent_AnswersArray = K2Node_CustomEvent_AnswersArray;
	Parms.K2Node_CustomEvent_AnswersIDArray = K2Node_CustomEvent_AnswersIDArray;
	Parms.K2Node_CustomEvent_bDoNotLeaveMultiBranch = K2Node_CustomEvent_bDoNotLeaveMultiBranch;
	Parms.K2Node_MakeStruct_DHDialogueLine_1 = K2Node_MakeStruct_DHDialogueLine_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NewSequence = K2Node_CustomEvent_NewSequence;
	Parms.K2Node_CustomEvent_BranchAgain_ = K2Node_CustomEvent_BranchAgain_;
	Parms.K2Node_CustomEvent_NewBranchText = K2Node_CustomEvent_NewBranchText;
	Parms.K2Node_CustomEvent_NewAnswers = K2Node_CustomEvent_NewAnswers;
	Parms.K2Node_CustomEvent_NewIDs = K2Node_CustomEvent_NewIDs;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnFinishTalking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnFinishTalking__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnFinishTalking__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnStartTalking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnStartTalking__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnStartTalking__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnAnswerSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::OnAnswerSelected__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnAnswerSelected__DelegateSignature");

	Params::UUI_Dialogue_C_OnAnswerSelected__DelegateSignature_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnEndOfSequenceButBeforeBranch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnEndOfSequenceButBeforeBranch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnEndOfSequenceButBeforeBranch__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnNewLineDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::OnNewLineDisplayed__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnNewLineDisplayed__DelegateSignature");

	Params::UUI_Dialogue_C_OnNewLineDisplayed__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnDialogueProceeded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewEntryIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::OnDialogueProceeded__DelegateSignature(int32 NewEntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnDialogueProceeded__DelegateSignature");

	Params::UUI_Dialogue_C_OnDialogueProceeded__DelegateSignature_Params Parms{};

	Parms.NewEntryIndex = NewEntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.UnlockFancyNotificationFromDialogue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::UnlockFancyNotificationFromDialogue__DelegateSignature(class FName UnlockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "UnlockFancyNotificationFromDialogue__DelegateSignature");

	Params::UUI_Dialogue_C_UnlockFancyNotificationFromDialogue__DelegateSignature_Params Parms{};

	Parms.UnlockName = UnlockName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.OnDlgWidgetHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::OnDlgWidgetHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnDlgWidgetHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_C::OnOptionSelected__DelegateSignature(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnOptionSelected__DelegateSignature");

	Params::UUI_Dialogue_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue.UI_Dialogue_C.SequenceCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_C::SequenceCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "SequenceCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue.UI_Dialogue_C.OnUpgradeUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialogue_C::OnUpgradeUnlocked__DelegateSignature(class FName UpgradeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_C", "OnUpgradeUnlocked__DelegateSignature");

	Params::UUI_Dialogue_C_OnUpgradeUnlocked__DelegateSignature_Params Parms{};

	Parms.UpgradeName = UpgradeName;

	UObject::ProcessEvent(Func, &Parms);

}

}


