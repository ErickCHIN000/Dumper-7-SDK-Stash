#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x418 - 0x3FC)
// BlueprintGeneratedClass LightBrigandSpawner_Guitar.LightBrigandSpawner_Guitar_C
class ALightBrigandSpawner_Guitar_C : public ALightBrigandSpawner_C
{
public:
	uint8                                        Pad_20DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Use_Custom_Attenuation;                            // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     Custom_Attuenation;                                // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightBrigandSpawner_Guitar_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LightBrigandSpawner_Guitar(int32 EntryPoint);
};

}


