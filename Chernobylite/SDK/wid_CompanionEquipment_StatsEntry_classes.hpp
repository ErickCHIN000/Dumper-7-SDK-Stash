#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C
class UWid_CompanionEquipment_StatsEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Above;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatChangeValue;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatName;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatValue;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SignificantChangeValueNum;                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SignificantValueNum;                               // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SignificantValue;                                  // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StatChangeText;                                    // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SignificantChangeValueNumSmooth;                   // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SignificantValueNumSmooth;                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionStatType                StatType;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StatText;                                          // 0x2D8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWid_CompanionEquipment_StatsEntry_C* GetDefaultObj();

	int32 GetStatsOffsetBasedOnItem(struct FInventoryEntry& ItemEntry, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FCompanionEffectiveness& CallFunc_GetCompanionEquipmnetStatsModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_4);
	void GetEquipmentSlotBasedOnItem(class FName ItemId, enum class ECompanionEquipmentSlotType* SlotType, enum class EItemCategory Temp_byte_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, enum class ECompanionEquipmentSlotType Temp_byte_Variable_1, enum class ECompanionEquipmentSlotType Temp_byte_Variable_2, enum class ECompanionEquipmentSlotType Temp_byte_Variable_3, enum class ECompanionEquipmentSlotType Temp_byte_Variable_4, enum class ECompanionEquipmentSlotType Temp_byte_Variable_5, enum class ECompanionEquipmentSlotType Temp_byte_Variable_6, enum class ECompanionEquipmentSlotType Temp_byte_Variable_7, enum class ECompanionEquipmentSlotType Temp_byte_Variable_8, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, enum class ECompanionEquipmentSlotType K2Node_Select_Default);
	void CalculateSignificantChange(struct FInventoryEntry& ItemEntry, class FName CompanionID, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot, int32* OutSignificantChange, int32 SignificantValueLocal, int32 CallFunc_CalculateSignificantValue_Out, int32 CallFunc_GetStatsOffsetBasedOnItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue, int32 CallFunc_GetStatsOffsetBasedOnItem_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1);
	void CalculateSignificantValue(class FName CompanionID, bool bClamped, int32* Out, const struct FStatsModifier& LocalStats, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FStatsModifier& CallFunc_GetStatForCompanion_ReturnValue);
	void UpdateCurrentChangeValue(struct FInventoryEntry& ItemEntry, class FName CompanionName, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot);
	void UpdateCurrentSignificantValue(class FName CompanionID);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update(struct FInventoryEntry& ItemEntry, class FName CompanionID, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_CompanionEquipment_StatsEntry(int32 EntryPoint, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry_1, class FName K2Node_CustomEvent_CompanionName, bool K2Node_CustomEvent_RemoveCurrent_1, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_CurrentSlot_1, class FName K2Node_CustomEvent_CompanionID_1, int32 CallFunc_CalculateSignificantChange_OutSignificantChange, int32 CallFunc_CalculateSignificantValue_Out, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, class FName K2Node_CustomEvent_CompanionID, bool K2Node_CustomEvent_RemoveCurrent, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_CurrentSlot, float CallFunc_FInterpTo_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue);
};

}


