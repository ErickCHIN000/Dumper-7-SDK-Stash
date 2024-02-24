#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x290 - 0xB0)
// BlueprintGeneratedClass RuneInventoryComponent.RuneInventoryComponent_C
class URuneInventoryComponent_C : public UActorComponent
{
public:
	TArray<struct FStruct_Rune>                  Runes_All;                                         // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FName, struct FStruct_Rune>       SlotsStatus;                                       // 0xC0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FStruct_Rune>       SlotsMisc;                                         // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Runes_IDs;                                         // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<enum class Enum_Rune_Category_Randomizer, int32> Runes_Progress;                                    // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnOpenNewArea;                                     // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChaliceRuneGained;                               // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, int32>                     PermanentUpgrades_RankLvls;                        // 0x1E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                StartingTier__Chances;                             // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                UpgradeTier__Chances;                              // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                UpgradeTierToLegendary__Chances;                   // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        RevivalRune__Chance;                               // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1909[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_StormMode_C*               GameplayPC;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGlandRuneGained;                                 // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBossRuneGained;                                  // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class URuneInventoryComponent_C* GetDefaultObj();

	void HasRune(class FName ID, bool* Yes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void HandleIsProgressRune(const struct FStruct_Rune& Rune, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, bool CallFunc_Array_Contains_ReturnValue);
	void EnableRevivalRune_Chance(class FName Temp_name_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void EnableLegendaryTier_Chances(class FName Temp_name_Variable, class FName Temp_name_Variable_1, float CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
	void EnableUpgradeTier_Chances(class FName Temp_name_Variable, class FName Temp_name_Variable_1, float CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
	void EnableStartingTier_Chances(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, float CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_2, class FName Temp_name_Variable_5, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float CallFunc_Array_Get_Item_2, float CallFunc_Multiply_IntFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, int32 CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Array_Get_Item_3, int32 CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, float CallFunc_Multiply_IntFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_4);
	void EnablePermanentUpgrades();
	void LoadRunes(TArray<struct FStruct_Rune>& Runes_All, TMap<class FName, struct FStruct_Rune> SlotsStatus, TMap<class FName, struct FStruct_Rune> SlotsMisc, TArray<class FName>& Runes_IDs, TMap<enum class Enum_Rune_Category_Randomizer, int32> Runes_Progress);
	void AddNewRune(const struct FStruct_Rune& Rune, bool IsBonusRune, bool* ReloadRunesForCharacter_, bool Local_IsBonus, class FName Local_MiscID, const struct FStruct_Rune& Local_RuneMisc, enum class Enum_RuneSlots_IDs Local_SlotID, enum class Enum_Rune_Category Local_Category, const struct FStruct_Rune& Local_Rune, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, TArray<class FName>& CallFunc_GetGlandTakenRunesIDs_IDs, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, TArray<class FName>& CallFunc_GetChaliceRunesIDs_IDs, bool CallFunc_Array_Contains_ReturnValue_1, TArray<class FName>& CallFunc_GetBossDefeatedRunesIDs_IDs, TArray<class FName>& CallFunc_GetOpenAreasRuneIDs_IDs, bool CallFunc_Array_Contains_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Rune& CallFunc_GetSlotCurrentRune_CurrentRune, bool CallFunc_GetSlotCurrentRune_HasRune_, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnBossRuneGained__DelegateSignature();
	void OnGlandRuneGained__DelegateSignature();
	void OnChaliceRuneGained__DelegateSignature(class FName ID);
	void OnOpenNewArea__DelegateSignature(class FName ID);
};

}


