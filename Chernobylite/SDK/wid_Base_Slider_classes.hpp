#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2A4 - 0x260)
// WidgetBlueprintGeneratedClass wid_Base_Slider.wid_Base_Slider_C
class UWid_Base_Slider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USlider*                               SliderBar;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SliderStepValue;                                   // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min;                                               // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max;                                               // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IncrementalStepValue;                              // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousValue;                                     // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSliderEffect;                                  // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Offset;                                            // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Base_Slider_C* GetDefaultObj();

	void PlaySliderEffect(bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, class UAkAudioEvent* K2Node_Select_Default, class UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ModifyCurrentValue(float Modifier, float CallFunc_GetValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void Init();
	void Set_Slider_Value(float Value, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void Construct();
	void BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Input_Left();
	void Input_Right();
	void BndEvt__SliderBar_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature();
	void InputRightReleased();
	void InputLeftReleased();
	void BlockAutoIncrement();
	void BlockAutoDecrement();
	void BlockAuto();
	void ExecuteUbergraph_wid_Base_Slider(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_ComponentBoundEvent_Value, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, bool Temp_bool_IsClosed_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostEvent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void OnValueChanged__DelegateSignature(float NewValueMinMax, float NewValueMinMaxOffset, float ZeroOneValue);
};

}


