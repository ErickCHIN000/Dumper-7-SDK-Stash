#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D8 - 0x280)
// BlueprintGeneratedClass A_Ranger_Cryonado_Start.A_Ranger_Cryonado_Start_C
class UA_Ranger_Cryonado_Start_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	int32                                        MaxTornados;                                       // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 MaxTornadoHandle;                                  // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FVector>                       SpawnLocations;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<class AActor*>                        ActorTargets;                                      // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UEnvQueryInstanceBlueprintWrapper*     ActiveEnvironmentQuery;                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UA_Ranger_Cryonado_Start_C* GetDefaultObj();

	void CryonadoFailed();
	void SetEnvironmentSpawnLocations(TArray<struct FVector>& CandidateSpawnLocations, int32 LastIndex, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1);
	void SetActorSpawnLocations(TArray<class AActor*>& Actors, int32 LastIndex, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, class AActor* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2);
	void PopNextActorTarget(class AActor** NextTornadoTarget, class AActor* NextTarget, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void InitTornadoSkill(float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void GbxAsyncRequest_Failed_097C8A104924D25CF1C8FDB2B6E7D5FF(class AActor* Actor, int32 InstanceIndex);
	void GbxAsyncRequest_Spawned_097C8A104924D25CF1C8FDB2B6E7D5FF(class AActor* Actor, int32 InstanceIndex);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void Notify_BeginSpawningTornados();
	void Notify_FXTrail();
	void Notify_ScreenFX();
	void On_Find_Actor_Targets_Complete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void On_Find_Environment_Locations_Complete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void OnServerBegin(class AActor* Actor);
	void ExecuteUbergraph_A_Ranger_Cryonado_Start(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, class AProjectile_Ranger_Cryonado_DRONE_C* Temp_object_Variable, class AProjectile_Ranger_Cryonado_DRONE_C* K2Node_DynamicCast_AsProjectile_Ranger_Cryonado_DRONE, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AProjectile_Ranger_Cryonado_DRONE_C* K2Node_DynamicCast_AsProjectile_Ranger_Cryonado_DRONE1, bool K2Node_DynamicCast_bSuccess1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Select_Default, bool CallFunc_IsServer_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_PopNextActorTarget_NextTornadoTarget, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance1, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus1, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<class AActor*>& CallFunc_GetResultsAsActors_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, class AActor* K2Node_Event_Actor, bool CallFunc_IsServer_ReturnValue1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_K2_GetActor_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


