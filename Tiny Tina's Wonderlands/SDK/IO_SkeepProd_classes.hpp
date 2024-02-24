#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5D8 - 0x588)
// BlueprintGeneratedClass IO_SkeepProd.IO_SkeepProd_C
class AIO_SkeepProd_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InitialTarget;                                     // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        BeamTargetList;                                    // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        WeaponDamage;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_37FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BeamDamageScalar;                                  // 0x5B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          CleanupTimer;                                      // 0x5D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AIO_SkeepProd_C* GetDefaultObj();

	void CleanupTargetList(class AActor* CallFunc_Array_Get_Item, bool CallFunc_RemoveTargetFromBeanList_Res);
	void RemoveFarActors(const TArray<class AActor*>& TempBeamList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void GetBeamDamage(float* Res, const struct FDataTableValueHandle& NewLocalVar_0, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetBeamName(class AActor* SourceActor, class AActor* TargetActor, class FName* BeamName, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_GetDisplayName_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FName CallFunc_Conv_StringToName_ReturnValue);
	void DrawBeamsToTargets(class AActor* NewAttachPoint, bool* Res, class FName NewBeamSourceSocket, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item1, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, class AController* CallFunc_GetController_ReturnValue, float CallFunc_GetBeamDamage_Res, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, class FName CallFunc_GetBeamName_BeamName, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class FName CallFunc_GetCompanionTargetingSocket_Socket1, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, const struct FLightBeamInitializationData& K2Node_MakeStruct_LightBeamInitializationData, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveTargetFromBeanList(class AActor* BeamTarget, bool* Res, const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void AddTargetToBeamList(class AActor* NewTarget, bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_DrawBeamsToTargets_Res, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SkeepProd_OnBeamTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void CleanupSkeepProdIO();
	void ExecuteUbergraph_IO_SkeepProd(int32 EntryPoint, bool CallFunc_AddTargetToBeamList_Res, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_RemoveTargetFromBeanList_Res);
};

}


