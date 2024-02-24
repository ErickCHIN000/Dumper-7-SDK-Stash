#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x308 - 0x2FD)
// WidgetBlueprintGeneratedClass CF_GrantExperienceDebt.CF_GrantExperienceDebt_C
class UCF_GrantExperienceDebt_C : public UCF_BaseInteger_C
{
public:
	uint8                                        Pad_155B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_GrantExperienceDebt_C* GetDefaultObj();

	void Construct();
	void Execute();
	void ExecuteUbergraph_CF_GrantExperienceDebt(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue);
};

}


