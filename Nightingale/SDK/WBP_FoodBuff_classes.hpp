#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x350 (0x690 - 0x340)
// WidgetBlueprintGeneratedClass WBP_FoodBuff.WBP_FoodBuff_C
class UWBP_FoodBuff_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FoodIcon;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FoodTimeText;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        FoodSlotIndex;                                     // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2148[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RefreshDurationTimer;                              // 0x368(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RefreshDurationFrequency;                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             RemainingTimeSpan;                                 // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFoodSlot                             FoodSlotData;                                      // 0x380(0x300)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           FoodBuffGameplayEffect;                            // 0x680(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FoodBuff_C* GetDefaultObj();

	void GetOrLoadGameplayEffectHandle(struct FActiveGameplayEffectHandle* GameplayEffectHandle, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_2, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item);
	void InitializeVariables(const struct FActiveGameplayEffectHandle& CallFunc_GetOrLoadGameplayEffectHandle_GameplayEffectHandle, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_ConsumptionComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FFoodSlot>& CallFunc_GetFoodSlots_FoodSlots, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	class UWidget* Get_MainOverlay_ToolTipWidget(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue);
	void GetConsumptionComponent(class UBP_ConsumptionComponent_C** FoundConsumptionComponent, bool CallFunc_IsValid_ReturnValue);
	void UpdateRemainingTime(const struct FActiveGameplayEffectHandle& CallFunc_GetOrLoadGameplayEffectHandle_GameplayEffectHandle, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, double CallFunc_FCeil_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void UpdateText(int32 CallFunc_GetSeconds_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_GetSeconds_ReturnValue_1, int32 CallFunc_GetMinutes_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateIcon(TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_FoodBuff(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


