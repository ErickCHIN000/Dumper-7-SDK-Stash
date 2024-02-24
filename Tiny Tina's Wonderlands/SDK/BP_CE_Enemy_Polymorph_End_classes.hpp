#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x168 - 0x148)
// BlueprintGeneratedClass BP_CE_Enemy_Polymorph_End.BP_CE_Enemy_Polymorph_End_C
class UBP_CE_Enemy_Polymorph_End_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_SpawnOut;                                    // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KilledPolymoprhTarget;                             // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PolymorphPlayerOwner;                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_Enemy_Polymorph_End_C* GetDefaultObj();

	void CacheValues(class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_K2_GetIntRegisterValue_OutInt, bool CallFunc_K2_GetIntRegisterValue_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue);
	void OnBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_BP_CE_Enemy_Polymorph_End(int32 EntryPoint, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Enemy_OnPolymorphStop_Res, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue);
};

}


