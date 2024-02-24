#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C8 - 0x2BA)
// BlueprintGeneratedClass _Passive_KillSkill_Parent._Passive_KillSkill_Parent_C
class U_Passive_KillSkill_Parent_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2DE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class U_Passive_KillSkill_Parent_C* GetDefaultObj();

	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void ExecuteUbergraph__Passive_KillSkill_Parent(int32 EntryPoint, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger);
};

}


