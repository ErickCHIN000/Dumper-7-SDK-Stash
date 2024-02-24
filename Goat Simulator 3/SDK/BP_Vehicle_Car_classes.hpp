#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xE70 - 0xE40)
// BlueprintGeneratedClass BP_Vehicle_Car.BP_Vehicle_Car_C
class ABP_Vehicle_Car_C : public AGGVehicle_Car
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Dissolve_Timeline_Alpha_9A683B104D74D3761254D99C4AA98D8C; // 0xE48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Dissolve_Timeline__Direction_9A683B104D74D3761254D99C4AA98D8C; // 0xE4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A77[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Dissolve_Timeline;                                 // 0xE50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EngineDuckingTimeline_EngineSoundDucking_8844DA0C4938C325709239ABF7EFBD8C; // 0xE58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EngineDuckingTimeline__Direction_8844DA0C4938C325709239ABF7EFBD8C; // 0xE5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EngineDuckingTimeline;                             // 0xE60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CarMaterial;                                       // 0xE68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Vehicle_Car_C* GetDefaultObj();

	void EngineDuckingTimeline__FinishedFunc();
	void EngineDuckingTimeline__UpdateFunc();
	void Dissolve_Timeline__FinishedFunc();
	void Dissolve_Timeline__UpdateFunc();
	void ToggleEngineSoundDucking(bool Duck);
	void SetBackToDefaultMats();
	void ExecuteUbergraph_BP_Vehicle_Car(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool K2Node_CustomEvent_Duck, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


