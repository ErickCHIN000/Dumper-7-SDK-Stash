#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xE80 - 0xE70)
// BlueprintGeneratedClass BP_Vehicle_SUV.BP_Vehicle_SUV_C
class ABP_Vehicle_SUV_C : public ABP_Vehicle_Car_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ExhaustParticle_2;                                 // 0xE78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Vehicle_SUV_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void EngineUpdate(bool IsOn);
	void ExecuteUbergraph_BP_Vehicle_SUV(int32 EntryPoint, bool K2Node_Event_IsOn);
};

}


