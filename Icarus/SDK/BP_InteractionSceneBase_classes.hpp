#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass BP_InteractionSceneBase.BP_InteractionSceneBase_C
class ABP_InteractionSceneBase_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_InteractionSceneBase_C* GetDefaultObj();

	void GetInteractionBlendSpeed(float* BlendSpeed);
};

}


