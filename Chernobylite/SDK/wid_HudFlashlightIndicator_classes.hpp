#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2EC - 0x260)
// WidgetBlueprintGeneratedClass wid_HudFlashlightIndicator.wid_HudFlashlightIndicator_C
class UWid_HudFlashlightIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      LightW;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LightOE;                                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LightE;                                            // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LightD;                                            // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowRad;                                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowFilter;                                        // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowAnimation;                                     // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWid_hud_ArmorIndicator_C*             ArmorIndicator;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              FlashLightIcon;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_hud_GasMaskIndicator_C*           GasMaskIndicator;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon2;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         EnabledGasMask;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7D3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Last;                                              // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_0;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar_1;                                          // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_2;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_3;                                          // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_4;                                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_HudFlashlightIndicator_C* GetDefaultObj();

	void UpdateVisibilityContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetIsUserInterfaceGloballyDisabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Flashlight_Disabled();
	void Flashlight_Enabled();
	void Flashlight_LowBattery();
	void FilterOn();
	void FilterOff();
	void RadPlay();
	void Construct();
	void BuffAdded(TSubclassOf<class UBaseBuff> Buff);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BuffRemoved(TSubclassOf<class UBaseBuff> Buff);
	void OnAnimationFinished_Event_0();
	void FlashLightTurnOnEmpty();
	void FlashLightChanged(float Value);
	void FlashLightClearAnimations();
	void OnMovementStateChanged_Event_0(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState);
	void CustomEvent_0();
	void BindVisibilityContainerCallback();
	void UnbindVisibilityContainerCallback();
	void Destruct();
	void ExecuteUbergraph_wid_HudFlashlightIndicator(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class UBaseBuff> K2Node_CustomEvent_Buff_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Count_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, float CallFunc_Count_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TSubclassOf<class UBaseBuff> K2Node_CustomEvent_Buff, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_GetIsWearingGasMask_WearingGasMask, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float K2Node_CustomEvent_Value, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, float K2Node_Select_Default_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_IsArmorEquipped_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


