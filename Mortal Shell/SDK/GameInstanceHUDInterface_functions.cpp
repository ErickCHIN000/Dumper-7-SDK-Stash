#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameInstanceHUDInterface.GameInstanceHUDInterface_C
// (None)

class UClass* IGameInstanceHUDInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameInstanceHUDInterface_C");

	return Clss;
}


// GameInstanceHUDInterface_C GameInstanceHUDInterface.Default__GameInstanceHUDInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGameInstanceHUDInterface_C* IGameInstanceHUDInterface_C::GetDefaultObj()
{
	static class IGameInstanceHUDInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameInstanceHUDInterface_C*>(IGameInstanceHUDInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetGiveFullHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Give_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_SetGiveFullHealth(bool Give_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_SetGiveFullHealth");

	Params::IGameInstanceHUDInterface_C_StormMode_SetGiveFullHealth_Params Parms{};

	Parms.Give_ = Give_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetGiveFullHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::StormMode_GetGiveFullHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetGiveFullHealth");

	Params::IGameInstanceHUDInterface_C_StormMode_GetGiveFullHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_UpdateLastSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_UpdateLastSaveSlotIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_UpdateLastSaveSlotIndex");

	Params::IGameInstanceHUDInterface_C_StormMode_UpdateLastSaveSlotIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetLastSaveSlotIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_GetLastSaveSlotIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetLastSaveSlotIndex");

	Params::IGameInstanceHUDInterface_C_StormMode_GetLastSaveSlotIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.TwitchDrop_HasAnySkin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::TwitchDrop_HasAnySkin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "TwitchDrop_HasAnySkin");

	Params::IGameInstanceHUDInterface_C_TwitchDrop_HasAnySkin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.TwitchDrop_CheckIfAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::TwitchDrop_CheckIfAvailable(enum class Enum_Skins ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "TwitchDrop_CheckIfAvailable");

	Params::IGameInstanceHUDInterface_C_TwitchDrop_CheckIfAvailable_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_RunicFam_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_RunicFam_SetVisibility");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_SetVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_SetDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_RunicFam_SetDuration(enum class Enum_Notify_StormMode_Duration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_RunicFam_SetDuration");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_Instinct_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_Instinct_SetVisibility");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_SetVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_SetDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_Instinct_SetDuration(enum class Enum_Notify_StormMode_Duration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_Instinct_SetDuration");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_RunicFam_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_RunicFam_GetVisibility");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_GetVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_RunicFam_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_RunicFam_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_RunicFam_GetDuration");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_RunicFam_GetDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_Instinct_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_Instinct_GetVisibility");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_GetVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Notify_Instinct_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_Notify_Instinct_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Notify_Instinct_GetDuration");

	Params::IGameInstanceHUDInterface_C_StormMode_Notify_Instinct_GetDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.Util_SavePlayerSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameInstanceHUDInterface_C::Util_SavePlayerSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "Util_SavePlayerSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetNewGamePlusLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 IGameInstanceHUDInterface_C::GetNewGamePlusLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetNewGamePlusLevel");

	Params::IGameInstanceHUDInterface_C_GetNewGamePlusLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_SetDifficulty(int32 Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_SetDifficulty");

	Params::IGameInstanceHUDInterface_C_StormMode_SetDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 IGameInstanceHUDInterface_C::StormMode_GetDifficulty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetDifficulty");

	Params::IGameInstanceHUDInterface_C_StormMode_GetDifficulty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_IsUnlockedForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unlocked_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_IsUnlockedForSlot(bool* Unlocked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_IsUnlockedForSlot");

	Params::IGameInstanceHUDInterface_C_StormMode_IsUnlockedForSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked_ != nullptr)
		*Unlocked_ = Parms.Unlocked_;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetIsTesting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Testing_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TestEnemies_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_GetIsTesting(bool* Testing_, bool* TestEnemies_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetIsTesting");

	Params::IGameInstanceHUDInterface_C_StormMode_GetIsTesting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Testing_ != nullptr)
		*Testing_ = Parms.Testing_;

	if (TestEnemies_ != nullptr)
		*TestEnemies_ = Parms.TestEnemies_;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCurrentSaveSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetCurrentSaveSlot(int32* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetCurrentSaveSlot");

	Params::IGameInstanceHUDInterface_C_GetCurrentSaveSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetHasJustStartedRun?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasStarted_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_SetHasJustStartedRun_(bool HasStarted_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_SetHasJustStartedRun?");

	Params::IGameInstanceHUDInterface_C_StormMode_SetHasJustStartedRun__Params Parms{};

	Parms.HasStarted_ = HasStarted_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetHasJustStartedRun?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_GetHasJustStartedRun_(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetHasJustStartedRun?");

	Params::IGameInstanceHUDInterface_C_StormMode_GetHasJustStartedRun__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetEnteredState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Slot_1                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slot_2                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slot_3                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_GetEnteredState(bool* Slot_1, bool* Slot_2, bool* Slot_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetEnteredState");

	Params::IGameInstanceHUDInterface_C_StormMode_GetEnteredState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slot_1 != nullptr)
		*Slot_1 = Parms.Slot_1;

	if (Slot_2 != nullptr)
		*Slot_2 = Parms.Slot_2;

	if (Slot_3 != nullptr)
		*Slot_3 = Parms.Slot_3;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDebugXboxSerieSOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetDebugXboxSerieSOption(bool* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetDebugXboxSerieSOption");

	Params::IGameInstanceHUDInterface_C_GetDebugXboxSerieSOption_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetXboxSType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetXboxSType(enum class Enum_XboxS_Type* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetXboxSType");

	Params::IGameInstanceHUDInterface_C_GetXboxSType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetXboxSType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetXboxSType(enum class Enum_XboxS_Type Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetXboxSType");

	Params::IGameInstanceHUDInterface_C_SetXboxSType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_SetHasEnteredOnce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasEntered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormMode_SetHasEnteredOnce(bool HasEntered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_SetHasEnteredOnce");

	Params::IGameInstanceHUDInterface_C_StormMode_SetHasEnteredOnce_Params Parms{};

	Parms.HasEntered = HasEntered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_GetHasEnteredOnce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasEnteredOnce                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_IsStormMode         SlotsData                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::StormMode_GetHasEnteredOnce(bool* HasEnteredOnce, struct FStruct_IsStormMode* SlotsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_GetHasEnteredOnce");

	Params::IGameInstanceHUDInterface_C_StormMode_GetHasEnteredOnce_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasEnteredOnce != nullptr)
		*HasEnteredOnce = Parms.HasEnteredOnce;

	if (SlotsData != nullptr)
		*SlotsData = std::move(Parms.SlotsData);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHapticFeedback_Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetHapticFeedback_Intensity(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetHapticFeedback_Intensity");

	Params::IGameInstanceHUDInterface_C_SetHapticFeedback_Intensity_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHapticFeedback_Intensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetHapticFeedback_Intensity(float* Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetHapticFeedback_Intensity");

	Params::IGameInstanceHUDInterface_C_GetHapticFeedback_Intensity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetDualSenseAudio_Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetDualSenseAudio_Enabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetDualSenseAudio_Enabled");

	Params::IGameInstanceHUDInterface_C_SetDualSenseAudio_Enabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDualSenseAudio_Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetDualSenseAudio_Enabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetDualSenseAudio_Enabled");

	Params::IGameInstanceHUDInterface_C_GetDualSenseAudio_Enabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetAdaptiveTriggersEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AdaptiveTriggers_EnabledEnableType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled* EnableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetAdaptiveTriggersEnabled");

	Params::IGameInstanceHUDInterface_C_GetAdaptiveTriggersEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnableType != nullptr)
		*EnableType = Parms.EnableType;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetAdaptiveTriggersEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AdaptiveTriggers_EnabledEnableType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled EnableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetAdaptiveTriggersEnabled");

	Params::IGameInstanceHUDInterface_C_SetAdaptiveTriggersEnabled_Params Parms{};

	Parms.EnableType = EnableType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.DebugDualSense2DAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::DebugDualSense2DAudio(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "DebugDualSense2DAudio");

	Params::IGameInstanceHUDInterface_C_DebugDualSense2DAudio_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDebugDualSenseAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetDebugDualSenseAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetDebugDualSenseAudio");

	Params::IGameInstanceHUDInterface_C_GetDebugDualSenseAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameInstanceHUDInterface_C::StormMode_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormMode_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGameInstanceHUDInterface_C::StormMode_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormMode_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormModeContentIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::StormModeContentIsEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormModeContentIsEnabled");

	Params::IGameInstanceHUDInterface_C_StormModeContentIsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.StormModeIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::StormModeIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "StormModeIsActive");

	Params::IGameInstanceHUDInterface_C_StormModeIsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHideSacredGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetHideSacredGland(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetHideSacredGland");

	Params::IGameInstanceHUDInterface_C_SetHideSacredGland_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHideSacredGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetHideSacredGland(bool* Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetHideSacredGland");

	Params::IGameInstanceHUDInterface_C_GetHideSacredGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetHideTarnishedSeal(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetHideTarnishedSeal");

	Params::IGameInstanceHUDInterface_C_SetHideTarnishedSeal_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHideTarnishedSeal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetHideTarnishedSeal(bool* Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetHideTarnishedSeal");

	Params::IGameInstanceHUDInterface_C_GetHideTarnishedSeal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetUIScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetUIScale(enum class Enum_HUD_Size Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetUIScale");

	Params::IGameInstanceHUDInterface_C_SetUIScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetUIScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_HUD_Size IGameInstanceHUDInterface_C::GetUIScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetUIScale");

	Params::IGameInstanceHUDInterface_C_GetUIScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetRadialBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetRadialBlur(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetRadialBlur");

	Params::IGameInstanceHUDInterface_C_SetRadialBlur_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetRadialBlur
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetRadialBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetRadialBlur");

	Params::IGameInstanceHUDInterface_C_GetRadialBlur_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetCutsceneAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Constrained                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetCutsceneAspectRatio(bool Constrained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetCutsceneAspectRatio");

	Params::IGameInstanceHUDInterface_C_SetCutsceneAspectRatio_Params Parms{};

	Parms.Constrained = Constrained;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCutsceneAspectRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetCutsceneAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetCutsceneAspectRatio");

	Params::IGameInstanceHUDInterface_C_GetCutsceneAspectRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSaveRestoreEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetSaveRestoreEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetSaveRestoreEnabled");

	Params::IGameInstanceHUDInterface_C_GetSaveRestoreEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetPhotoModeEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetPhotoModeEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetPhotoModeEnabled");

	Params::IGameInstanceHUDInterface_C_GetPhotoModeEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetFoundlingMenuEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetFoundlingMenuEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetFoundlingMenuEnabled");

	Params::IGameInstanceHUDInterface_C_GetFoundlingMenuEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSeasonalContentButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetSeasonalContentButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetSeasonalContentButton");

	Params::IGameInstanceHUDInterface_C_GetSeasonalContentButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetSeasonalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetSeasonalContent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetSeasonalContent");

	Params::IGameInstanceHUDInterface_C_SetSeasonalContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetSeasonalContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetSeasonalContent");

	Params::IGameInstanceHUDInterface_C_GetSeasonalContent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetMusicDLCEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetMusicDLCEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetMusicDLCEnabled");

	Params::IGameInstanceHUDInterface_C_GetMusicDLCEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetBossSoundtrackType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BossSoundtrackType Soundtrack                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetBossSoundtrackType(enum class Enum_BossSoundtrackType Soundtrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetBossSoundtrackType");

	Params::IGameInstanceHUDInterface_C_SetBossSoundtrackType_Params Parms{};

	Parms.Soundtrack = Soundtrack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetBossSoundtrackType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BossSoundtrackType Soundtrack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetBossSoundtrackType(enum class Enum_BossSoundtrackType* Soundtrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetBossSoundtrackType");

	Params::IGameInstanceHUDInterface_C_GetBossSoundtrackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Soundtrack != nullptr)
		*Soundtrack = Parms.Soundtrack;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.IsLoadingScreenActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::IsLoadingScreenActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "IsLoadingScreenActive");

	Params::IGameInstanceHUDInterface_C_IsLoadingScreenActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetGorfGiftsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IGameInstanceHUDInterface_C::GetGorfGiftsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetGorfGiftsEnabled");

	Params::IGameInstanceHUDInterface_C_GetGorfGiftsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetBallistazookaOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetBallistazookaOpacity");

	Params::IGameInstanceHUDInterface_C_SetBallistazookaOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetBallistazookaOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetBallistazookaOpacity(float* Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetBallistazookaOpacity");

	Params::IGameInstanceHUDInterface_C_GetBallistazookaOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetWeaponNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetWeaponNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetWeaponNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_SetWeaponNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetWeaponNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetWeaponNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetWeaponNotify_Duration");

	Params::IGameInstanceHUDInterface_C_SetWeaponNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetWeaponNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetWeaponNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetWeaponNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_GetWeaponNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetWeaponNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetWeaponNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetWeaponNotify_Duration");

	Params::IGameInstanceHUDInterface_C_GetWeaponNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetShellNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetShellNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetShellNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_SetShellNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetShellNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetShellNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetShellNotify_Duration");

	Params::IGameInstanceHUDInterface_C_SetShellNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetShellNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetShellNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetShellNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_GetShellNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetShellNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetShellNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetShellNotify_Duration");

	Params::IGameInstanceHUDInterface_C_GetShellNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetItemNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetItemNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetItemNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_SetItemNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetItemNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetItemNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetItemNotify_Visibility");

	Params::IGameInstanceHUDInterface_C_GetItemNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetItemNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetItemNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetItemNotify_Duration");

	Params::IGameInstanceHUDInterface_C_SetItemNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetItemNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetItemNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetItemNotify_Duration");

	Params::IGameInstanceHUDInterface_C_GetItemNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetAspectRatioConstraint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetAspectRatioConstraint(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetAspectRatioConstraint");

	Params::IGameInstanceHUDInterface_C_GetAspectRatioConstraint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetAspectRatioConstraint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetAspectRatioConstraint(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetAspectRatioConstraint");

	Params::IGameInstanceHUDInterface_C_SetAspectRatioConstraint_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetForceFeedbackScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetForceFeedbackScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetForceFeedbackScale");

	Params::IGameInstanceHUDInterface_C_SetForceFeedbackScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetForceFeedbackScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetForceFeedbackScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetForceFeedbackScale");

	Params::IGameInstanceHUDInterface_C_GetForceFeedbackScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetCameraShakeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetCameraShakeScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetCameraShakeScale");

	Params::IGameInstanceHUDInterface_C_SetCameraShakeScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCameraShakeScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetCameraShakeScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetCameraShakeScale");

	Params::IGameInstanceHUDInterface_C_GetCameraShakeScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetHoldToDismiss(bool Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetHoldToDismiss");

	Params::IGameInstanceHUDInterface_C_SetHoldToDismiss_Params Parms{};

	Parms.Hold = Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHoldToDismiss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetHoldToDismiss(bool* Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetHoldToDismiss");

	Params::IGameInstanceHUDInterface_C_GetHoldToDismiss_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hold != nullptr)
		*Hold = Parms.Hold;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetDamageNumbers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::SetDamageNumbers(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetDamageNumbers");

	Params::IGameInstanceHUDInterface_C_SetDamageNumbers_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGameInstanceHUDInterface_C::GetDamageNumbers(bool* Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetDamageNumbers");

	Params::IGameInstanceHUDInterface_C_GetDamageNumbers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetHUDScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetHUDScale(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetHUDScale");

	Params::IGameInstanceHUDInterface_C_SetHUDScale_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetHUDScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetHUDScale(enum class Enum_HUD_Size* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetHUDScale");

	Params::IGameInstanceHUDInterface_C_GetHUDScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetEnemyHPOpa
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetEnemyHPOpa(enum class Enum_EnemyHPOpacity Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetEnemyHPOpa");

	Params::IGameInstanceHUDInterface_C_SetEnemyHPOpa_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetEnemyHPOpa
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetEnemyHPOpa(enum class Enum_EnemyHPOpacity* Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetEnemyHPOpa");

	Params::IGameInstanceHUDInterface_C_GetEnemyHPOpa_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.SetEnemyHPVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visiiblity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::SetEnemyHPVis(enum class Enum_EnemyHPVisibility Visiiblity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "SetEnemyHPVis");

	Params::IGameInstanceHUDInterface_C_SetEnemyHPVis_Params Parms{};

	Parms.Visiiblity = Visiiblity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetEnemyHPVis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetEnemyHPVis(enum class Enum_EnemyHPVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetEnemyHPVis");

	Params::IGameInstanceHUDInterface_C_GetEnemyHPVis_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInstanceHUDInterface.GameInstanceHUDInterface_C.GetCurrentFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentFloor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGameInstanceHUDInterface_C::GetCurrentFloor(int32* CurrentFloor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInstanceHUDInterface_C", "GetCurrentFloor");

	Params::IGameInstanceHUDInterface_C_GetCurrentFloor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFloor != nullptr)
		*CurrentFloor = Parms.CurrentFloor;

}

}


