#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x360 - 0x350)
// BlueprintGeneratedClass Effects_Temperature_Chills.Effects_Temperature_Chills_C
class AEffects_Temperature_Chills_C : public ASHEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEffects_Temperature_Chills_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Effects_Temperature_Chills(int32 EntryPoint);
};

}

