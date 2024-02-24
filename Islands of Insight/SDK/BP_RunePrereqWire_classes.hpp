#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x290 - 0x248)
// BlueprintGeneratedClass BP_RunePrereqWire.BP_RunePrereqWire_C
class ABP_RunePrereqWire_C : public ARunePrereqWire
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SolveWire_Timeline_NewTrack_0_7B8F42104A8F3F69400AA8A8812FF69F; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SolveWire_Timeline__Direction_7B8F42104A8F3F69400AA8A8812FF69F; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SolveWire_Timeline;                                // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomValue;                                       // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OriginalColour;                                    // 0x264(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SolvedColour;                                      // 0x274(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Material;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RunePrereqWire_C* GetDefaultObj();

	void UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
	void SolveWire_Timeline__FinishedFunc();
	void SolveWire_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BP_ActivateWire();
	void ExecuteUbergraph_BP_RunePrereqWire(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
};

}


