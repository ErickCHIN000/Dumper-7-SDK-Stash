#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x798 - 0x78A)
// BlueprintGeneratedClass BP_Refrigerator.BP_Refrigerator_C
class ABP_Refrigerator_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_6741[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Refrigerator_C* GetDefaultObj();

	void EnergyNetworkStateUpdate(bool Active, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue);
	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void ExecuteUbergraph_BP_Refrigerator(int32 EntryPoint);
};

}


