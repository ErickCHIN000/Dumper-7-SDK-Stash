#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_RandomizedObject.BPI_RandomizedObject_C
class IBPI_RandomizedObject_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_RandomizedObject_C* GetDefaultObj();

	void AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade);
	void ReRandomizeEnemy(int32 NewSeed, float Delay);
	void AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void SetObjectAsTaken();
	void SetPillarType(enum class Enum_PillarType Type);
	void RemoveObject();
	void SetObjectMainChance_(float Rune_Chance, float Item_Chance);
	void InitiliazeSeed(int32 SeedID, int32 InitialSeed);
};

}


