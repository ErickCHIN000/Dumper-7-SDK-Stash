#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x288 - 0x280)
// BlueprintGeneratedClass Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C
class UAction_Rogue_FromTheShadows_Start_Base_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Rogue_FromTheShadows_Start_Base_C* GetDefaultObj();

	void FromTheShadows_VFX_Start();
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_Rogue_FromTheShadows_C> K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_StartStealth_Res, class AActor* CallFunc_K2_GetActor_ReturnValue2, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
};

}


