#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x6C8 - 0x588)
// BlueprintGeneratedClass IO_TEDProjectile_ThrowableHole.IO_TEDProjectile_ThrowableHole_C
class AIO_TEDProjectile_ThrowableHole_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              HoleClosing;                                       // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           HoleOpening;                                       // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             HoleStateSwitch;                                   // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Door_State                   HoleState;                                         // 0x5B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4151[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USingularityComponent*                 SingularityComponent;                              // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSingularityInitializationInfo        SingularityInfo;                                   // 0x5C0(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExplosionDamage;                                   // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DoubleHole;                                        // 0x68C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4163[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DoubleHoleBonus;                                   // 0x690(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SpinMaxDistance;                                   // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASplat*                                ThrowableHoleSplat;                                // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHoleLifetimeExpired;                              // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4178[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           Audio_HoleOpen;                                    // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AIO_TEDProjectile_ThrowableHole_C* GetDefaultObj();

	void StartLifetimeExpireTimer();
	void StartDealingDamage(bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select1_Default, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
	void OnRep_HoleState(bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_473CE9B24D9EF446C7E5B8AEB0A14943(class AActor* Actor, int32 InstanceIndex);
	void OnHoleClosing();
	void OnHoleOpened();
	void OnHoleOpening();
	void SetStateOpened();
	void SetStateClosing();
	void SetStateClosed();
	void ReceiveBeginPlay();
	void Audio_Play_Hole_Open();
	void OnHoleClosed();
	void ExecuteUbergraph_IO_TEDProjectile_ThrowableHole(int32 EntryPoint, class ASplat* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class ASplat* K2Node_DynamicCast_AsSplat, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, bool Temp_bool_Variable1, bool Temp_bool_Variable2, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable3, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable4, float Temp_float_Variable4, float Temp_float_Variable5, bool Temp_bool_Variable5, float Temp_float_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class USplatData* K2Node_Select_Default, bool CallFunc_HasAuthority_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_HasAuthority_ReturnValue2, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select1_Default, float K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FHitResult& Temp_struct_Variable, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float K2Node_Select4_Default, float K2Node_Select5_Default, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
};

}


