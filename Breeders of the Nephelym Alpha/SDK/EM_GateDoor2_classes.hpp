#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x401 - 0x3D8)
// BlueprintGeneratedClass EM_GateDoor2.EM_GateDoor2_C
class AEM_GateDoor2_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HingeL;                                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HingeR;                                            // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotate;                                            // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEM_GateDoor2_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void OnBlock(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_GateDoor2(int32 EntryPoint, enum class EMoveComponentAction Temp_byte_Variable, enum class EMoveComponentAction Temp_byte_Variable_1, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


