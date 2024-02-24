#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x258 - 0x250)
// BlueprintGeneratedClass BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C
class ABP_PhysConstraint_CharGrab_C : public APhysicsConstraintActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PhysConstraint_CharGrab_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_PhysConstraint_CharGrab(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds);
};

}


