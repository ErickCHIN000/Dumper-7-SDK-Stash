#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D0 (0x730 - 0x260)
// WidgetBlueprintGeneratedClass UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C
class UUMG_TalentArchetype_Player_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ReqLvlPulse;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconWidget;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LockedBorder;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RequiredLevelText;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TextAndIconBorder;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextWidget;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Underline;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Text;                                              // 0x2B8(0x18)(Edit, BlueprintVisible)
	struct FTalentArchetypesRowHandle            Archetype;                                         // 0x2D0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x2F0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           SelectedBrush;                                     // 0x378(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle;                                       // 0x400(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColour;                                        // 0x678(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           SelectedTextColour;                                // 0x6A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NormalTextColour;                                  // 0x6C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HoveredTextColour;                                 // 0x6F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTalentViewInterface*                  View;                                              // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Required_Level;                                    // 0x720(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMOD_ButtonClick;                                  // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_TalentArchetype_Player_C* GetDefaultObj();

	void UpdateRequiredLevel(const struct FTalentArchetype& CallFunc_GetTalentArchetypesStruct_TalentArchetypes, enum class EValid CallFunc_GetTalentArchetypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Format_ReturnValue);
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void Select();
	void Deselect();
	void On_Model_State_Changed(class UTalentModelInterface_Const* Model);
	void Construct();
	void ExecuteUbergraph_UMG_TalentArchetype_Player(int32 EntryPoint, bool Temp_bool_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsHovered_ReturnValue, const struct FTalentArchetype& CallFunc_GetTalentArchetypesStruct_TalentArchetypes, enum class EValid CallFunc_GetTalentArchetypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, class UTalentModelInterface_Const* K2Node_CustomEvent_Model, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnClicked__DelegateSignature(const struct FTalentArchetypesRowHandle& Archetype);
};

}


