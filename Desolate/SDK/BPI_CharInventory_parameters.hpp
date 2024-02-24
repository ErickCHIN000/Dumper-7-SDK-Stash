#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Character UI
struct IBPI_CharInventory_C_BPI_Get_Character_UI_Params
{
public:
	TScriptInterface<class ICharacterUIInterface_C> CharacterUI;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get External Trade Component
struct IBPI_CharInventory_C_BPI_Get_External_Trade_Component_Params
{
public:
	class USHTradeComponent*                     TradeComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open NPC
struct IBPI_CharInventory_C_BPI_Open_NPC_Params
{
public:
	class ABasePeacefulAICharacter_C*            NPC;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open Trade
struct IBPI_CharInventory_C_BPI_Open_Trade_Params
{
public:
	class USHTradeComponent*                     TradeComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.GetHudWidget
struct IBPI_CharInventory_C_GetHudWidget_Params
{
public:
	TScriptInterface<class IPlayerHUDInterface_C> HUDInterface;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Armor Inventory
struct IBPI_CharInventory_C_BPI_Get_Armor_Inventory_Params
{
public:
	class ASHInventory*                          Inventory;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Quest Diary
struct IBPI_CharInventory_C_BPI_Get_Quest_Diary_Params
{
public:
	class USHQuestDiaryComponent*                Diary;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Weapon Inventory
struct IBPI_CharInventory_C_BPI_Get_Weapon_Inventory_Params
{
public:
	class ASHInventory*                          Inventory;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get Inventory
struct IBPI_CharInventory_C_BPI_Get_Inventory_Params
{
public:
	class ASHInventory*                          Inventory;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Get External Inventory
struct IBPI_CharInventory_C_BPI_Get_External_Inventory_Params
{
public:
	class ASHInventory*                          Inventory;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_CharInventory.BPI_CharInventory_C.BPI Open External Inventory
struct IBPI_CharInventory_C_BPI_Open_External_Inventory_Params
{
public:
	class ASHInventory*                          Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


