#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x109 - 0x98)
// BlueprintGeneratedClass S_UpdateBanditAIBehavior.S_UpdateBanditAIBehavior_C
class US_UpdateBanditAIBehavior_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BehaviorKey;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xC8(0x28)(Edit, BlueprintVisible)
	class AAIController*                         OwnerController;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseAI_C*                          ControlledCharacter;                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackBehaviorRange;                               // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TicksNearTarget;                                   // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOutOfStamina;                                    // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class US_UpdateBanditAIBehavior_C* GetDefaultObj();

	void UpdateActivities(bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateBehavior(int32 L_ReceivedHitsCount, float L_StaminaPercent, float L_DotProductToTarget, class AActor* L_Target, float L_DistanceToTarget, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, enum class E_AIBehavior Temp_byte_Variable, enum class E_AIBehavior Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInCombat_Value, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State_1, bool K2Node_DynamicCast_bSuccess_2, enum class E_CombatType CallFunc_GetCombatType_Type, TScriptInterface<class II_CombatState_C> K2Node_DynamicCast_AsI_Combat_State_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_RandomBoolWithWeight_ReturnValue, enum class E_CombatType CallFunc_GetCombatType_Type_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, TArray<enum class E_CombatType>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsPatrolPathValid_Result, enum class E_AIBehavior K2Node_Select_Default, float CallFunc_GetMaxValue_Value, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetRecentlyReceivedHitsCount_Value, uint8 CallFunc_MakeLiteralByte_ReturnValue_7, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDotProductTo_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_8, float CallFunc_GetDistanceTo_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_9, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_10, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, TArray<enum class E_CombatType>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_1);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnStateChanged(enum class E_State PrevState, enum class E_State NewState);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void OnStaminaValueChanged(float NewValue, float MaxValue);
	void Update();
	void ExecuteUbergraph_S_UpdateBanditAIBehavior(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_NewValue, float K2Node_CustomEvent_MaxValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


