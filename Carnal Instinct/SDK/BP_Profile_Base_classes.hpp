#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass BP_Profile_Base.BP_Profile_Base_C
class ABP_Profile_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FStruct_NPC_TaskList                  Profile;                                           // 0x230(0x12)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_1393[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABP_Profile_Base_C* GetDefaultObj();

	void ExecuteUbergraph_BP_Profile_Base(int32 EntryPoint);
};

}


