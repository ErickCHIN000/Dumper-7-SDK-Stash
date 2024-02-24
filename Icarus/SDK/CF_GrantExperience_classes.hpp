#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_GrantExperience.CF_GrantExperience_C
class UCF_GrantExperience_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_1C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GrantExperience_C* GetDefaultObj();

	void Construct();
	void Execute();
	void ExecuteUbergraph_CF_GrantExperience(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue);
};

}


