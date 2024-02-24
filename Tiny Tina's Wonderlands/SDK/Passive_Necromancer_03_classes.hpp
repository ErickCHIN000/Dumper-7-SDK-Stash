#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x210 - 0x200)
// BlueprintGeneratedClass Passive_Necromancer_03.Passive_Necromancer_03_C
class UPassive_Necromancer_03_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	class UOakGameInstance*                      GameInstance;                                      // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_03_C* GetDefaultObj();

	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, class AActor* CallFunc_GetAbilityOwner_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTotalCompanionsAndSummonedUnits_Res, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnActivated();
	void ExecuteUbergraph_Passive_Necromancer_03(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


