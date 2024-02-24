#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE0 - 0xB8)
// BlueprintGeneratedClass LockPickingComponent.LockPickingComponent_C
class ULockPickingComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         PlayerLockPicking_;                                // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1950[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULockpickUI_C*                         UI;                                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTryingLock;                                      // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1956[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LPDurability;                                      // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULockPickingComponent_C* GetDefaultObj();

	void Svr_Initialise();
	void ExecuteUbergraph_LockPickingComponent(int32 EntryPoint);
};

}


