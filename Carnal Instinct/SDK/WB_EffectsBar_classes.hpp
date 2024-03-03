#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F0 (0x650 - 0x260)
// WidgetBlueprintGeneratedClass WB_EffectsBar.WB_EffectsBar_C
class UWB_EffectsBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_ActionConsumables_C*               ActionConsumables_Component;                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BG_Image_Health;                                   // 0x278(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BG_Image_Stamina;                                  // 0x300(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_CircleEffect_C*                    HealthCircle;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CircleEffect_C*                    StaminaCircle;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CircleEffect_C*                    ArmorCircle;                                       // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CircleEffect_C*                    DamageCircle;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BG_Image_Armor;                                    // 0x3A8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BG_Image_Damage;                                   // 0x430(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_CircleEffect_C*                    AttackSpeedCircle;                                 // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BG_Image_AttackSpeed;                              // 0x4C0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_CircleEffect_C*                    MaxHealthCircle;                                   // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CircleEffect_C*                    MaxStaminaCircle;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BG_Image_MaxHealth;                                // 0x558(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          CircleColor_Health;                                // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_MaxHealth;                             // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_Stamina;                               // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_MaxStamina;                            // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_Armor;                                 // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_Damage;                                // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CircleColor_AttackSpeed;                           // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_EffectsBar_C* GetDefaultObj();

	void Construct();
	void Initialize_Circle_Rotation(enum class E_StatCategory Stat);
	void ExecuteUbergraph_WB_EffectsBar(int32 EntryPoint, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, enum class E_StatCategory K2Node_CustomEvent_Stat, bool K2Node_SwitchEnum_CmpSuccess, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_2, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_3, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_4, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, const struct FMargin& K2Node_MakeStruct_Margin_5, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_4, class UWB_CircleEffect_C* CallFunc_Create_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_6, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_5, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_6, const struct FMargin& K2Node_MakeStruct_Margin_6);
};

}


