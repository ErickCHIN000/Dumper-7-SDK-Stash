#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x7A3 - 0x774)
// BlueprintGeneratedClass BP_Heater_Large.BP_Heater_Large_C
class ABP_Heater_Large_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_1D55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                   RectLight;                                         // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   ActiveAudio;                                       // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsOn;                                           // 0x7A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasPower;                                          // 0x7A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DeviceActive;                                      // 0x7A2(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Heater_Large_C* GetDefaultObj();

	void OnRep_DeviceActive(enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void EnergyNetworkStateUpdate(bool Active, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Heater_Large(int32 EntryPoint);
};

}


