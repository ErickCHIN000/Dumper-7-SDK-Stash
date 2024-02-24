#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C
// (None)

class UClass* UUI_StormMode_Menu_Warning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_Warning_C");

	return Clss;
}


// UI_StormMode_Menu_Warning_C UI_StormMode_Menu_Warning.Default__UI_StormMode_Menu_Warning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_Warning_C* UUI_StormMode_Menu_Warning_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_Warning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_Warning_C*>(UUI_StormMode_Menu_Warning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "GetSelectedCharacter");

	Params::UUI_StormMode_Menu_Warning_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "GetVerticalIndex");

	Params::UUI_StormMode_Menu_Warning_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Sound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::Sound_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "Sound_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Nav_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_SelectButton_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_SelectButton_self_CastInput_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Warning_C::Nav_Confirm(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_SelectButton_self_CastInput_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "Nav_Confirm");

	Params::UUI_StormMode_Menu_Warning_C_Nav_Confirm_Params Parms{};

	Parms.CallFunc_SelectButton_self_CastInput = CallFunc_SelectButton_self_CastInput;
	Parms.CallFunc_SelectButton_self_CastInput_1 = CallFunc_SelectButton_self_CastInput_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.Nav_LeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CheckIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CheckIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Warning_C::Nav_LeftRight(bool CheckIndex, bool Custom, int32 Index, int32 Local_CustomIndex, bool Local_CheckIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_2, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_3, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_4, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_5, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_6, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "Nav_LeftRight");

	Params::UUI_StormMode_Menu_Warning_C_Nav_LeftRight_Params Parms{};

	Parms.CheckIndex = CheckIndex;
	Parms.Custom = Custom;
	Parms.Index = Index;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_CheckIndex = Local_CheckIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;
	Parms.CallFunc_HighlightButton_self_CastInput_1 = CallFunc_HighlightButton_self_CastInput_1;
	Parms.CallFunc_HighlightButton_self_CastInput_2 = CallFunc_HighlightButton_self_CastInput_2;
	Parms.CallFunc_HighlightButton_self_CastInput_3 = CallFunc_HighlightButton_self_CastInput_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_HighlightButton_self_CastInput_4 = CallFunc_HighlightButton_self_CastInput_4;
	Parms.CallFunc_HighlightButton_self_CastInput_5 = CallFunc_HighlightButton_self_CastInput_5;
	Parms.CallFunc_HighlightButton_self_CastInput_6 = CallFunc_HighlightButton_self_CastInput_6;
	Parms.CallFunc_HighlightButton_self_CastInput_7 = CallFunc_HighlightButton_self_CastInput_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_Menu_Warning_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_Menu_Warning_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "SetParentWidget");

	Params::UUI_StormMode_Menu_Warning_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "SetSeedManager");

	Params::UUI_StormMode_Menu_Warning_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnCharacterSelected");

	Params::UUI_StormMode_Menu_Warning_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnSettingConfirmed");

	Params::UUI_StormMode_Menu_Warning_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnWeaponSelected");

	Params::UUI_StormMode_Menu_Warning_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "SetSaveGameRef");

	Params::UUI_StormMode_Menu_Warning_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_Menu_Warning_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnRiposteSelected");

	Params::UUI_StormMode_Menu_Warning_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnButtonHovered");

	Params::UUI_StormMode_Menu_Warning_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	Params::UUI_StormMode_Menu_Warning_C_BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	Params::UUI_StormMode_Menu_Warning_C_BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "BndEvt__UI_StormMode_Menu_Confirm_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.ExecuteUbergraph_UI_StormMode_Menu_Warning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           K2Node_Event_SeedManager                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName                                            (ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_Event_MapStateSaveGame                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName_MapState                                   (ZeroConstructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Warning_C::ExecuteUbergraph_UI_StormMode_Menu_Warning(int32 EntryPoint, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class UWidget* K2Node_Event_Widget_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "ExecuteUbergraph_UI_StormMode_Menu_Warning");

	Params::UUI_StormMode_Menu_Warning_C_ExecuteUbergraph_UI_StormMode_Menu_Warning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;
	Parms.K2Node_Event_Weapon_1 = K2Node_Event_Weapon_1;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_SeedManager = K2Node_Event_SeedManager;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_SlotName = K2Node_Event_SlotName;
	Parms.K2Node_Event_MapStateSaveGame = K2Node_Event_MapStateSaveGame;
	Parms.K2Node_Event_SlotName_MapState = K2Node_Event_SlotName_MapState;
	Parms.K2Node_Event_Riposte_1 = K2Node_Event_Riposte_1;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnCancelSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::OnCancelSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnCancelSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Warning.UI_StormMode_Menu_Warning_C.OnConfirmSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Warning_C::OnConfirmSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Warning_C", "OnConfirmSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


