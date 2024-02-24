#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A8 - 0x1A0)
// BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C
class UBP_DevPerks_C : public UOakDeveloperPerks
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DevPerks_C* GetDefaultObj();

	void UnlimitedAmmo();
	void UnlockAllCustomizations();
	void KillEnemies();
	void SpawnAwesomeItems(TArray<class UItemPoolData*>& K2Node_MakeArray_Array, TArray<class UItemPoolData*>& K2Node_MakeArray_Array1, TArray<class UItemPoolData*>& K2Node_MakeArray_Array2);
	void GiveGoldenKeys();
	void GiveEridium();
	void GiveCash();
	void GiveLevels();
	void OnDeveloperPerkActivated(uint8 Perk);
	void ExecuteUbergraph_BP_DevPerks(int32 EntryPoint, uint8 K2Node_Event_Perk, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


