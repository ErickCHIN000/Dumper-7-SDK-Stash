#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7BC - 0x774)
// BlueprintGeneratedClass BP_Light_Electric_Base.BP_Light_Electric_Base_C
class ABP_Light_Electric_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6093[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   ActiveAudio;                                       // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPower;                                          // 0x790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LightEnabled;                                      // 0x791(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         WantsOn;                                           // 0x792(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6098[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_SwitchOn;                                // 0x798(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_SwitchOff;                               // 0x7A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOn;                                        // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOff;                                       // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaterialIndex;                                     // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Light_Electric_Base_C* GetDefaultObj();

	void OnRep_WantsOn();
	void OnRep_HasPower();
	void SetLightActiveState(bool CallFunc_IsValid_ReturnValue);
	void OnRep_LightEnabled(int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Deployable_Interact(class AActor* Interactor, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void EnergyNetworkStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void MULTI_PlaySwitchSound(bool IsSwitchOn);
	void Async_ReInit();
	void ExecuteUbergraph_BP_Light_Electric_Base(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_IsSwitchOn, class UFMODEvent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


