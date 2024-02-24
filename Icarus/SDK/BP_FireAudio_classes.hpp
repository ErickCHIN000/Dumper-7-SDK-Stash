#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x241 - 0x220)
// BlueprintGeneratedClass BP_FireAudio.BP_FireAudio_C
class ABP_FireAudio_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioContextComponent*                AudioContext;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiPointAudioEmitter*               MultiPointAudioEmitter;                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent;                                         // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FireAudio_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void AddFlammableInstance(class UFlammableInstance* Instance);
	void AddNode(class UFlammableInstance* Instance, class UFlammableState* State);
	void OnFireInstanceDestroyed();
	void OnFlammableTransferredAway(class UFlammableInstance* Instance);
	void OnFlammableExtinguished(class UFlammableInstance* Instance, class UFlammableState* State);
	void RemoveNode(class UFlammableInstance* Instance);
	void DelayedDestroy();
	void ExecuteUbergraph_BP_FireAudio(int32 EntryPoint, class UFMODAudioComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFlammableInstance* K2Node_CustomEvent_Instance_4, bool CallFunc_IsCurrentState_ReturnValue, class UFlammableState* CallFunc_GetFlammableState_ReturnValue, class UFlammableInstance* K2Node_CustomEvent_Instance_3, class UFlammableState* K2Node_CustomEvent_State_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_1, class UFlammableState* CallFunc_GetFlammableState_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UFlammableInstance* K2Node_CustomEvent_Instance_2, class UFlammableInstance* K2Node_CustomEvent_Instance_1, class UFlammableState* K2Node_CustomEvent_State, bool Temp_bool_IsClosed_Variable, class UFlammableInstance* K2Node_CustomEvent_Instance, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


