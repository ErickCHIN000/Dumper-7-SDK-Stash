#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x7E0 - 0x774)
// BlueprintGeneratedClass BP_SurveyTransmitter.BP_SurveyTransmitter_C
class ABP_SurveyTransmitter_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_374F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource1;                        // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGenericAITargetComponent*             GenericAITarget;                                   // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TransmitLaser;                                     // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_SendData;                                    // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ValidRadarsFound;                                  // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3773[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGenericAITargetComponent*             GeneratedTargetComponent;                          // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeviceActive;                                      // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_377A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CheckForRadarsTimer;                               // 0x7C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AbleToTransmit;                                    // 0x7D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3787[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEventSwitchOn;                                 // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SurveyTransmitter_C* GetDefaultObj();

	void OnRep_AbleToTransmit(bool Temp_bool_Variable, enum class ESurveyTransmitFMODParam Temp_byte_Variable, enum class ESurveyTransmitFMODParam Temp_byte_Variable_1, enum class ESurveyTransmitFMODParam K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_DeviceActive(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
	void Deployable_Interact(class AActor* Interactor, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void CheckForRadars();
	void AddAITarget();
	void RemoveAITarget();
	void TransmittingComplete();
	void ExecuteUbergraph_BP_SurveyTransmitter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class ABP_SurveyRadar_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SurveyRadar_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UGenericAITargetComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTransform& Temp_struct_Variable, const struct FAIRelationshipsRowHandle& Temp_struct_Variable_1, class UGenericAITargetComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, TArray<class ABP_SurveyRadar_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_SurveyRadar_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


