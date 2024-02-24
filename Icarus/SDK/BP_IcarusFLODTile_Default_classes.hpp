#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E8 - 0x2E0)
// BlueprintGeneratedClass BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C
class ABP_IcarusFLODTile_Default_C : public AFLODTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_IcarusFLODTile_Default_C* GetDefaultObj();

	void ToggleDebugInstancesCurrent(bool ShowAdvanced, bool NewDebugInstancesCurrent, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void FLODTileDebugInstancesCurrent();
	void FLODTileDebugStats();
	void FLODTileDebugInstancesCurrentAdv();
	void FLODTileDebugDestroyAllInstances(int32 RecordIndex, bool Restore);
	void ExecuteUbergraph_BP_IcarusFLODTile_Default(int32 EntryPoint, int32 K2Node_CustomEvent_RecordIndex, bool K2Node_CustomEvent_Restore, bool CallFunc_Not_PreBool_ReturnValue);
};

}


