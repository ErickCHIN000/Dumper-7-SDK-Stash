#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x234 - 0x220)
// BlueprintGeneratedClass A_MushroomCompanion_RangedAttack.A_MushroomCompanion_RangedAttack_C
class UA_MushroomCompanion_RangedAttack_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AActor*                                MySelf;                                            // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Accuracy;                                          // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UA_MushroomCompanion_RangedAttack_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void Notify_Projectile_Hold_Begin();
	void Notify_Projectile_Hold_Abort();
	void Notify_Projectile_Hold_End();
	void ExecuteUbergraph_A_MushroomCompanion_RangedAttack(int32 EntryPoint, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling2, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess3, class UTargetingComponent* CallFunc_GetTargetingComponent_ReturnValue, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling3, bool K2Node_DynamicCast_bSuccess4, class AActor* CallFunc_GetBestTargetActor_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess5, class FName CallFunc_GetCompanionTargetingSocket_Socket);
};

}


