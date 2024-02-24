#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xA35 - 0x9F0)
// BlueprintGeneratedClass BP_WreckedVehicle_Base.BP_WreckedVehicle_Base_C
class ABP_WreckedVehicle_Base_C : public ABP_PActor_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              SmokePS;                                           // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_EC4480444B91D3792255A097F5D85EDC; // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_EC4480444B91D3792255A097F5D85EDC; // 0xA0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_801[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0xA10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          DebrisSockets;                                     // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                Debris;                                            // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSmokeIsActive;                                 // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPlaySmokeFX;                                 // 0xA34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_WreckedVehicle_Base_C* GetDefaultObj();

	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void StaticMeshUpdated();
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void DisableSmokeFX();
	void ExecuteUbergraph_BP_WreckedVehicle_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_VLerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class ABP_PActor_DebrisShard_Base_C* K2Node_DynamicCast_AsBP_PActor_Debris_Shard_Base, bool K2Node_DynamicCast_bSuccess, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


