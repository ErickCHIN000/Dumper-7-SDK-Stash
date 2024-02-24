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
// Function Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C.Enchantment_OnSpellCast
struct UAbility_Mage_Spell_MageCast_GunDmgFireRt_C_Enchantment_OnSpellCast_Params
{
public:
	class AGrenadeMod*                           GrenadeMod;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  EquippedPlayer;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C.ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt
struct UAbility_Mage_Spell_MageCast_GunDmgFireRt_C_ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x8(0x18)(NoDestructor)
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player;               // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPlayerClass_Res;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGrenadeMod*                           K2Node_Event_GrenadeMod;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  K2Node_Event_EquippedPlayer;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x50(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x88(0x18)(NoDestructor, ContainsInstancedReference)
};

}
}


