#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x2E0 - 0x228)
// BlueprintGeneratedClass Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C
class UAction_GroundSlam_High_Shared_Exit_C : public UAction_GroundSlam_High_Exit_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	TMap<class UClass*, class UParticleSystem*>  GroundSlam_FX;                                     // 0x230(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                Player_Actor;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  Player_BPChar;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UParticleSystem*>  GroundSlam_FX_3rd;                                 // 0x290(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAction_GroundSlam_High_Shared_Exit_C* GetDefaultObj();

	void OnBeginBringUpWeapon(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void PlayVFX();
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_GroundSlam_High_Shared_Exit(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* K2Node_Event_Actor2, class UParticleSystem* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


