#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x7C8 - 0x774)
// BlueprintGeneratedClass BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C
class ABP_BasicOxiteDissolver_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Balloon;                                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Active_Audio;                                 // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresUpdate;                                    // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6965[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UnitsToTransfer;                                   // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            GeneralInventory;                                  // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FillScale;                                         // 0x7A8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        StoredUnits;                                       // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumStoredUnits;                                // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_696A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            ConsumeOxygenSound;                                // 0x7B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ActiveSound;                                       // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BasicOxiteDissolver_C* GetDefaultObj();

	void GetWidgetClass(class UClass** Widget);
	void GeneratorStateUpdate(bool Active);
	void Update_FmodParameters(float CallFunc_MapRangeClamped_ReturnValue);
	void Deployable_Pickup(class AActor* Instigator, bool* PickedUp, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, bool CallFunc_Deployable_Pickup_PickedUp, bool K2Node_SwitchEnum_CmpSuccess);
	void Leak(int32 LeakAmount, enum class EValid CallFunc_GetTrait_Paths, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void OnRep_FillScale(const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetOxygen_ReturnValue, int32 CallFunc_GetMaxOxygen_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_ActivateGenerator_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void FillableUnitsUpdated();
	void OnInventoryItemAdded(class UInventory* Inventory, int32 Location);
	void Multi_OnConsumeOxygen(class AIcarusPlayerCharacter* Instigator);
	void ReceiveBeginPlay();
	void DeployableTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BasicOxiteDissolver(int32 EntryPoint, float K2Node_Event_DeltaSeconds, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_2, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetTrait_Paths_3, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, TArray<class UInventory*>& K2Node_MakeArray_Array, class AIcarusPlayerCharacter* K2Node_CustomEvent_Instigator, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_4, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_4, enum class EValid CallFunc_GetTrait_Paths_5, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue_5, class UInventory* CallFunc_GetInventory_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFillableData& CallFunc_GetFillableData_OutData, bool CallFunc_GetFillableData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_5, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2);
};

}


