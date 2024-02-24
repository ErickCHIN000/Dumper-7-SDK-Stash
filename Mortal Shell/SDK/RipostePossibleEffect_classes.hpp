#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2400 - 0x23E8)
// BlueprintGeneratedClass RipostePossibleEffect.RipostePossibleEffect_C
class ARipostePossibleEffect_C : public AChameleon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x23E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Animate_BlendWeight_9C29E46746CC07BF08ED92B3ED9AD6E0; // 0x23F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Animate__Direction_9C29E46746CC07BF08ED92B3ED9AD6E0; // 0x23F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1684[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Animate;                                           // 0x23F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARipostePossibleEffect_C* GetDefaultObj();

	void Animate__FinishedFunc();
	void Animate__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RipostePossibleEffect(int32 EntryPoint);
};

}


