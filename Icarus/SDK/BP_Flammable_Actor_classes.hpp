#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x12C - 0x100)
// BlueprintGeneratedClass BP_Flammable_Actor.BP_Flammable_Actor_C
class UBP_Flammable_Actor_C : public UFlammableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ModifierUID;                                       // 0x108(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C08[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UThermalComponent*                     ThermalComponent;                                  // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModifierTime;                                      // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PersistentFire;                                    // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldInformSprinkers;                             // 0x11D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InformedSprinker;                                  // 0x11E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C10[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReinformSprinklerTime;                             // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastReinformSprinklerTime;                         // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprinklerInformRange;                              // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Flammable_Actor_C* GetDefaultObj();

	void IsPersistent(bool* Value, class UIcarusStatContainer* Temp_wildcard_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InformAllSprinklers(TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_FireAlertable_C> K2Node_DynamicCast_AsBPI_Fire_Alertable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotifyOfFire_WasNotified);
	bool CanPropagateToTarget(const struct FFlammableTargetIgnite& Target, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_CanPropagateToTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TeardownCosmetics();
	void SetupCosmetics();
	void OnModifierUpdated(class UModifierStateComponent* Component, bool bRemoved);
	void OnFlammableInstanceAttached(class UFlammableInstance* Instance);
	void OnFlammableInstanceDetached(class UFlammableInstance* Instance);
	void OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceState_Combusting_Exit(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceState_Combusting_Tick(class UFlammableInstance* Instance, class UFlammableState* State, float DeltaSeconds);
	void ExecuteUbergraph_BP_Flammable_Actor(int32 EntryPoint, bool CallFunc_IsPersistent_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExtinguished_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UModifierStateComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bRemoved, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_AddFireModifierState_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FFlammableTargetExtinguish& CallFunc_MakeFlammableTargetExtinguishFromActor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFlammableInstance* CallFunc_TryExtinguishFlammableTarget_OutFlammableInstance, enum class EFireExtinguishResult CallFunc_TryExtinguishFlammableTarget_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableInstance* K2Node_Event_Instance, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFlammableInstance* K2Node_CustomEvent_Instance_2, class UFlammableState* K2Node_CustomEvent_State_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, float K2Node_CustomEvent_DeltaSeconds, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UModifierStateComponent* CallFunc_GetModifierStateByUID_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UModifierStateComponent* CallFunc_GetModifierStateByUID_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
};

}


