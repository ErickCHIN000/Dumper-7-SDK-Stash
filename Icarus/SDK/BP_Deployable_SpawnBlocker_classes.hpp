#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x78D - 0x774)
// BlueprintGeneratedClass BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C
class ABP_Deployable_SpawnBlocker_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_68B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPQC_SearchArea_C*                    BPQC_SearchArea;                                   // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnBlockerRadius;                                // 0x788(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnBlockerActive;                                // 0x78C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Deployable_SpawnBlocker_C* GetDefaultObj();

	int32 GetSpawnBlockerEffectiveRadius(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default);
	void GetWidgetClass(class UClass** Widget);
	void OnRep_SpawnBlockerRadius();
	void OnRep_SpawnBlockerActive();
	void UpdateSpawnBlockerEffects();
	void UpdateRadius(int32 SpawnRadius);
	void DeployableTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Deployable_SpawnBlocker(int32 EntryPoint, bool CallFunc_IsWithEditor_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


