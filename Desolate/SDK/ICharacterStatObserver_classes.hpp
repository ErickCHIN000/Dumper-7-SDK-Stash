#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ICharacterStatObserver.ICharacterStatObserver_C
class IICharacterStatObserver_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IICharacterStatObserver_C* GetDefaultObj();

	void GetSkills(class USHPlayerStat_Skills** Skills);
	void GetArmorResist(float* AnomalyLessMod, float* PsyLessMod, float* TempLessMod);
	void GetSkillTree(class USHSkillTreeComponent** SkillTree);
	void GetIsPoisoned(bool* Result);
	void GetNotesJournal(class USHJournalComponent** Return);
	void GetCapacity(class USHPlayerStat_CarryingCapacity** Result);
	void GetQuestDiary(class USHQuestDiaryComponent** Return);
	void GetHasDisease(bool* Result);
	void GetHasTrauma(bool* Result);
	void GetIsOverloaded(bool* Result);
	void GetIsInStress(bool* Result);
	void GetIsExhaustion(bool* Result);
	void GetIsDehydration(bool* Result);
	void GetIsBleeding(bool* Result);
	void GetExpToLevel(float* Value);
	void GetCurrentExp(float* Value);
	void GetLevel(class USHPlayerStat_Level** Return);
	void GetArmor(float* Value, float* ArmorMod);
	void GetTemperature(float* Value);
	void GetStress(float* Value);
	void GetThirsty(float* Value);
	void GetHunger(float* Value);
	void GetHealth(float* Value);
};

}


