#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x788 - 0x774)
// BlueprintGeneratedClass BP_Animal_Bed.BP_Animal_Bed_C
class ABP_Animal_Bed_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6879[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGFurComponent*                        GFur;                                              // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Animal_Bed_C* GetDefaultObj();

	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Animal_Bed(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
};

}


