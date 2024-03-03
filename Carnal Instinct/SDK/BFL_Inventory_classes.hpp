#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BFL_Inventory.BFL_Inventory_C
class UBFL_Inventory_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBFL_Inventory_C* GetDefaultObj();

	void Add_xp_from_kill(float Exp_to_Add, int32 Level, class UObject* __WorldContext, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Leveling_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Get_Current_Level_Level, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Add_Level_Exp_to_Player(float Exp_to_Add, class UObject* __WorldContext, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Leveling_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_AC_Leveling(class UObject* __WorldContext, class UAC_Leveling_C** Return_value, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Leveling_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool Is_Interaction_with_Gamepad_Valid_(class UObject* __WorldContext, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Current_Interactable_Object(class UObject* __WorldContext, class UAC_Interactable_C** Current_Interactable, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue);
	void Get_AC_Interaction(class UObject* __WorldContext, class UAC_Interaction_C** AC_Interaction, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Interaction_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Is_Game_Paused_(class UObject* __WorldContext, bool* Paused, float CallFunc_GetGlobalTimeDilation_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	void Is_UI_Open_(class UObject* __WorldContext, bool* Condition, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void Get_AC_Crafting(class UObject* __WorldContext, class UAC_Crafting_C** AC_Crafting, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Crafting_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_Player_Reference(class UObject* __WorldContext, class ABP_CombatCharacter_C** Player, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character, bool K2Node_DynamicCast_bSuccess);
	void Get_AC_Inventory(class UObject* __WorldContext, class UAC_Inventory_C** AC_Inventory, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UAC_Inventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


