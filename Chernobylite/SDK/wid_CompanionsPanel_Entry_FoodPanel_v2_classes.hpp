#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBA (0x31A - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry_FoodPanel_v2.wid_CompanionsPanel_Entry_FoodPanel_v2_C
class UWid_CompanionsPanel_Entry_FoodPanel_v2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MissionSelection_Avatar_Food_V3_C* Avatar;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               CanBeSendColor;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CompanionName;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CompanionPercent;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Health;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Psyche;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionBorder;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionColor;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            AvatarImage;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  NameID;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UDataTable*                            CompanionBuffsDT;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeSend;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_843[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MapInfo;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                BuffsString;                                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  EventIDTESTTT;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HealthPhaseName;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         MoralePhase;                                       // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EBuffType                         HealthPhase;                                       // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_84D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionsPanel_C*                Parent;                                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SmallHP;                                           // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SmallPsyche;                                       // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_CompanionsPanel_Entry_FoodPanel_v2_C* GetDefaultObj();

	void UpdateCanBeSend(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default);
	void UpdatebuffStatus(bool SmallHP, bool SmallPsyhe, enum class EBuffType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, bool Temp_bool_Variable, enum class EBuffType Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, bool Temp_bool_Variable_1, enum class EBuffType Temp_byte_Variable_2, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, enum class EBuffType Temp_byte_Variable_3, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* Temp_object_Variable_14, class UTexture2D* Temp_object_Variable_15, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2, class UTexture2D* K2Node_Select_Default_3, class UTexture2D* K2Node_Select_Default_4, class UTexture2D* K2Node_Select_Default_5);
	void SetArrow(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdatePercentage(class FName CurrEventID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapForActiveEvent_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class AEventSystemBackend*>& CallFunc_GetAllActorsOfClass_OutActors, class AEventSystemBackend* CallFunc_Array_Get_Item, float CallFunc_CalculateEffectiveness_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetEventAndMap2(const class FString& Mission, const class FString& Locaton);
	void GetBuffString(bool FirstSet, const TArray<enum class EBuffType>& HightestBuffType, class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName Temp_name_Variable_2, uint8 Temp_byte_Variable, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName K2Node_Select_Default, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EHealthPhase CallFunc_GetCurrentHealthPhase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCompanionsModifiers_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FStatsModifier& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void GetCanBeSend(bool* CanBeSend);
	void SetEventAndMap(class FName EvID, const struct FActiveQuestInfo& Local, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, const struct FActiveQuestInfo& CallFunc_Array_Get_Item, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FDescriptionInfo& CallFunc_GetQuestDescription_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Select(bool Select);
	void ShowInfo(bool Show, const struct FColor& BackgroundColor, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue);
	void Construct();
	void Init(class UTexture2D* Image, class FText NewName, class FName NameID);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_CompanionsPanel_Entry_FoodPanel_v2(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_Image, class FText K2Node_CustomEvent_NewName, class FName K2Node_CustomEvent_NameID, bool K2Node_Event_IsDesignTime, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Accept_self_CastInput);
};

}


