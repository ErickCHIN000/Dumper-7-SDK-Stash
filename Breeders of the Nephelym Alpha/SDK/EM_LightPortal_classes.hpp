#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x428 - 0x3D8)
// BlueprintGeneratedClass EM_LightPortal.EM_LightPortal_C
class AEM_LightPortal_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C27[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AEM_LightPortal_C*                     Target;                                            // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BlockMessage;                                      // 0x410(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AEM_LightPortal_C* GetDefaultObj();

	void GetEmergeTransform(struct FTransform* Transform, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	void OnTrigger(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_LightPortal(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetEmergeTransform_Transform, bool K2Node_Event_bFromActivation, class ASexyBreederCharacter* CallFunc_GetBreeder_ReturnValue, bool CallFunc_CheckGameFlags_ReturnValue);
};

}


