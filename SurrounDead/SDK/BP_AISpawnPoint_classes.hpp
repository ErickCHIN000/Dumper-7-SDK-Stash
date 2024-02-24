#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3B0 - 0x298)
// BlueprintGeneratedClass BP_AISpawnPoint.BP_AISpawnPoint_C
class ABP_AISpawnPoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Proximity_Deactivation_Sphere;                     // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Proximity_Activation_Sphere;                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Spawn_Point_Rotation;                              // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Spawn_AI;                                   // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Spawn_AI;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Spawn_AI_Count;                                    // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Change_Default_Behaviour;                          // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_StartingAIBehaviours            Starting_Behaviour;                                // 0x2E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Random_Rotation;                                   // 0x2E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spawn_Time;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spawn_Time_Deviation;                              // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Respawn_AI;                                        // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Respawn_Time;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Respawn_Time_Variation;                            // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Spawned_AI;                                        // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Show_Rotation;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Player_Proximity_Activation;                   // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Player_Activation_Range;                           // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Deactivation_Proximity;                       // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Activation_Proximity;                         // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Player_Proximity_Deactivation;                 // 0x332(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Player_Deactivation_Range;                         // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Player_In_Area;                                    // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Current_AI_Spawned;                                // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_AIRespawn>                  AI_Respawning_Timers;                              // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       AI_Spawn_Hight;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AIBase;                                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Spawned_AI_Tags;                                   // 0x368(0x10)(Edit, BlueprintVisible)
	TArray<class ABP_MasterWayPoint_C*>          Way_Points;                                        // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FS_TriggerResponse>            Trigger_Activated_Responses;                       // 0x388(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_TriggerResponse>            Trigger_Deactivated_Responses;                     // 0x398(0x10)(Edit, BlueprintVisible)
	class FName                                  StreamLevelPackageName;                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AISpawnPoint_C* GetDefaultObj();

	void PlayerInAreaCheck(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue);
	void Respawn_AI_Actor(class ACharacter* AI_Character, bool Temp_bool_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void Respawn_Timer(const struct FS_AIRespawn& Array_Element_L, int32 Temp_int_Array_Index_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_AIRespawn& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_AIRespawn& K2Node_MakeStruct_S_AIRespawn, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float K2Node_MakeStruct_RespawnTime_6_8AF0BD5449A6D822BE0FD68EE7713725_ImplicitCast);
	void Spawn_AI_Actor(class APawn* Spawned_AI_L, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_SpawnAIFromClass_ReturnValue);
	void UserConstructionScript(float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1);
	void ReceiveBeginPlay();
	void Start_Spawning_AI();
	void Reset_Proximity_Activation();
	void BndEvt__Proximity_Activation_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Proximity_Deactivation_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Reset_Proximity_Deactivation();
	void Spawn_Timer();
	void Add_AI_Respawn_Timer(class ACharacter* AI_Character);
	void AI_Respawn_Timer_Finished(class ACharacter* AI_Character);
	void RespawnAI(class APawn* Pawn);
	void ExecuteUbergraph_BP_AISpawnPoint(int32 EntryPoint, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_Array_Contains_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, class ACharacter* K2Node_CustomEvent_AI_Character_1, TArray<class AActor*>& Temp_object_Variable_1, class ACharacter* K2Node_CustomEvent_AI_Character, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit_1, bool CallFunc_SphereTraceSingleForObjects_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_2, class FName Temp_name_Variable_1, class APawn* K2Node_CustomEvent_Pawn, bool CallFunc_Array_Contains_ReturnValue_1, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, enum class E_AIBehaviour CallFunc_Convert_To_Behaviour_Behaviour, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable_3, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FS_AIRespawn& K2Node_MakeStruct_S_AIRespawn, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float K2Node_MakeStruct_RespawnTime_6_8AF0BD5449A6D822BE0FD68EE7713725_ImplicitCast);
};

}


