#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x480 - 0x470)
// BlueprintGeneratedClass ba_aa_emptyhands_00.ba_aa_emptyhands_00_C
class Aba_aa_emptyhands_00_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_emptyhands_00_C* GetDefaultObj();

	void ActivateItem();
	void AlternativeActivateItem();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ba_aa_emptyhands_00(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


