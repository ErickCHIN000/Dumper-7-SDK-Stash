#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x3E9 - 0x3D8)
// BlueprintGeneratedClass EM_GateDoor1.EM_GateDoor1_C
class AEM_GateDoor1_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotate;                                            // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEM_GateDoor1_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void OnBlock(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_GateDoor1(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
};

}


