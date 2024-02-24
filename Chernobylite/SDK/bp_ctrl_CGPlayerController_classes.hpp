#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x580 - 0x578)
// BlueprintGeneratedClass bp_ctrl_CGPlayerController.bp_ctrl_CGPlayerController_C
class Abp_ctrl_CGPlayerController_C : public ACGPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class Abp_ctrl_CGPlayerController_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_ctrl_CGPlayerController(int32 EntryPoint);
};

}


