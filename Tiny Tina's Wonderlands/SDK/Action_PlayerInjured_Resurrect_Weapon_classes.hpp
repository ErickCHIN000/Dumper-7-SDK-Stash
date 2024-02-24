#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass Action_PlayerInjured_Resurrect_Weapon.Action_PlayerInjured_Resurrect_Weapon_C
class UAction_PlayerInjured_Resurrect_Weapon_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AOakPlayerController*                  PlayerController;                                  // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerActor;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_DeathTunnel;                                 // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RespawnPortal;                               // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_DeathTunnelSplitscreen;                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_PlayerInjured_Resurrect_Weapon_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBeginBringUpWeapon(class AActor* Actor);
	void RepawnPortal();
	void ExecuteUbergraph_Action_PlayerInjured_Resurrect_Weapon(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* K2Node_Event_Actor2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class UFightForYourLifeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScreenParticleManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, bool Temp_bool_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class UScreenParticleManagerComponent* CallFunc_GetComponentByClass_ReturnValue3, class AActor* K2Node_Event_Actor, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue4, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsSplitScreen_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
};

}


