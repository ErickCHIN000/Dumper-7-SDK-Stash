#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B8 - 0x2B0)
// WidgetBlueprintGeneratedClass WBP_PartyJoinMessage.WBP_PartyJoinMessage_C
class UWBP_PartyJoinMessage_C : public UMessageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_PartyJoinMessage_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_PartyJoinMessage(int32 EntryPoint);
};

}


