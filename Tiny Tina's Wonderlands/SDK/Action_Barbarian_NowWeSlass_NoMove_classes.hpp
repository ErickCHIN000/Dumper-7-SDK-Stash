#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// BlueprintGeneratedClass Action_Barbarian_NowWeSlass_NoMove.Action_Barbarian_NowWeSlass_NoMove_C
class UAction_Barbarian_NowWeSlass_NoMove_C : public UAction_Barbarian_NowWeSlass_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub_0;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TrailFX_0;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TrailFX1st_0;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Barbarian_NowWeSlass_NoMove_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Barbarian_NowWeSlass_NoMove(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}


