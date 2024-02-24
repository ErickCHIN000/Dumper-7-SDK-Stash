#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC6 (0x326 - 0x260)
// WidgetBlueprintGeneratedClass wid_FoodPanel_v3_Entry.wid_FoodPanel_v3_Entry_C
class UWid_FoodPanel_v3_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_9;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_101;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_FoodPanel_Button_C*               Double;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_FoodPanel_Button_C*               Half;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_FoodPanel_v2_C* Info;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_LevelSelectorMenu_C*              Menu;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MiddleButton;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_FoodPanel_Button_C*               Normal;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RationDesc;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RationPanel;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Rations;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_FoodPanelReward_C*                RewardPanel;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionBorder;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_FoodPanel_Button_C*               Zero;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  NameID;                                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedRationIndex;                               // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            FoodRationsDT;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SelectedRationVal;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissionSucceed;                                    // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2A50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionsPanel_C*                ParentCompanionsPanel;                             // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Hovered;                                           // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseAlternativeSelection;                           // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         USeSmallButton;                                    // 0x312(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2A5A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_C*                   ParentFoodPanel;                                   // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ClickedRationIdx;                                  // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMiddleButton;                                   // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseJoinedYourTeam;                                 // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_FoodPanel_v3_Entry_C* GetDefaultObj();

	void DeselectAllRations();
	void SelectV2(bool Condition);
	void UpdatePercentage(class FName CurrEventID, bool CallFunc_CanBeSend_Result, class FName CallFunc_CanBeSend_PreventingBuff, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapForActiveEvent_ReturnValue, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_EqualEqual_NameName_ReturnValue, class AEventSystemBackend* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateEffectiveness_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void CanBeSend(bool* Result, class FName* PreventingBuff, class FName Reason, bool CanBeSend, class UDataTable* CompanionBuffsDT, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetBuufsIcons(TArray<enum class EBuffType>* CompanionBuffs, uint8* IgorMorale, uint8* IgorHealth, enum class EBuffType HealthPhase, enum class EBuffType MoralePhase, class FName HealthPhaseName, const TArray<enum class EBuffType>& HightestBuffType, bool FirstSet, class UDataTable* CompanionBuffsDT, enum class EBuffGroup CurrentGroup, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EBuffType CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, enum class EBuffType CallFunc_Array_Get_Item_1, TArray<enum class EBuffGroup>& K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 Temp_int_Variable, enum class EBuffType CallFunc_Array_Get_Item_2, enum class EBuffGroup CallFunc_Array_Get_Item_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class EHealthPhase CallFunc_GetCurrentHealthPhase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_Array_Get_Item_4, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue);
	void SetFoodRationDesc(class FName RowName, const struct FSt_FoodRation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SelectRation(int32 NewIndex, int32 Direction, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_Button_C* K2Node_DynamicCast_AsWid_Food_Panel_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_Button_C* K2Node_DynamicCast_AsWid_Food_Panel_Button_1, bool K2Node_DynamicCast_bSuccess_1);
	void Select(bool Condition);
	void Init(class FName NameID, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<enum class EBuffType>& CallFunc_SetBuufsIcons_CompanionBuffs, uint8 CallFunc_SetBuufsIcons_IgorMorale, uint8 CallFunc_SetBuufsIcons_IgorHealth, bool CallFunc_BooleanAND_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FCompanionDefinition& CallFunc_GetCompanionsInfo_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Accept();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void ShowDetailsLS();
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MiddleButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MiddleButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MiddleButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void FoodSelected();
	void ForceSelect();
	void ExecuteUbergraph_wid_FoodPanel_v3_Entry(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, FDelegateProperty_ Temp_delegate_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IWid_IMissionAssigmentApp_C> CallFunc_Accept_self_CastInput, int32 CallFunc_GetChildIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
};

}


