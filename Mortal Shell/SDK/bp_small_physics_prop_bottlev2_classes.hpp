#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x280 - 0x274)
// BlueprintGeneratedClass bp_small_physics_prop_bottlev2.bp_small_physics_prop_bottlev2_C
class Abp_small_physics_prop_bottlev2_C : public APhysics_prop_C
{
public:
	uint8                                        Pad_247B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class Abp_small_physics_prop_bottlev2_C* GetDefaultObj();

	void ModifyCollisionOnLaunch(float Duration);
	void ExecuteUbergraph_bp_small_physics_prop_bottlev2(int32 EntryPoint, float K2Node_CustomEvent_Duration);
};

}


