#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LorePopup.UI_LorePopup_C
// (None)

class UClass* UUI_LorePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LorePopup_C");

	return Clss;
}


// UI_LorePopup_C UI_LorePopup.Default__UI_LorePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LorePopup_C* UUI_LorePopup_C::GetDefaultObj()
{
	static class UUI_LorePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LorePopup_C*>(UUI_LorePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LorePopup.UI_LorePopup_C.HandleScale
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

void UUI_LorePopup_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "HandleScale");

	Params::UUI_LorePopup_C_HandleScale_Params Parms{};

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


// Function UI_LorePopup.UI_LorePopup_C.FadeInDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LorePopup_C::FadeInDismiss(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "FadeInDismiss");

	Params::UUI_LorePopup_C_FadeInDismiss_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.GetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHoldToDismiss_Hold                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LorePopup_C::GetHoldToDismiss(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHoldToDismiss_Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "GetHoldToDismiss");

	Params::UUI_LorePopup_C_GetHoldToDismiss_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHoldToDismiss_Hold = CallFunc_GetHoldToDismiss_Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.IsAllLoreUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                LoresToCheck                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LorePopup_C::IsAllLoreUnlocked(bool* bUnlocked, const TArray<class FName>& LoresToCheck, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "IsAllLoreUnlocked");

	Params::UUI_LorePopup_C_IsAllLoreUnlocked_Params Parms{};

	Parms.LoresToCheck = LoresToCheck;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

}


// Function UI_LorePopup.UI_LorePopup_C.CloseLorePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LorePopup_C::CloseLorePopup(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "CloseLorePopup");

	Params::UUI_LorePopup_C_CloseLorePopup_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.GetGamePadConfirmButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UTexture2D*                  CallFunc_GetButtonIcon_Texture                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UUI_LorePopup_C::GetGamePadConfirmButton(class UTexture2D* CallFunc_GetButtonIcon_Texture, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "GetGamePadConfirmButton");

	Params::UUI_LorePopup_C_GetGamePadConfirmButton_Params Parms{};

	Parms.CallFunc_GetButtonIcon_Texture = CallFunc_GetButtonIcon_Texture;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_LorePopup.UI_LorePopup_C.OnFaceButtonPressAndHold_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnFaceButtonPressAndHold_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnFaceButtonPressAndHold_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnFaceButtonPressAndHold_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnFaceButtonPressAndHold_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnFaceButtonPressAndHold_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnClose_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnClose_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnClose_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.TakeDamageBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::TakeDamageBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "TakeDamageBind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnDamageTakenWithDamageType_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LorePopup_C::OnDamageTakenWithDamageType_Set(class UClass* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnDamageTakenWithDamageType_Set");

	Params::UUI_LorePopup_C_OnDamageTakenWithDamageType_Set_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.ForcedClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::ForcedClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "ForcedClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnPlayerDead_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnPlayerDead_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnPlayerDead_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnPlayerDead_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnPlayerDead_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnPlayerDead_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.CheckAllLoreUnlockedAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::CheckAllLoreUnlockedAchievement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "CheckAllLoreUnlockedAchievement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "BndEvt__UI_ControllerFaceButtonPressAndHold_K2Node_ComponentBoundEvent_0_OnPressStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.OnHoldToDismissChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LorePopup_C::OnHoldToDismissChanged(bool Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "OnHoldToDismissChanged");

	Params::UUI_LorePopup_C_OnHoldToDismissChanged_Params Parms{};

	Parms.Hold = Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.UnbindDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::UnbindDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "UnbindDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.DisplayLoreNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LoreID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LorePopup_C::DisplayLoreNotify(class FName LoreID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "DisplayLoreNotify");

	Params::UUI_LorePopup_C_DisplayLoreNotify_Params Parms{};

	Parms.LoreID = LoreID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.UnbindDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::UnbindDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "UnbindDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LorePopup.UI_LorePopup_C.ExecuteUbergraph_UI_LorePopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLore                       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllLoreUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hold                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_LoreID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UUI_LorePopup_C::ExecuteUbergraph_UI_LorePopup(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, const struct FLore& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UClass* K2Node_CustomEvent_DamageType, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsAllLoreUnlocked_bUnlocked, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool K2Node_CustomEvent_Hold, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_LoreID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "ExecuteUbergraph_UI_LorePopup");

	Params::UUI_LorePopup_C_ExecuteUbergraph_UI_LorePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_IsAllLoreUnlocked_bUnlocked = CallFunc_IsAllLoreUnlocked_bUnlocked;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_Hold = K2Node_CustomEvent_Hold;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_LoreID = K2Node_CustomEvent_LoreID;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LorePopup.UI_LorePopup_C.WidgetClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LorePopup_C::WidgetClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LorePopup_C", "WidgetClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


