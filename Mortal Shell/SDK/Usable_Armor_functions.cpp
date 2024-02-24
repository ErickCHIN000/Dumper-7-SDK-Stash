#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Armor.Usable_Armor_C
// (Actor)

class UClass* AUsable_Armor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Armor_C");

	return Clss;
}


// Usable_Armor_C Usable_Armor.Default__Usable_Armor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Armor_C* AUsable_Armor_C::GetDefaultObj()
{
	static class AUsable_Armor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Armor_C*>(AUsable_Armor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Armor.Usable_Armor_C.IsSkinApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              Skin                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::IsSkinApplied(enum class Enum_Skins Skin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "IsSkinApplied");

	Params::AUsable_Armor_C_IsSkinApplied_Params Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.StormMode_HasLoreEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::StormMode_HasLoreEntry(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StormMode_HasLoreEntry");

	Params::AUsable_Armor_C_StormMode_HasLoreEntry_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetHideUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetHideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetHideUI");

	Params::AUsable_Armor_C_GetHideUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetMainLevelFromSave_StormMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::GetMainLevelFromSave_StormMode(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetMainLevelFromSave_StormMode");

	Params::AUsable_Armor_C_GetMainLevelFromSave_StormMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function Usable_Armor.Usable_Armor_C.GetMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::GetMainLevelFromSave(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetMainLevelFromSave");

	Params::AUsable_Armor_C_GetMainLevelFromSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function Usable_Armor.Usable_Armor_C.GetIsInputBlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetIsInputBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetIsInputBlocked");

	Params::AUsable_Armor_C_GetIsInputBlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_IsTutorialUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tut                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::InventoryUtil_IsTutorialUnlocked_(class FName Tut, bool* Unlocked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_IsTutorialUnlocked?");

	Params::AUsable_Armor_C_InventoryUtil_IsTutorialUnlocked__Params Parms{};

	Parms.Tut = Tut;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked_ != nullptr)
		*Unlocked_ = Parms.Unlocked_;

}


// Function Usable_Armor.Usable_Armor_C.GetIsInBossFight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetIsInBossFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetIsInBossFight");

	Params::AUsable_Armor_C_GetIsInBossFight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetHadernAbilityTextFromIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvalidIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Text                                                             (Parm, OutParm)

void AUsable_Armor_C::GetHadernAbilityTextFromIndex(int32 Index, bool* InvalidIndex, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetHadernAbilityTextFromIndex");

	Params::AUsable_Armor_C_GetHadernAbilityTextFromIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (InvalidIndex != nullptr)
		*InvalidIndex = Parms.InvalidIndex;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function Usable_Armor.Usable_Armor_C.GetHadernAbilityTextFromSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void AUsable_Armor_C::GetHadernAbilityTextFromSlot(enum class Enum_HadernSkills HadernSlot, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetHadernAbilityTextFromSlot");

	Params::AUsable_Armor_C_GetHadernAbilityTextFromSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function Usable_Armor.Usable_Armor_C.GetCurrentHadernAbilityForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::GetCurrentHadernAbilityForSlot(enum class Enum_HadernSkills HadernSlot, class FName* AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetCurrentHadernAbilityForSlot");

	Params::AUsable_Armor_C_GetCurrentHadernAbilityForSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function Usable_Armor.Usable_Armor_C.StormMode_GetCurrentMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::StormMode_GetCurrentMainLevelFromSave(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StormMode_GetCurrentMainLevelFromSave");

	Params::AUsable_Armor_C_StormMode_GetCurrentMainLevelFromSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function Usable_Armor.Usable_Armor_C.GetEquipmentMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  Menu                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetEquipmentMenuType(enum class Enum_EquipmentMenuType* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetEquipmentMenuType");

	Params::AUsable_Armor_C_GetEquipmentMenuType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.CanOpenPhotoModeFromPauseMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::CanOpenPhotoModeFromPauseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "CanOpenPhotoModeFromPauseMenu");

	Params::AUsable_Armor_C_CanOpenPhotoModeFromPauseMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetIsInCutscene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetIsInCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetIsInCutscene");

	Params::AUsable_Armor_C_GetIsInCutscene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetShellDyesLockState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_MakeStruct_Struct_ShellsDyes_LockState                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::GetShellDyesLockState(struct FStruct_ShellsDyes_LockState* LockState, const struct FStruct_ShellsDyes_LockState& K2Node_MakeStruct_Struct_ShellsDyes_LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetShellDyesLockState");

	Params::AUsable_Armor_C_GetShellDyesLockState_Params Parms{};

	Parms.K2Node_MakeStruct_Struct_ShellsDyes_LockState = K2Node_MakeStruct_Struct_ShellsDyes_LockState;

	UObject::ProcessEvent(Func, &Parms);

	if (LockState != nullptr)
		*LockState = std::move(Parms.LockState);

}


// Function Usable_Armor.Usable_Armor_C.GetHasRenouncedShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::GetHasRenouncedShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetHasRenouncedShell");

	Params::AUsable_Armor_C_GetHasRenouncedShell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.GetShellDyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::GetShellDyes(struct FStruct_ShellDyes* Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetShellDyes");

	Params::AUsable_Armor_C_GetShellDyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dyes != nullptr)
		*Dyes = std::move(Parms.Dyes);

}


// Function Usable_Armor.Usable_Armor_C.GetIsInPhotoMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhotoMode_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::GetIsInPhotoMode(bool* PhotoMode_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetIsInPhotoMode");

	Params::AUsable_Armor_C_GetIsInPhotoMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PhotoMode_ != nullptr)
		*PhotoMode_ = Parms.PhotoMode_;

}


// Function Usable_Armor.Usable_Armor_C.GameplayPC_IsInTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInTutorial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::GameplayPC_IsInTutorial(bool* IsInTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GameplayPC_IsInTutorial");

	Params::AUsable_Armor_C_GameplayPC_IsInTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsInTutorial != nullptr)
		*IsInTutorial = Parms.IsInTutorial;

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_IsUpgradeUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::InventoryUtil_IsUpgradeUnlocked(class FName UnlockID, bool* Unlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_IsUpgradeUnlocked");

	Params::AUsable_Armor_C_InventoryUtil_IsUpgradeUnlocked_Params Parms{};

	Parms.UnlockID = UnlockID;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_GetCanUseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsableInDarkForm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_InventoryItem_CanUse AUsable_Armor_C::InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_GetCanUseItem");

	Params::AUsable_Armor_C_InventoryUtil_GetCanUseItem_Params Parms{};

	Parms.ID = ID;
	Parms.UsableInDarkForm = UsableInDarkForm;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.UI_GetNumPlayerDeaths
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalPlayerDeaths                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::UI_GetNumPlayerDeaths(int32* TotalPlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_GetNumPlayerDeaths");

	Params::AUsable_Armor_C_UI_GetNumPlayerDeaths_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalPlayerDeaths != nullptr)
		*TotalPlayerDeaths = Parms.TotalPlayerDeaths;

}


// Function Usable_Armor.Usable_Armor_C.UI_GetWasInputKeyJustPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasKeyPressed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::UI_GetWasInputKeyJustPressed(bool* WasKeyPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_GetWasInputKeyJustPressed");

	Params::AUsable_Armor_C_UI_GetWasInputKeyJustPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WasKeyPressed != nullptr)
		*WasKeyPressed = Parms.WasKeyPressed;

}


// Function Usable_Armor.Usable_Armor_C.UI_GetInventoryItemFromSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)

void AUsable_Armor_C::UI_GetInventoryItemFromSlot(int32 InventorySlot, struct FInventoryItem* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_GetInventoryItemFromSlot");

	Params::AUsable_Armor_C_UI_GetInventoryItemFromSlot_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function Usable_Armor.Usable_Armor_C.UI_GetContainerItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)

void AUsable_Armor_C::UI_GetContainerItem(int32 ContainerSlot, struct FInventoryItem* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_GetContainerItem");

	Params::AUsable_Armor_C_UI_GetContainerItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function Usable_Armor.Usable_Armor_C.IsShellUnlocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_StormMode_GetNamedInts_NamedInts                        (None)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AUsable_Armor_C::IsShellUnlocked(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TMap<class FName, int32> CallFunc_StormMode_GetNamedInts_NamedInts, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "IsShellUnlocked");

	Params::AUsable_Armor_C_IsShellUnlocked_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_StormMode_GetNamedInts_NamedInts = CallFunc_StormMode_GetNamedInts_NamedInts;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Armor.Usable_Armor_C.DualSenseAudio_Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Spawn2DControllerSound_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::DualSenseAudio_Play(enum class EArmorTypes Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "DualSenseAudio_Play");

	Params::AUsable_Armor_C_DualSenseAudio_Play_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Spawn2DControllerSound_ReturnValue = CallFunc_Spawn2DControllerSound_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.DualSenseAudio_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::DualSenseAudio_Stop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "DualSenseAudio_Stop");

	Params::AUsable_Armor_C_DualSenseAudio_Stop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.HideGhostShellVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitter*                    K2Node_DynamicCast_AsEmitter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::HideGhostShellVFX(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "HideGhostShellVFX");

	Params::AUsable_Armor_C_HideGhostShellVFX_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsEmitter = K2Node_DynamicCast_AsEmitter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.DisableShellOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EndOutlineFocus_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::DisableShellOutline(bool CallFunc_EndOutlineFocus_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "DisableShellOutline");

	Params::AUsable_Armor_C_DisableShellOutline_Params Parms{};

	Parms.CallFunc_EndOutlineFocus_Success = CallFunc_EndOutlineFocus_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.Usable_Armor_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPUsable_DarkFather_C*      K2Node_DynamicCast_AsBPUsable_Dark_Father                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::Usable_Armor_AutoGenFunc(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_2, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Usable_Armor_AutoGenFunc");

	Params::AUsable_Armor_C_Usable_Armor_AutoGenFunc_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPUsable_Dark_Father = K2Node_DynamicCast_AsBPUsable_Dark_Father;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.CallShellChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetShellTagline_ShellTagline                            (None)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// TScriptInterface<class IGamePlayPCInterface_C>CallFunc_EquippedShell_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::CallShellChanged(class FText CallFunc_GetShellTagline_ShellTagline, class FText CallFunc_GetShellName_ShellName, TScriptInterface<class IGamePlayPCInterface_C> CallFunc_EquippedShell_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "CallShellChanged");

	Params::AUsable_Armor_C_CallShellChanged_Params Parms{};

	Parms.CallFunc_GetShellTagline_ShellTagline = CallFunc_GetShellTagline_ShellTagline;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.CallFunc_EquippedShell_self_CastInput = CallFunc_EquippedShell_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.BriefReturnFromFadeToBlack_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::BriefReturnFromFadeToBlack_Create(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BriefReturnFromFadeToBlack_Create");

	Params::AUsable_Armor_C_BriefReturnFromFadeToBlack_Create_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.EquipShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsShellUnlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellUnlocked_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellUnlocked_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellUnlocked_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::EquipShell(bool CallFunc_IsShellUnlocked_ReturnValue, bool CallFunc_IsShellUnlocked_ReturnValue_1, bool CallFunc_IsShellUnlocked_ReturnValue_2, bool CallFunc_IsShellUnlocked_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName CallFunc_GetShellUnlockID_ShellUnlockID, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EquipShell");

	Params::AUsable_Armor_C_EquipShell_Params Parms{};

	Parms.CallFunc_IsShellUnlocked_ReturnValue = CallFunc_IsShellUnlocked_ReturnValue;
	Parms.CallFunc_IsShellUnlocked_ReturnValue_1 = CallFunc_IsShellUnlocked_ReturnValue_1;
	Parms.CallFunc_IsShellUnlocked_ReturnValue_2 = CallFunc_IsShellUnlocked_ReturnValue_2;
	Parms.CallFunc_IsShellUnlocked_ReturnValue_3 = CallFunc_IsShellUnlocked_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.BriefFadeToBlack_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::BriefFadeToBlack_Remove(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BriefFadeToBlack_Remove");

	Params::AUsable_Armor_C_BriefFadeToBlack_Remove_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.BriefFadeToBlack_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::BriefFadeToBlack_Create(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BriefFadeToBlack_Create");

	Params::AUsable_Armor_C_BriefFadeToBlack_Create_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.PlayGhostShellSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::PlayGhostShellSequence(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlayGhostShellSequence");

	Params::AUsable_Armor_C_PlayGhostShellSequence_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.IsGhostShell?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsGhostShell_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_StormMode_GetNamedInts_NamedInts                        (None)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::IsGhostShell_(bool* IsGhostShell_, class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TMap<class FName, int32> CallFunc_StormMode_GetNamedInts_NamedInts, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "IsGhostShell?");

	Params::AUsable_Armor_C_IsGhostShell__Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_StormMode_GetNamedInts_NamedInts = CallFunc_StormMode_GetNamedInts_NamedInts;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsGhostShell_ != nullptr)
		*IsGhostShell_ = Parms.IsGhostShell_;

}


// Function Usable_Armor.Usable_Armor_C.SaveDefaultMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)

void AUsable_Armor_C::SaveDefaultMaterials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SaveDefaultMaterials");

	Params::AUsable_Armor_C_SaveDefaultMaterials_Params Parms{};

	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.SetDefaultMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::SetDefaultMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetDefaultMaterials");

	Params::AUsable_Armor_C_SetDefaultMaterials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.SetGhostMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::SetGhostMaterials(int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetGhostMaterials");

	Params::AUsable_Armor_C_SetGhostMaterials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.GetUseActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsGhostShell__IsGhostShell_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)

void AUsable_Armor_C::GetUseActionText(class FText* ActionText, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetShellName_ShellName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetUseActionText");

	Params::AUsable_Armor_C_GetUseActionText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsGhostShell__IsGhostShell_ = CallFunc_IsGhostShell__IsGhostShell_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionText != nullptr)
		*ActionText = Parms.ActionText;

}


// Function Usable_Armor.Usable_Armor_C.GetIsActorUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsActorUsable_IsUsable                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForNearbyEnemies_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::GetIsActorUsable(bool* IsUsable, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "GetIsActorUsable");

	Params::AUsable_Armor_C_GetIsActorUsable_Params Parms{};

	Parms.CallFunc_GetIsActorUsable_IsUsable = CallFunc_GetIsActorUsable_IsUsable;
	Parms.CallFunc_CheckForNearbyEnemies_ReturnValue = CallFunc_CheckForNearbyEnemies_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsable != nullptr)
		*IsUsable = Parms.IsUsable;

}


// Function Usable_Armor.Usable_Armor_C.OnWasUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::OnWasUsed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnWasUsed");

	Params::AUsable_Armor_C_OnWasUsed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Armor.Usable_Armor_C.EndOutlineFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::EndOutlineFocus(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EndOutlineFocus");

	Params::AUsable_Armor_C_EndOutlineFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Armor.Usable_Armor_C.BeginOutlineFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::BeginOutlineFocus(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BeginOutlineFocus");

	Params::AUsable_Armor_C_BeginOutlineFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Armor.Usable_Armor_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           Local_Controller                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGhostShell__IsGhostShell_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForNearbyEnemies_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* Local_Controller, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_CheckForNearbyEnemies_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnActorUsed");

	Params::AUsable_Armor_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Local_Controller = Local_Controller;
	Parms.CallFunc_IsGhostShell__IsGhostShell_ = CallFunc_IsGhostShell__IsGhostShell_;
	Parms.CallFunc_CheckForNearbyEnemies_ReturnValue = CallFunc_CheckForNearbyEnemies_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Armor.Usable_Armor_C.Showopacity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Armor_C::Showopacity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Showopacity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.Showopacity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Armor_C::Showopacity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Showopacity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Armor_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Armor_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.OnLoaded_EC235F7B4EFE61C063CAA38A5F3CC153
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::OnLoaded_EC235F7B4EFE61C063CAA38A5F3CC153(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnLoaded_EC235F7B4EFE61C063CAA38A5F3CC153");

	Params::AUsable_Armor_C_OnLoaded_EC235F7B4EFE61C063CAA38A5F3CC153_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UI_SetDialogMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDialogMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::UI_SetDialogMode(bool IsDialogMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_SetDialogMode");

	Params::AUsable_Armor_C_UI_SetDialogMode_Params Parms{};

	Parms.IsDialogMode = IsDialogMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UI_SetUIMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUIMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::UI_SetUIMode(bool IsUIMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_SetUIMode");

	Params::AUsable_Armor_C_UI_SetUIMode_Params Parms{};

	Parms.IsUIMode = IsUIMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UI_OpenStartPortals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::UI_OpenStartPortals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_OpenStartPortals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.UI_OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::UI_OnInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_OnInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.Util_SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldRestorePlayerTransformOnLoad                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::Util_SaveGame(bool bShouldRestorePlayerTransformOnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "Util_SaveGame");

	Params::AUsable_Armor_C_Util_SaveGame_Params Parms{};

	Parms.bShouldRestorePlayerTransformOnLoad = bShouldRestorePlayerTransformOnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_SetInventoryItemByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeaponID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::InventoryUtil_SetInventoryItemByID(int32 WeaponID, int32 Slot, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_SetInventoryItemByID");

	Params::AUsable_Armor_C_InventoryUtil_SetInventoryItemByID_Params Parms{};

	Parms.WeaponID = WeaponID;
	Parms.Slot = Slot;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_UnlockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::InventoryUtil_UnlockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_UnlockWeaponByID");

	Params::AUsable_Armor_C_InventoryUtil_UnlockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_LockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::InventoryUtil_LockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_LockWeaponByID");

	Params::AUsable_Armor_C_InventoryUtil_LockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_SwitchArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArmorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::InventoryUtil_SwitchArmor(int32 ArmorID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_SwitchArmor");

	Params::AUsable_Armor_C_InventoryUtil_SwitchArmor_Params Parms{};

	Parms.ArmorID = ArmorID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.PlayerControllerUtils_SetMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SetMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::PlayerControllerUtils_SetMaxHP(int32 SetMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlayerControllerUtils_SetMaxHP");

	Params::AUsable_Armor_C_PlayerControllerUtils_SetMaxHP_Params Parms{};

	Parms.SetMaxHP = SetMaxHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_UnlockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::InventoryUtil_UnlockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_UnlockUpgrade");

	Params::AUsable_Armor_C_InventoryUtil_UnlockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.InventoryUtil_LockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::InventoryUtil_LockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "InventoryUtil_LockUpgrade");

	Params::AUsable_Armor_C_InventoryUtil_LockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.PlayerControllerUtils_SetGhostShellDeteriorationCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::PlayerControllerUtils_SetGhostShellDeteriorationCounter(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlayerControllerUtils_SetGhostShellDeteriorationCounter");

	Params::AUsable_Armor_C_PlayerControllerUtils_SetGhostShellDeteriorationCounter_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.PlayerControllerUtils_SetHadernDefeatCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCounter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::PlayerControllerUtils_SetHadernDefeatCounter(int32 NewCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlayerControllerUtils_SetHadernDefeatCounter");

	Params::AUsable_Armor_C_PlayerControllerUtils_SetHadernDefeatCounter_Params Parms{};

	Parms.NewCounter = NewCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.OnPairedAnimFinish_WhilePlayerDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::OnPairedAnimFinish_WhilePlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnPairedAnimFinish_WhilePlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.EquippedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AUsable_Armor_C::EquippedShell(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EquippedShell");

	Params::AUsable_Armor_C_EquippedShell_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UI_PauseMenuResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::UI_PauseMenuResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_PauseMenuResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.UI_EscapeMenuPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Closed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::UI_EscapeMenuPressed(bool Closed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_EscapeMenuPressed");

	Params::AUsable_Armor_C_UI_EscapeMenuPressed_Params Parms{};

	Parms.Closed = Closed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.OnWeaponChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::OnWeaponChange(int32 Index, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnWeaponChange");

	Params::AUsable_Armor_C_OnWeaponChange_Params Parms{};

	Parms.Index = Index;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.SetCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetCameraShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetCameraShake");

	Params::AUsable_Armor_C_SetCameraShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.SetForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetForceFeedback(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetForceFeedback");

	Params::AUsable_Armor_C_SetForceFeedback_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UI_DebugLineEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DebugLine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AUsable_Armor_C::UI_DebugLineEntry(class AActor* Actor, const class FString& DebugLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UI_DebugLineEntry");

	Params::AUsable_Armor_C_UI_DebugLineEntry_Params Parms{};

	Parms.Actor = Actor;
	Parms.DebugLine = DebugLine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UpdateAspectRationConstraint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::UpdateAspectRationConstraint(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UpdateAspectRationConstraint");

	Params::AUsable_Armor_C_UpdateAspectRationConstraint_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.UpdateBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::UpdateBallistazookaOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UpdateBallistazookaOpacity");

	Params::AUsable_Armor_C_UpdateBallistazookaOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.CallPhotoModeEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::CallPhotoModeEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "CallPhotoModeEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.SetShellDyes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetShellDyes(const struct FStruct_ShellDyes& Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetShellDyes");

	Params::AUsable_Armor_C_SetShellDyes_Params Parms{};

	Parms.Dyes = Dyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.CallPhotoModeClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::CallPhotoModeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "CallPhotoModeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.SetShellDyesLockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetShellDyesLockState(const struct FStruct_ShellsDyes_LockState& LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetShellDyesLockState");

	Params::AUsable_Armor_C_SetShellDyesLockState_Params Parms{};

	Parms.LockState = LockState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.ResetPhotoModeCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ResetPhotoModeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ResetPhotoModeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ResetCheckpointsSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ResetCheckpointsSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ResetCheckpointsSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.SetNewGamePlusLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetNewGamePlusLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetNewGamePlusLevel");

	Params::AUsable_Armor_C_SetNewGamePlusLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.SetInputBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::SetInputBlocked(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetInputBlocked");

	Params::AUsable_Armor_C_SetInputBlocked_Params Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.StormMode_UnlockLoreEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::StormMode_UnlockLoreEntry(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StormMode_UnlockLoreEntry");

	Params::AUsable_Armor_C_StormMode_UnlockLoreEntry_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.EquipArmor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::EquipArmor(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EquipArmor");

	Params::AUsable_Armor_C_EquipArmor_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.EquipArmor_OnFadeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::EquipArmor_OnFadeCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EquipArmor_OnFadeCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.HideEquippedArmor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::HideEquippedArmor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "HideEquippedArmor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.PossessNewShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::PossessNewShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PossessNewShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.DestroyUsableDeathStatues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::DestroyUsableDeathStatues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "DestroyUsableDeathStatues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ShowOtherArmors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ShowOtherArmors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ShowOtherArmors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ShowThisArmor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ShowThisArmor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ShowThisArmor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "UpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.BlinkPPMaterialStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::BlinkPPMaterialStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BlinkPPMaterialStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.BlinkPPStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::BlinkPPStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "BlinkPPStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.EquipArmor_OnFadeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::EquipArmor_OnFadeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "EquipArmor_OnFadeEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.StartShellOutlineChecks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::StartShellOutlineChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StartShellOutlineChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ShellOutlineCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ShellOutlineCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ShellOutlineCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.StopShellOutlineChecks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::StopShellOutlineChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StopShellOutlineChecks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.TerrorRadiusBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::TerrorRadiusBeginOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "TerrorRadiusBeginOverlap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.TerrorRadiusEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::TerrorRadiusEndOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "TerrorRadiusEndOverlap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.PlayFirstTimeShellEquipSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::PlayFirstTimeShellEquipSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlayFirstTimeShellEquipSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.TakeShellSequenceFaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::TakeShellSequenceFaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "TakeShellSequenceFaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.PlaySeq
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::PlaySeq()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "PlaySeq");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ResetEnemySpawns
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::ResetEnemySpawns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ResetEnemySpawns");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.StartGhostCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::StartGhostCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StartGhostCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Armor_C::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "SetSignificanceBP");

	Params::AUsable_Armor_C_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.OnCharacterInputEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::OnCharacterInputEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnCharacterInputEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.OnTakeShellSequenceFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::OnTakeShellSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "OnTakeShellSequenceFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ExecuteUbergraph_Usable_Armor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDialogMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsUIMode                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShouldRestorePlayerTransformOnLoad                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_WeaponID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsChangingWeaponMode_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ID_2                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ID_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ArmorID                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SetMaxHP                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemName_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewCounter                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ShellName                                           (None)
// class FText                        K2Node_Event_ShellTagline                                        (None)
// bool                               K2Node_Event_Closed                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsChangingWeaponMode                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Scale_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_DebugLine                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Opacity                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           K2Node_Event_Dyes                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_Event_LockState                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Block                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ID                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUsable_Armor_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Armor_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUseable_Player_Death_Statue_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class AUseable_Player_Death_Statue_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAdvancedEnemySpawner_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActorName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginOutlineFocus_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGhostShell__IsGhostShell_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGhostShell__IsGhostShell__1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AAdvancedEnemySpawner_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TSoftObjectPtr<class AAdvancedEnemySpawner_C>CallFunc_Array_Get_Item_4                                        (HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// enum class EDHSignificanceLevel    K2Node_Event_SignificanceLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Spawn2DControllerSound_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      K2Node_DynamicCast_AsBPUsable_Dark_Father                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellUnlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellUnlocked_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Armor_C::ExecuteUbergraph_Usable_Armor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDialogMode, bool K2Node_Event_IsUIMode, bool K2Node_Event_bShouldRestorePlayerTransformOnLoad, int32 K2Node_Event_WeaponID, int32 K2Node_Event_Slot, bool K2Node_Event_IsChangingWeaponMode_1, int32 K2Node_Event_ID_2, int32 K2Node_Event_ID_1, int32 K2Node_Event_ArmorID, int32 K2Node_Event_SetMaxHP, class FName K2Node_Event_ItemName_1, class FName K2Node_Event_ItemName, int32 K2Node_Event_Count, int32 K2Node_Event_NewCounter, class FText K2Node_Event_ShellName, class FText K2Node_Event_ShellTagline, bool K2Node_Event_Closed, int32 K2Node_Event_Index_1, bool K2Node_Event_IsChangingWeaponMode, float K2Node_Event_Scale_1, float K2Node_Event_Scale, class AActor* K2Node_Event_Actor, const class FString& K2Node_Event_DebugLine, int32 K2Node_Event_Index, float K2Node_Event_Opacity, const struct FStruct_ShellDyes& K2Node_Event_Dyes, const struct FStruct_ShellsDyes_LockState& K2Node_Event_LockState, int32 K2Node_Event_Level, bool K2Node_Event_Block, class FName K2Node_Event_ID, class APlayerController* K2Node_CustomEvent_PlayerController, TArray<class AUsable_Armor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue, class AUsable_Armor_C* CallFunc_Array_Get_Item, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AUseable_Player_Death_Statue_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AUseable_Player_Death_Statue_C* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UObject* Temp_object_Variable, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_1, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_GetActorName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BeginOutlineFocus_Success, bool CallFunc_Not_PreBool_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_3, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, int32 Temp_int_Loop_Counter_Variable_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_IsGhostShell__IsGhostShell__1, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TArray<class AAdvancedEnemySpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class AEnemyCharacter_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor_1, bool K2Node_DynamicCast_bSuccess_5, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item_4, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABarbarous_C* CallFunc_FinishSpawningActor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_StormModeContentIsEnabled_Enabled_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsShellUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsShellUnlocked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ExecuteUbergraph_Usable_Armor");

	Params::AUsable_Armor_C_ExecuteUbergraph_Usable_Armor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDialogMode = K2Node_Event_IsDialogMode;
	Parms.K2Node_Event_IsUIMode = K2Node_Event_IsUIMode;
	Parms.K2Node_Event_bShouldRestorePlayerTransformOnLoad = K2Node_Event_bShouldRestorePlayerTransformOnLoad;
	Parms.K2Node_Event_WeaponID = K2Node_Event_WeaponID;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_IsChangingWeaponMode_1 = K2Node_Event_IsChangingWeaponMode_1;
	Parms.K2Node_Event_ID_2 = K2Node_Event_ID_2;
	Parms.K2Node_Event_ID_1 = K2Node_Event_ID_1;
	Parms.K2Node_Event_ArmorID = K2Node_Event_ArmorID;
	Parms.K2Node_Event_SetMaxHP = K2Node_Event_SetMaxHP;
	Parms.K2Node_Event_ItemName_1 = K2Node_Event_ItemName_1;
	Parms.K2Node_Event_ItemName = K2Node_Event_ItemName;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Event_NewCounter = K2Node_Event_NewCounter;
	Parms.K2Node_Event_ShellName = K2Node_Event_ShellName;
	Parms.K2Node_Event_ShellTagline = K2Node_Event_ShellTagline;
	Parms.K2Node_Event_Closed = K2Node_Event_Closed;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.K2Node_Event_IsChangingWeaponMode = K2Node_Event_IsChangingWeaponMode;
	Parms.K2Node_Event_Scale_1 = K2Node_Event_Scale_1;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_DebugLine = K2Node_Event_DebugLine;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Opacity = K2Node_Event_Opacity;
	Parms.K2Node_Event_Dyes = K2Node_Event_Dyes;
	Parms.K2Node_Event_LockState = K2Node_Event_LockState;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.K2Node_Event_Block = K2Node_Event_Block;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetActorName_ReturnValue = CallFunc_GetActorName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BeginOutlineFocus_Success = CallFunc_BeginOutlineFocus_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_IsGhostShell__IsGhostShell_ = CallFunc_IsGhostShell__IsGhostShell_;
	Parms.CallFunc_IsGhostShell__IsGhostShell__1 = CallFunc_IsGhostShell__IsGhostShell__1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_1 = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor_1 = K2Node_DynamicCast_AsLevel_Sequence_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_6 = CallFunc_GetCharacterAs0_Base_As0_Base_6;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_Event_SignificanceLevel = K2Node_Event_SignificanceLevel;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.CallFunc_Spawn2DControllerSound_ReturnValue = CallFunc_Spawn2DControllerSound_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPUsable_Dark_Father = K2Node_DynamicCast_AsBPUsable_Dark_Father;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsShellUnlocked_ReturnValue = CallFunc_IsShellUnlocked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsShellUnlocked_ReturnValue_1 = CallFunc_IsShellUnlocked_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Armor.Usable_Armor_C.StopShellOutlineCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::StopShellOutlineCheck__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StopShellOutlineCheck__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.StartShellOutlineCheck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Armor_C::StartShellOutlineCheck__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "StartShellOutlineCheck__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Armor.Usable_Armor_C.ShellEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AUsable_Armor_C::ShellEquipped__DelegateSignature(class FText ShellName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Armor_C", "ShellEquipped__DelegateSignature");

	Params::AUsable_Armor_C_ShellEquipped__DelegateSignature_Params Parms{};

	Parms.ShellName = ShellName;

	UObject::ProcessEvent(Func, &Parms);

}

}


