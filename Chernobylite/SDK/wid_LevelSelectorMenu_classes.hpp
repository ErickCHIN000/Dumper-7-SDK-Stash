#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelSelectorMenu.wid_LevelSelectorMenu_C
class UWid_LevelSelectorMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                              AssignButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonBackground;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DetailsButton;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Split;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SplitText;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Use;                                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UseText;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemCategory                     ItemstoMiniStorage;                                // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemUsed;                                          // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_Entry_C*             ParentFP;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_LevelSelection_Entry_C*           ParentLS;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_LevelSelectorMenu_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void Show();
	void Hide();
	void DetailsKey();
	void HideDetails();
	void HideStats();
	void ExecuteUbergraph_wid_LevelSelectorMenu(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IWid_IMissionAssigmentApp_C> CallFunc_Accept_self_CastInput, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, TArray<class Abp_MissionSelection_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_MissionSelection_C* CallFunc_Array_Get_Item);
};

}


