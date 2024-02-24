#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3F1 - 0x3D1)
// BlueprintGeneratedClass Buildable_Lamp.Buildable_Lamp_C
class ABuildable_Lamp_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_26EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LightOn;                                           // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_Lamp_C* GetDefaultObj();

	void GetPickupName(class FText* Result);
	void ReceiveBeginPlay();
	void OnInteractBuildable(class AActor* Actor);
	void LightCallback(bool NewValue);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_Lamp(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_Actor, bool K2Node_CustomEvent_NewValue, bool CallFunc_GetBoolCVar_ReturnValue, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool K2Node_SwitchInteger_CmpSuccess);
};

}

