#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2D9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_InsurancePanel.UMG_InsurancePanel_C
class UUMG_InsurancePanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ColourCornerInsurance;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_218;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               InsuranceBG;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Checkbox_C*                       InsuranceCheck;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        InsuranceCostBox;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          InsurancePanel;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InsuranceRewardInfo;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InsuranceTitle;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OnDropInsuranceInfoBox;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LastInsuranceValue;                                // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5865[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_PlayerLoadoutPanel_C*             LoadoutUI;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOnDropExtraInfo;                               // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_InsurancePanel_C* GetDefaultObj();

	void UpdateInsuranceAvailable(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FPlayerLoadoutData& CallFunc_GetPlayerLoadoutData_LoadoutData, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool CallFunc_CanInsureLoadout_ReturnValue);
	void GetInsuranceEnabled(bool* Insured);
	void FindMetaItemCost(const struct FItemsStaticRowHandle& ItemRow, bool* Found, TArray<struct FWorkshopCost>* Cost, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FWorkshopItemsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorkshopItemsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FWorkshopItem& CallFunc_GetWorkshopItemsStruct_WorkshopItems, enum class EValid CallFunc_GetWorkshopItemsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateInsuranceCost(const TArray<struct FWorkshopCost>& InsuranceCost, bool CanAfford);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnLoadoutChanged(class UInventory* Inventory, int32 Location);
	void SetPendingProspectInfo(const struct FProspectInfo& ProspectInfo);
	void OnEnvirosuitChanged();
	void OnInsuranceCheckChanged(bool Checked, bool WasForced);
	void SetPlayerLoadout(class UUMG_PlayerLoadoutPanel_C* Loadout);
	void ForceInsuranceLocked();
	void ExecuteUbergraph_UMG_InsurancePanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UInventory* CallFunc_GetInventory_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, const struct FMetaCurrencyRowHandle& Temp_struct_Variable, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const struct FProspectInfo& K2Node_CustomEvent_ProspectInfo, float CallFunc_CalculateMissionRewardModifier_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectDataFromProspectInfo_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FMetaCurrencyRowHandle& Temp_struct_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, bool K2Node_CustomEvent_Checked, bool K2Node_CustomEvent_WasForced, class UUMG_PlayerLoadoutPanel_C* K2Node_CustomEvent_Loadout, bool CallFunc_IsValid_ReturnValue_1);
};

}


