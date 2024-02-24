#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0xA48 - 0xA3A)
// BlueprintGeneratedClass BP_Structure_Functional_Container_SelfDestruct.BP_Structure_Functional_Container_SelfDestruct_C
class ABP_Structure_Functional_Container_SelfDestruct_C : public ABP_Structure_Functional_Container_C
{
public:
	uint8                                        Pad_2DC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_Container_SelfDestruct_C* GetDefaultObj();

	void SelfDestructIfEmpty(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Structure_Functional_Container_SelfDestruct(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


