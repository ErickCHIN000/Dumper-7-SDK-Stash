#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C
// (None)

class UClass* UWBP_GuideBook_DetailPane_HowToPlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_DetailPane_HowToPlay_C");

	return Clss;
}


// WBP_GuideBook_DetailPane_HowToPlay_C WBP_GuideBook_DetailPane_HowToPlay.Default__WBP_GuideBook_DetailPane_HowToPlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_DetailPane_HowToPlay_C* UWBP_GuideBook_DetailPane_HowToPlay_C::GetDefaultObj()
{
	static class UWBP_GuideBook_DetailPane_HowToPlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_DetailPane_HowToPlay_C*>(UWBP_GuideBook_DetailPane_HowToPlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnPopupClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_HowToPlay_C::OnPopupClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "OnPopupClosed");

	Params::UWBP_GuideBook_DetailPane_HowToPlay_C_OnPopupClosed_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnExecuteCategoryOperation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCodexTrackerComponent*      LCodexTracker                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Codex_C*          CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Codex_C*   K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_GetCodexEntry_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexEntry                 CallFunc_GetCodexEntry_OutCodexEntry                             (None)
// bool                               CallFunc_GetCodexEntry_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_HowToPlay_C::OnExecuteCategoryOperation(class UCodexTrackerComponent* LCodexTracker, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class UWBP_Popup_Codex_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, TScriptInterface<class ICodexTrackerInterface> CallFunc_GetCodexEntry_self_CastInput, const struct FCodexEntry& CallFunc_GetCodexEntry_OutCodexEntry, bool CallFunc_GetCodexEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "OnExecuteCategoryOperation");

	Params::UWBP_GuideBook_DetailPane_HowToPlay_C_OnExecuteCategoryOperation_Params Parms{};

	Parms.LCodexTracker = LCodexTracker;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;
	Parms.CallFunc_GetCodexEntry_self_CastInput = CallFunc_GetCodexEntry_self_CastInput;
	Parms.CallFunc_GetCodexEntry_OutCodexEntry = CallFunc_GetCodexEntry_OutCodexEntry;
	Parms.CallFunc_GetCodexEntry_ReturnValue = CallFunc_GetCodexEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.UpdateCosmetics
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCodexBaseDataAsset*         CodexDataAsset                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImage_IsValidReference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetImage_EntryImage                                     (UObjectWrapper, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Codex_C*   K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         CallFunc_GetCodexDataAsset_CodexDataAsset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text   (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_HowToPlay_C::UpdateCosmetics(class UCodexBaseDataAsset* CodexDataAsset, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, class FText CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_TextIsEmpty_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_2, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "UpdateCosmetics");

	Params::UWBP_GuideBook_DetailPane_HowToPlay_C_UpdateCosmetics_Params Parms{};

	Parms.CodexDataAsset = CodexDataAsset;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetImage_IsValidReference = CallFunc_GetImage_IsValidReference;
	Parms.CallFunc_GetImage_EntryImage = CallFunc_GetImage_EntryImage;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCodexDataAsset_CodexDataAsset = CallFunc_GetCodexDataAsset_CodexDataAsset;
	Parms.CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text = CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue_2 = CallFunc_TextIsEmpty_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.ResetCosmetics
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_HowToPlay_C::ResetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "ResetCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_HowToPlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_HowToPlay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_HowToPlay_C::ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay");

	Params::UWBP_GuideBook_DetailPane_HowToPlay_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnEntryPopupUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpening                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_HowToPlay_C::OnEntryPopupUpdated__DelegateSignature(bool IsOpening)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_HowToPlay_C", "OnEntryPopupUpdated__DelegateSignature");

	Params::UWBP_GuideBook_DetailPane_HowToPlay_C_OnEntryPopupUpdated__DelegateSignature_Params Parms{};

	Parms.IsOpening = IsOpening;

	UObject::ProcessEvent(Func, &Parms);

}

}


