#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x2E1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropPointInformation.UMG_DropPointInformation_C
class UUMG_DropPointInformation_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SlideIn;                                           // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Recommended;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionText;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Recommended;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Recommended_1;                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_DropBackground;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_DropName;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  UMG_BasicButton_SelectDrop;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_NegativeAttributes;                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_PositiveAttributes;                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DropPointSelected;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDropGroupsRowHandle                  DropGroup;                                         // 0x2C8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Left;                                              // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_DropPointInformation_C* GetDefaultObj();

	void ConvertAttributeToInfo(enum class EDropAbundance Enum, class FText* Text, bool* Negative, enum class EDropAbundance Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default);
	void SetAttributes(TSoftObjectPtr<class UObject> Temp_softobject_Variable, class FText Temp_text_Variable, TSoftObjectPtr<class UObject> Temp_softobject_Variable_1, class FText Temp_text_Variable_1, TSoftObjectPtr<class UObject> Temp_softobject_Variable_2, class FText Temp_text_Variable_2, TSoftObjectPtr<class UObject> Temp_softobject_Variable_3, class FText Temp_text_Variable_3, TSoftObjectPtr<class UObject> Temp_softobject_Variable_4, class FText Temp_text_Variable_4, TSoftObjectPtr<class UObject> Temp_softobject_Variable_5, class FText Temp_text_Variable_5, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_1, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_2, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_3, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_4, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_5, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_6, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_7, enum class EDropTemperature Temp_byte_Variable, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, enum class EDropTemperature Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_8, TSoftObjectPtr<class UObject> Temp_softobject_Variable_9, class FText Temp_text_Variable_9, TSoftObjectPtr<class UObject> Temp_softobject_Variable_10, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_ConvertAttributeToInfo_Text, bool CallFunc_ConvertAttributeToInfo_Negative, class FText CallFunc_ConvertAttributeToInfo_Text_1, bool CallFunc_ConvertAttributeToInfo_Negative_1, class FText CallFunc_ConvertAttributeToInfo_Text_2, bool CallFunc_ConvertAttributeToInfo_Negative_2, class FText CallFunc_ConvertAttributeToInfo_Text_3, bool CallFunc_ConvertAttributeToInfo_Negative_3, class FText CallFunc_ConvertAttributeToInfo_Text_4, bool CallFunc_ConvertAttributeToInfo_Negative_4, class FText CallFunc_ConvertAttributeToInfo_Text_5, bool CallFunc_ConvertAttributeToInfo_Negative_5, class FText CallFunc_ConvertAttributeToInfo_Text_6, bool CallFunc_ConvertAttributeToInfo_Negative_6, class FText CallFunc_ConvertAttributeToInfo_Text_7, bool CallFunc_ConvertAttributeToInfo_Negative_7, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1);
	void AddNextAttribute(class UWidget* Content, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Construct();
	void AnimatedRemoveFromParent();
	void RemoveWidget();
	void BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_DropPointInformation(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void DropPointSelected__DelegateSignature();
};

}


