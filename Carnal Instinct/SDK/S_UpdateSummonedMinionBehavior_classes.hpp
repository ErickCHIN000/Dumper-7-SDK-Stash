#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x104 - 0x98)
// BlueprintGeneratedClass S_UpdateSummonedMinionBehavior.S_UpdateSummonedMinionBehavior_C
class US_UpdateSummonedMinionBehavior_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FBlackboardKeySelector                BehaviorKey;                                       // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xC8(0x28)(Edit, BlueprintVisible)
	class AAIController*                         OwnerController;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseAI_C*                          ControlledCharacter;                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackBehaviorRange;                               // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class US_UpdateSummonedMinionBehavior_C* GetDefaultObj();

	void UpdateBehavior(class AActor* L_Target, float L_DistanceToTarget, enum class E_AIBehavior Temp_byte_Variable, enum class E_AIBehavior Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsPatrolPathValid_Result, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class E_AIBehavior K2Node_Select_Default, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnStateChanged(enum class E_State PrevState, enum class E_State NewState);
	void ExecuteUbergraph_S_UpdateSummonedMinionBehavior(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


