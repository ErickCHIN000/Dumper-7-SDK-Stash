#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass WBP_HeadPieceOptionsV2.WBP_HeadPieceOptionsV2_C
class UWBP_HeadPieceOptionsV2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_2;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LanguageButton_C*                 WBP_LanguageButton;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_TextGrid_C*>               Grids;                                             // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_HeadPieceOptionsV2_C* GetDefaultObj();

	void HandleButtonSelection(int32 Index, class UWBP_CC_Options_GridScroll_New_C* CCOption, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UCC_Button_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetHeadPieces(TArray<struct FCustomization>* HeadPieces, const TArray<struct FCustomization>& FinalVal, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1);
	void Construct();
	void OnValueChanged(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void RefreshWidget();
	void BndEvt__WBP_HeadPieceOptionsV2_WBP_LanguageButton_K2Node_ComponentBoundEvent_1_OnClickedNonRadio__DelegateSignature(bool Val);
	void ExecuteUbergraph_WBP_HeadPieceOptionsV2(int32 EntryPoint, uint8 Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, uint8 Temp_byte_Variable_1, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, class UWBP_TextGrid_C* K2Node_DynamicCast_AsWBP_Text_Grid, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_TextGrid_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_TextGrid_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationData& K2Node_Select_Default, const struct FCustomization& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_Val, uint8 CallFunc_Conv_BoolToByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, const struct FCustomizationData& K2Node_Select_Default_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, uint8 CallFunc_Conv_BoolToByte_ReturnValue_1);
};

}


