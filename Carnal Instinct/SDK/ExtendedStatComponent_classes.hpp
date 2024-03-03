#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xF8 - 0xB0)
// BlueprintGeneratedClass ExtendedStatComponent.ExtendedStatComponent_C
class UExtendedStatComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	enum class E_StatType                        Type;                                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RegenerationTickInterval;                          // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TopValue;                                          // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModifierValue;                                     // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoesRegenerates;                                   // 0xCC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RegenValue;                                        // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReenableRegenTime;                                 // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          RegenHandle;                                       // 0xD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        InitialRegenValue;                                 // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UExtendedStatComponent_C* GetDefaultObj();

	void SetCurrentValue(float Value, bool InterruptRegeneration, float CallFunc_GetMaxValue_Value, float CallFunc_GetMaxValue_Value_1, float CallFunc_FClamp_ReturnValue);
	void RemoveModifier(float Value, float CallFunc_GetMaxValue_Value, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void AddModifier(float Value, float CallFunc_GetMaxValue_Value, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetMaxValue(float* Value, float CallFunc_Add_FloatFloat_ReturnValue);
	void ChangeRegenPercent(int32 Percent, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetCurrentValue(float* CurrentValue);
	void ClearRegenTimer();
	void RegenTick(float CallFunc_GetMaxValue_Value, bool CallFunc_Less_FloatFloat_ReturnValue);
	void ModifyStat(float Value, bool InterruptRegeneration, float LocalValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void ReceiveBeginPlay();
	void RefreshRegenTimer();
	void StartRegenerating();
	void OnModifierAdded(enum class E_StatType Type, float Value);
	void OnModifierRemoved(enum class E_StatType Type, float Value);
	void InitStatManager();
	void OnBaseValueChanged(enum class E_StatType Stat, float NewValue);
	void ExecuteUbergraph_ExtendedStatComponent(int32 EntryPoint, float CallFunc_GetMaxValue_Value, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, enum class E_StatType K2Node_CustomEvent_Type_1, float K2Node_CustomEvent_Value_1, class UStatsManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class E_StatType K2Node_CustomEvent_Type, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetStatValue_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class E_StatType K2Node_CustomEvent_Stat, float K2Node_CustomEvent_NewValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
	void OnValueChanged__DelegateSignature(float NewValue, float MaxValue);
};

}


