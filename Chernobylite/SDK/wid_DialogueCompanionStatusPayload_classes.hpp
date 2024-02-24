#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueCompanionStatusPayload.wid_DialogueCompanionStatusPayload_C
class UWid_DialogueCompanionStatusPayload_C : public UCGCompanionStatusPayloadWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            CompanionName;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Effects;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EffectsLabel;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_element_C*  HealthStatus;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainContainer;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_element_C*  PsycheStatus;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RelationBox;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RelationStatus;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        StatusBox;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CompanionID;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_DialogueCompanionStatusPayload_C* GetDefaultObj();

	class FText AddBuffColor(class FText Text, enum class EBuffType Tier, enum class EBuffType Temp_byte_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EBuffType Temp_byte_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Get_Buff(TArray<class FName>& TestedBuffs, enum class EBuffGroup Type, class FName* Buff, const TArray<class FName>& FoundBuffs, const TArray<class FName>& AllBuffs, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FName>& K2Node_Select_Default);
	void UpdateStatus(TArray<class FName>& K2Node_MakeArray_Array, TArray<class FName>& K2Node_MakeArray_Array_1);
	void UpdateBuff(TArray<class FName>& TestedBuffs, enum class EBuffGroup Type, class UWid_CompanionsPanel_Entry_element_C* Widget, const struct FStatsModifier& Buff, class UTexture2D* Temp_object_Variable, class FName CallFunc_Get_Buff_Buff, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class EBuffGroup Temp_byte_Variable, class FText CallFunc_FormatText_Output, class FText CallFunc_AddBuffColor_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void UpdateRelationStatus(int32 AdjustedLoyalty, int32 Temp_int_Variable, enum class EBuffType Temp_byte_Variable, enum class EBuffType Temp_byte_Variable_1, enum class EBuffType Temp_byte_Variable_2, enum class EBuffType Temp_byte_Variable_3, enum class EBuffType Temp_byte_Variable_4, enum class EBuffType Temp_byte_Variable_5, enum class EBuffType Temp_byte_Variable_6, int32 Temp_int_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, enum class EBuffType K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_FormatText_Output, class FText CallFunc_AddBuffColor_ReturnValue);
	void UpdateCompanionName(class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class FText CallFunc_FormatText_Output);
	bool IsPositiveBaseTier(enum class EBuildSystemStatTier Index, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AddEffectText(class FName RowName, TArray<class FText>& Array, const struct FSt_OnScreenTooltip& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetEffectsValues(TArray<class FText>& PositiveEffects, TArray<class FText>& NegativeEffects, const class FString& TargetTExt, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_LeftChop_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateEffects(int32 NumberOfBeds, const TArray<class FText>& EffectsListNegative, const TArray<class FText>& EffectsListPositive, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, enum class EBuildSystemStatTier Temp_byte_Variable, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, enum class EBuildSystemStatTier Temp_byte_Variable_1, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, enum class EBuildSystemStatTier Temp_byte_Variable_2, class FName Temp_name_Variable_14, class FName Temp_name_Variable_15, class FName Temp_name_Variable_16, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EBuildSystemStatTier Temp_byte_Variable_3, class FName Temp_name_Variable_19, class FName Temp_name_Variable_20, class FName Temp_name_Variable_21, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, class FName Temp_name_Variable_24, enum class EBuildSystemStatTier Temp_byte_Variable_4, class UCustomGameInstance* CallFunc_GetCGGameInstanceBase_ReturnValue, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_2, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_3, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, bool CallFunc_IsPositiveBaseTier_ReturnValue, bool CallFunc_IsPositiveBaseTier_ReturnValue_1, enum class EBuildSystemStatTier CallFunc_BuildSystemGetCurrentStatTier_ReturnValue_4, class FName K2Node_Select_Default_4, bool CallFunc_IsPositiveBaseTier_ReturnValue_2, TArray<class FText>& K2Node_Select_Default_5, TArray<class FText>& K2Node_Select_Default_6, TArray<class FText>& K2Node_Select_Default_7);
	void InitPayload(class FName CompanionName);
	void Construct();
	void RequestDestruct();
	void PreConstruct(bool IsDesignTime);
	void Update();
	void Show();
	void CloseRemoveGate();
	void ShowBP();
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void Destruct();
	void ExecuteUbergraph_wid_DialogueCompanionStatusPayload(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_Event_CompanionName, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_FormatText_Output, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsAnimationPlaying_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetRenderOpacity_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
};

}

