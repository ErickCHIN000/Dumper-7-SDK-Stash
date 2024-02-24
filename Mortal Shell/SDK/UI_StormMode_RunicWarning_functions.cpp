#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C
// (None)

class UClass* UUI_StormMode_RunicWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_RunicWarning_C");

	return Clss;
}


// UI_StormMode_RunicWarning_C UI_StormMode_RunicWarning.Default__UI_StormMode_RunicWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_RunicWarning_C* UUI_StormMode_RunicWarning_C::GetDefaultObj()
{
	static class UUI_StormMode_RunicWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_RunicWarning_C*>(UUI_StormMode_RunicWarning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "GetSelectedCharacter");

	Params::UUI_StormMode_RunicWarning_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "GetVerticalIndex");

	Params::UUI_StormMode_RunicWarning_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.Sound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::Sound_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "Sound_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_RunicWarning_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_RunicWarning_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "SetParentWidget");

	Params::UUI_StormMode_RunicWarning_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "SetSeedManager");

	Params::UUI_StormMode_RunicWarning_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnCharacterSelected");

	Params::UUI_StormMode_RunicWarning_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnSettingConfirmed");

	Params::UUI_StormMode_RunicWarning_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnWeaponSelected");

	Params::UUI_StormMode_RunicWarning_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "SetSaveGameRef");

	Params::UUI_StormMode_RunicWarning_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_RunicWarning_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnRiposteSelected");

	Params::UUI_StormMode_RunicWarning_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_RunicWarning_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnButtonHovered");

	Params::UUI_StormMode_RunicWarning_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnFadeOutEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnFadeOutEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnFadeOutEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.ExecuteUbergraph_UI_StormMode_RunicWarning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
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
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_StormMode_RunicWarning_C::ExecuteUbergraph_UI_StormMode_RunicWarning(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class UWidget* K2Node_Event_Widget_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_3, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "ExecuteUbergraph_UI_StormMode_RunicWarning");

	Params::UUI_StormMode_RunicWarning_C_ExecuteUbergraph_UI_StormMode_RunicWarning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
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
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_RunicWarning.UI_StormMode_RunicWarning_C.OnWarningClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_RunicWarning_C::OnWarningClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_RunicWarning_C", "OnWarningClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


