#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x401 - 0x348)
// BlueprintGeneratedClass BP_FlammableFISM.BP_FlammableFISM_C
class UBP_FlammableFISM_C : public UFlammableFISM
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, class UNiagaraComponent*>        FoliageEmbersNiagaraSystems;                       // 0x350(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<int32, class ABP_FlammableLight_C*>     NewVar_0;                                          // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFlammableInstanceFLOD*                Instance;                                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FireInstanceShadow_C*              BP_FireInstanceShadowRef;                          // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyPlacedDecal;                                // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_FlammableFISM_C* GetDefaultObj();

	void CombustedEnter(class UFlammableInstanceFLOD* Instance);
	void CombustingExit(class UFlammableInstanceFLOD* Instance, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CombustingEnter(class UFlammableInstanceFLOD* Instance, const struct FBoxSphereBounds& CallFunc_GetFlammableWorldBounds_ReturnValue, class UNiagaraComponent* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void OnReplacedInstanceCombusted(const struct FFLODInstanceID& NewInstance, class UFlammableInstanceFLOD* Instance);
	void TryReplaceInstanceCombusted(class UFlammableInstanceFLOD* Instance, class UFLODRecord* BurntRecord, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_IsServer_ReturnValue, class UFLODRecord* CallFunc_GetRegisteredRecord_ReturnValue_1, class UFLODRecord* CallFunc_FindReplacementBurntRecord_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SwapRecordInstance_ReturnValue, const struct FFLODInstanceID& K2Node_MakeStruct_FLODInstanceID);
	void OnFlammableInstanceState_Combusting_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceState_Combusted_Enter(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceState_Combusting_Exit(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFlammableInstanceDetached(class UFlammableInstance* Instance);
	void OnFlammableInstanceAttached(class UFlammableInstance* Instance);
	void ExecuteUbergraph_BP_FlammableFISM(int32 EntryPoint, class UFlammableInstance* K2Node_CustomEvent_Instance_2, class UFlammableState* K2Node_CustomEvent_State_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD, bool K2Node_DynamicCast_bSuccess, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFlammableInstance* K2Node_CustomEvent_Instance, class UFlammableState* K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFlammableInstanceFLOD* K2Node_DynamicCast_AsFlammable_Instance_FLOD_2, bool K2Node_DynamicCast_bSuccess_2, class UFlammableInstance* K2Node_Event_Instance_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, class UFlammableInstance* K2Node_Event_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_2, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_3);
};

}


