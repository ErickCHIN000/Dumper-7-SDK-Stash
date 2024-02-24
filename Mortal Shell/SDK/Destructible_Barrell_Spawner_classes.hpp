#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass Destructible_Barrell_Spawner.Destructible_Barrell_Spawner_C
class ADestructible_Barrell_Spawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                 RadialForce;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPlayedSound_;                                   // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1833[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            OnBreakSound;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADestructible_Barrell_Spawner_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Destructible_Barrell_Spawner(int32 EntryPoint);
};

}


