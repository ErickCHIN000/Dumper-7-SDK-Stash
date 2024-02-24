#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x358 - 0x350)
// BlueprintGeneratedClass BP_GGVehicleController.BP_GGVehicleController_C
class ABP_GGVehicleController_C : public AGGVehicleAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_GGVehicleController_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GGVehicleController(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


