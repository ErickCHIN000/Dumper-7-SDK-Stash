#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x411 - 0x3C0)
// BlueprintGeneratedClass BP_MasterAIController.BP_MasterAIController_C
class ABP_MasterAIController_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                Smart_AI_Component;                                // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ReactionTime>               React_Time_Actors;                                 // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        Sight_Actors;                                      // 0x3E8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        Starting_Perceved_Actors;                          // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       Starting_Sight_Radius;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Respawn;                                           // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterAIController_C* GetDefaultObj();

	void Actor_Attack_Target(class AActor** Attack_Target);
	void AI_Can_Interact_(bool* Can_Interact);
	void AI_Is_Dead_(bool* Dead);
	void Find_Reaction_Time(class AActor* Actor, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_ReactionTime& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void Reaction_Time_Update(int32 Array_Index_L, const struct FS_ReactionTime& Array_Element_L, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FS_ReactionTime& K2Node_MakeStruct_S_ReactionTime, const struct FS_ReactionTime& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AI_Is_Dead__Dead, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Time_5_27E075ED4F811C7693D34984A41DE882_ImplicitCast);
	void Perception_Update_Check(class AActor* Actor, const struct FAIStimulus& AI_Stimulus, bool Test_Sight, class AActor* Array_Element_L, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Find_Reaction_Time_Index, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FS_ReactionTime& K2Node_MakeStruct_S_ReactionTime, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, TSubclassOf<class UAISense> CallFunc_GetSenseClassForStimulus_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, float K2Node_MakeStruct_Time_5_27E075ED4F811C7693D34984A41DE882_ImplicitCast);
	void AI_Dead();
	void Actor_Aim_Focus(class AActor* Instigator);
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void Turret_Destroyed_Effect();
	void Turret_Idle_Start();
	void Turret_Idle_Stop();
	void Turret_Start_Reload();
	void Turret_End_Reload();
	void AI_Alert(class AActor* Alert_Actor);
	void AI_End_Alert();
	void AI_Animation_Switch(enum class E_AIBehaviour Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker);
	void ReceivePossess(class APawn* PossessedPawn);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void Starting_Perception();
	void ExecuteUbergraph_BP_MasterAIController(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_Instigator, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Alert_Actor, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class FName Temp_name_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FAIStimulus& K2Node_MakeStruct_AIStimulus, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LineOfSightTo_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1);
};

}


