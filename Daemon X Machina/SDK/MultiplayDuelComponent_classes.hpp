#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x140 - 0x138)
// BlueprintGeneratedClass MultiplayDuelComponent.MultiplayDuelComponent_C
class UMultiplayDuelComponent_C : public UTTLMultiplayDuelControlComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMultiplayDuelComponent_C* GetDefaultObj();

	void OnStartDuelExtendTimeBP();
	void ExecuteUbergraph_MultiplayDuelComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess);
};

}


