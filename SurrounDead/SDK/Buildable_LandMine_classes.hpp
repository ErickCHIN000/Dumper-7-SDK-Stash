#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x400 - 0x3D1)
// BlueprintGeneratedClass Buildable_LandMine.Buildable_LandMine_C
class ABuildable_LandMine_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_27FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      ExplosionSphere;                                   // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      CameraShakeSphere;                                 // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                 RadialForce;                                       // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_LandMine_C* GetDefaultObj();

	void IsObjectDamageable_(bool* Damageable_);
	void SpawnCombatText(const struct FVector& Location, double Damage, class UCombatText_C* CallFunc_Create_ReturnValue);
	void Damage_Shoved();
	void BndEvt__Buildable_BearTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Event_Explode();
	void Damage_Object(double Damage, class AActor* Damage_Causer, class AController* Event_Instigator);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_LandMine(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_IsClosed_Variable_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Random_Vector_In_Range_Return_Value, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBP_PlayerControllerInterface_C> K2Node_DynamicCast_AsBP_Player_Controller_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOverlappingActor_ReturnValue, double K2Node_Event_Damage, class AActor* K2Node_Event_Damage_Causer, class AController* K2Node_Event_Event_Instigator, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, double CallFunc_RandomFloatInRange_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_3, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_Damage_C> K2Node_DynamicCast_AsBPI_Damage, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class ABP_MasterAICharacter_C* K2Node_DynamicCast_AsBP_Master_AICharacter, bool K2Node_DynamicCast_bSuccess_3, class ABP_AI_C* K2Node_DynamicCast_AsBP_AI, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, double CallFunc_SpawnFloatingDamageText_Damage_ImplicitCast);
};

}


