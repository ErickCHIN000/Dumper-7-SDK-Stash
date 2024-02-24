#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x12E0 - 0x12D1)
// BlueprintGeneratedClass BP_GGNPC_Environment.BP_GGNPC_Environment_C
class ABP_GGNPC_Environment_C : public ABP_GGNPC_Humanoid_C
{
public:
	uint8                                        Pad_CF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_GGNPC_Environment_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnRep_NPCSpawner();
	void ExecuteUbergraph_BP_GGNPC_Environment(int32 EntryPoint, class AGGNPCSpawner* CallFunc_GetNPCSpawner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGNPCSpawner_Environment* K2Node_DynamicCast_AsGGNPCSpawner_Environment, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FGGRandomPlayerSequenceEntry& CallFunc_Array_Get_Item, TArray<struct FGGRandomPlayerSequenceEntry>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


