#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCD (0x32D - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_StackSplitter.wid_Inventory_StackSplitter_C
class UWid_Inventory_StackSplitter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_Buttons_Entry_C*         AcceptButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         BackButton;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentTextbox;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DecrementButton;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               IncrementButton;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NewTextbox;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SliderBar;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SplitLabel;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SliderStepValue;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min;                                               // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max;                                               // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IncrementalStepValue;                              // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnStackSplit;                                      // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSplitDeclined;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  ItemId;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ItemAmount;                                        // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1F37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewText;                                           // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CurrentText;                                       // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDecimalSplit;                                    // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Index;                                             // 0x31C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousValue;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSliderEffect;                                  // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Inventory_StackSplitter_C* GetDefaultObj();

	void PlaySliderEffect(bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, class UAkAudioEvent* K2Node_Select_Default, class UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ModifyCurrentValue(float Modifier, float CallFunc_GetValue_ReturnValue, float CallFunc_SliderValueToMinMaxRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	float GetMiddleValue(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void UpdatetTexts(int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_GetValue_ReturnValue, float CallFunc_SliderValueToMinMaxRange_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void IsValidItem(bool* IsValid, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Init(float CallFunc_GetMiddleValue_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidItem_IsValid);
	float ClampSliderValueToNearestMinMaxRange(float SliderValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
	float SliderValueToMinMaxRange(float Value, float CallFunc_MapRangeClamped_ReturnValue);
	float ClampSliderValueToNearest(float SliderValue, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
	void Set_Slider_Value(float Value, float CallFunc_ClampSliderValueToNearest_ReturnValue, float CallFunc_GetValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void Construct();
	void BndEvt__DecrementButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IncrementButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_BtnPressed__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_4_BtnPressed__DelegateSignature();
	void Input_Accept();
	void Input_Back();
	void Input_Left();
	void Input_Right();
	void BndEvt__SliderBar_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Inventory_StackSplitter(int32 EntryPoint, class FText CallFunc_FormatText_Output, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, float K2Node_ComponentBoundEvent_Value, float CallFunc_GetValue_ReturnValue, float CallFunc_SliderValueToMinMaxRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, bool K2Node_Event_IsDesignTime);
	void OnSplitDeclined__DelegateSignature();
	void OnStackSplit__DelegateSignature(float NewAmount, class FName ItemId, const struct FVector2D& Index, float OldAmount);
};

}


