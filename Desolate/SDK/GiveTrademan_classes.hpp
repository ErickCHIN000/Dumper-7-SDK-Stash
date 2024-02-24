#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x150 - 0x142)
// BlueprintGeneratedClass GiveTrademan.GiveTrademan_C
class UGiveTrademan_C : public USendItems_C
{
public:
	uint8                                        Pad_1268[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGiveTrademan_C* GetDefaultObj();

	void OnActorUsed_Event_0(class ASHPlayerCharacter* Sender, class AActor* InteractedActor, bool IsHoldUsed);
	void ExecuteUbergraph_GiveTrademan(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Sender, class AActor* K2Node_Event_InteractedActor, bool K2Node_Event_IsHoldUsed, bool CallFunc_Not_PreBool_ReturnValue);
};

}


