#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0x1BC8 - 0x1B39)
// BlueprintGeneratedClass TutorialScout.TutorialScout_C
class ATutorialScout_C : public AScout_C
{
public:
	uint8                                        Pad_1CEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cylinder_0;                                        // 0x1B48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_0_ReturnVal_C1CB01B94F756F24102B37B5E7D9DA56; // 0x1B50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2_0__Direction_C1CB01B94F756F24102B37B5E7D9DA56; // 0x1B54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2_0;                                      // 0x1B58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OpacityTime_0_ReturnVal_8268C25044AE6AD67884FD9864E206BB; // 0x1B60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpacityTime_0__Direction_8268C25044AE6AD67884FD9864E206BB; // 0x1B64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpacityTime_0;                                     // 0x1B68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraStartLocation_0;                             // 0x1B70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MeshStartRelLocation_0;                            // 0x1B7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraHeadDiff_0;                                  // 0x1B88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       NewVar_1_0_0;                                      // 0x1B98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized_0;                                     // 0x1BA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              WaterDropsPP_0;                                    // 0x1BA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ColdScreenPP_0;                                    // 0x1BB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FrostScreenPP_0;                                   // 0x1BB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              StressScreenPP_0;                                  // 0x1BC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATutorialScout_C* GetDefaultObj();

	bool RemoveBlendable(class UObject* Obj, bool CallFunc_RemoveBlendable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	bool AddBlendable(class UObject* Obj, bool CallFunc_AddBlendable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OpacityTime_0__FinishedFunc();
	void OpacityTime_0__UpdateFunc();
	void Timeline_2_0__FinishedFunc();
	void Timeline_2_0__UpdateFunc();
	void PlayTestPPOpacityOn(class UObject* Obj);
	void PlayTestPPOpacityOff(class UObject* Obj);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TutorialScout(int32 EntryPoint, class UObject* K2Node_CustomEvent_Obj_1, class UObject* K2Node_CustomEvent_Obj, class UMaterialInstanceDynamic* CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetOrAddBlendableMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float K2Node_Event_DeltaSeconds);
};

}


