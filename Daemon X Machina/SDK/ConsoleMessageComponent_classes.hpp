#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x128 - 0x120)
// BlueprintGeneratedClass ConsoleMessageComponent.ConsoleMessageComponent_C
class UConsoleMessageComponent_C : public UTTLConsoleMessageComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UConsoleMessageComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_ConsoleMessageComponent(int32 EntryPoint, class UUserWidget* CallFunc_Create_ReturnValue, class UDem_talk_top06_C* K2Node_DynamicCast_AsDem_Talk_Top_06, bool K2Node_DynamicCast_bSuccess);
};

}


