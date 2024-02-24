#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x380 - 0x328)
// BlueprintGeneratedClass MyDetourCrowdAIController.MyDetourCrowdAIController_C
class AMyDetourCrowdAIController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                 PawnSensing;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        HearingDistance;                                   // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestDistance;                                   // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARatkinGroupSpawner_C*                 Nearest;                                           // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFriendlyToPlayer_;                               // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_B27[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTree*                         BehaviorTree;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DefaultSightRadius;                                // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_B2E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            WasAggroed;                                        // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPawnSensed;                                      // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AMyDetourCrowdAIController_C* GetDefaultObj();

	void CallPawnSensed(class AZero_Base_C* Target, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetEnemyCharacterName(class FText* Name, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetName_Name);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void GetNearestGroupSpawner();
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume);
	void ResetAggroOnWalkBack();
	void ForceResetAggro();
	void ExecuteUbergraph_MyDetourCrowdAIController(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_FloatFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void OnPawnSensed__DelegateSignature();
	void WasAggroed__DelegateSignature();
};

}


