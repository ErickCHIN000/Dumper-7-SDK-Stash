#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UpgradeUnlocked.UI_UpgradeUnlocked_C
// (None)

class UClass* UUI_UpgradeUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UpgradeUnlocked_C");

	return Clss;
}


// UI_UpgradeUnlocked_C UI_UpgradeUnlocked.Default__UI_UpgradeUnlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UpgradeUnlocked_C* UUI_UpgradeUnlocked_C::GetDefaultObj()
{
	static class UUI_UpgradeUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UpgradeUnlocked_C*>(UUI_UpgradeUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.GetGamePadConfirmButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UTexture2D*                  CallFunc_GetButtonIcon_Texture                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UUI_UpgradeUnlocked_C::GetGamePadConfirmButton(class UTexture2D* CallFunc_GetButtonIcon_Texture, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "GetGamePadConfirmButton");

	Params::UUI_UpgradeUnlocked_C_GetGamePadConfirmButton_Params Parms{};

	Parms.CallFunc_GetButtonIcon_Texture = CallFunc_GetButtonIcon_Texture;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_UpgradeUnlocked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.OnFaceButtonPressAndHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UpgradeUnlocked_C::OnFaceButtonPressAndHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "OnFaceButtonPressAndHold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UpgradeUnlocked_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "PreConstruct");

	Params::UUI_UpgradeUnlocked_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.ForceClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UpgradeUnlocked_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "ForceClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.DisplayUpgradeUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromUI                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UpgradeUnlocked_C::DisplayUpgradeUnlocked(class FName Upgrade, bool bFromUI, class UDataTable* DataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "DisplayUpgradeUnlocked");

	Params::UUI_UpgradeUnlocked_C_DisplayUpgradeUnlocked_Params Parms{};

	Parms.Upgrade = Upgrade;
	Parms.bFromUI = bFromUI;
	Parms.DataTable = DataTable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.ExecuteUbergraph_UI_UpgradeUnlocked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FUpgradeDisplayInfo         CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Upgrade                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromUI                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_CustomEvent_DataTable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUpgradeDisplayInfo         CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UpgradeUnlocked_C::ExecuteUbergraph_UI_UpgradeUnlocked(int32 EntryPoint, bool CallFunc_SetGamePaused_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName K2Node_CustomEvent_Upgrade, bool K2Node_CustomEvent_bFromUI, class UDataTable* K2Node_CustomEvent_DataTable, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "ExecuteUbergraph_UI_UpgradeUnlocked");

	Params::UUI_UpgradeUnlocked_C_ExecuteUbergraph_UI_UpgradeUnlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.K2Node_CustomEvent_bFromUI = K2Node_CustomEvent_bFromUI;
	Parms.K2Node_CustomEvent_DataTable = K2Node_CustomEvent_DataTable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.UnlockFancyNotificationShowing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UpgradeUnlocked_C::UnlockFancyNotificationShowing__DelegateSignature(class FName UnlockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "UnlockFancyNotificationShowing__DelegateSignature");

	Params::UUI_UpgradeUnlocked_C_UnlockFancyNotificationShowing__DelegateSignature_Params Parms{};

	Parms.UnlockName = UnlockName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpgradeUnlocked.UI_UpgradeUnlocked_C.WidgetClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UpgradeUnlocked_C::WidgetClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpgradeUnlocked_C", "WidgetClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


