#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15E (0x418 - 0x2BA)
// BlueprintGeneratedClass Passive_Shaman_17.Passive_Shaman_17_C
class UPassive_Shaman_17_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2BBF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	float                                        DamageMultiplier;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageMultiplierHandle;                            // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ProjectileDuration;                                // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProjectileDurationHandle;                          // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AProj_Shaman_17_C*                     Proj_Shaman_17;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentTarget;                                     // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             CurrentWeapon;                                     // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakGameInstance*                      GameInstance;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UStatusEffectData*, class UClass*> StatusEffectGrid;                                  // 0x330(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        CurrentDPS;                                        // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                StatusEffectDamageType;                            // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StatusEffectDPS;                                   // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Passive_17_Active;                                 // 0x394(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            SpiritSwarmResourcePool;                           // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        DurationRestoration;                               // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DurationRestorationHandle;                         // 0x3B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TickRate;                                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 TickRateHandle;                                    // 0x3D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Shaman_17; // 0x3F0(0x28)(None)

	static class UClass* StaticClass();
	static class UPassive_Shaman_17_C* GetDefaultObj();

	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void GbxAsyncRequest_Failed_932695DB4FD6D705984630849074BE6C(class AActor* Actor, int32 InstanceIndex);
	void GbxAsyncRequest_Spawned_932695DB4FD6D705984630849074BE6C(class AActor* Actor, int32 InstanceIndex);
	void OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
	void OnActivated();
	void EndSpiritSwarm(const struct FGameResourcePoolReference& ResourcePool);
	void OnDeactivated();
	void Shaman17_Death();
	void ExecuteUbergraph_Passive_Shaman_17(int32 EntryPoint, class AProj_Shaman_17_C* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AProj_Shaman_17_C* K2Node_DynamicCast_AsProj_Shaman_17, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AProj_Shaman_17_C* K2Node_DynamicCast_AsProj_Shaman_171, bool K2Node_DynamicCast_bSuccess1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class ETeamAttitude CallFunc_GetAttitudeTowardActor_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


