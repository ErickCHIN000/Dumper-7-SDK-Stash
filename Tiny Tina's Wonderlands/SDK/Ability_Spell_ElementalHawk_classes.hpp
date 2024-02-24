#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x168 - 0x110)
// BlueprintGeneratedClass Ability_Spell_ElementalHawk.Ability_Spell_ElementalHawk_C
class UAbility_Spell_ElementalHawk_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  OwningCharacter;                                   // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OwningSpellMod;                                    // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        PreviousHomingTargets;                             // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                NextHomingTarget;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Spell_ElementalHawk; // 0x140(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Spell_ElementalHawk_C* GetDefaultObj();

	void GetNextHomingTarget(class AActor** Res);
	void FindNewHawkHomingTarget(class AGrenadeMod* Spell, TArray<class AActor*>& TargetList, class AActor** HomingTarget, bool* Res, bool FoundTarget, enum class Enum_SpellDeliveryMethod Temp_byte_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable1, enum class Enum_SpellDeliveryMethod Temp_byte_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable3, int32 CallFunc_Add_IntInt_ReturnValue, enum class Enum_SpellDeliveryMethod Temp_byte_Variable4, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class Enum_SpellDeliveryMethod Temp_byte_Variable5, class AActor* CallFunc_Array_Get_Item, bool CallFunc_AddTargetToHawkHomingList_Res, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Variable4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class Enum_SpellDeliveryMethod K2Node_Select_Default, int32 K2Node_Select1_Default, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue);
	void AddTargetToHawkHomingList(class AGrenadeMod* OwningSpell, class AActor* NewTarget, bool* Res, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnActivated();
	void Hawk_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void ExecuteUbergraph_Ability_Spell_ElementalHawk(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


