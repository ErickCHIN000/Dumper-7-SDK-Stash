#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8B0 - 0x8A8)
// BlueprintGeneratedClass ControlledMoved_GunMage_PolymorphEnd.ControlledMoved_GunMage_PolymorphEnd_C
class UControlledMoved_GunMage_PolymorphEnd_C : public UOakControlledMove
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UControlledMoved_GunMage_PolymorphEnd_C* GetDefaultObj();

	void OnServerStop(bool bInterrupted);
	void ExecuteUbergraph_ControlledMoved_GunMage_PolymorphEnd(int32 EntryPoint, bool K2Node_Event_bInterrupted);
};

}


