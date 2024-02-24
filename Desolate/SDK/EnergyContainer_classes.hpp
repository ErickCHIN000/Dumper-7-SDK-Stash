#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x4A9 - 0x460)
// BlueprintGeneratedClass EnergyContainer.EnergyContainer_C
class AEnergyContainer_C : public AGenericHeavyItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>      DynamicMaterials;                                  // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        GlowMax;                                           // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlowMult;                                          // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredGlow;                                       // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDischarged;                                      // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCanBeInstalled;                                   // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGenericEnergyMountDevice_C*           TargetDevice;                                      // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInfiniteEnergy;                                   // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEnergyContainer_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, const struct FS_Selection& CallFunc_GetSelectionInfo_result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanHandleEnergyContainer_Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection_2);
	void GetEnergy(float* Result);
	void IsEmpty(bool* Result, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void GetGlowValue(float* Result, float CallFunc_GetEnergy_Result, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetGlow(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetEnergy_Result, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetEnergy(float NewValue, float CallFunc_FClamp_ReturnValue);
	void Charge(float Amount, bool CallFunc_IsEmpty_Result, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetSelection();
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, float CallFunc_GetGlowValue_Result);
	void On_RepLifetimeData();
	void ReceiveBeginPlay();
	void OnItemDropped();
	void BndEvt__StaticHeavyItemMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__StaticHeavyItemMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnItemLifetimeDataUpdated();
	void OnPickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_EnergyContainer(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, int32 CallFunc_Array_Length_ReturnValue, class AGenericEnergyMountDevice_C* K2Node_DynamicCast_AsGeneric_Energy_Mount_Device, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AGenericEnergyMountDevice_C* K2Node_DynamicCast_AsGeneric_Energy_Mount_Device_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanHandleEnergyContainer_Result, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class AGenericEnergyMountDevice_C* K2Node_DynamicCast_AsGeneric_Energy_Mount_Device_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanHandleEnergyContainer_Result_1, class ASHInventory* K2Node_Event_Inventory, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnDischarged__DelegateSignature();
};

}


