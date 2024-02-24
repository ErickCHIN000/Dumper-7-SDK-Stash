#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GamePlayPCInterface.GamePlayPCInterface_C
// (None)

class UClass* IGamePlayPCInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamePlayPCInterface_C");

	return Clss;
}


// GamePlayPCInterface_C GamePlayPCInterface.Default__GamePlayPCInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGamePlayPCInterface_C* IGamePlayPCInterface_C::GetDefaultObj()
{
	static class IGamePlayPCInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGamePlayPCInterface_C*>(IGamePlayPCInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamePlayPCInterface.GamePlayPCInterface_C.IsSkinApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              Skin                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::IsSkinApplied(enum class Enum_Skins Skin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "IsSkinApplied");

	Params::IGamePlayPCInterface_C_IsSkinApplied_Params Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_HasLoreEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::StormMode_HasLoreEntry(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "StormMode_HasLoreEntry");

	Params::IGamePlayPCInterface_C_StormMode_HasLoreEntry_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_UnlockLoreEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::StormMode_UnlockLoreEntry(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "StormMode_UnlockLoreEntry");

	Params::IGamePlayPCInterface_C_StormMode_UnlockLoreEntry_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHideUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetHideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetHideUI");

	Params::IGamePlayPCInterface_C_GetHideUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetMainLevelFromSave_StormMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::GetMainLevelFromSave_StormMode(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetMainLevelFromSave_StormMode");

	Params::IGamePlayPCInterface_C_GetMainLevelFromSave_StormMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::GetMainLevelFromSave(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetMainLevelFromSave");

	Params::IGamePlayPCInterface_C_GetMainLevelFromSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetInputBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::SetInputBlocked(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetInputBlocked");

	Params::IGamePlayPCInterface_C_SetInputBlocked_Params Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInputBlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetIsInputBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetIsInputBlocked");

	Params::IGamePlayPCInterface_C_GetIsInputBlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_IsTutorialUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tut                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::InventoryUtil_IsTutorialUnlocked_(class FName Tut, bool* Unlocked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_IsTutorialUnlocked?");

	Params::IGamePlayPCInterface_C_InventoryUtil_IsTutorialUnlocked__Params Parms{};

	Parms.Tut = Tut;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked_ != nullptr)
		*Unlocked_ = Parms.Unlocked_;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInBossFight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetIsInBossFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetIsInBossFight");

	Params::IGamePlayPCInterface_C_GetIsInBossFight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHadernAbilityTextFromIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvalidIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Text                                                             (Parm, OutParm)

void IGamePlayPCInterface_C::GetHadernAbilityTextFromIndex(int32 Index, bool* InvalidIndex, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetHadernAbilityTextFromIndex");

	Params::IGamePlayPCInterface_C_GetHadernAbilityTextFromIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (InvalidIndex != nullptr)
		*InvalidIndex = Parms.InvalidIndex;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHadernAbilityTextFromSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void IGamePlayPCInterface_C::GetHadernAbilityTextFromSlot(enum class Enum_HadernSkills HadernSlot, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetHadernAbilityTextFromSlot");

	Params::IGamePlayPCInterface_C_GetHadernAbilityTextFromSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetCurrentHadernAbilityForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HadernSkills       HadernSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AbilityID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::GetCurrentHadernAbilityForSlot(enum class Enum_HadernSkills HadernSlot, class FName* AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetCurrentHadernAbilityForSlot");

	Params::IGamePlayPCInterface_C_GetCurrentHadernAbilityForSlot_Params Parms{};

	Parms.HadernSlot = HadernSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityID != nullptr)
		*AbilityID = Parms.AbilityID;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetNewGamePlusLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::SetNewGamePlusLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetNewGamePlusLevel");

	Params::IGamePlayPCInterface_C_SetNewGamePlusLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.ResetCheckpointsSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::ResetCheckpointsSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "ResetCheckpointsSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_GetCurrentMainLevelFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::StormMode_GetCurrentMainLevelFromSave(class FName* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "StormMode_GetCurrentMainLevelFromSave");

	Params::IGamePlayPCInterface_C_StormMode_GetCurrentMainLevelFromSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetEquipmentMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  Menu                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetEquipmentMenuType(enum class Enum_EquipmentMenuType* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetEquipmentMenuType");

	Params::IGamePlayPCInterface_C_GetEquipmentMenuType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.CanOpenPhotoModeFromPauseMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::CanOpenPhotoModeFromPauseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "CanOpenPhotoModeFromPauseMenu");

	Params::IGamePlayPCInterface_C_CanOpenPhotoModeFromPauseMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.ResetPhotoModeCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::ResetPhotoModeCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "ResetPhotoModeCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInCutscene
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetIsInCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetIsInCutscene");

	Params::IGamePlayPCInterface_C_GetIsInCutscene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetShellDyesLockState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::SetShellDyesLockState(const struct FStruct_ShellsDyes_LockState& LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetShellDyesLockState");

	Params::IGamePlayPCInterface_C_SetShellDyesLockState_Params Parms{};

	Parms.LockState = LockState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetShellDyesLockState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellsDyes_LockStateLockState                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::GetShellDyesLockState(struct FStruct_ShellsDyes_LockState* LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetShellDyesLockState");

	Params::IGamePlayPCInterface_C_GetShellDyesLockState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LockState != nullptr)
		*LockState = std::move(Parms.LockState);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.CallPhotoModeClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::CallPhotoModeClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "CallPhotoModeClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHasRenouncedShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGamePlayPCInterface_C::GetHasRenouncedShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetHasRenouncedShell");

	Params::IGamePlayPCInterface_C_GetHasRenouncedShell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetShellDyes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::SetShellDyes(const struct FStruct_ShellDyes& Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetShellDyes");

	Params::IGamePlayPCInterface_C_SetShellDyes_Params Parms{};

	Parms.Dyes = Dyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetShellDyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::GetShellDyes(struct FStruct_ShellDyes* Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetShellDyes");

	Params::IGamePlayPCInterface_C_GetShellDyes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dyes != nullptr)
		*Dyes = std::move(Parms.Dyes);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.CallPhotoModeEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::CallPhotoModeEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "CallPhotoModeEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInPhotoMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhotoMode_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::GetIsInPhotoMode(bool* PhotoMode_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GetIsInPhotoMode");

	Params::IGamePlayPCInterface_C_GetIsInPhotoMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PhotoMode_ != nullptr)
		*PhotoMode_ = Parms.PhotoMode_;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UpdateBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UpdateBallistazookaOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UpdateBallistazookaOpacity");

	Params::IGamePlayPCInterface_C_UpdateBallistazookaOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UpdateAspectRationConstraint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UpdateAspectRationConstraint(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UpdateAspectRationConstraint");

	Params::IGamePlayPCInterface_C_UpdateAspectRationConstraint_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_DebugLineEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DebugLine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UI_DebugLineEntry(class AActor* Actor, const class FString& DebugLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_DebugLineEntry");

	Params::IGamePlayPCInterface_C_UI_DebugLineEntry_Params Parms{};

	Parms.Actor = Actor;
	Parms.DebugLine = DebugLine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::SetForceFeedback(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetForceFeedback");

	Params::IGamePlayPCInterface_C_SetForceFeedback_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.SetCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::SetCameraShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "SetCameraShake");

	Params::IGamePlayPCInterface_C_SetCameraShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.OnWeaponChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::OnWeaponChange(int32 Index, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "OnWeaponChange");

	Params::IGamePlayPCInterface_C_OnWeaponChange_Params Parms{};

	Parms.Index = Index;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_EscapeMenuPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Closed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::UI_EscapeMenuPressed(bool Closed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_EscapeMenuPressed");

	Params::IGamePlayPCInterface_C_UI_EscapeMenuPressed_Params Parms{};

	Parms.Closed = Closed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.GameplayPC_IsInTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInTutorial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::GameplayPC_IsInTutorial(bool* IsInTutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "GameplayPC_IsInTutorial");

	Params::IGamePlayPCInterface_C_GameplayPC_IsInTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsInTutorial != nullptr)
		*IsInTutorial = Parms.IsInTutorial;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_PauseMenuResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::UI_PauseMenuResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_PauseMenuResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_IsUpgradeUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::InventoryUtil_IsUpgradeUnlocked(class FName UnlockID, bool* Unlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_IsUpgradeUnlocked");

	Params::IGamePlayPCInterface_C_InventoryUtil_IsUpgradeUnlocked_Params Parms{};

	Parms.UnlockID = UnlockID;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_GetCanUseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsableInDarkForm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_InventoryItem_CanUse IGamePlayPCInterface_C::InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_GetCanUseItem");

	Params::IGamePlayPCInterface_C_InventoryUtil_GetCanUseItem_Params Parms{};

	Parms.ID = ID;
	Parms.UsableInDarkForm = UsableInDarkForm;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.EquippedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void IGamePlayPCInterface_C::EquippedShell(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "EquippedShell");

	Params::IGamePlayPCInterface_C_EquippedShell_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.OnPairedAnimFinish_WhilePlayerDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::OnPairedAnimFinish_WhilePlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "OnPairedAnimFinish_WhilePlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetHadernDefeatCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCounter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::PlayerControllerUtils_SetHadernDefeatCounter(int32 NewCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "PlayerControllerUtils_SetHadernDefeatCounter");

	Params::IGamePlayPCInterface_C_PlayerControllerUtils_SetHadernDefeatCounter_Params Parms{};

	Parms.NewCounter = NewCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetGhostShellDeteriorationCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::PlayerControllerUtils_SetGhostShellDeteriorationCounter(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "PlayerControllerUtils_SetGhostShellDeteriorationCounter");

	Params::IGamePlayPCInterface_C_PlayerControllerUtils_SetGhostShellDeteriorationCounter_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_LockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::InventoryUtil_LockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_LockUpgrade");

	Params::IGamePlayPCInterface_C_InventoryUtil_LockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_UnlockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::InventoryUtil_UnlockUpgrade(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_UnlockUpgrade");

	Params::IGamePlayPCInterface_C_InventoryUtil_UnlockUpgrade_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SetMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::PlayerControllerUtils_SetMaxHP(int32 SetMaxHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "PlayerControllerUtils_SetMaxHP");

	Params::IGamePlayPCInterface_C_PlayerControllerUtils_SetMaxHP_Params Parms{};

	Parms.SetMaxHP = SetMaxHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_SwitchArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArmorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::InventoryUtil_SwitchArmor(int32 ArmorID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_SwitchArmor");

	Params::IGamePlayPCInterface_C_InventoryUtil_SwitchArmor_Params Parms{};

	Parms.ArmorID = ArmorID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_LockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::InventoryUtil_LockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_LockWeaponByID");

	Params::IGamePlayPCInterface_C_InventoryUtil_LockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_UnlockWeaponByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::InventoryUtil_UnlockWeaponByID(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_UnlockWeaponByID");

	Params::IGamePlayPCInterface_C_InventoryUtil_UnlockWeaponByID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_SetInventoryItemByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeaponID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::InventoryUtil_SetInventoryItemByID(int32 WeaponID, int32 Slot, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "InventoryUtil_SetInventoryItemByID");

	Params::IGamePlayPCInterface_C_InventoryUtil_SetInventoryItemByID_Params Parms{};

	Parms.WeaponID = WeaponID;
	Parms.Slot = Slot;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.Util_SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldRestorePlayerTransformOnLoad                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::Util_SaveGame(bool bShouldRestorePlayerTransformOnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "Util_SaveGame");

	Params::IGamePlayPCInterface_C_Util_SaveGame_Params Parms{};

	Parms.bShouldRestorePlayerTransformOnLoad = bShouldRestorePlayerTransformOnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_OnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::UI_OnInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_OnInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetContainerItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UI_GetContainerItem(int32 ContainerSlot, struct FInventoryItem* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_GetContainerItem");

	Params::IGamePlayPCInterface_C_UI_GetContainerItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetInventoryItemFromSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UI_GetInventoryItemFromSlot(int32 InventorySlot, struct FInventoryItem* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_GetInventoryItemFromSlot");

	Params::IGamePlayPCInterface_C_UI_GetInventoryItemFromSlot_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_OpenStartPortals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGamePlayPCInterface_C::UI_OpenStartPortals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_OpenStartPortals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetWasInputKeyJustPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasKeyPressed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::UI_GetWasInputKeyJustPressed(bool* WasKeyPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_GetWasInputKeyJustPressed");

	Params::IGamePlayPCInterface_C_UI_GetWasInputKeyJustPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WasKeyPressed != nullptr)
		*WasKeyPressed = Parms.WasKeyPressed;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetNumPlayerDeaths
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalPlayerDeaths                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGamePlayPCInterface_C::UI_GetNumPlayerDeaths(int32* TotalPlayerDeaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_GetNumPlayerDeaths");

	Params::IGamePlayPCInterface_C_UI_GetNumPlayerDeaths_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalPlayerDeaths != nullptr)
		*TotalPlayerDeaths = Parms.TotalPlayerDeaths;

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_SetUIMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUIMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::UI_SetUIMode(bool IsUIMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_SetUIMode");

	Params::IGamePlayPCInterface_C_UI_SetUIMode_Params Parms{};

	Parms.IsUIMode = IsUIMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_SetDialogMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDialogMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayPCInterface_C::UI_SetDialogMode(bool IsDialogMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayPCInterface_C", "UI_SetDialogMode");

	Params::IGamePlayPCInterface_C_UI_SetDialogMode_Params Parms{};

	Parms.IsDialogMode = IsDialogMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


