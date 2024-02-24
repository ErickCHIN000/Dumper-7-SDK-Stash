#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3F8 - 0x3E0)
// BlueprintGeneratedClass BP_IcarusWorldSettings.BP_IcarusWorldSettings_C
class ABP_IcarusWorldSettings_C : public AIcarusWorldSettings
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AtmosphereController;                              // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusWorldSettings_C* GetDefaultObj();

	void CreateAssets();
	void CaptureMap();
	void ExecuteUbergraph_BP_IcarusWorldSettings(int32 EntryPoint);
};

}


