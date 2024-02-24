#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x348 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C
class UUI_StormModeUpgrade_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Upgrade;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Glimpses;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_NextRank;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Tar;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_TitleAndDescription_1;                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selection_Left;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selection_Right;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Upgrade_Description;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpses_Cost;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Maxed;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_Cost;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Upgrade_CurrentPower;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Upgrade_Name;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Upgrade_NextPower;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Cost;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RankID;                                            // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RankLvl;                                           // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UpgradeName;                                       // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  UpgradeDescription;                                // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AmountOfRanks;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RankDelta;                                         // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RankStartingCost;                                  // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RankCostDelta;                                     // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormMode_CurrencyType       UpgradeCurrency;                                   // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalCost;                                         // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MathSymbol;                                        // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Has_;                                              // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7E0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowID;                                             // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StormModeUpgradesPanel_C*          UI_StormModeUpgradesPanel;                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormModeUpgrade_Entry_C* GetDefaultObj();

	void IncreaseRank(int32 CallFunc_Add_IntInt_ReturnValue);
	bool ReachedMaxRank_(bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool CanBuy_(int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void CanBuyColor(bool CanBuy, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetHighlighted(bool Condition);
	class FText CreateRankText(float Value, bool Temp_bool_Variable, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& Temp_string_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void PopulateUpgradeData(class FName RowID, class FName RankID, class FText UpgradeName, class FText& UpgradeDescription, int32 AmountOfRanks, float RankDelta, int32 RankStartingCost, int32 RankCostDelta, enum class Enum_StormMode_CurrencyType UpgradeCurrency, const class FString& MathSymbol, bool Has_, class UTexture2D* Icon, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanBuy__ReturnValue, const struct FSlateColor& CallFunc_CanBuyColor_SlateColor, bool CallFunc_ReachedMaxRank__ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, class FText CallFunc_CreateRankText_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, class FText CallFunc_CreateRankText_ReturnValue_1, class FText CallFunc_RuneUpgrade_BuildText_X__ReturnValue);
	void BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_StormModeUpgrade_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


