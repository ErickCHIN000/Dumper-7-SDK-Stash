#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x300 - 0x2E8)
// BlueprintGeneratedClass A_MushroomCompanion_LeapAttack.A_MushroomCompanion_LeapAttack_C
class UA_MushroomCompanion_LeapAttack_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(Transient, DuplicateTransient)
	class AActor*                                MySelf;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       VFX;                                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UA_MushroomCompanion_LeapAttack_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_Melee();
	void ExecuteUbergraph_A_MushroomCompanion_LeapAttack(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue);
};

}


