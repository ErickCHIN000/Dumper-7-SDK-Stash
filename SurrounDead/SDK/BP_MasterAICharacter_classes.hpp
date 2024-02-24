#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F2 (0x86A - 0x678)
// BlueprintGeneratedClass BP_MasterAICharacter.BP_MasterAICharacter_C
class ABP_MasterAICharacter_C : public ACharacter
{
public:
	uint8                                        Pad_3683[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNavigationInvokerComponent*           NavigationInvoker;                                 // 0x688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       RangeStartPoint;                                   // 0x690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                BP_AIComponent;                                    // 0x698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Edge_Timeline_NewTrack_0_E35BA4E241D5E59A8EB450B4FEA52937; // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Edge_Timeline__Direction_E35BA4E241D5E59A8EB450B4FEA52937; // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Edge_Timeline;                                     // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Smooth_Move_Lerp_C8A3EC80484780C3B672F688B96D1C2A; // 0x6B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Smooth_Move__Direction_C8A3EC80484780C3B672F688B96D1C2A; // 0x6B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Smooth_Move;                                       // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Valt_Timeline_Up_Alpha_D0168D9449470A31646DA0ADA61D8223; // 0x6C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Valt_Timeline__Direction_D0168D9449470A31646DA0ADA61D8223; // 0x6C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3695[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Valt_Timeline;                                     // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Climb_Timeline_Across_Alpha_ABEC2831489E1A5D1118BC8DC7BB5664; // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Climb_Timeline_Up_Alpha_ABEC2831489E1A5D1118BC8DC7BB5664; // 0x6D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Climb_Timeline__Direction_ABEC2831489E1A5D1118BC8DC7BB5664; // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3697[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Climb_Timeline;                                    // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                ArgumentForQuest;                                  // 0x6E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Debug_Mode;                                        // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_369B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Debug_Text_Duration;                               // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AIWeapon_Master_C*                 Holdable_Actor;                                    // 0x708(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End_Climb_Location;                                // 0x710(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End_Climb_Hight;                                   // 0x728(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Up_Movement_Done;                                  // 0x740(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_369C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Edge_Impact_Point;                                 // 0x748(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Edge_Start_Location;                               // 0x760(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_369E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            End_Location;                                      // 0x780(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Start_Transform;                                   // 0x7E0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Start_Climb_Location;                              // 0x840(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BeginPlay;                                         // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         XpPopUpEnabled_;                                   // 0x868(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutlineEnabled;                                    // 0x869(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterAICharacter_C* GetDefaultObj();

	void ActorDead_(bool* Dead_);
	void Actor_Attack_Target(class AActor** Attack_Target, TScriptInterface<class IBP_AIInterface_C> CallFunc_Actor_Attack_Target_self_CastInput, class AActor* CallFunc_Actor_Attack_Target_Attack_Target);
	void AI_Can_Interact_(bool* Can_Interact, TScriptInterface<class IBP_AIInterface_C> CallFunc_AI_Can_Interact__self_CastInput, bool CallFunc_AI_Can_Interact__Can_Interact);
	void AI_Is_Dead_(bool* Dead);
	void Debug_Text(const class FString& InString, const struct FLinearColor& TextColor, float CallFunc_PrintString_Duration_ImplicitCast);
	void Climb_Timeline__FinishedFunc();
	void Climb_Timeline__UpdateFunc();
	void Valt_Timeline__FinishedFunc();
	void Valt_Timeline__UpdateFunc();
	void Smooth_Move__FinishedFunc();
	void Smooth_Move__UpdateFunc();
	void Edge_Timeline__FinishedFunc();
	void Edge_Timeline__UpdateFunc();
	void AI_End_Alert();
	void AI_Animation_Switch(enum class E_AIBehaviour Behaviour);
	void AI_Camera_Activate(bool Activate);
	void AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker);
	void Actor_Aim_Focus(class AActor* Instigator);
	void ReceivePossessed(class AController* NewController);
	void OnLanded(struct FHitResult& Hit);
	void Climb_Location_Movement(bool Is_Valting, const struct FVector& End_Climb_Location, double Play_Rate);
	void Smooth_Move_AI_Actor(const struct FTransform& End_Location, double Play_Time);
	void AI_Alert(class AActor* Alert_Actor);
	void Turret_End_Reload();
	void Turret_Start_Reload();
	void Turret_Idle_Stop();
	void Turret_Idle_Start();
	void Turret_Destroyed_Effect();
	void Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker);
	void ReceiveBeginPlay();
	void GetQuestArgument(const class FString& Argument);
	void AI_Dead();
	void Event_BloodSplatter();
	void OnCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void Outline(bool NewValue);
	void XP(bool NewValue);
	void ExecuteUbergraph_BP_MasterAICharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, class AActor* K2Node_Event_Instigator, TScriptInterface<class IBP_AIInterface_C> CallFunc_Actor_Aim_Focus_self_CastInput, class AController* K2Node_Event_NewController, const struct FHitResult& K2Node_Event_Hit, bool K2Node_CustomEvent_Is_Valting, const struct FVector& K2Node_CustomEvent_End_Climb_Location, double K2Node_CustomEvent_Play_Rate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTransform& K2Node_CustomEvent_End_Location, double K2Node_CustomEvent_Play_Time, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* K2Node_Event_Alert_Actor, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool Temp_bool_IsClosed_Variable, const class FString& K2Node_Event_Argument, class UNarrativeComponent* CallFunc_GetNarrativeComponent_ReturnValue, bool CallFunc_CompleteNarrativeDataTask_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, double CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_3, bool CallFunc_K2_SetActorLocation_ReturnValue_3, bool CallFunc_GetBoolCVar_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, const struct FVector& K2Node_CustomEvent_Normal, class FName K2Node_CustomEvent_BoneName, class UPhysicalMaterial* K2Node_CustomEvent_PhysMat, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool K2Node_CustomEvent_NewValue_1, bool K2Node_CustomEvent_NewValue, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_SpawnDecalAtLocation_LifeSpan_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void BeginPlay__DelegateSignature();
};

}


