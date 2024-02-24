#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x328 - 0x312)
// BlueprintGeneratedClass BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C
class ABPUsableUpgradeUnlock_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_1E1E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  UpgradeToUnlock;                                   // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPUsableUpgradeUnlock_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue);
	void ReceiveBeginPlay();
	void UpdateState();
	void ExecuteUbergraph_BPUsableUpgradeUnlock(int32 EntryPoint, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_Not_PreBool_ReturnValue);
};

}


