#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x330 - 0x2E8)
// WidgetBlueprintGeneratedClass LanguageSettingsPage.LanguageSettingsPage_C
class ULanguageSettingsPage_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_43;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USophiaGameInstance*                   Game_Instance;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ASophiaHUD*                            SophiaHUD;                                         // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                Selected_Item;                                     // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_LanguageButton_C*>         LangWidgets;                                       // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULanguageSettingsPage_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Clicked(class FText Text, enum class ELocalizationCulture Lang);
	void ExecuteUbergraph_LanguageSettingsPage(int32 EntryPoint, class UWBP_LanguageButton_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetLocalizationCultureText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText K2Node_CustomEvent_Text, enum class ELocalizationCulture K2Node_CustomEvent_Lang, bool CallFunc_ChangeLocalizationCulture_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_LanguageButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class ELocalizationCulture CallFunc_GetCurrentLocalizationCulture_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_GetLocalizationCultureText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UWBP_LanguageButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
};

}


