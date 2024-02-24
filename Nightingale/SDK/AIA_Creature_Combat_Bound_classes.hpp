#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_Bound.AIA_Creature_Combat_Bound_C
class UAIA_Creature_Combat_Bound_C : public UAIA_Creature_Combat_C
{
public:
	uint8                                        Pad_5AE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Bound_C* GetDefaultObj();

	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Combat_Bound(int32 EntryPoint, class AActor* K2Node_Event_Target);
};

}


