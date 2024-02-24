#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x66D - 0x652)
// BlueprintGeneratedClass SpellActor_Meteor_Mod_05.SpellActor_Meteor_Mod_05_C
class ASpellActor_Meteor_Mod_05_C : public ASpellActor_Meteor_Base_C
{
public:
	uint8                                        Pad_1C56[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(Transient, DuplicateTransient)
	class USingularityComponent*                 Singularity;                                       // 0x660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableSingularity;                                // 0x66C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ASpellActor_Meteor_Mod_05_C* GetDefaultObj();

	void OnRep_bEnableSingularity();
	void UserConstructionScript();
	void ContinueMeteorSpawn();
	void BeginCleanup();
	void Mod05Cleanup();
	void TrySpawnMeteor();
	void TrySpawnPortal();
	void DoSingularity();
	void ExecuteUbergraph_SpellActor_Meteor_Mod_05(int32 EntryPoint, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue);
};

}


