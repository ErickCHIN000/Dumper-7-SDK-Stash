#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x508 - 0x4A0)
// BlueprintGeneratedClass SpellActor_Eruption_Self_Base.SpellActor_Eruption_Self_Base_C
class ASpellActor_Eruption_Self_Base_C : public ABasicSpellActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EruptionDamageData;                                // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMod4;                                           // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnableSpellBasicData              InSpellData;                                       // 0x4C8(0x40)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ASpellActor_Eruption_Self_Base_C* GetDefaultObj();

	void DealExplosionDamage(const struct FSpawnableSpellBasicData& NewSpellData, bool Temp_bool_Variable, const struct FHitResult& Temp_struct_Variable, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpawnableSpellBasicData& K2Node_Select_Default);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BeginCleanup();
	void ExecuteUbergraph_SpellActor_Eruption_Self_Base(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


