#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6D (0x105 - 0x98)
// BlueprintGeneratedClass S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C
class US_UpdateMageAIBehavior_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BehaviorKey;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xC8(0x28)(Edit, BlueprintVisible)
	class AAIController*                         OwnerController;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseAI_C*                          ControlledCharacter;                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeleeAttackBehaviorRange;                          // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFleeing;                                         // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class US_UpdateMageAIBehavior_C* GetDefaultObj();

	void UpdateActivities(bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateBehavior(int32 L_ReceivedHitsCount, float L_StaminaPercent, float L_DotProductToTarget, class AActor* L_Target, float L_DistanceToTarget, enum class E_AIBehavior Temp_byte_Variable, enum class E_AIBehavior Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, bool Temp_bool_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_GetRecentlyReceivedHitsCount_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsPatrolPathValid_Result, enum class E_AIBehavior K2Node_Select_Default, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDotProductTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnStateChanged(enum class E_State PrevState, enum class E_State NewState);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void Update();
	void Flee();
	void ExecuteUbergraph_S_UpdateMageAIBehavior(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BaseAIController_C* K2Node_DynamicCast_AsBP_Base_AIController, bool K2Node_DynamicCast_bSuccess_1);
};

}


