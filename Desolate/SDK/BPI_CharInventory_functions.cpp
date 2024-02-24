#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CharInventory.BPI_CharInventory_C
// (None)

class UClass* IBPI_CharInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CharInventory_C");

	return Clss;
}


// BPI_CharInventory_C BPI_CharInventory.Default__BPI_CharInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CharInventory_C* IBPI_CharInventory_C::GetDefaultObj()
{
	static class IBPI_CharInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CharInventory_C*>(IBPI_CharInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Character UI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ICharacterUIInterface_C>CharacterUI                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharInventory_C::BPI_Get_Character_UI(TScriptInterface<class ICharacterUIInterface_C>* CharacterUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get Character UI");

	Params::IBPI_CharInventory_C_BPI_Get_Character_UI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterUI != nullptr)
		*CharacterUI = Parms.CharacterUI;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get External Trade Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHTradeComponent*           TradeComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_External_Trade_Component(class USHTradeComponent** TradeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get External Trade Component");

	Params::IBPI_CharInventory_C_BPI_Get_External_Trade_Component_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TradeComponent != nullptr)
		*TradeComponent = Parms.TradeComponent;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open NPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABasePeacefulAICharacter_C*  NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Open_NPC(class ABasePeacefulAICharacter_C* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Open NPC");

	Params::IBPI_CharInventory_C_BPI_Open_NPC_Params Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open Trade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHTradeComponent*           TradeComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Open_Trade(class USHTradeComponent* TradeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Open Trade");

	Params::IBPI_CharInventory_C_BPI_Open_Trade_Params Parms{};

	Parms.TradeComponent = TradeComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharInventory.BPI_CharInventory_C.GetHudWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IPlayerHUDInterface_C>HUDInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharInventory_C::GetHudWidget(TScriptInterface<class IPlayerHUDInterface_C>* HUDInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "GetHudWidget");

	Params::IBPI_CharInventory_C_GetHudWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HUDInterface != nullptr)
		*HUDInterface = Parms.HUDInterface;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Armor Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_Armor_Inventory(class ASHInventory** Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get Armor Inventory");

	Params::IBPI_CharInventory_C_BPI_Get_Armor_Inventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Quest Diary
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHQuestDiaryComponent*      Diary                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_Quest_Diary(class USHQuestDiaryComponent** Diary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get Quest Diary");

	Params::IBPI_CharInventory_C_BPI_Get_Quest_Diary_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Diary != nullptr)
		*Diary = Parms.Diary;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Weapon Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_Weapon_Inventory(class ASHInventory** Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get Weapon Inventory");

	Params::IBPI_CharInventory_C_BPI_Get_Weapon_Inventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_Inventory(class ASHInventory** Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get Inventory");

	Params::IBPI_CharInventory_C_BPI_Get_Inventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get External Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Get_External_Inventory(class ASHInventory** Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Get External Inventory");

	Params::IBPI_CharInventory_C_BPI_Get_External_Inventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open External Inventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharInventory_C::BPI_Open_External_Inventory(class ASHInventory* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Open External Inventory");

	Params::IBPI_CharInventory_C_BPI_Open_External_Inventory_Params Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharInventory.BPI_CharInventory_C.BPI Close HUDInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CharInventory_C::BPI_Close_HUDInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharInventory_C", "BPI Close HUDInventory");



	UObject::ProcessEvent(Func, nullptr);

}

}


