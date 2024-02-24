#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x250 - 0x240)
// BlueprintGeneratedClass ARand_MushroomCompanion_MeleeRunMix.ARand_MushroomCompanion_MeleeRunMix_C
class UARand_MushroomCompanion_MeleeRunMix_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class AActor*                                MySelf;                                            // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UARand_MushroomCompanion_MeleeRunMix_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_Melee();
	void ExecuteUbergraph_ARand_MushroomCompanion_MeleeRunMix(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, class AActor* K2Node_Event_Actor);
};

}


