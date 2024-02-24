#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x360 - 0x350)
// BlueprintGeneratedClass Effects_Anomaly_Inferno.Effects_Anomaly_Inferno_C
class AEffects_Anomaly_Inferno_C : public ASHEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEffects_Anomaly_Inferno_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Effects_Anomaly_Inferno(int32 EntryPoint);
};

}


