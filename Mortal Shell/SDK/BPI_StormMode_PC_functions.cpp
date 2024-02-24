#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormMode_PC.BPI_StormMode_PC_C
// (None)

class UClass* IBPI_StormMode_PC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormMode_PC_C");

	return Clss;
}


// BPI_StormMode_PC_C BPI_StormMode_PC.Default__BPI_StormMode_PC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormMode_PC_C* IBPI_StormMode_PC_C::GetDefaultObj()
{
	static class IBPI_StormMode_PC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormMode_PC_C*>(IBPI_StormMode_PC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetEquippedLute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Lute                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetEquippedLute(class FName* Lute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetEquippedLute");

	Params::IBPI_StormMode_PC_C_StormMode_GetEquippedLute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Lute != nullptr)
		*Lute = Parms.Lute;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateEquippedLute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Lute                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_UpdateEquippedLute(class FName Lute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_UpdateEquippedLute");

	Params::IBPI_StormMode_PC_C_StormMode_UpdateEquippedLute_Params Parms{};

	Parms.Lute = Lute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentUpgradeForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_RuneSlots_IDs      Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetCurrentUpgradeForSlot(enum class Enum_RuneSlots_IDs Slot, class FName* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetCurrentUpgradeForSlot");

	Params::IBPI_StormMode_PC_C_StormMode_GetCurrentUpgradeForSlot_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetEndingProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetEndingProgress(class FName ID, float* Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetEndingProgress");

	Params::IBPI_StormMode_PC_C_StormMode_GetEndingProgress_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateSelectedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_UpdateSelectedWeapon(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_UpdateSelectedWeapon");

	Params::IBPI_StormMode_PC_C_StormMode_UpdateSelectedWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetInitialProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetInitialProgress(class FName ID, float* Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetInitialProgress");

	Params::IBPI_StormMode_PC_C_StormMode_GetInitialProgress_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CompleteCycleAndSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_CompleteCycleAndSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_CompleteCycleAndSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShowCycleCompletedScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_ShowCycleCompletedScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ShowCycleCompletedScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_IsSisterDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IBPI_StormMode_PC_C::StormMode_IsSisterDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_IsSisterDialogue");

	Params::IBPI_StormMode_PC_C_StormMode_IsSisterDialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_DebugDialogues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_DebugDialogues(bool* Debug_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_DebugDialogues");

	Params::IBPI_StormMode_PC_C_StormMode_DebugDialogues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Debug_ != nullptr)
		*Debug_ = Parms.Debug_;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_PlaySister3ChoiceWindowAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Audio                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_PlaySister3ChoiceWindowAudio(class USoundBase* Sound, class UAudioComponent** Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_PlaySister3ChoiceWindowAudio");

	Params::IBPI_StormMode_PC_C_StormMode_PlaySister3ChoiceWindowAudio_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio != nullptr)
		*Audio = Parms.Audio;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShowEndWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_ShowEndWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ShowEndWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_FinalBossAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_FinalBossAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_FinalBossAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_DebugConcurrentEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_DebugConcurrentEnemy(bool Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_DebugConcurrentEnemy");

	Params::IBPI_StormMode_PC_C_StormMode_DebugConcurrentEnemy_Params Parms{};

	Parms.Remove = Remove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentShadeForCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Shade                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetCurrentShadeForCharacter(enum class EArmorTypes Character, enum class Enum_ShellDye* Shade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetCurrentShadeForCharacter");

	Params::IBPI_StormMode_PC_C_StormMode_GetCurrentShadeForCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Shade != nullptr)
		*Shade = Parms.Shade;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AddShadeAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_AddShadeAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_AddShadeAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskForRandomWeaponUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GrantUpgrade_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_AskForRandomWeaponUpgrade(bool* GrantUpgrade_, struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_AskForRandomWeaponUpgrade");

	Params::IBPI_StormMode_PC_C_StormMode_AskForRandomWeaponUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GrantUpgrade_ != nullptr)
		*GrantUpgrade_ = Parms.GrantUpgrade_;

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetUnlockedItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                UnlockedItems                                                    (Parm, OutParm, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetUnlockedItems(TArray<class FName>* UnlockedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetUnlockedItems");

	Params::IBPI_StormMode_PC_C_StormMode_GetUnlockedItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UnlockedItems != nullptr)
		*UnlockedItems = std::move(Parms.UnlockedItems);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.UpdateMilestonesOnInstinctGained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::UpdateMilestonesOnInstinctGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "UpdateMilestonesOnInstinctGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetMilestoneProgressIfLess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewMinVal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::SetMilestoneProgressIfLess(class FName ID, int32 NewMinVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "SetMilestoneProgressIfLess");

	Params::IBPI_StormMode_PC_C_SetMilestoneProgressIfLess_Params Parms{};

	Parms.ID = ID;
	Parms.NewMinVal = NewMinVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.IncreaseMilestoneProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::IncreaseMilestoneProgress(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "IncreaseMilestoneProgress");

	Params::IBPI_StormMode_PC_C_IncreaseMilestoneProgress_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.IsMilestoneUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Tier                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      TiersX                                                           (Parm, OutParm, HasGetValueTypeHash)
// bool                               HasTier                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::IsMilestoneUnlocked(class FName ID, bool* bUnlocked, int32* Current, float* Percent, int32* Tier, TArray<int32>* TiersX, bool* HasTier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "IsMilestoneUnlocked");

	Params::IBPI_StormMode_PC_C_IsMilestoneUnlocked_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

	if (Current != nullptr)
		*Current = Parms.Current;

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	if (Tier != nullptr)
		*Tier = Parms.Tier;

	if (TiersX != nullptr)
		*TiersX = std::move(Parms.TiersX);

	if (HasTier != nullptr)
		*HasTier = Parms.HasTier;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ResetRunData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_ResetRunData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ResetRunData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_OnBeaten
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_OnBeaten()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_OnBeaten");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_RemoveItemWithNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_RemoveItemWithNotify(class FName ID, int32 AmountToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_RemoveItemWithNotify");

	Params::IBPI_StormMode_PC_C_StormMode_RemoveItemWithNotify_Params Parms{};

	Parms.ID = ID;
	Parms.AmountToRemove = AmountToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_UIVisibility(bool Show, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_UIVisibility");

	Params::IBPI_StormMode_PC_C_StormMode_UIVisibility_Params Parms{};

	Parms.Show = Show;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CheckpointOnGlandTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_CheckpointOnGlandTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_CheckpointOnGlandTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CathedralAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_CathedralAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_CathedralAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CryptAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_CryptAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_CryptAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_FireLevelAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_FireLevelAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_FireLevelAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_TeleportToChalice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_TeleportToChalice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_TeleportToChalice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_TeleportToNewArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_TeleportToNewArea(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_TeleportToNewArea");

	Params::IBPI_StormMode_PC_C_StormMode_TeleportToNewArea_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_StartingRiposteNotDefault?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        StartingRiposte                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBPI_StormMode_PC_C::StormMode_StartingRiposteNotDefault_(class FName* StartingRiposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_StartingRiposteNotDefault?");

	Params::IBPI_StormMode_PC_C_StormMode_StartingRiposteNotDefault__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StartingRiposte != nullptr)
		*StartingRiposte = Parms.StartingRiposte;

	return Parms.ReturnValue;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetNamedInts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           NamedInts                                                        (Parm, OutParm)

void IBPI_StormMode_PC_C::StormMode_GetNamedInts(TMap<class FName, int32>* NamedInts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetNamedInts");

	Params::IBPI_StormMode_PC_C_StormMode_GetNamedInts_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NamedInts != nullptr)
		*NamedInts = Parms.NamedInts;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_DisableWeaponNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_DisableWeaponNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_DisableWeaponNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskRandomDarkFormUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_AskRandomDarkFormUpgrade");

	Params::IBPI_StormMode_PC_C_StormMode_AskRandomDarkFormUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskRandomUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_AskRandomUpgrade(struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_AskRandomUpgrade");

	Params::IBPI_StormMode_PC_C_StormMode_AskRandomUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateCheckpointTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Checkpoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_UpdateCheckpointTransform(const struct FTransform& Checkpoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_UpdateCheckpointTransform");

	Params::IBPI_StormMode_PC_C_StormMode_UpdateCheckpointTransform_Params Parms{};

	Parms.Checkpoint = Checkpoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CheckForGlands
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAny_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_CheckForGlands(bool* HasAny_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_CheckForGlands");

	Params::IBPI_StormMode_PC_C_StormMode_CheckForGlands_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasAny_ != nullptr)
		*HasAny_ = Parms.HasAny_;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetRunPlaytime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   RunPlaytime                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetRunPlaytime(struct FDateTime* RunPlaytime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetRunPlaytime");

	Params::IBPI_StormMode_PC_C_StormMode_GetRunPlaytime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RunPlaytime != nullptr)
		*RunPlaytime = std::move(Parms.RunPlaytime);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShowRuneNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsBonusRune                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::StormMode_ShowRuneNotify(const struct FStruct_Rune& Rune, bool IsBonusRune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ShowRuneNotify");

	Params::IBPI_StormMode_PC_C_StormMode_ShowRuneNotify_Params Parms{};

	Parms.Rune = Rune;
	Parms.IsBonusRune = IsBonusRune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskForASeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_AskForASeed(int32* Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_AskForASeed");

	Params::IBPI_StormMode_PC_C_StormMode_AskForASeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Seed != nullptr)
		*Seed = Parms.Seed;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormModeRunStartOrResume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormModeRunStartOrResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormModeRunStartOrResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetSelectedShell
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasSelected                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetSelectedShell(bool* HasSelected, enum class EArmorTypes* Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetSelectedShell");

	Params::IBPI_StormMode_PC_C_StormMode_GetSelectedShell_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasSelected != nullptr)
		*HasSelected = Parms.HasSelected;

	if (Shell != nullptr)
		*Shell = Parms.Shell;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetSelectedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_SetSelectedShell(enum class EArmorTypes Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_SetSelectedShell");

	Params::IBPI_StormMode_PC_C_StormMode_SetSelectedShell_Params Parms{};

	Parms.Shell = Shell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ResetOnEndCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_ResetOnEndCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ResetOnEndCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetSeeds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeSeeds      Seeds                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_SetSeeds(const struct FStruct_StormModeSeeds& Seeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_SetSeeds");

	Params::IBPI_StormMode_PC_C_StormMode_SetSeeds_Params Parms{};

	Parms.Seeds = Seeds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetSeeds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_StormModeSeeds      Seeds                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetSeeds(struct FStruct_StormModeSeeds* Seeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetSeeds");

	Params::IBPI_StormMode_PC_C_StormMode_GetSeeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Seeds != nullptr)
		*Seeds = std::move(Parms.Seeds);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetGlandData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData GlandData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_SetGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData GlandData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_SetGlandData");

	Params::IBPI_StormMode_PC_C_StormMode_SetGlandData_Params Parms{};

	Parms.Progress = Progress;
	Parms.GlandData = GlandData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentGlandData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData Gland                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::StormMode_GetCurrentGlandData(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeGlandData* Gland)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_GetCurrentGlandData");

	Params::IBPI_StormMode_PC_C_StormMode_GetCurrentGlandData_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

	if (Gland != nullptr)
		*Gland = Parms.Gland;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetFallgrimAsCurrentCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_SetFallgrimAsCurrentCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_SetFallgrimAsCurrentCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetStormModeEntranceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState EntranceState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::SetStormModeEntranceState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState EntranceState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "SetStormModeEntranceState");

	Params::IBPI_StormMode_PC_C_SetStormModeEntranceState_Params Parms{};

	Parms.Area = Area;
	Parms.EntranceState = EntranceState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShouldUnlockChalice?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IBPI_StormMode_PC_C::StormMode_ShouldUnlockChalice_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_ShouldUnlockChalice?");

	Params::IBPI_StormMode_PC_C_StormMode_ShouldUnlockChalice__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_IncrementAreaProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_PC_C::StormMode_IncrementAreaProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "StormMode_IncrementAreaProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormMode_ShouldOpenArea?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IBPI_StormMode_PC_C::GetStormMode_ShouldOpenArea_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "GetStormMode_ShouldOpenArea?");

	Params::IBPI_StormMode_PC_C_GetStormMode_ShouldOpenArea__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeAreaState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CurrentState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::GetStormModeAreaState(enum class Enum_StormModeArea Area, enum class Enum_StormModeAreaState* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "GetStormModeAreaState");

	Params::IBPI_StormMode_PC_C_GetStormModeAreaState_Params Parms{};

	Parms.Area = Area;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentState != nullptr)
		*CurrentState = Parms.CurrentState;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeAllAreasState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState>AreasState                                                       (Parm, OutParm)

void IBPI_StormMode_PC_C::GetStormModeAllAreasState(TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState>* AreasState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "GetStormModeAllAreasState");

	Params::IBPI_StormMode_PC_C_GetStormModeAllAreasState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AreasState != nullptr)
		*AreasState = Parms.AreasState;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetStormModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::SetStormModeProgress(enum class Enum_StormModeProgress Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "SetStormModeProgress");

	Params::IBPI_StormMode_PC_C_SetStormModeProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeProgress  Progress                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_PC_C::GetStormModeProgress(enum class Enum_StormModeProgress* Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "GetStormModeProgress");

	Params::IBPI_StormMode_PC_C_GetStormModeProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

}


// Function BPI_StormMode_PC.BPI_StormMode_PC_C.AddNewRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ShowNotify_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsBonusRune_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceHealEffect_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_PC_C::AddNewRune(const struct FStruct_Rune& Rune, bool ShowNotify_, bool IsBonusRune_, bool ForceHealEffect_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_PC_C", "AddNewRune");

	Params::IBPI_StormMode_PC_C_AddNewRune_Params Parms{};

	Parms.Rune = Rune;
	Parms.ShowNotify_ = ShowNotify_;
	Parms.IsBonusRune_ = IsBonusRune_;
	Parms.ForceHealEffect_ = ForceHealEffect_;

	UObject::ProcessEvent(Func, &Parms);

}

}


