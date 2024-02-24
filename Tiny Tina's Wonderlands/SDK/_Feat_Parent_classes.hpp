#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x186 (0x440 - 0x2BA)
// BlueprintGeneratedClass _Feat_Parent._Feat_Parent_C
class U_Feat_Parent_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2DDD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  BPCharPlayer;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       EQS_FindAllPlayerCompanions;                       // 0x2D0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EQS_FindAllPlayerCharacters;                       // 0x388(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class U_Feat_Parent_C* GetDefaultObj();

	void FindAllCompanions(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void FindAllPlayerCharacters(TArray<class AActor*>* Res, const TArray<class AActor*>& LocalList, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnActivated();
	void ExecuteUbergraph__Feat_Parent(int32 EntryPoint);
};

}


