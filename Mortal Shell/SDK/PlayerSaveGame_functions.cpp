#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerSaveGame.PlayerSaveGame_C
// (None)

class UClass* UPlayerSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSaveGame_C");

	return Clss;
}


// PlayerSaveGame_C PlayerSaveGame.Default__PlayerSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSaveGame_C* UPlayerSaveGame_C::GetDefaultObj()
{
	static class UPlayerSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSaveGame_C*>(UPlayerSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSaveGame.PlayerSaveGame_C.GetNotifications
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_NotifyVisibility   ItemNotify_Visibility                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     ItemNotify_Duration                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   ShellNotify_Visibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     ShellNotify_Duration                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   WeaponNotify_Visibility                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     WeaponNotify_Duration                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSaveGame_C::GetNotifications(enum class Enum_NotifyVisibility* ItemNotify_Visibility, enum class Enum_NotifyDuration* ItemNotify_Duration, enum class Enum_NotifyVisibility* ShellNotify_Visibility, enum class Enum_NotifyDuration* ShellNotify_Duration, enum class Enum_NotifyVisibility* WeaponNotify_Visibility, enum class Enum_NotifyDuration* WeaponNotify_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSaveGame_C", "GetNotifications");

	Params::UPlayerSaveGame_C_GetNotifications_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemNotify_Visibility != nullptr)
		*ItemNotify_Visibility = Parms.ItemNotify_Visibility;

	if (ItemNotify_Duration != nullptr)
		*ItemNotify_Duration = Parms.ItemNotify_Duration;

	if (ShellNotify_Visibility != nullptr)
		*ShellNotify_Visibility = Parms.ShellNotify_Visibility;

	if (ShellNotify_Duration != nullptr)
		*ShellNotify_Duration = Parms.ShellNotify_Duration;

	if (WeaponNotify_Visibility != nullptr)
		*WeaponNotify_Visibility = Parms.WeaponNotify_Visibility;

	if (WeaponNotify_Duration != nullptr)
		*WeaponNotify_Duration = Parms.WeaponNotify_Duration;

}


// Function PlayerSaveGame.PlayerSaveGame_C.SetNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   ItemNotify_Visibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     ItemNotify_Duration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   ShellNotify_Visibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     ShellNotify_Duration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   WeaponNotify_Visibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     WeaponNotify_Duration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSaveGame_C::SetNotifications(enum class Enum_NotifyVisibility ItemNotify_Visibility, enum class Enum_NotifyDuration ItemNotify_Duration, enum class Enum_NotifyVisibility ShellNotify_Visibility, enum class Enum_NotifyDuration ShellNotify_Duration, enum class Enum_NotifyVisibility WeaponNotify_Visibility, enum class Enum_NotifyDuration WeaponNotify_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSaveGame_C", "SetNotifications");

	Params::UPlayerSaveGame_C_SetNotifications_Params Parms{};

	Parms.ItemNotify_Visibility = ItemNotify_Visibility;
	Parms.ItemNotify_Duration = ItemNotify_Duration;
	Parms.ShellNotify_Visibility = ShellNotify_Visibility;
	Parms.ShellNotify_Duration = ShellNotify_Duration;
	Parms.WeaponNotify_Visibility = WeaponNotify_Visibility;
	Parms.WeaponNotify_Duration = WeaponNotify_Duration;

	UObject::ProcessEvent(Func, &Parms);

}

}


