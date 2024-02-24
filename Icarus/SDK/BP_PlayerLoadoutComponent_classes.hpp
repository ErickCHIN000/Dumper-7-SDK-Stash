#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass BP_PlayerLoadoutComponent.BP_PlayerLoadoutComponent_C
class UBP_PlayerLoadoutComponent_C : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_PlayerLoadoutComponent_C* GetDefaultObj();

	void GetPlayer(class AIcarusPlayerCharacterSurvival** Player, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	void Grant_MetaItems(const struct FPlayerLoadoutData& Loadout, const struct FItemData& Suit, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_CreateItem_ReturnValue, class AIcarusPlayerCharacterSurvival* CallFunc_GetPlayer_Player, enum class EDataValid CallFunc_ItemDataValid_Paths, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacterSurvival* CallFunc_GetPlayer_Player_1, class AIcarusPlayerCharacterSurvival* CallFunc_GetPlayer_Player_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool CallFunc_HasLoadout_ReturnValue, const struct FPlayerLoadoutData& CallFunc_GetCurrentLoadout_ReturnValue, class AIcarusPlayerCharacterSurvival* CallFunc_GetPlayer_Player_3, bool CallFunc_IsWithEditor_ReturnValue, bool CallFunc_ManuallyPlaceItem_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_MakeLiteralItemTemplate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	TArray<struct FItemData> GetLoadout(const TArray<struct FItemData>& Items, int32 Temp_int_Array_Index_Variable, class AIcarusPlayerCharacterSurvival* CallFunc_GetPlayer_Player, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, const struct FPlayerLoadoutData& CallFunc_GetCurrentLoadout_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


