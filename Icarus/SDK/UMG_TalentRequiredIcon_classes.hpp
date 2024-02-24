#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C
class UUMG_TalentRequiredIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_38;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderBase;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Corner;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TalentIcon;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text_Field;                                // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                DLCURL;                                            // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_TalentRequiredIcon_C* GetDefaultObj();

	void BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Override(const struct FTalentsRowHandle& Talent, bool Unlocked, const struct FDLCPackageDataRowHandle& DLCRequired);
	void PreConstruct(bool IsDesignTime);
	void DevLocked(bool DLC);
	void Construct();
	void ExecuteUbergraph_UMG_TalentRequiredIcon(int32 EntryPoint, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_2, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FTalentsRowHandle& K2Node_CustomEvent_Talent, bool K2Node_CustomEvent_Unlocked, const struct FDLCPackageDataRowHandle& K2Node_CustomEvent_DLCRequired, bool CallFunc_IsEmpty_ReturnValue, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool K2Node_CustomEvent_DLC, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Format_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3);
};

}


