#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x880 - 0x874)
// BlueprintGeneratedClass BP_Gravestone_MIA.BP_Gravestone_MIA_C
class ABP_Gravestone_MIA_C : public ABP_Gravestone_C
{
public:
	uint8                                        Pad_1BC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x878(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Gravestone_MIA_C* GetDefaultObj();

	void HandleAssignedPlayer();
	void ExecuteUbergraph_BP_Gravestone_MIA(int32 EntryPoint, class UInventory* CallFunc_GetGravestoneInventory_Inventory, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


