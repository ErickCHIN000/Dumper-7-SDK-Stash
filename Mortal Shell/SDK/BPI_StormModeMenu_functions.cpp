#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormModeMenu.BPI_StormModeMenu_C
// (None)

class UClass* IBPI_StormModeMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormModeMenu_C");

	return Clss;
}


// BPI_StormModeMenu_C BPI_StormModeMenu.Default__BPI_StormModeMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormModeMenu_C* IBPI_StormModeMenu_C::GetDefaultObj()
{
	static class IBPI_StormModeMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormModeMenu_C*>(IBPI_StormModeMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "GetSelectedCharacter");

	Params::IBPI_StormModeMenu_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "GetVerticalIndex");

	Params::IBPI_StormModeMenu_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnButtonHovered");

	Params::IBPI_StormModeMenu_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnRiposteSelected");

	Params::IBPI_StormModeMenu_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnRiposteHighlighted");

	Params::IBPI_StormModeMenu_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "SetSaveGameRef");

	Params::IBPI_StormModeMenu_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnWeaponSelected");

	Params::IBPI_StormModeMenu_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnSettingConfirmed");

	Params::IBPI_StormModeMenu_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnCharacterSelected");

	Params::IBPI_StormModeMenu_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "SetSeedManager");

	Params::IBPI_StormModeMenu_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "SetParentWidget");

	Params::IBPI_StormModeMenu_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnWeaponHighlighted");

	Params::IBPI_StormModeMenu_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenu_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "OnCharacterHighlighted");

	Params::IBPI_StormModeMenu_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenu.BPI_StormModeMenu_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenu_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenu_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}

}


