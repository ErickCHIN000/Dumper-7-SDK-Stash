#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x10C - 0xB0)
// BlueprintGeneratedClass EffectsComponent.EffectsComponent_C
class UEffectsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	FMulticastInlineDelegateProperty_            OnEffectApplied;                                   // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEffectRemoved;                                   // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FF_Effect>                     AppliedEffects;                                    // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        BackstabDamage;                                    // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BurningDamage;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateInterval;                                    // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRepostedEffectApplied;                           // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        RiposteDamage;                                     // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEffectsComponent_C* GetDefaultObj();

	void ApplyRiposteEffect(float Duration, enum class E_ApplyEffectMethod Method, class AActor* Applier, float Damage, bool* Applied, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class II_CanGetEffects_C> K2Node_DynamicCast_AsI_Can_Get_Effects, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanEffectBeApplied_ReturnValue);
	void UpdateEffect(enum class E_EffectType Type, float Duration, enum class E_ApplyEffectMethod Method, class AActor* Applier, int32 L_Index, const struct FF_Effect& K2Node_MakeStruct_F_Effect, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetEffectIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void ApplyBurningEffect(float Duration, enum class E_ApplyEffectMethod Method, class AActor* Applier, float Damage, bool* Applied, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class II_CanGetEffects_C> K2Node_DynamicCast_AsI_Can_Get_Effects, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanEffectBeApplied_ReturnValue);
	void GetEffectApplier(enum class E_EffectType Type, class AActor** Applier, const struct FF_Effect& CallFunc_GetEffect_Effect);
	void ApplyBackstabEffect(float Duration, enum class E_ApplyEffectMethod Method, class AActor* Applier, float Damage, bool* Applied, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class II_CanGetEffects_C> K2Node_DynamicCast_AsI_Can_Get_Effects, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanEffectBeApplied_ReturnValue);
	bool IsAnyEffectApplied(TArray<enum class E_EffectType>& Types, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class E_EffectType CallFunc_Array_Get_Item, bool CallFunc_IsEffectApplied_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetEffectIndex(enum class E_EffectType Type, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_Effect& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RemoveEffects(TArray<enum class E_EffectType>& Types, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class E_EffectType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PrintEffects(const class FString& L_Effects, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_Effect& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void UpdateEffectsDuration(const struct FF_Effect& L_Effect, const TArray<struct FF_Effect>& L_EffectsToRemove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FF_Effect& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FF_Effect& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void GetEffect(enum class E_EffectType Type, struct FF_Effect* Effect, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_Effect& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AdjustEffectTime(enum class E_EffectType Type, float NewDuration, int32 L_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetEffectIndex_Index);
	bool IsEffectApplied(enum class E_EffectType Type, int32 CallFunc_GetEffectIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void RemoveEffect(enum class E_EffectType Type, const struct FF_Effect& CallFunc_GetEffect_Effect, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ApplyEffect(enum class E_EffectType Type, float Duration, enum class E_ApplyEffectMethod Method, class AActor* Applier, bool* Applied, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class II_CanGetEffects_C> K2Node_DynamicCast_AsI_Can_Get_Effects, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanEffectBeApplied_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EffectsComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnRepostedEffectApplied__DelegateSignature();
	void OnEffectRemoved__DelegateSignature(enum class E_EffectType Type);
	void OnEffectApplied__DelegateSignature(enum class E_EffectType Type);
};

}


