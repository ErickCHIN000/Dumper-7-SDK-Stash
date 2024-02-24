#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x130 - 0xB8)
// BlueprintGeneratedClass BP_AlertnessComponent.BP_AlertnessComponent_C
class UBP_AlertnessComponent_C : public UAlertnessComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                       Character;                                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnReadyStateTimedOut;                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       ReadyStateTimeout;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EAlertnessLevelType>       RelaxedTransitions;                                // 0xE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EAlertnessLevelType>       AlertTransitions;                                  // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EAlertnessLevelType>       ReadyTransitions;                                  // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EAlertnessLevelType>       AimingTransitions;                                 // 0x110(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EAlertnessLevelType>       BlockingTransitions;                               // 0x120(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AlertnessComponent_C* GetDefaultObj();

	void ChangeState(enum class EAlertnessLevelType NewState, bool CallFunc_Get_Is_Valid_State_Transition_ReturnValue);
	bool Get_Is_Valid_State_Transition(enum class EAlertnessLevelType NewState, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue, enum class EAlertnessLevelType Temp_byte_Variable, TArray<enum class EAlertnessLevelType>& K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue);
	void EndAim();
	void BeginAim();
	void BeginBlock();
	void Reloaded();
	void EndBlock();
	void ReadyTimedOut();
	void BeginSpellCast();
	void EndSpellCast();
	void ReceiveBeginPlay();
	void OnPlayerStateChanged(enum class EAlertnessLevelType Alertness);
	void ReadyStateTimedOut();
	void Attacked();
	void TookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_AlertnessComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, enum class EAlertnessLevelType K2Node_CustomEvent_Alertness, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnReadyStateTimedOut__DelegateSignature();
};

}


