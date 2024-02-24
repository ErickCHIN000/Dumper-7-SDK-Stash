#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x378 - 0x359)
// BlueprintGeneratedClass Challenge_Crew_AncientObelisk.Challenge_Crew_AncientObelisk_C
class UChallenge_Crew_AncientObelisk_C : public UChallenge_Crew_Daffodil_C
{
public:
	uint8                                        Pad_21ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FDataTableRowHandle                   MailRow;                                           // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UChallenge_Crew_AncientObelisk_C* GetDefaultObj();

	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_AncientObelisk(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
};

}


