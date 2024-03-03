#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x110 - 0xB0)
// BlueprintGeneratedClass StatsManagerComponent.StatsManagerComponent_C
class UStatsManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	FMulticastInlineDelegateProperty_            OnModifierAdded;                                   // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnModifierRemoved;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FF_Stat>                       Stats;                                             // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        InitialBlockValue;                                 // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RecentlyReceivedDamage;                            // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecentlyReceivedHitsCount;                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RecentlyReceivedSuccessfulDamage;                  // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecentlyReceivedSuccessfulHitsCount;               // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnBaseValueChanged;                                // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UStatsManagerComponent_C* GetDefaultObj();

	void GetRecentlyReceivedSuccessfulDamage(float* Value);
	void GetRecentlyReceivedSuccessfulHitsCount(int32* Value);
	void GetRecentlyReceivedHitsCount(int32* Value);
	void ResetRecentlyReceivedDamage();
	void GetRecentlyReceivedDamage(float* Value);
	void ChangeStatBaseValue(enum class E_StatType Type, float NewValue, int32 CallFunc_GetStatIndex_Index);
	void TakeDamage(float Damage, bool IgnoreStamina, float L_StaminaValue, float L_BlockedDamage, float L_ReducedDamage, class UExtendedStatComponent_C* L_Stamina, class UExtendedStatComponent_C* L_Health, int32 Temp_int_Variable, float CallFunc_GetStatValue_Value, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_GetStatValue_Value_1, int32 Temp_int_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp_1);
	void GetDamage(float* Damage, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetStatValue_Value, float CallFunc_GetStatValue_Value_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetStatValue_Value_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void GetStatIndex(enum class E_StatType Type, int32* Index, int32 L_ReturnIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_Stat& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetStatValue(enum class E_StatType Type, bool IncludeModifiers, float* Value, int32 L_Index, bool Temp_bool_Variable, int32 CallFunc_GetStatIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void RemoveModifier(enum class E_StatType Type, float Value, int32 L_Index, bool CallFunc_NotEqual_FloatFloat_ReturnValue, int32 CallFunc_GetStatIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void AddModifier(enum class E_StatType Type, float Value, int32 L_Index, bool CallFunc_NotEqual_FloatFloat_ReturnValue, int32 CallFunc_GetStatIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void Initialize();
	void ExecuteUbergraph_StatsManagerComponent(int32 EntryPoint, float CallFunc_GetStatValue_Value);
	void OnBaseValueChanged__DelegateSignature(enum class E_StatType Stat, float NewValue);
	void OnModifierRemoved__DelegateSignature(enum class E_StatType Type, float Value);
	void OnModifierAdded__DelegateSignature(enum class E_StatType Type, float Value);
};

}


