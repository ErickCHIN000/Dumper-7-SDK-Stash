#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0x5C6 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C
class ABP_SkeletalItem_LightBase_C : public ASkeletalItem
{
public:
	uint8                                        Pad_3347[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       ActiveComponents;                                  // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LightActive;                                       // 0x590(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Underwater;                                        // 0x591(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3359[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnderwaterDepth;                                   // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLightSwitchAction;                               // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LightStateChanged;                                 // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UsesFuel;                                          // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FuelConsumptionAmount;                             // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FuelConsumptionTickRate;                           // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELightSlotAttachPoint             LightSlotAttachPoint;                              // 0x5C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreWater;                                       // 0x5C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_LightBase_C* GetDefaultObj();

	void GetLightSlotAttachPoint(enum class ELightSlotAttachPoint* AttachPoint);
	void SetLightAudioState(bool IsLit);
	void CanLight(bool* CanLight);
	void ConsumeFuel(int32 ConsumeAmount, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStoredUnits_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FFillableData& CallFunc_GetFillableData_OutData, bool CallFunc_GetFillableData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void HasFuel(bool* Fuel, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStoredUnits_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_LightActive();
	void OnRep_Underwater();
	void GetLightActive(bool* LightActive, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void IsLit(bool* Lit, bool CallFunc_GetLightActive_LightActive, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void LightUpdated(bool Lit, bool DisableShadows, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLit_Lit, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateWaterState(bool Floating, bool OldUnderWater, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, class UIcarusPlayerMovementComponent* K2Node_DynamicCast_AsIcarus_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentWaterDepth_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue_2);
	void SetLightActive(bool Active, bool IsActive, bool CallFunc_CanLight_CanLight, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UActionableComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3);
	void PrimaryFireToggle(bool CallFunc_HasFuel_Fuel, bool CallFunc_GetLightActive_LightActive, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void OnFloatableUpdated(bool Floating);
	void ReceiveTick(float DeltaSeconds);
	void SetItemVisible(bool bVisible);
	void FillableUnitsUpdated();
	void FuelTick();
	void ExecuteUbergraph_BP_SkeletalItem_LightBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_Floating, enum class EValid CallFunc_GetTrait_Paths, class UFloatableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemDynamicData& CallFunc_GetItemProperty_DynamicData, enum class EDataValid CallFunc_GetItemProperty_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_Event_bVisible, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsLit_Lit, bool CallFunc_BooleanAND_ReturnValue, bool Temp_wildcard_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasFuel_Fuel, enum class EValid CallFunc_GetTrait_Paths_1, class UFillableComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsLit_Lit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsLit_Lit_2, TArray<class ULightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void LightStateChanged__DelegateSignature(bool ActiveState);
	void OnLightSwitchAction__DelegateSignature();
};

}


