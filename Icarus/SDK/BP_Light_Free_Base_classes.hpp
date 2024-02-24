#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x7C5 - 0x774)
// BlueprintGeneratedClass BP_Light_Free_Base.BP_Light_Free_Base_C
class ABP_Light_Free_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_238B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   ActiveAudio;                                       // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Niagara;                                     // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsOn;                                           // 0x798(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LightsEnabled;                                     // 0x799(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_23A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_SwitchOn;                                // 0x7A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_SwitchOff;                               // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOn;                                        // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOff;                                       // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaterialIndex;                                     // 0x7C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableSelfShadow;                                 // 0x7C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Light_Free_Base_C* GetDefaultObj();

	void OnRep_WantsOn();
	void OnRep_LightsEnabled(bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Deployable_Interact(class AActor* Interactor, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void MULTI_PlaySwitchSound(bool IsSwitchOn);
	void ASync_Reinit();
	void ExecuteUbergraph_BP_Light_Free_Base(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool K2Node_CustomEvent_IsSwitchOn, class UFMODEvent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
};

}


