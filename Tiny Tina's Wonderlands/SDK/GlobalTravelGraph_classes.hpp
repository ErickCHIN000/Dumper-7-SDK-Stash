#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass GlobalTravelGraph.GlobalTravelGraph_C
class UGlobalTravelGraph_C : public UOakGlobalTravelGraph
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGlobalTravelGraph_C* GetDefaultObj();

	void ExecuteUbergraph_GlobalTravelGraph(int32 EntryPoint);
};

}


